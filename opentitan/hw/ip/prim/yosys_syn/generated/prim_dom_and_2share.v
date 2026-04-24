module prim_dom_and_2share (
	clk_i,
	rst_ni,
	a0_i,
	a1_i,
	b0_i,
	b1_i,
	z_valid_i,
	z_i,
	q0_o,
	q1_o,
	prd_o
);
	parameter signed [31:0] DW = 64;
	parameter [0:0] Pipeline = 1'b0;
	input clk_i;
	input rst_ni;
	input [DW - 1:0] a0_i;
	input [DW - 1:0] a1_i;
	input [DW - 1:0] b0_i;
	input [DW - 1:0] b1_i;
	input z_valid_i;
	input [DW - 1:0] z_i;
	output wire [DW - 1:0] q0_o;
	output wire [DW - 1:0] q1_o;
	output wire [DW - 1:0] prd_o;
	wire [DW - 1:0] t0_d;
	wire [DW - 1:0] t0_q;
	wire [DW - 1:0] t1_d;
	wire [DW - 1:0] t1_q;
	wire [DW - 1:0] t_a0b0;
	wire [DW - 1:0] t_a1b1;
	wire [DW - 1:0] t_a0b0_d;
	wire [DW - 1:0] t_a1b1_d;
	wire [DW - 1:0] t_a0b1;
	wire [DW - 1:0] t_a1b0;
	assign t_a0b0_d = a0_i & b0_i;
	assign t_a1b1_d = a1_i & b1_i;
	assign t_a0b1 = a0_i & b1_i;
	assign t_a1b0 = a1_i & b0_i;
	prim_xor2 #(.Width(DW * 2)) u_prim_xor_t01(
		.in0_i({t_a0b1, t_a1b0}),
		.in1_i({z_i, z_i}),
		.out_o({t0_d, t1_d})
	);
	prim_flop_en #(
		.Width(DW * 2),
		.ResetValue(1'sb0)
	) u_prim_flop_t01(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(z_valid_i),
		.d_i({t0_d, t1_d}),
		.q_o({t0_q, t1_q})
	);
	generate
		if (Pipeline == 1'b1) begin : gen_inner_domain_regs
			wire [DW - 1:0] t_a0b0_q;
			wire [DW - 1:0] t_a1b1_q;
			prim_flop_en #(
				.Width(DW * 2),
				.ResetValue(1'sb0)
			) u_prim_flop_tab01(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(z_valid_i),
				.d_i({t_a0b0_d, t_a1b1_d}),
				.q_o({t_a0b0_q, t_a1b1_q})
			);
			assign t_a0b0 = t_a0b0_q;
			assign t_a1b1 = t_a1b1_q;
		end
		else begin : gen_no_inner_domain_regs
			assign t_a0b0 = t_a0b0_d;
			assign t_a1b1 = t_a1b1_d;
		end
	endgenerate
	prim_xor2 #(.Width(DW * 2)) u_prim_xor_q01(
		.in0_i({t_a0b0, t_a1b1}),
		.in1_i({t0_q, t1_q}),
		.out_o({q0_o, q1_o})
	);
	assign prd_o = t1_q;
endmodule
