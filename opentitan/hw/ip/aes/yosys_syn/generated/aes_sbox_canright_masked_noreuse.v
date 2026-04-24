module aes_masked_inverse_gf2p4_noreuse (
	b,
	q,
	r,
	t,
	b_inv
);
	input wire [3:0] b;
	input wire [3:0] q;
	input wire [1:0] r;
	input wire [3:0] t;
	output wire [3:0] b_inv;
	wire [1:0] b1;
	wire [1:0] b0;
	wire [1:0] q1;
	wire [1:0] q0;
	wire [1:0] c_inv;
	wire [1:0] r_sq;
	wire [1:0] t1;
	wire [1:0] t0;
	assign b1 = b[3:2];
	assign b0 = b[1:0];
	assign q1 = q[3:2];
	assign q0 = q[1:0];
	assign t1 = t[3:2];
	assign t0 = t[1:0];
	wire [1:0] scale_omega2_b;
	wire [1:0] scale_omega2_q;
	wire [1:0] mul_b1_b0;
	wire [1:0] mul_b1_q0;
	wire [1:0] mul_b0_q1;
	wire [1:0] mul_q1_q0;
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
	assign scale_omega2_b = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(b1 ^ b0));
	assign scale_omega2_q = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(q1 ^ q0));
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
	assign mul_b1_b0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, b0);
	assign mul_b1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, q0);
	assign mul_b0_q1 = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, q1);
	assign mul_q1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, q0);
	wire [1:0] scale_omega2_b_buf;
	wire [1:0] scale_omega2_q_buf;
	prim_buf #(.Width(4)) u_prim_buf_scale_omega2_bq(
		.in_i({scale_omega2_b, scale_omega2_q}),
		.out_o({scale_omega2_b_buf, scale_omega2_q_buf})
	);
	wire [1:0] mul_b1_b0_buf;
	wire [1:0] mul_b1_q0_buf;
	wire [1:0] mul_b0_q1_buf;
	wire [1:0] mul_q1_q0_buf;
	prim_buf #(.Width(8)) u_prim_buf_mul_bq01(
		.in_i({mul_b1_b0, mul_b1_q0, mul_b0_q1, mul_q1_q0}),
		.out_o({mul_b1_b0_buf, mul_b1_q0_buf, mul_b0_q1_buf, mul_q1_q0_buf})
	);
	wire [1:0] c [0:5];
	wire [1:0] c_buf [0:5];
	assign c[0] = r ^ scale_omega2_b_buf;
	assign c[1] = c_buf[0] ^ scale_omega2_q_buf;
	assign c[2] = c_buf[1] ^ mul_b1_b0_buf;
	assign c[3] = c_buf[2] ^ mul_b1_q0_buf;
	assign c[4] = c_buf[3] ^ mul_b0_q1_buf;
	assign c[5] = c_buf[4] ^ mul_q1_q0_buf;
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < 6; _gv_i_1 = _gv_i_1 + 1) begin : gen_c_buf
			localparam i = _gv_i_1;
			prim_buf #(.Width(2)) u_prim_buf_c_i(
				.in_i(c[i]),
				.out_o(c_buf[i])
			);
		end
	endgenerate
	assign c_inv = aes_sbox_canright_pkg_aes_square_gf2p2(c_buf[5]);
	assign r_sq = aes_sbox_canright_pkg_aes_square_gf2p2(r);
	wire [1:0] mul_b0_r_sq;
	wire [1:0] mul_q0_c_inv;
	wire [1:0] mul_q0_r_sq;
	wire [1:0] mul_b1_r_sq;
	wire [1:0] mul_q1_c_inv;
	wire [1:0] mul_q1_r_sq;
	assign mul_b0_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, r_sq);
	assign mul_q0_c_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q0, c_inv);
	assign mul_q0_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(q0, r_sq);
	assign mul_b1_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, r_sq);
	assign mul_q1_c_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, c_inv);
	assign mul_q1_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, r_sq);
	wire [1:0] mul_b0_r_sq_buf;
	wire [1:0] mul_q0_c_inv_buf;
	wire [1:0] mul_q0_r_sq_buf;
	prim_buf #(.Width(6)) u_prim_buf_mul_bq0(
		.in_i({mul_b0_r_sq, mul_q0_c_inv, mul_q0_r_sq}),
		.out_o({mul_b0_r_sq_buf, mul_q0_c_inv_buf, mul_q0_r_sq_buf})
	);
	wire [1:0] mul_b1_r_sq_buf;
	wire [1:0] mul_q1_c_inv_buf;
	wire [1:0] mul_q1_r_sq_buf;
	prim_buf #(.Width(6)) u_prim_buf_mul_bq1(
		.in_i({mul_b1_r_sq, mul_q1_c_inv, mul_q1_r_sq}),
		.out_o({mul_b1_r_sq_buf, mul_q1_c_inv_buf, mul_q1_r_sq_buf})
	);
	wire [1:0] b1_inv [0:3];
	wire [1:0] b1_inv_buf [0:3];
	wire [1:0] b0_inv [0:3];
	wire [1:0] b0_inv_buf [0:3];
	assign b1_inv[0] = t1 ^ aes_sbox_canright_pkg_aes_mul_gf2p2(b0, c_inv);
	assign b1_inv[1] = b1_inv_buf[0] ^ mul_b0_r_sq_buf;
	assign b1_inv[2] = b1_inv_buf[1] ^ mul_q0_c_inv_buf;
	assign b1_inv[3] = b1_inv_buf[2] ^ mul_q0_r_sq_buf;
	assign b0_inv[0] = t0 ^ aes_sbox_canright_pkg_aes_mul_gf2p2(b1, c_inv);
	assign b0_inv[1] = b0_inv_buf[0] ^ mul_b1_r_sq_buf;
	assign b0_inv[2] = b0_inv_buf[1] ^ mul_q1_c_inv_buf;
	assign b0_inv[3] = b0_inv_buf[2] ^ mul_q1_r_sq_buf;
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < 4; _gv_i_2 = _gv_i_2 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_2;
			prim_buf #(.Width(2)) u_prim_buf_b1_inv_i(
				.in_i(b1_inv[i]),
				.out_o(b1_inv_buf[i])
			);
			prim_buf #(.Width(2)) u_prim_buf_b0_inv_i(
				.in_i(b0_inv[i]),
				.out_o(b0_inv_buf[i])
			);
		end
	endgenerate
	assign b_inv = {b1_inv_buf[3], b0_inv_buf[3]};
