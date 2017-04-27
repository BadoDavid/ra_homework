`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Badó Dávid
// 
// Create Date:    23:40:41 04/26/2017 
// Design Name: 
// Module Name:    addr_management 
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
module addr_management(
   input ACLK,
   input ARESETn,
   input AWVALID,
   output AWREADY,
   input [31:0] AWADDR,
   input WVALID,
   output WREADY,
   input [31:0] WDATA,
   output BVALID,
   input BREADY,
   input ARVALID,
   output ARREADY,
   input [31:0] ARADDR,
   output RVALID,
   input RREADY,
   output [31:0] RDATA,
	 
	output bus2ip_clk,
	output [31:0] bus2ip_addr, 
	output reg [31:0] bus2ip_data,
	output reg [3:0] bus2ip_wrce,
	output reg [3:0] bus2ip_rdce,
	input [127:0] ip2bus_data,
	input ip2bus_rdack,
	input ip2bus_wrack
   );
	
	reg aw_ready;
	reg ar_ready;
	reg w_ready;
	reg r_valid;
	
	assign bus2ip_clk = ACLK;
		
	assign AWREADY = aw_ready;
	assign ARREADY = ar_ready;
	assign WREADY = w_ready;
	assign RVALID = r_valid;
	
	// Write address
	always @ (posedge ACLK)
		if (AWVALID == 1) 
			begin
				case (AWADDR[3:2])
					2'b00 : bus2ip_wrce = 4'b0001;
					2'b01 : bus2ip_wrce = 4'b0010;
					2'b10 : bus2ip_wrce = 4'b0100;
					2'b11 : bus2ip_wrce = 4'b1000;
				endcase
				aw_ready <= 1;
			end
	
	// Read address
	always @ (posedge ACLK)
		if (ARVALID == 1) 
			begin
				case (ARADDR[3:2])
					2'b00 : bus2ip_rdce = 4'b0001;
					2'b01 : bus2ip_rdce = 4'b0010;
					2'b10 : bus2ip_rdce = 4'b0100;
					2'b11 : bus2ip_rdce = 4'b1000;
				endcase
				ar_ready <= 1;
			end		
			
	// Write data
	always @ (posedge ACLK)
		if (WVALID == 1) 
			begin
				bus2ip_data = WDATA;
				if(ip2bus_wrack == 1)
					w_ready <= 1;
			end
			
	// Read data
	always @ (posedge ACLK)
		if (ip2bus_rdack == 1) 
			begin
				bus2ip_data = RDATA;
				r_valid <= 1;
			end
			
endmodule
