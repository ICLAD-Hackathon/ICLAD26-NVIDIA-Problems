module aes_dom_indep_mul_gf2pn (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	z_0,
	a_q,
	b_q
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] z_0;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	wire [NPower - 1:0] mul_ax_ay_d;
	wire [NPower - 1:0] mul_bx_by_d;
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
	generate
		if (NPower == 4) begin : gen_inner_mul_gf2p4
			assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, a_y);
			assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x, b_y);
		end
		else begin : gen_inner_mul_gf2p2
			assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, a_y);
			assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x, b_y);
		end
	endgenerate
	wire [NPower - 1:0] mul_ax_by;
	wire [NPower - 1:0] mul_ay_bx;
	generate
		if (NPower == 4) begin : gen_cross_mul_gf2p4
			assign mul_ax_by = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, b_y);
			assign mul_ay_bx = aes_sbox_canright_pkg_aes_mul_gf2p4(a_y, b_x);
		end
		else begin : gen_cross_mul_gf2p2
			assign mul_ax_by = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, b_y);
			assign mul_ay_bx = aes_sbox_canright_pkg_aes_mul_gf2p2(a_y, b_x);
		end
	endgenerate
	wire [NPower - 1:0] aq_z0_d;
	wire [NPower - 1:0] bq_z0_d;
	wire [NPower - 1:0] aq_z0_q;
	wire [NPower - 1:0] bq_z0_q;
	assign aq_z0_d = z_0 ^ mul_ax_by;
	assign bq_z0_d = z_0 ^ mul_ay_bx;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_abq_z0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({aq_z0_d, bq_z0_d}),
		.q_o({aq_z0_q, bq_z0_q})
	);
	wire [NPower - 1:0] mul_ax_ay;
	wire [NPower - 1:0] mul_bx_by;
	generate
		if (Pipeline == 1'b1) begin : gen_pipeline
			wire [NPower - 1:0] mul_ax_ay_q;
			wire [NPower - 1:0] mul_bx_by_q;
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_mul_abx_aby(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({mul_ax_ay_d, mul_bx_by_d}),
				.q_o({mul_ax_ay_q, mul_bx_by_q})
			);
			assign mul_ax_ay = mul_ax_ay_q;
			assign mul_bx_by = mul_bx_by_q;
		end
		else begin : gen_no_pipeline
			wire [NPower - 1:0] mul_ax_ay_buf;
			wire [NPower - 1:0] mul_bx_by_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_aby(
				.in_i({mul_ax_ay_d, mul_bx_by_d}),
				.out_o({mul_ax_ay_buf, mul_bx_by_buf})
			);
			assign mul_ax_ay = mul_ax_ay_buf;
			assign mul_bx_by = mul_bx_by_buf;
		end
	endgenerate
	assign a_q = mul_ax_ay ^ aq_z0_q;
	assign b_q = mul_bx_by ^ bq_z0_q;
endmodule
module aes_dom_dep_mul_gf2pn_unopt (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	a_z,
	b_z,
	z_0,
	a_q,
	b_q
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] a_z;
	input wire [NPower - 1:0] b_z;
	input wire [NPower - 1:0] z_0;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	wire [NPower - 1:0] a_yz_d;
	wire [NPower - 1:0] b_yz_d;
	wire [NPower - 1:0] a_yz_q;
	wire [NPower - 1:0] b_yz_q;
	assign a_yz_d = a_y ^ a_z;
	assign b_yz_d = b_y ^ b_z;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_yz(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({a_yz_d, b_yz_d}),
		.q_o({a_yz_q, b_yz_q})
	);
	wire [NPower - 1:0] a_mul_x_z;
	wire [NPower - 1:0] b_mul_x_z;
	aes_dom_indep_mul_gf2pn #(
		.NPower(NPower),
		.Pipeline(Pipeline)
	) u_aes_dom_indep_mul_gf2pn(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i),
		.a_x(a_x),
		.a_y(a_z),
		.b_x(b_x),
		.b_y(b_z),
		.z_0(z_0),
		.a_q(a_mul_x_z),
		.b_q(b_mul_x_z)
	);
	wire [NPower - 1:0] a_x_calc;
	wire [NPower - 1:0] b_x_calc;
	generate
		if (Pipeline == 1'b1) begin : gen_pipeline
			wire [NPower - 1:0] a_x_q;
			wire [NPower - 1:0] b_x_q;
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_x(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({a_x, b_x}),
				.q_o({a_x_q, b_x_q})
			);
			assign a_x_calc = a_x_q;
			assign b_x_calc = b_x_q;
		end
		else begin : gen_no_pipeline
			assign a_x_calc = a_x;
			assign b_x_calc = b_x;
		end
	endgenerate
	wire [NPower - 1:0] b;
	assign b = a_yz_q ^ b_yz_q;
	wire [NPower - 1:0] a_mul_ax_b;
	wire [NPower - 1:0] b_mul_bx_b;
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
	generate
		if (NPower == 4) begin : gen_mul_gf2p4
			assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, b);
			assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b);
		end
		else begin : gen_mul_gf2p2
			assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, b);
			assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b);
		end
	endgenerate
	assign a_q = a_mul_x_z ^ a_mul_ax_b;
	assign b_q = b_mul_x_z ^ b_mul_bx_b;
