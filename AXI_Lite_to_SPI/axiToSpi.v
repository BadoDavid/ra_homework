`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: nagy.marton.donat
// 
// Create Date:    00:06:36 05/02/2017 
// Design Name: 
// Module Name:    axiToSpi 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module axiToSpi(
	input [31:0] bus2ip_data,
	input [3:0] bus2ip_wrce,
	input [3:0] bus2ip_rdce,
			/*
			LAYOUT OF ce SIGNALS ARE AS FOLLOWS:
				3	TX_FIFO
				2	REG_CMD
				1	REG_STATUS
				0	RX_FIFO
		*/
	input bus2ip_clk, // 16MHz
	output reg [127:0] ip2bus_data, // in 32 bit parts, from 0 to up respectively:
		/*
			LAYOUT IS AS FOLLOWS:
				127..96	TX_FIFO
				95..64	REG_CMD
				63..32	REG_STATUS
				31..0		RX_FIFO
		*/
	output reg ip2bus_rdack,
	output reg ip2bus_wrack,
	
	output reg SPI_MOSI,
	input SPI_MISO,
	output SPI_SCK, // must no exceed 10MHz
	output reg SPI_CS
    );

	localparam
		ce_tx = 3,
		ce_cmd = 2,
		ce_status = 1,
		ce_rx = 0;

//**************** SPI SENDER INSTANCE ****************

	reg
		rst,
		start,
		continued;
	wire
		ready;
	wire [7:0] rxData;
	reg [7:0] txData;

M_SpiSender sender(
    clk(bus2ip_clk),
	 rst(rst),
    start(start),
	 continued(continued),
	 clkDiv(DIV),
    txData(txData),
    rxData(rxData),
    ready(ready),
    SCK(SPI_SCK),
    CE(SPI_CS),
    MOSI(SPI_MOSI),
    MISO(SPI_MISO),
	 CPOL(CPOL),
    CPHA(CPHA)
);

//**************** CONTROL WORD DEFINITIONS ****************

	localparam
		SPI_CMD_READ  = 8'b0000_0011, // Read data from memory array beginning at selected address
		SPI_CMD_WRITE = 8'b0000_0010, // Write data to memory array beginning at selected address
		SPI_CMD_WRDI  = 8'b0000_0100, // Reset the write enable latch (disable write operations)
		SPI_CMD_WREN  = 8'b0000_0110, // Set the write enable latch (enable write operations)
		SPI_CMD_RDSR  = 8'b0000_0101, // Read STATUS register
		SPI_CMD_WRSR  = 8'b0000_0001; // Write STATUS register
	
//**************** plain registers ****************
	reg [31:0] REG_CMD = 32'b0;
		/*
			LAYOUT IS AS FOLLOWS:
				31			CPOL
				30			CPHA
				29..28	DIV, value-divider pairings: 00-2 | 01-4 | 10-8 | 11-16
				27..0		-
		*/
	assign CPOL = REG_CMD[31];
	assign CPHA = REG_CMD[30];
	assign DIV = REG_CMD[29:28];
		
	reg [31:0] REG_STATUS;
		/*
			LAYOUT IS AS FOLLOWS:
				31			1: there is data to be read in the RX_FIFO, 0: no new data
				30			1: TX_FIFO full, 0: there are free byte slots in TX_FIFO
				29..25	number of free byte slots in TX_FIFO
				24..0		-
		*/
	
	reg [31:0]
		REG_TX = 32'hFF_FF_FF_FF,
		REG_RX = 32'hFF_FF_FF_FF;
	always @(*)
		ip2bus_data = {REG_TX, REG_CMD, REG_STATUS, REG_RX};
		
//**************** TX_FIFO GEN CORE ****************
	
	reg
		txFifo_wr,
		txFifo_rd;
	wire
		txFifo_empty,
		txFifo_full,
		txFifo_wrack,
		txFifo_valid;
	wire [7:0] txFifo_dout;
	reg [7:0] txFifo_din;
	wire [4:0] txFifo_dataCount;
	
axiToSpi_fifo txFifo(
	CLK(bus2ip_clk),
	RST(rst),
	DIN(txFifo_din), // 7:0
	WR_EN(txFifo_wr),
	FULL(txFifo_full),
	WR_ACK(txFifo_wrack),
	DOUT(txFifo_dout), // 7:0
	RD_EN(txFifo_rd),
	EMPTY(txFifo_empty),
	VALID(txFifo_valid),
	DATA_COUNT(txFifo_dataCount) // 4:0
);

//**************** RX_FIFO GEN CORE ****************

	reg
		rxFifo_wr,
		rxFifo_rd;
	wire
		rxFifo_empty,
		rxFifo_full,
		rxFifo_wrack,
		rxFifo_valid;
	wire [7:0] rxFifo_dout;
	reg [7:0] rxFifo_din;
	wire [4:0] rxFifo_dataCount;

axiToSpi_fifo rxFifo(
	CLK(bus2ip_clk),
	RST(rst),
	DIN(rxFifo_din), // 7:0
	WR_EN(rxFifo_wr),
	FULL(rxFifo_full),
	WR_ACK(rxFifo_wrack),
	DOUT(rxFifo_dout), // 7:0
	RD_EN(rxFifo_rd),
	EMPTY(rxFifo_empty),
	VALID(rxFifo_valid),
	DATA_COUNT(rxFifo_dataCount) // 4:0
);

//**************** BASIC REGISTERS CONT'D ****************

	always @(*)
	begin
		REG_STATUS = {~rxFifo_empty, txFifo_full, txFifo_dataCount};
	end
	
//**************** READ STATE MACHINE ****************
	
	localparam
		sr_idle 		= 4'b0001,
		sr_reading	= 4'b0010,
		sr_wait	 	= 4'b0100,
		sr_done		= 4'b1000,
		sr_finished	= 4'b1111;

	reg [3:0] rxFifoState  = sr_idle;
	reg [2:0] readCount = 0;

   always @(posedge bus2ip_clk)
	begin
      if (rst) begin
         rxFifoState <= sr_idle;
      end
      else begin
			case (rxFifoState)
            sr_idle : begin
					//REG_RX <= 32'hFF_FF_FF_FF;
					readCount <= 3'b0;
            end
				sr_reading : begin
					if (~rxFifo_empty == 1)
					begin
						rxFifo_rd <= 1;
						readCount <= readCount + 1;
						rxFifoState <= sr_wait;
					end
					else
						rxFifoState <= sr_finished;
            end
				sr_wait : begin
					rxFifoState <= sr_done;
            end
				sr_done : begin
					REG_RX <= {REG_RX[23:0], rxFifo_dout};
					if (readCount == 3'b100)
						rxFifoState <= sr_finished;
					else
						rxFifoState <= sr_reading;
            end
				sr_finished : begin
					ip2bus_rdack <= 1;
					rxFifoState <= sr_idle;
				end
            default: begin  // Fault Recovery
               rxFifoState <= sr_idle;
				end
			endcase
		end
	end
	
//**************** READ CHIP ENABLES ****************
	
	always @(posedge bus2ip_clk)
	begin
		if (bus2ip_rdce[ce_cmd] || bus2ip_rdce[ce_status])
			ip2bus_rdack = 1;
		else if (bus2ip_rdce[ce_tx])
			ip2bus_rdack = 1; // this should really never happen tho (!)
		else if (bus2ip_rdce[ce_rx])
		begin 
			if (rxFifoState == sr_idle)
				rxFifoState  <= sr_reading;
		end
	end
	
	always @(negedge 
		bus2ip_rdce[ce_cmd],
		bus2ip_rdce[ce_status],
		bus2ip_rdce[ce_tx],
		bus2ip_rdce[ce_rx]
		)
		ip2bus_rdack = 0;

//**************** WRITE STATE MACHINE ****************
	
	localparam
		sw_idle 			= 4'b0000_0001,
		sw_feedTxFifo	= 4'b0000_0010,
		sw_wait	 		= 4'b0000_0100,
		sw_done			= 4'b0000_1000,
		sw_inished		= 4'b0001_0000,
		sw_fnished		= 4'b0010_0000,
		sw_fiished		= 4'b0100_0000,
		sw_finshed		= 4'b1000_0000;

	reg [3:0] wrFifoState  = sw_idle;
	reg [3:0] expectedBytes = 0;
	reg direction = 0;
	localparam
		read = 0,
		write = 1;
	reg [15:0] address = 0;
	reg controlled = 0;

   always @(posedge bus2ip_clk)
	begin
      if (rst) begin
         wrFifoState <= sw_idle;
      end
      else begin
			case (wrFifoState)
            sw_idle : begin
					
            end
				sw_feedTxFifo : begin
					if (controlled == 0)
					begin
						expectedBytes <= bus2ip_data[3:0];
						direction <= bus2ip_data[8];
						address <= bus2ip_data[31:16];
						controlled <= 1;
					end
					else begin
						if (direction == read)
						begin
						// WTF TODO
						end
						else begin// write
						
						end
					end
            end
				sw_idle : begin
					
            end
				sw_idle : begin
					
            end

            default: begin  // Fault Recovery
               wrFifoState <= sw_idle;
				end
			endcase
		end
	end

/*
32 31 24 23 16 15 8 7 0
INCOMING BUS DATA FORMAT (bus2ip_data)
	31			 0
	aa_aa_-i_-n
		aa address (14 bit)
		i	direction (0: read, 1: write)
		n 	bytes to be written (max 15 or F)
	dd_dd_dd_dd
		dd	data
	...
*/
/* for reference:
	
	SPI_CMD_READ  = 8'b0000_0011, // Read data from memory array beginning at selected address
	SPI_CMD_WRITE = 8'b0000_0010, // Write data to memory array beginning at selected address
	SPI_CMD_WRDI  = 8'b0000_0100, // Reset the write enable latch (disable write operations)
	SPI_CMD_WREN  = 8'b0000_0110, // Set the write enable latch (enable write operations)
	SPI_CMD_RDSR  = 8'b0000_0101, // Read STATUS register
	SPI_CMD_WRSR  = 8'b0000_0001; // Write STATUS register
*/
	
	
//**************** WRITE CHIP ENABLES ****************
	
	always @(posedge bus2ip_clk)
	begin
		if (bus2ip_wrce[ce_cmd])
		begin
			REG_CMD = bus2ip_data;
			ip2bus_wrack = 1;
		end
		if (bus2ip_wrce[ce_status])
		begin
			REG_STATUS = bus2ip_data;
			ip2bus_wrack = 1;
		end
		if (bus2ip_wrce[ce_rx])
		begin
			ip2bus_wrack = 1; // this should really never happen tho (!)
		end
		if (bus2ip_wrce[ce_tx])
		begin
			if (
				txFifo_dataCount >= 5'h4 &&
				wrFifoState == sw_idle
				)
				wrFifoState <= sw_feedTxFifo;
		end
	end

	always @(negedge 
		bus2ip_wrce[ce_cmd],
		bus2ip_wrce[ce_status],
		bus2ip_wrce[ce_tx],
		bus2ip_wrce[ce_rx]
		)
		ip2bus_wrack = 0;

endmodule

/*
 ______   _______  _______  _______  _______  _______  _______ _________ _______  ______  
(  __  \ (  ____ \(  ____ )(  ____ )(  ____ \(  ____ \(  ___  )\__   __/(  ____ \(  __  \ 
| (  \  )| (    \/| (    )|| (    )|| (    \/| (    \/| (   ) |   ) (   | (    \/| (  \  )
| |   ) || (__    | (____)|| (____)|| (__    | |      | (___) |   | |   | (__    | |   ) |
| |   | ||  __)   |  _____)|     __)|  __)   | |      |  ___  |   | |   |  __)   | |   | |
| |   ) || (      | (      | (\ (   | (      | |      | (   ) |   | |   | (      | |   ) |
| (__/  )| (____/\| )      | ) \ \__| (____/\| (____/\| )   ( |   | |   | (____/\| (__/  )
(______/ (_______/|/       |/   \__/(_______/(_______/|/     \|   )_(   (_______/(______/ 
                                                                                          
 _______  _______  ______   _______                                                       
(  ____ \(  ___  )(  __  \ (  ____ \                                                      
| (    \/| (   ) || (  \  )| (    \/ _                                                    
| |      | |   | || |   ) || (__    (_)                                                   
| |      | |   | || |   | ||  __)                                                         
| |      | |   | || |   ) || (       _                                                    
| (____/\| (___) || (__/  )| (____/\(_)                                                   
(_______/(_______)(______/ (_______/                                                      
                                                                                          
*/

//**************** RX_FIFO register - static shift register ****************
	//TODO SPI_SCK posedge!? this is just some wire to silence warnings
/*
   reg [31:0] RX_FIFO;

   always @(posedge SPI_SCK)
      if (RX_FIFO_EN)
         RX_FIFO <= {RX_FIFO[30:0], SPI_MISO};

   genvar i;
   generate
      for (i=0; i < 32; i=i+1) 
         assign ip2bus_data[i] = RX_FIFO[i]; // map RX_FIFO[31..0] to ip2bus_data[31..0]
   endgenerate
*/