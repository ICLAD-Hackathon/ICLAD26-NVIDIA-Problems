module prim_arbiter_tree_dup (
	clk_i,
	rst_ni,
	req_chk_i,
	req_i,
	data_i,
	gnt_o,
	idx_o,
	valid_o,
	data_o,
	ready_i,
	err_o
);
	parameter signed [31:0] N = 8;
	parameter signed [31:0] DW = 32;
	parameter [0:0] EnDataPort = 1;
	parameter [0:0] FixedArb = 0;
	localparam signed [31:0] IdxW = $clog2(N);
	input clk_i;
	input rst_ni;
	input req_chk_i;
	input [N - 1:0] req_i;
	input [(N * DW) - 1:0] data_i;
	output wire [N - 1:0] gnt_o;
	output wire [IdxW - 1:0] idx_o;
	output wire valid_o;
	output wire [DW - 1:0] data_o;
	input ready_i;
	output wire err_o;
	localparam signed [31:0] ArbInstances = 2;
	wire [(ArbInstances * (((1 + N) + IdxW) + DW)) - 1:0] arb_output_buf;
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < ArbInstances; _gv_i_1 = _gv_i_1 + 1) begin : gen_input_bufs
			localparam i = _gv_i_1;
			wire [N - 1:0] req_buf;
			prim_buf #(.Width(N)) u_req_buf(
				.in_i(req_i),
				.out_o(req_buf)
			);
			wire [(N * DW) - 1:0] data_buf;
			genvar _gv_j_1;
			for (_gv_j_1 = 0; _gv_j_1 < N; _gv_j_1 = _gv_j_1 + 1) begin : gen_data_bufs
				localparam j = _gv_j_1;
				prim_buf #(.Width(DW)) u_dat_buf(
					.in_i(data_i[((N - 1) - j) * DW+:DW]),
					.out_o(data_buf[((N - 1) - j) * DW+:DW])
				);
			end
			if (FixedArb) begin : gen_fixed_arbiter
				prim_arbiter_fixed #(
					.N(N),
					.DW(DW),
					.EnDataPort(EnDataPort)
				) u_arb(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.req_i(req_buf),
					.data_i(data_buf),
					.gnt_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (N + (IdxW + (DW - 1)))-:((N + (IdxW + (DW - 1))) >= (IdxW + (DW + 0)) ? ((N + (IdxW + (DW - 1))) - (IdxW + (DW + 0))) + 1 : ((IdxW + (DW + 0)) - (N + (IdxW + (DW - 1)))) + 1)]),
					.idx_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (IdxW + (DW - 1))-:((IdxW + (DW - 1)) >= (DW + 0) ? ((IdxW + (DW - 1)) - (DW + 0)) + 1 : ((DW + 0) - (IdxW + (DW - 1))) + 1)]),
					.valid_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (1 + (N + (IdxW + (DW - 1))))]),
					.data_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (DW - 1)-:DW]),
					.ready_i(ready_i)
				);
				wire unused_req_chk;
				assign unused_req_chk = req_chk_i;
			end
			else begin : gen_rr_arbiter
				prim_arbiter_tree #(
					.N(N),
					.DW(DW),
					.EnDataPort(EnDataPort)
				) u_arb(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.req_chk_i(req_chk_i),
					.req_i(req_buf),
					.data_i(data_buf),
					.gnt_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (N + (IdxW + (DW - 1)))-:((N + (IdxW + (DW - 1))) >= (IdxW + (DW + 0)) ? ((N + (IdxW + (DW - 1))) - (IdxW + (DW + 0))) + 1 : ((IdxW + (DW + 0)) - (N + (IdxW + (DW - 1)))) + 1)]),
					.idx_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (IdxW + (DW - 1))-:((IdxW + (DW - 1)) >= (DW + 0) ? ((IdxW + (DW - 1)) - (DW + 0)) + 1 : ((DW + 0) - (IdxW + (DW - 1))) + 1)]),
					.valid_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (1 + (N + (IdxW + (DW - 1))))]),
					.data_o(arb_output_buf[(i * (((1 + N) + IdxW) + DW)) + (DW - 1)-:DW]),
					.ready_i(ready_i)
				);
			end
		end
	endgenerate
	assign gnt_o = arb_output_buf[(1 * (((1 + N) + IdxW) + DW)) + (N + (IdxW + (DW - 1)))-:((N + (IdxW + (DW - 1))) >= (IdxW + (DW + 0)) ? ((N + (IdxW + (DW - 1))) - (IdxW + (DW + 0))) + 1 : ((IdxW + (DW + 0)) - (N + (IdxW + (DW - 1)))) + 1)];
	assign idx_o = arb_output_buf[(1 * (((1 + N) + IdxW) + DW)) + (IdxW + (DW - 1))-:((IdxW + (DW - 1)) >= (DW + 0) ? ((IdxW + (DW - 1)) - (DW + 0)) + 1 : ((DW + 0) - (IdxW + (DW - 1))) + 1)];
	assign valid_o = arb_output_buf[(1 * (((1 + N) + IdxW) + DW)) + (1 + (N + (IdxW + (DW - 1))))];
	assign data_o = arb_output_buf[(1 * (((1 + N) + IdxW) + DW)) + (DW - 1)-:DW];
	wire [0:0] output_delta;
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < 1; _gv_i_2 = _gv_i_2 + 1) begin : gen_checks
			localparam i = _gv_i_2;
			assign output_delta[i] = arb_output_buf[1 * (((1 + N) + IdxW) + DW)+:((1 + N) + IdxW) + DW] != arb_output_buf[i * (((1 + N) + IdxW) + DW)+:((1 + N) + IdxW) + DW];
		end
	endgenerate
	wire err_d;
	reg err_q;
	assign err_d = |output_delta;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			err_q <= 1'sb0;
		else
			err_q <= err_d | err_q;
	assign err_o = err_q;
endmodule