endmodule
module aes_dom_dep_mul_gf2pn (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	a_x_q,
	a_y_q,
	b_x_q,
	b_y_q,
	z_0,
	z_1,
	a_q,
	b_q,
	prd_o
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	parameter [0:0] PreDomIndep = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] a_x_q;
	input wire [NPower - 1:0] a_y_q;
	input wire [NPower - 1:0] b_x_q;
	input wire [NPower - 1:0] b_y_q;
	input wire [NPower - 1:0] z_0;
	input wire [NPower - 1:0] z_1;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	output wire [(2 * NPower) - 1:0] prd_o;
	wire [NPower - 1:0] a_yz0_d;
	wire [NPower - 1:0] b_yz0_d;
	wire [NPower - 1:0] a_yz0_q;
	wire [NPower - 1:0] b_yz0_q;
	assign a_yz0_d = a_y ^ z_0;
	assign b_yz0_d = b_y ^ z_0;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_yz0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({a_yz0_d, b_yz0_d}),
		.q_o({a_yz0_q, b_yz0_q})
	);
	wire [NPower - 1:0] mul_ax_z0;
	wire [NPower - 1:0] mul_bx_z0;
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
	generate
		if (NPower == 4) begin : gen_corr_mul_gf2p4
			assign mul_ax_z0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, z_0);
			assign mul_bx_z0 = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x, z_0);
		end
		else begin : gen_corr_mul_gf2p2
			assign mul_ax_z0 = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, z_0);
			assign mul_bx_z0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x, z_0);
		end
	endgenerate
	wire [NPower - 1:0] mul_ax_z0_buf;
	wire [NPower - 1:0] mul_bx_z0_buf;
	prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_z0(
		.in_i({mul_ax_z0, mul_bx_z0}),
		.out_o({mul_ax_z0_buf, mul_bx_z0_buf})
	);
	wire [NPower - 1:0] axz0_z1_d;
	wire [NPower - 1:0] bxz0_z1_d;
	wire [NPower - 1:0] axz0_z1_q;
	wire [NPower - 1:0] bxz0_z1_q;
	assign axz0_z1_d = mul_ax_z0_buf ^ z_1;
	assign bxz0_z1_d = mul_bx_z0_buf ^ z_1;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_abxz0_z1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({axz0_z1_d, bxz0_z1_d}),
		.q_o({axz0_z1_q, bxz0_z1_q})
	);
	assign prd_o = {b_yz0_q, bxz0_z1_q};
	wire [NPower - 1:0] a_x_calc;
	wire [NPower - 1:0] b_x_calc;
	wire [NPower - 1:0] a_y_calc;
	wire [NPower - 1:0] b_y_calc;
	generate
		if ((Pipeline == 1'b1) && (PreDomIndep != 1'b1)) begin : gen_pipeline_use
			assign a_x_calc = a_x_q;
			assign b_x_calc = b_x_q;
			assign a_y_calc = a_y_q;
			assign b_y_calc = b_y_q;
		end
		else begin : gen_no_pipeline_use
			assign a_x_calc = a_x;
			assign b_x_calc = b_x;
			assign a_y_calc = a_y;
			assign b_y_calc = b_y;
			if (PreDomIndep != 1'b1) begin : gen_ab_x_q
				wire [NPower - 1:0] unused_a_x_q;
				wire [NPower - 1:0] unused_b_x_q;
				assign unused_a_x_q = a_x_q;
				assign unused_b_x_q = b_x_q;
			end
			wire [NPower - 1:0] unused_a_y_q;
			wire [NPower - 1:0] unused_b_y_q;
			assign unused_a_y_q = a_y_q;
			assign unused_b_y_q = b_y_q;
		end
		if (PreDomIndep == 1'b1) begin : gen_pre_dom_indep
			wire [NPower - 1:0] mul_ax_ay_d;
			wire [NPower - 1:0] mul_bx_by_d;
			wire [NPower - 1:0] mul_ax_ay_q;
			wire [NPower - 1:0] mul_bx_by_q;
			if (NPower == 4) begin : gen_inner_mul_gf2p4
				assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, a_y_calc);
				assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b_y_calc);
			end
			else begin : gen_inner_mul_gf2p2
				assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, a_y_calc);
				assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b_y_calc);
			end
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_mul_abx_aby(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({mul_ax_ay_d, mul_bx_by_d}),
				.q_o({mul_ax_ay_q, mul_bx_by_q})
			);
			wire [NPower - 1:0] mul_ax_byz0;
			wire [NPower - 1:0] mul_bx_ayz0;
			if (NPower == 4) begin : gen_cross_mul_gf2p4
				assign mul_ax_byz0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_q, b_yz0_q);
				assign mul_bx_ayz0 = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_q, a_yz0_q);
			end
			else begin : gen_cross_mul_gf2p2
				assign mul_ax_byz0 = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_q, b_yz0_q);
				assign mul_bx_ayz0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_q, a_yz0_q);
			end
			wire [NPower - 1:0] mul_ax_byz0_buf;
			wire [NPower - 1:0] mul_bx_ayz0_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_bayz0(
				.in_i({mul_ax_byz0, mul_bx_ayz0}),
				.out_o({mul_ax_byz0_buf, mul_bx_ayz0_buf})
			);
			assign a_q = (axz0_z1_q ^ mul_ax_ay_q) ^ mul_ax_byz0_buf;
			assign b_q = (bxz0_z1_q ^ mul_bx_by_q) ^ mul_bx_ayz0_buf;
		end
		else begin : gen_not_pre_dom_indep
			wire [NPower - 1:0] a_b;
			wire [NPower - 1:0] b_b;
			assign a_b = a_y_calc ^ b_yz0_q;
			assign b_b = b_y_calc ^ a_yz0_q;
			wire [NPower - 1:0] a_b_buf;
			wire [NPower - 1:0] b_b_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_ab_b(
				.in_i({a_b, b_b}),
				.out_o({a_b_buf, b_b_buf})
			);
			wire [NPower - 1:0] a_mul_ax_b;
			wire [NPower - 1:0] b_mul_bx_b;
			if (NPower == 4) begin : gen_mul_gf2p4
				assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, a_b_buf);
				assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b_b_buf);
			end
			else begin : gen_mul_gf2p2
				assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, a_b_buf);
				assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b_b_buf);
			end
			wire [NPower - 1:0] a_mul_ax_b_buf;
			wire [NPower - 1:0] b_mul_bx_b_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_ab_mul_abx_b(
				.in_i({a_mul_ax_b, b_mul_bx_b}),
				.out_o({a_mul_ax_b_buf, b_mul_bx_b_buf})
			);
			assign a_q = axz0_z1_q ^ a_mul_ax_b_buf;
			assign b_q = bxz0_z1_q ^ b_mul_bx_b_buf;
		end
	endgenerate