endmodule
module aes_masked_inverse_gf2p8_noreuse (
	a,
	m,
	n,
	prd,
	a_inv
);
	input wire [7:0] a;
	input wire [7:0] m;
	input wire [7:0] n;
	input wire [9:0] prd;
	output wire [7:0] a_inv;
	wire [3:0] a1;
	wire [3:0] a0;
	wire [3:0] m1;
	wire [3:0] m0;
	wire [3:0] q;
	wire [3:0] b_inv;
	wire [3:0] s1;
	wire [3:0] s0;
	wire [3:0] t;
	wire [1:0] r;
	assign a1 = a[7:4];
	assign a0 = a[3:0];
	assign m1 = m[7:4];
	assign m0 = m[3:0];
	assign r = prd[1:0];
	assign q = prd[5:2];
	assign t = prd[9:6];
	assign s1 = n[7:4];
	assign s0 = n[3:0];
	wire [3:0] ss_a1_a0;
	wire [3:0] ss_m1_m0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
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
	assign ss_a1_a0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a1 ^ a0);
	assign ss_m1_m0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(m1 ^ m0);
	wire [3:0] mul_a1_a0;
	wire [3:0] mul_a1_m0;
	wire [3:0] mul_a0_m1;
	wire [3:0] mul_m0_m1;
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
	assign mul_a1_a0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, a0);
	assign mul_a1_m0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, m0);
	assign mul_a0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, m1);
	assign mul_m0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, m1);
	wire [3:0] mul_a1_a0_buf;
	wire [3:0] mul_a1_m0_buf;
	wire [3:0] mul_a0_m1_buf;
	wire [3:0] mul_m0_m1_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am01(
		.in_i({mul_a1_a0, mul_a1_m0, mul_a0_m1, mul_m0_m1}),
		.out_o({mul_a1_a0_buf, mul_a1_m0_buf, mul_a0_m1_buf, mul_m0_m1_buf})
	);
	wire [3:0] b [0:5];
	wire [3:0] b_buf [0:5];
	assign b[0] = q ^ ss_a1_a0;
	assign b[1] = b_buf[0] ^ ss_m1_m0;
	assign b[2] = b_buf[1] ^ mul_a1_a0_buf;
	assign b[3] = b_buf[2] ^ mul_a1_m0_buf;
	assign b[4] = b_buf[3] ^ mul_a0_m1_buf;
	assign b[5] = b_buf[4] ^ mul_m0_m1_buf;
	genvar _gv_i_3;
	generate
		for (_gv_i_3 = 0; _gv_i_3 < 6; _gv_i_3 = _gv_i_3 + 1) begin : gen_b_buf
			localparam i = _gv_i_3;
			prim_buf #(.Width(4)) u_prim_buf_b_i(
				.in_i(b[i]),
				.out_o(b_buf[i])
			);
		end
	endgenerate
	aes_masked_inverse_gf2p4_noreuse u_aes_masked_inverse_gf2p4(
		.b(b_buf[5]),
		.q(q),
		.r(r),
		.t(t),
		.b_inv(b_inv)
	);
	wire [3:0] b_inv_buf;
	prim_buf #(.Width(4)) u_prim_buf_b_inv(
		.in_i(b_inv),
		.out_o(b_inv_buf)
	);
	wire [3:0] mul_a0_b_inv;
	wire [3:0] mul_a0_t;
	wire [3:0] mul_m0_b_inv;
	wire [3:0] mul_m0_t;
	wire [3:0] mul_a1_b_inv;
	wire [3:0] mul_a1_t;
	wire [3:0] mul_m1_b_inv;
	wire [3:0] mul_m1_t;
	assign mul_a0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, b_inv_buf);
	assign mul_a0_t = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, t);
	assign mul_m0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, b_inv_buf);
	assign mul_m0_t = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, t);
	assign mul_a1_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, b_inv_buf);
	assign mul_a1_t = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, t);
	assign mul_m1_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m1, b_inv_buf);
	assign mul_m1_t = aes_sbox_canright_pkg_aes_mul_gf2p4(m1, t);
	wire [3:0] mul_a0_b_inv_buf;
	wire [3:0] mul_a0_t_buf;
	wire [3:0] mul_m0_b_inv_buf;
	wire [3:0] mul_m0_t_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am0(
		.in_i({mul_a0_b_inv, mul_a0_t, mul_m0_b_inv, mul_m0_t}),
		.out_o({mul_a0_b_inv_buf, mul_a0_t_buf, mul_m0_b_inv_buf, mul_m0_t_buf})
	);
	wire [3:0] mul_a1_b_inv_buf;
	wire [3:0] mul_a1_t_buf;
	wire [3:0] mul_m1_b_inv_buf;
	wire [3:0] mul_m1_t_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am1(
		.in_i({mul_a1_b_inv, mul_a1_t, mul_m1_b_inv, mul_m1_t}),
		.out_o({mul_a1_b_inv_buf, mul_a1_t_buf, mul_m1_b_inv_buf, mul_m1_t_buf})
	);
	wire [3:0] a1_inv [0:3];
	wire [3:0] a1_inv_buf [0:3];
	wire [3:0] a0_inv [0:3];
	wire [3:0] a0_inv_buf [0:3];
	assign a1_inv[0] = s1 ^ mul_a0_b_inv_buf;
	assign a1_inv[1] = a1_inv_buf[0] ^ mul_a0_t_buf;
	assign a1_inv[2] = a1_inv_buf[1] ^ mul_m0_b_inv_buf;
	assign a1_inv[3] = a1_inv_buf[2] ^ mul_m0_t_buf;
	assign a0_inv[0] = s0 ^ mul_a1_b_inv_buf;
	assign a0_inv[1] = a0_inv_buf[0] ^ mul_a1_t_buf;
	assign a0_inv[2] = a0_inv_buf[1] ^ mul_m1_b_inv_buf;
	assign a0_inv[3] = a0_inv_buf[2] ^ mul_m1_t_buf;
	genvar _gv_i_4;
	generate
		for (_gv_i_4 = 0; _gv_i_4 < 4; _gv_i_4 = _gv_i_4 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_4;
			prim_buf #(.Width(4)) u_prim_buf_a1_inv_i(
				.in_i(a1_inv[i]),
				.out_o(a1_inv_buf[i])
			);
			prim_buf #(.Width(4)) u_prim_buf_a0_inv_i(
				.in_i(a0_inv[i]),
				.out_o(a0_inv_buf[i])
			);
		end
	endgenerate
	assign a_inv = {a1_inv_buf[3], a0_inv_buf[3]};
endmodule
module aes_sbox_canright_masked_noreuse (
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	input wire [17:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	wire [7:0] in_data_basis_x;
	wire [7:0] out_data_basis_x;
	wire [7:0] in_mask_basis_x;
	wire [7:0] out_mask_basis_x;
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
	assign in_data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign mask_o = prd_i[7:0];
	wire [9:0] prd_masking;
	assign prd_masking = prd_i[17:8];
	assign in_mask_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X)));
	assign out_mask_basis_x = (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X)));
	aes_masked_inverse_gf2p8_noreuse u_aes_masked_inverse_gf2p8(
		.a(in_data_basis_x),
		.m(in_mask_basis_x),
		.n(out_mask_basis_x),
		.prd(prd_masking),
		.a_inv(out_data_basis_x)
	);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63));
endmodule
