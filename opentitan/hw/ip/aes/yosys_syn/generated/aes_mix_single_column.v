module aes_mix_single_column (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [31:0] data_i;
	output wire [31:0] data_o;
	wire [31:0] x;
	wire [15:0] y;
	wire [15:0] z;
	wire [31:0] x_mul2;
	wire [15:0] y_pre_mul4;
	wire [7:0] y2;
	wire [7:0] y2_pre_mul2;
	wire [15:0] z_muxed;
	assign x[0+:8] = data_i[0+:8] ^ data_i[24+:8];
	assign x[8+:8] = data_i[24+:8] ^ data_i[16+:8];
	assign x[16+:8] = data_i[16+:8] ^ data_i[8+:8];
	assign x[24+:8] = data_i[8+:8] ^ data_i[0+:8];
	genvar _gv_i_1;
	function automatic [7:0] aes_pkg_aes_mul2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[6];
			out[6] = in[5];
			out[5] = in[4];
			out[4] = in[3] ^ in[7];
			out[3] = in[2] ^ in[7];
			out[2] = in[1];
			out[1] = in[0] ^ in[7];
			out[0] = in[7];
			aes_pkg_aes_mul2 = out;
		end
	endfunction
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 4; _gv_i_1 = _gv_i_1 + 1) begin : gen_x_mul2
			localparam i = _gv_i_1;
			assign x_mul2[i * 8+:8] = aes_pkg_aes_mul2(x[i * 8+:8]);
		end
	endgenerate
	assign y_pre_mul4[0+:8] = data_i[24+:8] ^ data_i[8+:8];
	assign y_pre_mul4[8+:8] = data_i[16+:8] ^ data_i[0+:8];
	genvar _gv_i_2;
	function automatic [7:0] aes_pkg_aes_mul4;
		input reg [7:0] in;
		aes_pkg_aes_mul4 = aes_pkg_aes_mul2(aes_pkg_aes_mul2(in));
	endfunction
	generate
		for (_gv_i_2 = 0; _gv_i_2 < 2; _gv_i_2 = _gv_i_2 + 1) begin : gen_mul4
			localparam i = _gv_i_2;
			assign y[i * 8+:8] = aes_pkg_aes_mul4(y_pre_mul4[i * 8+:8]);
		end
	endgenerate
	assign y2_pre_mul2 = y[0+:8] ^ y[8+:8];
	assign y2 = aes_pkg_aes_mul2(y2_pre_mul2);
	assign z[0+:8] = y2 ^ y[0+:8];
	assign z[8+:8] = y2 ^ y[8+:8];
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign z_muxed[0+:8] = (op_i == sv2v_cast_63054(2'b01) ? 8'b00000000 : (op_i == sv2v_cast_63054(2'b10) ? z[0+:8] : 8'b00000000));
	assign z_muxed[8+:8] = (op_i == sv2v_cast_63054(2'b01) ? 8'b00000000 : (op_i == sv2v_cast_63054(2'b10) ? z[8+:8] : 8'b00000000));
	assign data_o[0+:8] = ((data_i[8+:8] ^ x_mul2[24+:8]) ^ x[8+:8]) ^ z_muxed[8+:8];
	assign data_o[8+:8] = ((data_i[0+:8] ^ x_mul2[16+:8]) ^ x[8+:8]) ^ z_muxed[0+:8];
	assign data_o[16+:8] = ((data_i[24+:8] ^ x_mul2[8+:8]) ^ x[24+:8]) ^ z_muxed[8+:8];
	assign data_o[24+:8] = ((data_i[16+:8] ^ x_mul2[0+:8]) ^ x[24+:8]) ^ z_muxed[0+:8];
endmodule
