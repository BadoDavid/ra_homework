`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Mate Fucsko
// 
// Create Date:    09:58:27 03/13/2017 
// Design Name: 
// Module Name:    AXI_SPI_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Ebben a modulban van osszerakva az SPI periferia az AXI illesztovel
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module AXI_SPI_top(
    input ACLK,
    input ARESETn,
    input AWVALID,
    output AWREADY,
    input [31:0] AWADDR,
    input WVALID,
    output WREADY,
    input [31:0] WDATA,
    input ARVALID,
    output ARREADY,
    input [31:0] ARADDR,
    output RVALID,
    input RREADY,
    output [31:0] RDATA,
    output SPI_MOSI,
    input SPI_MISO,
    output SPI_SCK,
	 output SPI_CSn
    );
	wire rst; 
	wire bus2ip_clk;
	//wire [31:0] bus2ip_addr; 
	wire [31:0] bus2ip_data;
	wire [3:0] bus2ip_wrce;
	wire [3:0] bus2ip_rdce;
	wire [127:0] ip2bus_data;
	wire ip2bus_rdack;
	wire ip2bus_wrack;
	assign rst = ~ARESETn;
	
	addr_management Addr_Manage(
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
	 
	.bus2ip_clk(bus2ip_clk),
	.bus2ip_data(bus2ip_data),
	.bus2ip_wrce(bus2ip_wrce),
	.bus2ip_rdce(bus2ip_rdce),
	.ip2bus_data(ip2bus_data),
	.ip2bus_rdack(ip2bus_rdack),
	.ip2bus_wrack(ip2bus_wrack)
   );
	
	axiToSpi SPI_IP(
	.rst(rst),
	.bus2ip_clk(bus2ip_clk),		
	.bus2ip_data(bus2ip_data),
	.bus2ip_wrce(bus2ip_wrce),
	.bus2ip_rdce(bus2ip_rdce),
	.ip2bus_data(ip2bus_data),
	.ip2bus_rdack(ip2bus_rdack),
	.ip2bus_wrack(ip2bus_wrack),
	
	.SPI_MOSI(SPI_MOSI),
	.SPI_MISO(SPI_MISO),
	.SPI_SCK(SPI_SCK), 
	.SPI_CSn(SPI_CSn)
	);
endmodule
