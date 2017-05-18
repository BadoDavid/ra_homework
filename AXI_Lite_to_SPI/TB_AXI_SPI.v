`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: BME MIT
// Engineer: Mate Fucsko
//
// Create Date:   10:00:31 03/13/2017
// Design Name:   AXI_SPI_top
// Module Name:   C:/Users/Mate/Documents/egyetem/rendszerarch/projektek/AXI_Lite_to_SPI/TB_AXI_SPI.v
// Project Name:  AXI_Lite_to_SPI
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: AXI_SPI_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TB_AXI_SPI;

	// Inputs
	reg ACLK;
	reg ARESETn;
	wire AWVALID;
	wire [31:0] AWADDR;
	wire WVALID;
	wire [31:0] WDATA;
	wire ARVALID;
	wire [31:0] ARADDR;
	wire RREADY;
	wire SPI_MISO;	

	// Outputs
	wire AWREADY;
	wire WREADY;
	wire ARREADY;
	wire RVALID;
	wire [31:0] RDATA;
	wire SPI_MOSI;
	wire SPI_SCK;

	// Writer Inputs 
	reg [31:0] Write_to;
	reg [31:0] W_Data;
	reg W_Start;
	wire Writer_Run;
	
	// Reader Inputs
	reg [31:0] Read_from;
	wire [31:0] R_Data;
	reg R_Start;
	wire Reader_Run;	
	
	//EEPROM Inputs
	wire CS_N;
	reg WP_N;
	reg HOLD_N;
	reg SPI_RESET;
	
	// Instantiate the Unit Under Test (UUT)
	AXI_SPI_top uut (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.AWVALID(AWVALID), 
		.AWREADY(AWREADY), 
		.AWADDR(AWADDR), 
		.WVALID(WVALID), 
		.WREADY(WREADY), 
		.WDATA(WDATA), 
		.ARVALID(ARVALID), 
		.ARREADY(ARREADY), 
		.ARADDR(ARADDR), 
		.RVALID(RVALID), 
		.RREADY(RREADY), 
		.RDATA(RDATA), 
		.SPI_MOSI(SPI_MOSI), 
		.SPI_MISO(SPI_MISO), 
		.SPI_SCK(SPI_SCK),
		.SPI_CSn(CS_N)
	);
	
	// Instantiate the AXI-Lite Reader 
	AXI_Lite_Reader Reader (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.ARVALID(ARVALID), 
		.ARREADY(ARREADY), 
		.ARADDR(ARADDR), 
		.RDATA(RDATA), 
		.RVALID(RVALID), 
		.RREADY(RREADY), 
		.Read_from(Read_from),
		.R_Data(R_Data),
		.R_Start(R_Start),
		.Reader_Run(Reader_Run)
	);

	// Instantiate the AXI-Lite Writer
	AXI_Lite_Writer Writer (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.AWVALID(AWVALID), 
		.AWREADY(AWREADY), 
		.AWADDR(AWADDR), 
		.WVALID(WVALID), 
		.WREADY(WREADY), 
		.WDATA(WDATA), 
		.Write_to(Write_to),
		.W_Data(W_Data),
		.W_Start(W_Start),
		.Writer_Run(Writer_Run)
	);	
	
	//	Instantiate the SPI EEPROM
	M25AA160C EEPROM (
		.SI(SPI_MOSI),		
		.SCK(SPI_SCK),		
		.SO(SPI_MISO),		
		.CS_N(CS_N),
		.WP_N(WP_N),
		.HOLD_N(HOLD_N),
		.RESET(SPI_RESET)
	);	
	
	/*************************** UUT Test *****************************************/
	/*			Configures the AXI-Lite - SPI Peripheral										*/
	/*			Writes a byte to the memory (Address=, Data=)								*/
	/*			Then reads it.																			*/
	/******************************************************************************/

	// Initialize ACKL and ARESETn	
	initial begin
		ACLK = 0;
		ARESETn = 1;
		#17 ARESETn <= 0;
		#30 ARESETn <= 1;
	end
	always	#5 ACLK <= ~ACLK;

	// Only start AXI Writer/Reader if they are not already running
	always @(posedge ACLK) if(Writer_Run == 1) W_Start <= 0; 
	always @(posedge ACLK) if(Reader_Run == 1) R_Start <= 0;
	
	//Initialize SPI
	initial begin 
			WP_N 					<= 0;
			HOLD_N				<= 0;
			SPI_RESET			<= 0;
		#17 
			SPI_RESET			<= 1;
		#100
			SPI_RESET			<= 0;		
			HOLD_N				<= 1;
			WP_N 					<= 1;			
	end
	
	localparam
		SPI_ADDRESS_LOW		= 8'b11110000,
		SPI_ADDRESS_HIGH		= 8'b00000000,
		BASE_ADDRESS  			= 32'hFFFF0000,
		OFFSET_COMMAND_REG	= 4'b1000,
		OFFSET_STATUS_REG		= 4'b0100,
		OFFSET_TX_FIFO 		= 4'b1100,
		OFFSET_RX_FIFO 		= 4'b0000,
		CMD_REG					= 32'b00010000000000000000000000000000; //CPOL=0 CPHA=0 DIV1_DIV2=01 -> SPI_SCK=ACLK/16

	//Configure the command register	
	initial begin
		#37	Write_to		<= BASE_ADDRESS+OFFSET_COMMAND_REG;	
				W_Data		<= CMD_REG;	
		#10	W_Start		<= 1;					//Send Data
	end// 135ns

	//Write to the eeprom
	initial begin
		#207	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+9'b100010011;	//write ctrl word: write 3 bytes
		#10	W_Start		<= 1;					
	end	
	initial begin
		#407	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+SPI_ADDRESS_HIGH;	//addr
		#10	W_Start		<= 1;					
	end	
	initial begin
		#607	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+SPI_ADDRESS_LOW;	//addr
		#10	W_Start		<= 1;					
	end	
	initial begin
		#807	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+8'b10101010;	//32 bit Data
		#10	W_Start		<= 1;					
	end	
	
	//Read status register
	initial begin
		#6000000
		#807	Read_from	<= BASE_ADDRESS+OFFSET_STATUS_REG;	
		#10	R_Start		<= 1;					
	end
	
	//Read instruction to eeprom
	initial begin
		#6000000
		#1007	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+9'b100000010;	//read instruction, followed by 2 byte address
		#10	W_Start		<= 1;					
	end	
	initial begin
		#6000000
		#1207	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+SPI_ADDRESS_HIGH;	//addr1
		#10	W_Start		<= 1;					
	end	
	initial begin
		#6000000
		#1407	Write_to		<= BASE_ADDRESS+OFFSET_TX_FIFO;	
				W_Data		<= 32'h00000000+SPI_ADDRESS_LOW;	//addr2
		#10	W_Start		<= 1;					
	end	
	//Read status register
	initial begin
		#6000000
		#10000	Read_from	<= BASE_ADDRESS+OFFSET_STATUS_REG;	
		#10		R_Start		<= 1;					
	end
	//Read from the rx fifo
	initial begin
		#6000000
		#10600	Read_from	<= BASE_ADDRESS+OFFSET_RX_FIFO;	
		#10		R_Start		<= 1;					
	end	

endmodule

