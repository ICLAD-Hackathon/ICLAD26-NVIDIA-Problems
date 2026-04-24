module aes_sbox_canright (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	output wire [7:0] data_o;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_inverse_gf2p4;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		reg [1:0] d;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], gamma[1:0]);
			c = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(a));
			d = aes_sbox_canright_pkg_aes_square_gf2p2(c ^ b);
			delta[3:2] = aes_sbox_canright_pkg_aes_mul_gf2p2(d, gamma[1:0]);
			delta[1:0] = aes_sbox_canright_pkg_aes_mul_gf2p2(d, gamma[3:2]);
			aes_inverse_gf2p4 = delta;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_square_gf2p2(gamma[1:0]);
			delta[3:2] = aes_sbox_canright_pkg_aes_square_gf2p2(a);
			delta[1:0] = aes_sbox_canright_pkg_aes_scale_omega_gf2p2(b);
			aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2 = delta;
		end
	endfunction
	function automatic [7:0] aes_inverse_gf2p8;
		input reg [7:0] gamma;
		reg [7:0] delta;
		reg [3:0] a;
		reg [3:0] b;
		reg [3:0] c;
		reg [3:0] d;
		begin
			a = gamma[7:4] ^ gamma[3:0];
			b = aes_sbox_canright_pkg_aes_mul_gf2p4(gamma[7:4], gamma[3:0]);
			c = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a);
			d = aes_inverse_gf2p4(c ^ b);
			delta[7:4] = aes_sbox_canright_pkg_aes_mul_gf2p4(d, gamma[3:0]);
			delta[3:0] = aes_sbox_canright_pkg_aes_mul_gf2p4(d, gamma[7:4]);
			aes_inverse_gf2p8 = delta;
		end
	endfunction
	wire [7:0] data_basis_x;
	wire [7:0] data_inverse;
	function automatic [7:0] aes_pkg_aes_mvm;
		input reg [7:0] vec_b;
		input reg [63:0] mat_a;
		reg [7:0] vec_c;
		begin
			vec_c = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 8; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 8; j = j + 1)
							vec_c[i] = vec_c[i] ^ (mat_a[((7 - j) * 8) + i] & vec_b[7 - j]);
					end
			end
			aes_pkg_aes_mvm = vec_c;
		end
	endfunction
	localparam [63:0] aes_sbox_canright_pkg_A2X = 64'h98f3f2480981a9ff;
	localparam [63:0] aes_sbox_canright_pkg_S2X = 64'h8c7905eb12045153;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign data_inverse = aes_inverse_gf2p8(data_basis_x);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2S) ^ 8'h63));
endmodule
