module prim_sram_arbiter (
	clk_i,
	rst_ni,
	req_i,
	req_addr_i,
	req_write_i,
	req_wdata_i,
	req_wmask_i,
	gnt_o,
	rsp_rvalid_o,
	rsp_rdata_o,
	rsp_error_o,
	sram_req_o,
	sram_addr_o,
	sram_write_o,
	sram_wdata_o,
	sram_wmask_o,
	sram_rvalid_i,
	sram_rdata_i,
	sram_rerror_i
);
	reg _sv2v_0;
	parameter [31:0] N = 4;
	parameter [31:0] SramDw = 32;
	parameter [31:0] SramAw = 12;
	parameter ArbiterImpl = "PPC";
	parameter [0:0] EnMask = 1'b0;
	input clk_i;
	input rst_ni;
	input [N - 1:0] req_i;
	input [(N * SramAw) - 1:0] req_addr_i;
	input [N - 1:0] req_write_i;
	input [(N * SramDw) - 1:0] req_wdata_i;
	input [(N * SramDw) - 1:0] req_wmask_i;
	output wire [N - 1:0] gnt_o;
	output wire [N - 1:0] rsp_rvalid_o;
	output wire [(N * SramDw) - 1:0] rsp_rdata_o;
	output wire [(N * 2) - 1:0] rsp_error_o;
	output wire sram_req_o;
	output wire [SramAw - 1:0] sram_addr_o;
	output wire sram_write_o;
	output wire [SramDw - 1:0] sram_wdata_o;
	output wire [SramDw - 1:0] sram_wmask_o;
	input sram_rvalid_i;
	input [SramDw - 1:0] sram_rdata_i;
	input [1:0] sram_rerror_i;
	wire [(N * (((1 + SramAw) + SramDw) + SramDw)) - 1:0] req_packed;
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < N; _gv_i_1 = _gv_i_1 + 1) begin : gen_reqs
			localparam i = _gv_i_1;
			assign req_packed[((N - 1) - i) * (((1 + SramAw) + SramDw) + SramDw)+:((1 + SramAw) + SramDw) + SramDw] = {req_write_i[i], req_addr_i[((N - 1) - i) * SramAw+:SramAw], req_wdata_i[((N - 1) - i) * SramDw+:SramDw], (EnMask ? req_wmask_i[((N - 1) - i) * SramDw+:SramDw] : {SramDw {1'b1}})};
		end
	endgenerate
	localparam signed [31:0] ARB_DW = ((1 + SramAw) + SramDw) + SramDw;
	wire [(((1 + SramAw) + SramDw) + SramDw) - 1:0] sram_packed;
	assign sram_write_o = sram_packed[1 + (SramAw + (SramDw + (SramDw - 1)))];
	assign sram_addr_o = sram_packed[SramAw + (SramDw + (SramDw - 1))-:((SramAw + (SramDw + (SramDw - 1))) >= (SramDw + (SramDw + 0)) ? ((SramAw + (SramDw + (SramDw - 1))) - (SramDw + (SramDw + 0))) + 1 : ((SramDw + (SramDw + 0)) - (SramAw + (SramDw + (SramDw - 1)))) + 1)];
	assign sram_wdata_o = sram_packed[SramDw + (SramDw - 1)-:((SramDw + (SramDw - 1)) >= (SramDw + 0) ? ((SramDw + (SramDw - 1)) - (SramDw + 0)) + 1 : ((SramDw + 0) - (SramDw + (SramDw - 1))) + 1)];
	assign sram_wmask_o = (EnMask ? sram_packed[SramDw - 1-:SramDw] : {SramDw {1'b1}});
	generate
		if (EnMask == 1'b0) begin : g_unused
			reg unused_wmask;
			always @(*) begin
				if (_sv2v_0)
					;
				unused_wmask = 1'b1;
				begin : sv2v_autoblock_1
					reg [31:0] i;
					for (i = 0; i < N; i = i + 1)
						unused_wmask = unused_wmask ^ ^req_wmask_i[((N - 1) - i) * SramDw+:SramDw];
				end
				unused_wmask = unused_wmask ^ ^sram_packed[SramDw - 1-:SramDw];
			end
		end
		if (ArbiterImpl == "PPC") begin : gen_arb_ppc
			prim_arbiter_ppc #(
				.N(N),
				.DW(ARB_DW)
			) u_reqarb(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.req_chk_i(1'b1),
				.req_i(req_i),
				.data_i(req_packed),
				.gnt_o(gnt_o),
				.idx_o(),
				.valid_o(sram_req_o),
				.data_o(sram_packed),
				.ready_i(1'b1)
			);
		end
		else if (ArbiterImpl == "BINTREE") begin : gen_tree_arb
			prim_arbiter_tree #(
				.N(N),
				.DW(ARB_DW)
			) u_reqarb(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.req_chk_i(1'b1),
				.req_i(req_i),
				.data_i(req_packed),
				.gnt_o(gnt_o),
				.idx_o(),
				.valid_o(sram_req_o),
				.data_o(sram_packed),
				.ready_i(1'b1)
			);
		end
	endgenerate
	wire [N - 1:0] steer;
	wire sram_ack;
	assign sram_ack = sram_rvalid_i & |steer;
	prim_fifo_sync #(
		.Width(N),
		.Pass(1'b0),
		.Depth(4),
		.NeverClears(1'b1)
	) u_req_fifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(sram_req_o & ~sram_write_o),
		.wready_o(),
		.wdata_i(gnt_o),
		.rvalid_o(),
		.rready_i(sram_ack),
		.rdata_o(steer),
		.full_o(),
		.depth_o(),
		.err_o()
	);
	assign rsp_rvalid_o = steer & {N {sram_rvalid_i}};
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < N; _gv_i_2 = _gv_i_2 + 1) begin : gen_rsp
			localparam i = _gv_i_2;
			assign rsp_rdata_o[((N - 1) - i) * SramDw+:SramDw] = sram_rdata_i;
			assign rsp_error_o[((N - 1) - i) * 2+:2] = sram_rerror_i;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
