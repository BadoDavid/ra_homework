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
	
	//EEPROM Inputs
	wire CS_N;
	reg WP_N;
	reg HOLD_N;
	reg SPI_RESET;
	reg SCK_Test;			// These 3 signals are for testing the EEPROM without using the AXI-SPI peripheral
	wire MOSI_Test;
	wire MISO_Test;
	
	//SPI_Writer Inputs
	reg [7:0] Data;
	reg SPI_Writer_Start;
	reg SPI_Writer_RST;
	wire SPI_Writer_Running;
	reg After_W_CSN;
	

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
		.SPI_SCK(SPI_SCK),
		.SPI_CS(CS_N)
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
	
	//	Instantiate the SPI EEPROM
	M25AA160C EEPROM (
		.SI(SPI_MOSI),		// Change MOSI_Test to SPI_MOSI to run test on UUT
		.SCK(SPI_SCK),		// Change SCK_Test to SPI_SCK to run test on UUT
		.SO(SPI_MISO),		// Change MISO_Test to SPI_MISO to run test on UUT
		.CS_N(CS_N),
		.WP_N(WP_N),
		.HOLD_N(HOLD_N),
		.RESET(SPI_RESET)
	);
	
	// Instantiate the SPI Writer
	SPI_Writer SPI_W (
		.SCK(SCK_Test),
		.RST(SPI_Writer_RST),
		.MOSI(MOSI_Test),
		.CS_N(CS_N),
		.DATA(Data),
		.Start(SPI_Writer_Start),
		.Running(SPI_Writer_Running),
		.After_W_CSN(After_W_CSN)
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
	/* Remove this line to run the write example
	
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
	/* Remove this line to run the read example
	initial begin
		#37	Read_from	<= 32'h00000000;	//32 bit Read Address
				R_Prot		<= 3'b000;			//Data[0]/Instr[1], Secure[0]/Non-Secure[1], Normal access[0]/Privileged[1]
				R_Start		<= 1;					//Send Data
	end
	always @(posedge ACLK) if(Reader_Run == 1) R_Start <= 0; 

	
	/*************************** EEPROM Test ************************************************/
	/*			Writes a single data to the memory and then reads it.									 */
	/****************************************************************************************/
	/* Remove this line to test the EEPROM without the AXI-SPI IP
	initial begin 
			WP_N 					<= 0;
			HOLD_N				<= 0;
			SPI_RESET			<= 0;
			SCK_Test				<= 0;
			SPI_Writer_RST 	<= 0;
		#170 
			SPI_RESET			<= 1;
			SPI_Writer_RST 	<= 1;			
		#400
			SPI_RESET			<= 0;			
			SPI_Writer_RST 	<= 0;			
	end
	
	always #100 SCK_Test <= ~SCK_Test; //5 MHz SPI Clock

	initial begin
		#650
			Data					<= 8'b00000110; //WREN
			SPI_Writer_Start	<= 1;
			After_W_CSN			<= 1;
			HOLD_N				<= 1;
			WP_N 					<= 1;
	end
	
	always @ (negedge SCK_Test) begin
		if(SPI_Writer_Running) SPI_Writer_Start<=0;
	end
	
	initial begin
		#3050
			Data					<= 8'b00000010; //WRITE
			SPI_Writer_Start	<= 1;
			After_W_CSN			<= 0;
	end
	//5000ns-nél adta le a write utasítás utolsó bitjét
	initial begin
		#4350
			Data					<= 8'b00000000; //ADDRESS 1. byte
			After_W_CSN			<= 0;
	end
	//6600-nál fejezi be
	initial begin
		#6350
			After_W_CSN			<= 0;
			Data					<= 8'b11110000; //ADDRESS 2. byte
		#300
			After_W_CSN			<= 0;
	end	
	//8200-ig tart a címek beírása
	//2 byte-ot írunk: 10101010 és 11110000 lesznek
	initial begin
		#8150
			Data					<=8'b10101010;
		#1500
			Data					<=8'b11110000;
		#300
			After_W_CSN			<= 1;
	end
	//12000ns-re bõven végez az írással
	
	//Kiolvasás
	initial begin
		#5000000 //Beírási idõ
		#60000
			Data					<= 8'b00000011;//READ instruction
			SPI_Writer_Start	<= 1;
			After_W_CSN			<= 0;
			WP_N					<= 0;
		#1500
			Data					<= 8'b00000000;//1. address byte
		#1600
			Data					<= 8'b11110000; //ADDRESS 2. byte
		#1600
			Data					<= 8'b00000000;
		#3000	
			After_W_CSN			<= 1;
	end
	/**/
endmodule