endmodule
module aes_dom_inverse_gf2p4 (
	clk_i,
	rst_ni,
	we_i,
	a_gamma,
	b_gamma,
	prd_2_i,
	prd_3_i,
	a_gamma_inv,
	b_gamma_inv,
	prd_2_o,
	prd_3_o
);
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire [1:0] we_i;
	input wire [3:0] a_gamma;
	input wire [3:0] b_gamma;
	input wire [3:0] prd_2_i;
	input wire [7:0] prd_3_i;
	output wire [3:0] a_gamma_inv;
	output wire [3:0] b_gamma_inv;
	output wire [7:0] prd_2_o;
	output wire [7:0] prd_3_o;
	wire [1:0] a_gamma1;
	wire [1:0] a_gamma0;
	wire [1:0] b_gamma1;
	wire [1:0] b_gamma0;
	wire [1:0] a_gamma1_gamma0;
	wire [1:0] b_gamma1_gamma0;
	assign a_gamma1 = a_gamma[3:2];
	assign a_gamma0 = a_gamma[1:0];
	assign b_gamma1 = b_gamma[3:2];
	assign b_gamma0 = b_gamma[1:0];
	wire [1:0] a_gamma_ss_d;
	wire [1:0] b_gamma_ss_d;
	wire [1:0] a_gamma_ss_q;
	wire [1:0] b_gamma_ss_q;
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
	assign a_gamma_ss_d = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(a_gamma1 ^ a_gamma0));
	assign b_gamma_ss_d = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(b_gamma1 ^ b_gamma0));
	prim_flop_en #(
		.Width(4),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_gamma_ss(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_gamma_ss_d, b_gamma_ss_d}),
		.q_o({a_gamma_ss_q, b_gamma_ss_q})
	);
	wire [1:0] a_gamma1_q;
	wire [1:0] a_gamma0_q;
	wire [1:0] b_gamma1_q;
	wire [1:0] b_gamma0_q;
	prim_flop_en #(
		.Width(8),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_gamma10(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_gamma1, a_gamma0, b_gamma1, b_gamma0}),
		.q_o({a_gamma1_q, a_gamma0_q, b_gamma1_q, b_gamma0_q})
	);
	wire [3:0] b_gamma10_prd2;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_gamma1_gamma0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[0]),
		.a_x(a_gamma1),
		.a_y(a_gamma0),
		.b_x(b_gamma1),
		.b_y(b_gamma0),
		.a_x_q(a_gamma1_q),
		.a_y_q(a_gamma0_q),
		.b_x_q(b_gamma1_q),
		.b_y_q(b_gamma0_q),
		.z_0(prd_2_i[1:0]),
		.z_1(prd_2_i[3:2]),
		.a_q(a_gamma1_gamma0),
		.b_q(b_gamma1_gamma0),
		.prd_o(b_gamma10_prd2)
	);
	assign prd_2_o = {b_gamma1_q, b_gamma10_prd2[3:2], b_gamma0_q, b_gamma10_prd2[1:0]};
	wire [1:0] a_omega;
	wire [1:0] b_omega;
	assign a_omega = aes_sbox_canright_pkg_aes_square_gf2p2(a_gamma1_gamma0 ^ a_gamma_ss_q);
	assign b_omega = aes_sbox_canright_pkg_aes_square_gf2p2(b_gamma1_gamma0 ^ b_gamma_ss_q);
	wire [1:0] a_omega_buf;
	wire [1:0] b_omega_buf;
	prim_buf #(.Width(4)) u_prim_buf_ab_omega(
		.in_i({a_omega, b_omega}),
		.out_o({a_omega_buf, b_omega_buf})
	);
	wire [1:0] a_gamma1_qq;
	wire [1:0] a_gamma0_qq;
	wire [1:0] b_gamma1_qq;
	wire [1:0] b_gamma0_qq;
	wire [1:0] a_omega_buf_q;
	wire [1:0] b_omega_buf_q;
	generate
		if (PipelineMul == 1'b1) begin : gen_prim_flop_omega_gamma10
			prim_flop_en #(
				.Width(8),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_gamma10_q(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[1]),
				.d_i({a_gamma1_q, a_gamma0_q, b_gamma1_q, b_gamma0_q}),
				.q_o({a_gamma1_qq, a_gamma0_qq, b_gamma1_qq, b_gamma0_qq})
			);
			prim_flop_en #(
				.Width(4),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_omega_buf(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[1]),
				.d_i({a_omega_buf, b_omega_buf}),
				.q_o({a_omega_buf_q, b_omega_buf_q})
			);
		end
		else begin : gen_no_prim_flop_ab_y10
			assign a_gamma1_qq = 1'sb0;
			assign a_gamma0_qq = 1'sb0;
			assign b_gamma1_qq = 1'sb0;
			assign b_gamma0_qq = 1'sb0;
			assign a_omega_buf_q = 1'sb0;
			assign b_omega_buf_q = 1'sb0;
		end
	endgenerate
	wire [3:0] b_gamma1_omega_prd3;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_omega_gamma1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[1]),
		.a_x(a_gamma1_q),
		.a_y(a_omega_buf),
		.b_x(b_gamma1_q),
		.b_y(b_omega_buf),
		.a_x_q(a_gamma1_qq),
		.a_y_q(a_omega_buf_q),
		.b_x_q(b_gamma1_qq),
		.b_y_q(b_omega_buf_q),
		.z_0(prd_3_i[5:4]),
		.z_1(prd_3_i[7:6]),
		.a_q(a_gamma_inv[1:0]),
		.b_q(b_gamma_inv[1:0]),
		.prd_o(b_gamma1_omega_prd3)
	);
	wire [3:0] b_gamma0_omega_prd3;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_omega_gamma0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[1]),
		.a_x(a_omega_buf),
		.a_y(a_gamma0_q),
		.b_x(b_omega_buf),
		.b_y(b_gamma0_q),
		.a_x_q(a_omega_buf_q),
		.a_y_q(a_gamma0_qq),
		.b_x_q(b_omega_buf_q),
		.b_y_q(b_gamma0_qq),
		.z_0(prd_3_i[1:0]),
		.z_1(prd_3_i[3:2]),
		.a_q(a_gamma_inv[3:2]),
		.b_q(b_gamma_inv[3:2]),
		.prd_o(b_gamma0_omega_prd3)
	);
	assign prd_3_o = {b_gamma1_omega_prd3, b_gamma0_omega_prd3};
