module aes_reduced_round (
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
	err_o
);
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] en_i;
	output wire [2:0] out_req_o;
	input wire [2:0] out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	input wire [127:0] mask_i;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	input wire [127:0] prd_i;
	output wire [127:0] data_o;
	output wire [127:0] mask_o;
	output wire err_o;
	localparam signed [31:0] NumShares = 2;
	wire [127:0] sub_bytes_out;
	wire [127:0] sb_out_mask;
	wire [127:0] shift_rows_in [0:1];
	wire [127:0] shift_rows_out [0:1];
	wire [127:0] mix_columns_out [0:1];
	aes_sub_bytes #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sub_bytes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(en_i),
		.out_req_o(out_req_o),
		.out_ack_i(out_ack_i),
		.op_i(op_i),
		.data_i(data_i),
		.mask_i(mask_i),
		.prd_i(prd_i),
		.data_o(sub_bytes_out),
		.mask_o(sb_out_mask),
		.err_o(err_o)
	);
	genvar _gv_s_1;
	generate
		for (_gv_s_1 = 0; _gv_s_1 < NumShares; _gv_s_1 = _gv_s_1 + 1) begin : gen_shares_shift_mix
			localparam s = _gv_s_1;
			if (s == 0) begin : gen_shift_in_data
				assign shift_rows_in[s] = sub_bytes_out;
			end
			else begin : gen_shift_in_mask
				assign shift_rows_in[s] = sb_out_mask;
			end
			aes_shift_rows u_aes_shift_rows(
				.op_i(op_i),
				.data_i(shift_rows_in[s]),
				.data_o(shift_rows_out[s])
			);
			aes_mix_columns u_aes_mix_columns(
				.op_i(op_i),
				.data_i(shift_rows_out[s]),
				.data_o(mix_columns_out[s])
			);
		end
	endgenerate
	assign data_o = mix_columns_out[0];
	assign mask_o = mix_columns_out[1];
endmodule
