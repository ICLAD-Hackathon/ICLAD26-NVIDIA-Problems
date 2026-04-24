module aes_sub_bytes (
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
	wire [2:0] en;
	wire en_err;
	wire [15:0] out_req;
	wire [2:0] out_ack;
	wire out_ack_err;
	wire [447:0] in_prd;
	wire [319:0] out_prd;
	wire [2:0] en_raw;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_sb_en_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(en_i),
		.sel_o(en_raw),
		.err_o(en_err)
	);
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign en = sv2v_cast_39E4E(en_raw);
	wire [2:0] out_ack_raw;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_sb_out_ack_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(out_ack_i),
		.sel_o(out_ack_raw),
		.err_o(out_ack_err)
	);
	assign out_ack = sv2v_cast_39E4E(out_ack_raw);
	genvar _gv_j_1;
	function automatic integer aes_pkg_aes_rot_int;
		input integer in;
		input integer num;
		integer out;
		begin
			if (in == 0)
				out = num - 1;
			else
				out = in - 1;
			aes_pkg_aes_rot_int = out;
		end
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	generate
		for (_gv_j_1 = 0; _gv_j_1 < 4; _gv_j_1 = _gv_j_1 + 1) begin : gen_sbox_j
			localparam j = _gv_j_1;
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < 4; _gv_i_1 = _gv_i_1 + 1) begin : gen_sbox_i
				localparam i = _gv_i_1;
				assign in_prd[((i * 4) + j) * 28+:28] = {out_prd[((i * 4) + aes_pkg_aes_rot_int(j, 4)) * 20+:20], prd_i[((i * 4) + j) * 8+:8]};
				aes_sbox #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sbox_ij(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.en_i(en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
					.out_req_o(out_req[(i * 4) + j]),
					.out_ack_i(out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
					.op_i(op_i),
					.data_i(data_i[((i * 4) + j) * 8+:8]),
					.mask_i(mask_i[((i * 4) + j) * 8+:8]),
					.prd_i(in_prd[((i * 4) + j) * 28+:28]),
					.data_o(data_o[((i * 4) + j) * 8+:8]),
					.mask_o(mask_o[((i * 4) + j) * 8+:8]),
					.prd_o(out_prd[((i * 4) + j) * 20+:20])
				);
			end
		end
	endgenerate
	assign out_req_o = (&out_req ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign err_o = en_err | out_ack_err;
endmodule