endmodule
module aes_dom_inverse_gf2p8 (
	clk_i,
	rst_ni,
	we_i,
	a_y,
	b_y,
	prd_i,
	a_y_inv,
	b_y_inv,
	prd_o
);
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire [3:0] we_i;
	input wire [7:0] a_y;
	input wire [7:0] b_y;
	input wire [27:0] prd_i;
	output wire [7:0] a_y_inv;
	output wire [7:0] b_y_inv;
	output wire [19:0] prd_o;
	wire [3:0] a_y1;
	wire [3:0] a_y0;
	wire [3:0] b_y1;
	wire [3:0] b_y0;
	wire [3:0] a_y1_y0;
	wire [3:0] b_y1_y0;
	assign a_y1 = a_y[7:4];
	assign a_y0 = a_y[3:0];
	assign b_y1 = b_y[7:4];
	assign b_y0 = b_y[3:0];
	wire [3:0] a_y_ss_d;
	wire [3:0] b_y_ss_d;
	wire [3:0] a_y_ss_q;
	wire [3:0] b_y_ss_q;
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
	assign a_y_ss_d = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a_y1 ^ a_y0);
	assign b_y_ss_d = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(b_y1 ^ b_y0);
	prim_flop_en #(
		.Width(8),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_y_ss(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_y_ss_d, b_y_ss_d}),
		.q_o({a_y_ss_q, b_y_ss_q})
	);
	wire [3:0] a_y1_q;
	wire [3:0] a_y0_q;
	wire [3:0] b_y1_q;
	wire [3:0] b_y0_q;
	generate
		if (PipelineMul == 1'b1) begin : gen_prim_flop_ab_y10
			prim_flop_en #(
				.Width(16),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_y10(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[0]),
				.d_i({a_y1, a_y0, b_y1, b_y0}),
				.q_o({a_y1_q, a_y0_q, b_y1_q, b_y0_q})
			);
		end
		else begin : gen_no_prim_flop_ab_y10
			assign a_y1_q = 1'sb0;
			assign a_y0_q = 1'sb0;
			assign b_y1_q = 1'sb0;
			assign b_y0_q = 1'sb0;
		end
	endgenerate
	wire [7:0] b_y10_prd1;
	aes_dom_dep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_y1_y0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[0]),
		.a_x(a_y1),
		.a_y(a_y0),
		.b_x(b_y1),
		.b_y(b_y0),
		.a_x_q(a_y1_q),
		.a_y_q(a_y0_q),
		.b_x_q(b_y1_q),
		.b_y_q(b_y0_q),
		.z_0(prd_i[23:20]),
		.z_1(prd_i[27:24]),
		.a_q(a_y1_y0),
		.b_q(b_y1_y0),
		.prd_o(b_y10_prd1)
	);
	wire [3:0] a_gamma;
	wire [3:0] b_gamma;
	assign a_gamma = a_y_ss_q ^ a_y1_y0;
	assign b_gamma = b_y_ss_q ^ b_y1_y0;
	wire [3:0] a_gamma_buf;
	wire [3:0] b_gamma_buf;
	prim_buf #(.Width(8)) u_prim_buf_ab_gamma(
		.in_i({a_gamma, b_gamma}),
		.out_o({a_gamma_buf, b_gamma_buf})
	);
	assign prd_o[19-:4] = b_y10_prd1[3:0];
	wire [3:0] unused_prd;
	assign unused_prd = b_y10_prd1[7:4];
	wire [3:0] a_theta;
	wire [3:0] b_theta;
	aes_dom_inverse_gf2p4 #(.PipelineMul(PipelineMul)) u_aes_dom_inverse_gf2p4(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[2:1]),
		.a_gamma(a_gamma_buf),
		.b_gamma(b_gamma_buf),
		.prd_2_i(prd_i[19-:4]),
		.prd_3_i(prd_i[15-:8]),
		.a_gamma_inv(a_theta),
		.b_gamma_inv(b_theta),
		.prd_2_o(prd_o[15-:8]),
		.prd_3_o(prd_o[7-:8])
	);
	wire [3:0] a_y1_qqq;
	wire [3:0] a_y0_qqq;
	wire [3:0] b_y1_qqq;
	wire [3:0] b_y0_qqq;
	prim_flop_en #(
		.Width(16),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_y10_qqq(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[2]),
		.d_i({a_y1, a_y0, b_y1, b_y0}),
		.q_o({a_y1_qqq, a_y0_qqq, b_y1_qqq, b_y0_qqq})
	);
	aes_dom_indep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul)
	) u_aes_dom_mul_theta_y1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[3]),
		.a_x(a_y1_qqq),
		.a_y(a_theta),
		.b_x(b_y1_qqq),
		.b_y(b_theta),
		.z_0(prd_i[7:4]),
		.a_q(a_y_inv[3:0]),
		.b_q(b_y_inv[3:0])
	);
	aes_dom_indep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul)
	) u_aes_dom_mul_theta_y0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[3]),
		.a_x(a_theta),
		.a_y(a_y0_qqq),
		.b_x(b_theta),
		.b_y(b_y0_qqq),
		.z_0(prd_i[3:0]),
		.a_q(a_y_inv[7:4]),
		.b_q(b_y_inv[7:4])
	);
