module prim_sync_slow_fast (
	clk_slow_i,
	clk_fast_i,
	rst_fast_ni,
	wdata_i,
	rdata_o
);
	parameter [31:0] Width = 32;
	input wire clk_slow_i;
	input wire clk_fast_i;
	input wire rst_fast_ni;
	input wire [Width - 1:0] wdata_i;
	output wire [Width - 1:0] rdata_o;
	wire sync_clk_slow;
	reg sync_clk_slow_q;
	wire wdata_en;
	reg [Width - 1:0] wdata_q;
	prim_flop_2sync #(.Width(1)) sync_slow_clk(
		.clk_i(clk_fast_i),
		.rst_ni(rst_fast_ni),
		.d_i(clk_slow_i),
		.q_o(sync_clk_slow)
	);
	always @(posedge clk_fast_i or negedge rst_fast_ni)
		if (!rst_fast_ni)
			sync_clk_slow_q <= 1'b0;
		else
			sync_clk_slow_q <= sync_clk_slow;
	assign wdata_en = sync_clk_slow_q & !sync_clk_slow;
	always @(posedge clk_fast_i or negedge rst_fast_ni)
		if (!rst_fast_ni)
			wdata_q <= 1'sb0;
		else if (wdata_en)
			wdata_q <= wdata_i;
	assign rdata_o = wdata_q;
endmodule
