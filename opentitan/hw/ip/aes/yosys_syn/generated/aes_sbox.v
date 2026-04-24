module aes_sbox (
	clk_i,
	rst_ni,
	en_i,
	out_req_o,
	out_ack_i,
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o,
	prd_o
);
	reg _sv2v_0;
	parameter integer SecSBoxImpl = 32'sd0;
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	output wire out_req_o;
	input wire out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	input wire [27:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	output wire [19:0] prd_o;
	localparam signed [31:0] AesSBoxSecSBoxImplNonDefault = (SecSBoxImpl == 32'sd4 ? 1 : 2);
	function automatic [AesSBoxSecSBoxImplNonDefault - 1:0] sv2v_cast_76E97;
		input reg [AesSBoxSecSBoxImplNonDefault - 1:0] inp;
		sv2v_cast_76E97 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_76E97(1'b1);
	end
	localparam [0:0] SBoxMasked = (((SecSBoxImpl == 32'sd2) || (SecSBoxImpl == 32'sd3)) || (SecSBoxImpl == 32'sd4) ? 1'b1 : 1'b0);
	localparam [0:0] SBoxSingleCycle = (SecSBoxImpl == 32'sd4 ? 1'b0 : 1'b1);
	generate
		if (!SBoxMasked) begin : gen_sbox_unmasked
			wire unused_clk;
			wire unused_rst;
			wire [7:0] unused_mask;
			wire [27:0] unused_prd;
			assign unused_clk = clk_i;
			assign unused_rst = rst_ni;
			assign unused_mask = mask_i;
			assign unused_prd = prd_i;
			if (SecSBoxImpl == 32'sd1) begin : gen_sbox_canright
				aes_sbox_canright u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.data_o(data_o)
				);
			end
			else begin : gen_sbox_lut
				aes_sbox_lut u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.data_o(data_o)
				);
			end
			assign mask_o = 1'sb0;
			assign prd_o = 1'sb0;
		end
		else begin : gen_sbox_masked
			if (SecSBoxImpl == 32'sd4) begin : gen_sbox_dom
				aes_sbox_dom u_aes_sbox(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.en_i(en_i),
					.out_req_o(out_req_o),
					.out_ack_i(out_ack_i),
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[27:0]),
					.data_o(data_o),
					.mask_o(mask_o),
					.prd_o(prd_o)
				);
			end
			else if (SecSBoxImpl == 32'sd3) begin : gen_sbox_canright_masked_noreuse
				wire unused_clk;
				wire unused_rst;
				wire [19:0] unused_prd;
				assign unused_clk = clk_i;
				assign unused_rst = rst_ni;
				assign unused_prd = prd_i[27:aes_pkg_WidthPRDSBox];
				aes_sbox_canright_masked_noreuse u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[17:0]),
					.data_o(data_o),
					.mask_o(mask_o)
				);
				assign prd_o = 1'sb0;
			end
			else begin : gen_sbox_canright_masked
				wire unused_clk;
				wire unused_rst;
				wire [19:0] unused_prd;
				assign unused_clk = clk_i;
				assign unused_rst = rst_ni;
				assign unused_prd = prd_i[27:aes_pkg_WidthPRDSBox];
				aes_sbox_canright_masked u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[7:0]),
					.data_o(data_o),
					.mask_o(mask_o)
				);
				assign prd_o = 1'sb0;
			end
		end
		if (SBoxSingleCycle) begin : gen_req_singlecycle
			wire unused_out_ack;
			assign unused_out_ack = out_ack_i;
			assign out_req_o = en_i;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
