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
	wire [2:0] AWPROT;
	wire WVALID;
	wire [31:0] WDATA;
	wire [3:0] WSTRB;
	wire BREADY;
	wire ARVALID;
	wire [31:0] ARADDR;
	wire [2:0] ARPROT;
	wire RREADY;
	reg SPI_MISO;	

	// Outputs
	wire AWREADY;
	wire WREADY;
	wire BVALID;
	wire [1:0] BRESP;
	wire ARREADY;
	wire RVALID;
	wire [31:0] RDATA;
	wire [1:0] RRESP;
	wire SPI_MOSI;
	wire SPI_SCK;

	// Writer Inputs 
	reg [31:0] Write_to;
	reg [31:0] W_Data;
	reg [3:0] Strobe;
	reg [2:0] W_Prot;
	reg W_Start;
	wire Writer_Run;
	
	// Reader Inputs
	reg [31:0] Read_from;
	reg [31:0] R_Data;
	reg [2:0] R_Prot;
	reg R_Start;
	wire Reader_Run;	

	// Instantiate the Unit Under Test (UUT)
	AXI_SPI_top uut (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.AWVALID(AWVALID), 
		.AWREADY(AWREADY), 
		.AWADDR(AWADDR), 
		.AWPROT(AWPROT), 
		.WVALID(WVALID), 
		.WREADY(WREADY), 
		.WDATA(WDATA), 
		.WSTRB(WSTRB), 
		.BVALID(BVALID), 
		.BREADY(BREADY), 
		.BRESP(BRESP), 
		.ARVALID(ARVALID), 
		.ARREADY(ARREADY), 
		.ARADDR(ARADDR), 
		.ARPROT(ARPROT), 
		.RVALID(RVALID), 
		.RREADY(RREADY), 
		.RDATA(RDATA), 
		.RRESP(RRESP), 
		.SPI_MOSI(SPI_MOSI), 
		.SPI_MISO(SPI_MISO), 
		.SPI_SCK(SPI_SCK)
	);
	
	// Instantiate the AXI-Lite Reader 
	AXI_Lite_Reader Reader (
		.ACLK(ACLK), 
		.ARESETn(ARESETn), 
		.ARVALID(ARVALID), 
		.ARREADY(ARREADY), 
		.ARADDR(ARADDR), 
		.ARPROT(ARPROT), 
		.RDATA(RDATA), 
		.RVALID(RVALID), 
		.RREADY(RREADY), 
		.RRESP(RRESP), 
		.Read_from(Read_from),
		.R_Data(R_Data),
		.R_Prot(R_Prot),
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
		.AWPROT(AWPROT), 
		.WVALID(WVALID), 
		.WREADY(WREADY), 
		.WDATA(WDATA), 
		.WSTRB(WSTRB), 
		.BVALID(BVALID), 
		.BREADY(BREADY), 
		.BRESP(BRESP), 
		.Write_to(Write_to),
		.W_Data(W_Data),
		.Strobe(Strobe),
		.W_Prot(W_Prot),
		.W_Start(W_Start),
		.Writer_Run(Writer_Run)
	);	
	initial begin
		// Initialize Inputs
		ACLK = 0;
		ARESETn = 1;
		SPI_MISO = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
	initial	#17 ARESETn <= 0;
	always	#5 ACLK <= ~ACLK;
	
	/**************************** Simple write to module **********************************/
	/* Writes 'W_Data' to the address given in 'Write_to' as a Master on the AXI-Lite bus.*/
	/**************************************************************************************/
	initial begin
		#37	Write_to		<= 32'h00000000;	//32 bit Write Address
				W_Data		<= 32'h00000000;	//32 bit Data
				Strobe		<= 4'b1111;			//Valid Bytes in Data (e.g. 1111: the whole 32bits are valid, 0011: The last 2 Bytes (16 bits) are valid)
				W_Prot		<= 3'b000;			//Data[0]/Instr[1], Secure[0]/Non-Secure[1], Normal access[0]/Privileged[1]
				W_Start		<= 1;					//Send Data
	end
	always @(posedge ACLK) if(Writer_Run == 1) W_Start <= 0; 
	
	/**************************** Simple read from module ***********************************/
	/*          Reads 32 bits data (R_Data) from the address given in 'Read_from'           */
	/*								as a Master on the AXI-Lite bus.											 */
	/****************************************************************************************/
	initial begin
		#37	Read_from	<= 32'h00000000;	//32 bit Read Address
				R_Prot		<= 3'b000;			//Data[0]/Instr[1], Secure[0]/Non-Secure[1], Normal access[0]/Privileged[1]
				R_Start		<= 1;					//Send Data
	end
	always @(posedge ACLK) if(Reader_Run == 1) R_Start <= 0; 

	
	
endmodule

