module aes_ctr_fsm_p (
	clk_i,
	rst_ni,
	inc32_i,
	incr_i,
	ready_o,
	sp_enc_err_i,
	mr_err_i,
	alert_o,
	ctr_slice_idx_o,
	ctr_slice_i,
	ctr_slice_o,
	ctr_we_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire inc32_i;
	input wire incr_i;
	output wire ready_o;
	input wire sp_enc_err_i;
	input wire mr_err_i;
	output wire alert_o;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] aes_pkg_SliceIdxWidth = prim_util_pkg_vbits(aes_pkg_NumSlicesCtr);
	output wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_o;
	input wire [15:0] ctr_slice_i;
	output wire [15:0] ctr_slice_o;
	output wire ctr_we_o;
	localparam signed [31:0] NumInBufBits = 20;
	wire [19:0] in;
	wire [19:0] in_buf;
	assign in = {inc32_i, incr_i, sp_enc_err_i, mr_err_i, ctr_slice_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire inc32;
	wire incr;
	wire sp_enc_err;
	wire mr_err;
	wire [15:0] ctr_i_slice;
	assign {inc32, incr, sp_enc_err, mr_err, ctr_i_slice} = in_buf;
	wire ready;
	wire alert;
	wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx;
	wire [15:0] ctr_o_slice;
	wire ctr_we;
	aes_ctr_fsm u_aes_ctr_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.inc32_i(inc32),
		.incr_i(incr),
		.ready_o(ready),
		.sp_enc_err_i(sp_enc_err),
		.mr_err_i(mr_err),
		.alert_o(alert),
		.ctr_slice_idx_o(ctr_slice_idx),
		.ctr_slice_i(ctr_i_slice),
		.ctr_slice_o(ctr_o_slice),
		.ctr_we_o(ctr_we)
	);
	localparam signed [31:0] NumOutBufBits = ((2 + aes_pkg_SliceIdxWidth) + aes_pkg_SliceSizeCtr) + 1;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {ready, alert, ctr_slice_idx, ctr_o_slice, ctr_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ready_o, alert_o, ctr_slice_idx_o, ctr_slice_o, ctr_we_o} = out_buf;
endmodule
