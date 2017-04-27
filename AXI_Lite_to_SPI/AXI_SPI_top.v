`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:58:27 03/13/2017 
// Design Name: 
// Module Name:    AXI_SPI_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: Ebben a modulban kellene osszekotni az SPI periferiat az AXI illesztovel
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
    input [2:0] AWPROT,
    input WVALID,
    output WREADY,
    input [31:0] WDATA,
    input [3:0] WSTRB,
    output BVALID,
    input BREADY,
    output [1:0] BRESP,
    input ARVALID,
    output ARREADY,
    input [31:0] ARADDR,
    input [2:0] ARPROT,
    output RVALID,
    input RREADY,
    output [31:0] RDATA,
    output [1:0] RRESP,
    output SPI_MOSI,
    input SPI_MISO,
    output SPI_SCK
    );


endmodule
