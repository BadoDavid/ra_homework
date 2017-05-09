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
	/*
		IMPORTANT REGARDING RD/WR ACK & RD/WR CE LINES
		They work as a synchronous handshake pair:
		Once CE is detected as HIGH (and machine is idle) the selected operation begins.
		By the time CE is given, incoming bus data MUST be valid.
		While operating, please DO NOT modify incoming bus data. It may cause unintended results.
		After completion the appropriate ACK will fire. Now the CE may be pulled back LOW, which
		triggers the ACK to become LOW again, thus signalling the machine is ready for reception again.
		New operation may be triggered via raising CE again.
		
		Incoming bus data may only change while CE is LOW !
		It is better not to try and give WR and RD CEs simultaneously.
	*/
	
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
		ready,
		readDataIsReady;
	wire [7:0] rxData;
	reg [7:0] txData;
	

M_SpiSender sender(
    .clk(bus2ip_clk),
	 .rst(rst),
    .start(start),
	 .continued(continued),
	 .clkDiv(DIV),
    .txData(txData),
    .rxData(rxData),
    .ready(ready),
	 .returnedValue(readDataIsReady),
    .SCK(SPI_SCK),
    .CE(SPI_CS),
    .MOSI(SPI_MOSI),
    .MISO(SPI_MISO),
	 .CPOL(CPOL),
    .CPHA(CPHA)
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
	wire CPOL, CPHA;
	wire [1:0] DIV;
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
		txFifo_wr = 0,
		txFifo_rd = 0;
	wire
		txFifo_empty,
		txFifo_full,
		txFifo_wrack,
		txFifo_valid;
	wire [8:0] txFifo_dout;
	reg [8:0] txFifo_din;
	wire [4:0] txFifo_dataCount;
	
axiToSpi_txFifo txFifo(
	.CLK(bus2ip_clk),
	.RST(rst),
	.DIN(txFifo_din), // 8:0
	.WR_EN(txFifo_wr),
	.FULL(txFifo_full),
	.WR_ACK(txFifo_wrack),
	.DOUT(txFifo_dout), // 8:0
	.RD_EN(txFifo_rd),
	.EMPTY(txFifo_empty),
	.VALID(txFifo_valid),
	.DATA_COUNT(txFifo_dataCount) // 4:0
);

//**************** RX_FIFO GEN CORE ****************

	reg
		rxFifo_wr = 0,
		rxFifo_rd = 0;
	wire
		rxFifo_empty,
		rxFifo_full,
		rxFifo_wrack,
		rxFifo_valid;
	wire [7:0] rxFifo_dout;
	reg [7:0] rxFifo_din;
	wire [4:0] rxFifo_dataCount;

axiToSpi_rxFifo rxFifo(
	.clk(bus2ip_clk),
	.rst(rst),
	.din(rxFifo_din), // 7:0
	.wr_en(rxFifo_wr),
	.full(rxFifo_full),
	.wr_ack(rxFifo_wrack),
	.dout(rxFifo_dout), // 7:0
	.rd_en(rxFifo_rd),
	.empty(rxFifo_empty),
	.valid(rxFifo_valid),
	.data_count(rxFifo_dataCount) // 4:0
);

//**************** BASIC REGISTERS CONT'D ****************

	always @(*)
	begin
		REG_STATUS = {~rxFifo_empty, txFifo_full, txFifo_dataCount};
	end
	
//**************** READ STATE MACHINE ****************
// gets data from rx fifo and puts it onto bus

	localparam
		sr_idle 			= 4'b0001,
		sr_beginRead	= 4'b0010,
		sr_waitValid	= 4'b0100,
		sr_signalDone	= 4'b1000;

	reg [3:0] rxFifoState  = sr_idle;
	
	always @(posedge bus2ip_clk)
	begin
      if (rst) begin
         rxFifoState <= sr_idle;
      end
      else begin
			case (rxFifoState)
            sr_idle : begin
					
            end
				sr_beginRead : begin
					rxFifo_rd <= 1;
					rxFifoState <= sr_waitValid;
            end
				sr_waitValid : begin
					if (rxFifo_valid == 1)
					begin
						rxFifo_rd <= 0;
						REG_RX <= {24'hFF_FF_FF, rxFifo_dout};
						rxFifoState <= sr_signalDone;
					end
				end
				sr_signalDone : begin
					ip2bus_rdack = 1;
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
			if (rxFifo_empty == 0)
				if (rxFifoState == sr_idle)
					rxFifoState  <= sr_beginRead;
	end
	
	always @(negedge 
		bus2ip_rdce[ce_cmd],
		bus2ip_rdce[ce_status],
		bus2ip_rdce[ce_tx],
		bus2ip_rdce[ce_rx]
		)
		ip2bus_rdack = 0;

//**************** RX FIFO POPULATOR ****************
// if read data is returned from the spi sender module, push it to rx fifo
	
	reg newRxFifoItem = 0;

	always @(posedge readDataIsReady)
	begin
		if (ready == 1) // should always be so when readDataIsReady, but who knows ¯\_(o_o)_/¯
			if (rxFifo_full == 0)
			begin
				rxFifo_din = rxData;
				newRxFifoItem = 1;
			end
	end
	
	always @(posedge bus2ip_clk)
	begin
		if (newRxFifoItem == 1)
		begin
			rxFifo_wr <= 1;
			newRxFifoItem <= 0;
		end
		else begin
			if (rxFifo_wrack == 1)
				rxFifo_wr <= 0;
		end
	end

//**************** WRITE STATE MACHINE ****************
//populates tx fifo with axi-incoming data

	localparam
		sw_idle 					= 4'b0001,
		sw_waitFifoWrite		= 4'b0010,
		sw_continueFilling	= 4'b0100,
		sw_endLongSeq			= 4'b1000;

	reg [3:0] wrFifoState  = sw_idle;
	reg direction = 0;
	localparam
		read = 0,
		write = 1;

	reg controlled = 0;
	reg [2:0] longSeqCount = 0;

	reg [7:0] DEBUG = 0;

   always @(posedge bus2ip_clk)
	begin
      if (rst) begin
         wrFifoState <= sw_idle;
      end
      else begin
			case (wrFifoState)
            sw_idle : begin
					if (bus2ip_wrce[ce_tx] == 1 && ip2bus_wrack == 0)
					begin
						if (bus2ip_data[8] == 1) // got a ctrl msg
						begin
							if (controlled == 0) // and not in an active long reception
							begin 
								if (	(bus2ip_data[4] == read) && // read means 2 more bytes will come + 2 needed for CMD and dummy write
										(txFifo_dataCount < 28)) // 27 means there are 4 free slots remaining
								begin
									controlled <= 1;
									txFifo_din <= {1, SPI_CMD_READ}; // schedule a read command and hold CE
									direction <= read;
									longSeqCount <= 3'b001; // total of 4 required (CMD_READ, addr, addr2, dummy write to perform read)
									txFifo_wr <= 1; // enable fifo writing
									wrFifoState <= sw_waitFifoWrite;
									DEBUG <= 1;
								end
								if (	(bus2ip_data[4] == write) && // write means 3 more bytes will come + 2 needed for CMD
										(txFifo_dataCount < 27)) //26 means there are 5 free slots remaining
								begin
									controlled <= 1;
									txFifo_din <= {0, SPI_CMD_WREN}; // schedule a write latch enable cmd and release CE afterwards
									direction <= write;
									longSeqCount <= 3'b001; // total of 5 required (CMD_WREN, CMD_WR, addr1, addr2, data)
									txFifo_wr <= 1; // enable fifo writing
									wrFifoState <= sw_waitFifoWrite;
									DEBUG <= 2;
								end
								// else tx fifo is too full to catch required data
							end
							// else do nothing, something is screwed
						end
						else begin // got a data msg
							if (controlled == 1) // and had a still open ctrl word previously
							begin
								if( (direction == read && longSeqCount < 3) || (direction == write && longSeqCount < 5) ) // NOTE longSeqCount <3 bc. 4th is dummy which does not come from the bus !!
								begin // data message is expected to be received
									longSeqCount = longSeqCount + 1;
									txFifo_wr <= 1; // enable fifo writing
									wrFifoState <= sw_waitFifoWrite;
									DEBUG <= 3;
									if (direction == write && longSeqCount == 4)
										txFifo_din <= {0, bus2ip_data[7:0]}; // schedule data write and end CE
									else
										txFifo_din <= {1, bus2ip_data[7:0]}; // schedule data write and hold CE
								end
								// else do nothing, unexpectedly long data or maybe lost or forgotten ctrl msg ?
							end
							// else do nothing, screwed
						end

					end
            end
				sw_waitFifoWrite : begin
					if (txFifo_wrack == 1)
					begin
						txFifo_wr <= 0;
						DEBUG <= 4;
						if ( !((direction == write && longSeqCount == 1) || (direction == read && longSeqCount == 3)) ) ip2bus_wrack <= 1; //Edited by M
						if ( (direction == read && longSeqCount == 4) || (direction == write && longSeqCount == 5) )
							wrFifoState <= sw_endLongSeq;
						else
							wrFifoState <= sw_continueFilling;
					end
            end
				sw_continueFilling : begin
					if (direction == write && longSeqCount == 1) // means only a CMD_WREN was given, now give CMD_WR
					begin
						wrFifoState <= sw_waitFifoWrite;
						txFifo_wr <= 1; // enable fifo writing
						longSeqCount = longSeqCount + 1;
						txFifo_din <= {1, SPI_CMD_WRITE}; // schedule a write cmd and hold CE afterwards
						DEBUG <= 5;
					end
					else if (direction == read && longSeqCount == 3) // means only a dummy write is missing
					begin
						wrFifoState <= sw_waitFifoWrite;
						txFifo_wr <= 1; // enable fifo writing
						longSeqCount = longSeqCount + 1;
						txFifo_din <= {0, 8'hFF_FF_FF_FF}; // schedule dummy write cmd and release CE afterwards
						DEBUG <= 6;
					end
					else begin
						wrFifoState <= sw_idle; //Edited by M
						DEBUG <= 7;
					end
            end
				sw_endLongSeq : begin
					controlled <= 0;
					longSeqCount <= 3'b000;
					txFifo_wr <= 0; // just for safety ... ¯\_(o_-)_/¯
					ip2bus_wrack <= 1;
					wrFifoState <= sw_idle;
					DEBUG <= 8;
            end
            default : begin  // Fault Recovery
               wrFifoState <= sw_idle;
				end
			endcase
		end
	end

/*
32 31 24 23 16 15 8 7 0
INCOMING BUS DATA FORMAT (bus2ip_data)
	31			 0
is it a ctrl msg?
	--_--_-c_dn
		c  control word (1: yes, 0: not)
ctrl:
	--_--_-1_dn
		d	direction (0: read, 1: write)
		n 	bytes following this word if ctrl
normal:	
	--_--_-0_dd
		dd	data
	...
*/
	
//**************** TX FIFO DEPOPULATOR ****************
// if any data is found in tx fifo and spi module idle, begin transmission

	localparam
		sdd_idle 					= 4'b0001,
		sdd_waitForTxFifo			= 4'b0010,
		sdd_activateSpiSender	= 4'b0100,
		sdd_wait						= 4'b1000;

	reg [3:0] txFifoDepopulatorState  = sdd_idle;
	
	always @(posedge bus2ip_clk)
	begin
      if (rst) begin
         rxFifoState <= sr_idle;
      end
      else begin
			case (txFifoDepopulatorState)
            sdd_idle : begin
					if (txFifo_empty == 0 && ready == 1)
					begin
						txFifo_rd <= 1;
						txFifoDepopulatorState <= sdd_waitForTxFifo;
					end
            end
				sdd_waitForTxFifo : begin
					if (txFifo_valid)
					begin
						txFifo_rd <= 0;
						txData <= txFifo_dout[7:0];
						continued <= txFifo_dout[8];
						txFifoDepopulatorState <= sdd_activateSpiSender;
					end
            end
				sdd_activateSpiSender : begin
					start <= 1;
					txFifoDepopulatorState <= sdd_idle;
				end
            default: begin  // Fault Recovery
               txFifoDepopulatorState <= sdd_wait;
				end
				sdd_wait : begin
					txFifoDepopulatorState <= sdd_idle;
				end
			endcase
		end
	end
		
//**************** WRITE CHIP ENABLES ****************
	
	always @(posedge bus2ip_clk)
	begin
		if (bus2ip_wrce[ce_cmd])
		begin
			REG_CMD = bus2ip_data;
			ip2bus_wrack <= 1;
		end
		if (bus2ip_wrce[ce_status])
		begin
			REG_STATUS = bus2ip_data;
			ip2bus_wrack <= 1;
		end
		if (bus2ip_wrce[ce_rx])
		begin
			ip2bus_wrack <= 1; // this should really never happen tho (!)
		end
/*		if (bus2ip_wrce[ce_tx])
		begin
			if (
				txFifo_full == 0 &&
				wrFifoState == sw_idle
				)
				wrFifoState <= sw_feedTxFifo;
		end*/
	end

	always @(posedge bus2ip_clk )
		if(bus2ip_wrce==0) ip2bus_wrack <= 0;

endmodule