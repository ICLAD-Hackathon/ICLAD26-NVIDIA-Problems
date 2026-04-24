module prim_clock_gating_sync (
	clk_i,
	rst_ni,
	test_en_i,
	async_en_i,
	en_o,
	clk_o
);
	input clk_i;
	input rst_ni;
	input test_en_i;
	input async_en_i;
	output wire en_o;
	output wire clk_o;
	prim_flop_2sync #(.Width(1)) i_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(async_en_i),
		.q_o(en_o)
	);
	prim_clock_gating i_cg(
		.clk_i(clk_i),
		.en_i(en_o),
		.test_en_i(test_en_i),
		.clk_o(clk_o)
	);
endmodule
