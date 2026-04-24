module prim_diff_encode (
	clk_i,
	rst_ni,
	req_i,
	diff_po,
	diff_no
);
	input wire clk_i;
	input wire rst_ni;
	input wire req_i;
	output wire diff_po;
	output wire diff_no;
	wire req;
	prim_sec_anchor_buf #(.Width(1)) u_prim_buf_in_req(
		.in_i(req_i),
		.out_o(req)
	);
	wire diff_p;
	wire diff_n;
	assign diff_p = req;
	assign diff_n = ~req;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ack(
		.in_i({diff_n, diff_p}),
		.out_o({diff_n_buf, diff_p_buf})
	);
	wire diff_p_buf;
	prim_flop #(
		.Width(1),
		.ResetValue(1'b0)
	) u_diff_p(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(diff_p_buf),
		.q_o(diff_po)
	);
	wire diff_n_buf;
	prim_flop #(
		.Width(1),
		.ResetValue(1'b1)
	) u_diff_n(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(diff_n_buf),
		.q_o(diff_no)
	);
endmodule
