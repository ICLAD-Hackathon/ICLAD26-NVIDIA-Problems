module prim_arbiter_ppc (
	clk_i,
	rst_ni,
	req_chk_i,
	req_i,
	data_i,
	gnt_o,
	idx_o,
	valid_o,
	data_o,
	ready_i
);
	reg _sv2v_0;
	parameter [31:0] N = 8;
	parameter [31:0] DW = 32;
	parameter [0:0] EnDataPort = 1;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] IdxW = prim_util_pkg_vbits(N);
	input clk_i;
	input rst_ni;
	input req_chk_i;
	input [N - 1:0] req_i;
	input [(N * DW) - 1:0] data_i;
	output wire [N - 1:0] gnt_o;
	output wire [IdxW - 1:0] idx_o;
	output wire valid_o;
	output reg [DW - 1:0] data_o;
	input ready_i;
	wire unused_req_chk;
	assign unused_req_chk = req_chk_i;
	generate
		if (N == 1) begin : gen_degenerate_case
			assign valid_o = req_i[0];
			wire [DW:1] sv2v_tmp_9E8F4;
			assign sv2v_tmp_9E8F4 = data_i[(N - 1) * DW+:DW];
			always @(*) data_o = sv2v_tmp_9E8F4;
			assign gnt_o[0] = valid_o & ready_i;
			assign idx_o = 1'sb0;
		end
		else begin : gen_normal_case
			wire [N - 1:0] masked_req;
			wire [N - 1:0] ppc_out;
			wire [N - 1:0] arb_req;
			reg [N - 1:0] mask;
			wire [N - 1:0] mask_next;
			wire [N - 1:0] winner;
			assign masked_req = mask & req_i;
			assign arb_req = (|masked_req ? masked_req : req_i);
			prim_leading_one_ppc #(.N(N)) u_leading_one(
				.in_i(arb_req),
				.leading_one_o(winner),
				.ppc_out_o(ppc_out),
				.idx_o(idx_o)
			);
			assign gnt_o = (ready_i ? winner : {N {1'sb0}});
			assign valid_o = |req_i;
			assign mask_next = {ppc_out[N - 2:0], 1'b0};
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					mask <= 1'sb0;
				else if (valid_o && ready_i)
					mask <= mask_next;
				else if (valid_o && !ready_i)
					mask <= ppc_out;
			if (EnDataPort == 1) begin : gen_datapath
				always @(*) begin
					if (_sv2v_0)
						;
					data_o = 1'sb0;
					begin : sv2v_autoblock_1
						reg signed [31:0] i;
						for (i = 0; i < N; i = i + 1)
							if (winner[i])
								data_o = data_i[((N - 1) - i) * DW+:DW];
					end
				end
			end
			else begin : gen_nodatapath
				wire [DW:1] sv2v_tmp_116D0;
				assign sv2v_tmp_116D0 = 1'sb1;
				always @(*) data_o = sv2v_tmp_116D0;
				wire [(N * DW) - 1:0] unused_data;
				assign unused_data = data_i;
			end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
