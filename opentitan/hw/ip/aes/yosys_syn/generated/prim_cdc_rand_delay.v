module prim_cdc_rand_delay (
	clk_i,
	rst_ni,
	prev_data_i,
	src_data_i,
	dst_data_o
);
	parameter signed [31:0] DataWidth = 1;
	parameter [0:0] Enable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire [DataWidth - 1:0] prev_data_i;
	input wire [DataWidth - 1:0] src_data_i;
	output wire [DataWidth - 1:0] dst_data_o;
	assign dst_data_o = src_data_i;
endmodule
