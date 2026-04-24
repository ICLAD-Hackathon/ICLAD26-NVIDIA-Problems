module prim_reg_cdc (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	src_regwen_i,
	src_we_i,
	src_re_i,
	src_wd_i,
	src_busy_o,
	src_qs_o,
	dst_ds_i,
	dst_qs_i,
	dst_update_i,
	dst_we_o,
	dst_re_o,
	dst_regwen_o,
	dst_wd_o
);
	parameter signed [31:0] DataWidth = 32;
	parameter [DataWidth - 1:0] ResetVal = 32'h00000000;
	parameter [DataWidth - 1:0] BitMask = 32'hffffffff;
	parameter [0:0] DstWrReq = 0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	input src_regwen_i;
	input src_we_i;
	input src_re_i;
	input [DataWidth - 1:0] src_wd_i;
	output wire src_busy_o;
	output wire [DataWidth - 1:0] src_qs_o;
	input [DataWidth - 1:0] dst_ds_i;
	input [DataWidth - 1:0] dst_qs_i;
	input dst_update_i;
	output wire dst_we_o;
	output wire dst_re_o;
	output wire dst_regwen_o;
	output wire [DataWidth - 1:0] dst_wd_o;
	localparam signed [31:0] TxnWidth = 3;
	wire src_ack;
	reg src_busy_q;
	reg [DataWidth - 1:0] src_q;
	reg [2:0] txn_bits_q;
	wire src_req;
	assign src_req = src_we_i | src_re_i;
	always @(posedge clk_src_i or negedge rst_src_ni)
		if (!rst_src_ni)
			src_busy_q <= 1'sb0;
		else if (src_req)
			src_busy_q <= 1'b1;
		else if (src_ack)
			src_busy_q <= 1'b0;
	assign src_busy_o = src_busy_q;
	wire busy;
	assign busy = src_busy_q & !src_ack;
	wire [DataWidth - 1:0] dst_qs;
	wire src_update;
	wire dst_to_src;
	generate
		if (DstWrReq) begin : gen_wr_req
			assign dst_to_src = (src_busy_q && src_ack) || (src_update && !busy);
		end
		else begin : gen_passthru
			assign dst_to_src = src_busy_q && src_ack;
			wire unused_dst_wr;
			assign unused_dst_wr = src_update ^ busy;
		end
	endgenerate
	always @(posedge clk_src_i or negedge rst_src_ni)
		if (!rst_src_ni) begin
			src_q <= ResetVal;
			txn_bits_q <= 1'sb0;
		end
		else if (src_req) begin
			src_q <= src_wd_i & BitMask;
			txn_bits_q <= {src_we_i, src_re_i, src_regwen_i};
		end
		else if (dst_to_src) begin
			src_q <= dst_qs;
			txn_bits_q <= 1'sb0;
		end
	wire unused_wd;
	assign unused_wd = ^src_wd_i;
	assign src_qs_o = src_q;
	assign dst_wd_o = src_q;
	wire dst_req_from_src;
	wire dst_req;
	prim_pulse_sync u_src_to_dst_req(
		.clk_src_i(clk_src_i),
		.rst_src_ni(rst_src_ni),
		.clk_dst_i(clk_dst_i),
		.rst_dst_ni(rst_dst_ni),
		.src_pulse_i(src_req),
		.dst_pulse_o(dst_req_from_src)
	);
	prim_reg_cdc_arb #(
		.DataWidth(DataWidth),
		.ResetVal(ResetVal),
		.DstWrReq(DstWrReq)
	) u_arb(
		.clk_src_i(clk_src_i),
		.rst_src_ni(rst_src_ni),
		.clk_dst_i(clk_dst_i),
		.rst_dst_ni(rst_dst_ni),
		.src_ack_o(src_ack),
		.src_update_o(src_update),
		.dst_req_i(dst_req_from_src),
		.dst_req_o(dst_req),
		.dst_update_i(dst_update_i),
		.dst_ds_i(dst_ds_i),
		.dst_qs_i(dst_qs_i),
		.dst_qs_o(dst_qs)
	);
	assign {dst_we_o, dst_re_o, dst_regwen_o} = txn_bits_q & {TxnWidth {dst_req}};
endmodule