endmodule
module aes_sbox_dom (
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
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	output wire out_req_o;
	input wire out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	input wire [27:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	output wire [19:0] prd_o;
	wire [7:0] in_data_basis_x;
	wire [7:0] out_data_basis_x;
	wire [7:0] in_mask_basis_x;
	wire [7:0] out_mask_basis_x;
	wire [3:0] we;
	wire [27:0] in_prd;
	wire [19:0] out_prd;
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
	assign in_mask_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X)));
	aes_dom_inverse_gf2p8 #(.PipelineMul(PipelineMul)) u_aes_dom_inverse_gf2p8(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we),
		.a_y(in_data_basis_x),
		.b_y(in_mask_basis_x),
		.prd_i(in_prd),
		.a_y_inv(out_data_basis_x),
		.b_y_inv(out_mask_basis_x),
		.prd_o(out_prd)
	);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63));
	assign mask_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2S) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2S)));
	wire [2:0] count_d;
	reg [2:0] count_q;
	assign count_d = (out_req_o && out_ack_i ? {3 {1'sb0}} : (out_req_o ? count_q : (en_i ? count_q + 3'd1 : count_q)));
	always @(posedge clk_i or negedge rst_ni) begin : reg_count
		if (!rst_ni)
			count_q <= 1'sb0;
		else
			count_q <= count_d;
	end
	assign out_req_o = en_i & (count_q == 3'd4);
	assign we[0] = en_i & (count_q == 3'd0);
	assign we[1] = en_i & (count_q == 3'd1);
	assign we[2] = en_i & (count_q == 3'd2);
	assign we[3] = en_i & (count_q == 3'd3);
	assign in_prd = {prd_i[7:0], prd_i[11:8], prd_i[19:12], prd_i[27:20]};
	assign prd_o = {out_prd[7-:8], out_prd[15-:8], out_prd[19-:4]};
endmodule
