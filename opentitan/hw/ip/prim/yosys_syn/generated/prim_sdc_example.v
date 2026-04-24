module prim_sdc_example (
	clk_i,
	rst_ni,
	data_a_i,
	data_b_i,
	data_c_i,
	en_i,
	test_res_o,
	test_xor_o,
	test_const_o,
	test_var_o,
	test_mubi_out_o,
	test_mubi_bool_out_o,
	test_clk_gen_o,
	test_lc_out_o,
	test_lc_bool_out_o
);
	localparam [31:0] Width = 8;
	localparam [31:0] NumSender = 4;
	localparam [31:0] NumTests = 12;
	localparam [31:0] NumSenderLc = 2;
	localparam [31:0] NumTestsLc = 6;
	input wire clk_i;
	input wire rst_ni;
	input wire [31:0] data_a_i;
	input wire [31:0] data_b_i;
	input wire [31:0] data_c_i;
	input wire en_i;
	output wire [31:0] test_res_o;
	output wire test_xor_o;
	output wire test_const_o;
	output wire test_var_o;
	output wire [1:0] test_mubi_out_o;
	output wire [(NumSender * NumTests) - 1:0] test_mubi_bool_out_o;
	output wire [31:0] test_clk_gen_o;
	output wire [1:0] test_lc_out_o;
	output wire [(NumSenderLc * NumTestsLc) - 1:0] test_lc_bool_out_o;
	localparam [31:0] NumStages = 4;
	localparam [31:0] ConstA = 32'h0ff0abba;
	localparam [31:0] ConstB = 32'h1234abcd;
	wire [127:0] res;
	wire [127:0] res_buf;
	wire [31:0] data_a;
	wire [31:0] data_b;
	wire [31:0] data_c;
	wire [31:0] const_a;
	wire [31:0] const_b;
	prim_const_sec #(
		.Width(32),
		.ConstVal(ConstA)
	) u_const_sec_a(.out_o(const_a));
	prim_const #(
		.Width(32),
		.ConstVal(ConstB)
	) u_const_b(.out_o(const_b));
	prim_buf #(.Width(32)) u_prim_buf_data_a(
		.in_i(data_a_i),
		.out_o(data_a)
	);
	prim_buf #(.Width(32)) u_prim_buf_data_b(
		.in_i(data_b_i),
		.out_o(data_b)
	);
	prim_buf #(.Width(32)) u_prim_buf_data_c(
		.in_i(data_c_i),
		.out_o(data_c)
	);
	assign res[0+:32] = data_a + data_b;
	prim_buf #(.Width(32)) u_prim_buf_res0(
		.in_i(res[0+:32]),
		.out_o(res_buf[0+:32])
	);
	assign res[32+:32] = res_buf[0+:32] + const_a;
	prim_buf #(.Width(32)) u_prim_buf_res1(
		.in_i(res[32+:32]),
		.out_o(res_buf[32+:32])
	);
	assign res[64+:32] = res_buf[32+:32] * const_b;
	prim_buf #(.Width(32)) u_prim_buf_res2(
		.in_i(res[64+:32]),
		.out_o(res_buf[64+:32])
	);
	assign res[96+:32] = res_buf[64+:32] * data_c;
	prim_buf #(.Width(32)) u_prim_buf_res3(
		.in_i(res[96+:32]),
		.out_o(res_buf[96+:32])
	);
	assign test_res_o = res_buf[96+:32];
	wire [31:0] res_xor2_0;
	wire [31:0] res_xor2_1;
	prim_xor2 #(.Width(32)) u_prim_xor2_0(
		.in0_i(data_a_i),
		.in1_i(data_b_i),
		.out_o(res_xor2_0)
	);
	prim_xor2 #(.Width(32)) u_prim_xor2_1(
		.in0_i(res_xor2_0),
		.in1_i(data_b_i),
		.out_o(res_xor2_1)
	);
	assign test_xor_o = (res_xor2_1 == data_a_i ? 1'b1 : 1'b0);
	localparam [31:0] NumConst = 6;
	localparam [31:0] NumGates = 7;
	localparam [(NumConst * Width) - 1:0] ConstIn0 = 48'habba01fef00f;
	localparam [(NumConst * Width) - 1:0] ConstIn1 = 48'h102539bcd15f;
	wire [((NumConst * NumGates) * 8) - 1:0] const_out_not_removed;
	genvar _gv_idx_1;
	generate
		for (_gv_idx_1 = 0; _gv_idx_1 < NumConst; _gv_idx_1 = _gv_idx_1 + 1) begin : g_num_consts
			localparam idx = _gv_idx_1;
			prim_buf #(.Width(Width)) u_prim_buf(
				.in_i(ConstIn0[(5 - idx) * Width+:Width]),
				.out_o(const_out_not_removed[(idx * NumGates) * 8+:8])
			);
			prim_and2 #(.Width(Width)) u_prim_and2(
				.in0_i(ConstIn0[(5 - idx) * Width+:Width]),
				.in1_i(ConstIn1[(5 - idx) * Width+:Width]),
				.out_o(const_out_not_removed[((idx * NumGates) + 1) * 8+:8])
			);
			prim_xor2 #(.Width(Width)) u_prim_xor2(
				.in0_i(ConstIn0[(5 - idx) * Width+:Width]),
				.in1_i(ConstIn1[(5 - idx) * Width+:Width]),
				.out_o(const_out_not_removed[((idx * NumGates) + 2) * 8+:8])
			);
			prim_xnor2 #(.Width(Width)) u_prim_xnor2(
				.in0_i(ConstIn0[(5 - idx) * Width+:Width]),
				.in1_i(ConstIn1[(5 - idx) * Width+:Width]),
				.out_o(const_out_not_removed[((idx * NumGates) + 3) * 8+:8])
			);
			prim_flop #(.Width(Width)) u_prim_flop(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(ConstIn0[(5 - idx) * Width+:Width]),
				.q_o(const_out_not_removed[((idx * NumGates) + 4) * 8+:8])
			);
			prim_flop_en #(.Width(Width)) u_prim_flop_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(en_i),
				.d_i(ConstIn0[(5 - idx) * Width+:Width]),
				.q_o(const_out_not_removed[((idx * NumGates) + 5) * 8+:8])
			);
			prim_flop_no_rst #(.Width(Width)) u_prim_flop_no_rst(
				.clk_i(clk_i),
				.d_i(ConstIn0[(5 - idx) * Width+:Width]),
				.q_o(const_out_not_removed[((idx * NumGates) + 6) * 8+:8])
			);
		end
	endgenerate
	assign test_const_o = ^const_out_not_removed;
	wire [(NumGates * Width) - 1:0] var_out_not_removed;
	prim_buf #(.Width(Width)) u_prim_buf(
		.in_i(data_a[7:0]),
		.out_o(var_out_not_removed[0+:Width])
	);
	prim_and2 #(.Width(Width)) u_prim_and2(
		.in0_i(data_a[7:0]),
		.in1_i(data_b[7:0]),
		.out_o(var_out_not_removed[Width+:Width])
	);
	prim_xor2 #(.Width(Width)) u_prim_xor2(
		.in0_i(data_a[7:0]),
		.in1_i(data_b[7:0]),
		.out_o(var_out_not_removed[16+:Width])
	);
	prim_xnor2 #(.Width(Width)) u_prim_xnor2(
		.in0_i(data_a[7:0]),
		.in1_i(data_b[7:0]),
		.out_o(var_out_not_removed[24+:Width])
	);
	prim_flop #(.Width(Width)) u_prim_flop(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(data_a[7:0]),
		.q_o(var_out_not_removed[32+:Width])
	);
	prim_flop_en #(.Width(Width)) u_prim_flop_en(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(en_i),
		.d_i(data_a[7:0]),
		.q_o(var_out_not_removed[40+:Width])
	);
	prim_flop_no_rst #(.Width(Width)) u_prim_flop_no_rst(
		.clk_i(clk_i),
		.d_i(data_a[7:0]),
		.q_o(var_out_not_removed[48+:Width])
	);
	assign test_var_o = ^var_out_not_removed;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	wire [(NumSender * prim_mubi_pkg_MuBi4Width) - 1:0] mubi4_true_out;
	wire [(NumSender * prim_mubi_pkg_MuBi4Width) - 1:0] mubi4_false_out;
	wire [(NumSender * prim_mubi_pkg_MuBi4Width) - 1:0] mubi4_var_out;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(0)
	) u_mubi4_sender_true0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h6)),
		.mubi_o(mubi4_true_out[0+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(0)
	) u_mubi4_sender_false0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_false_out[0+:prim_mubi_pkg_MuBi4Width])
	);
	function automatic [3:0] prim_mubi_pkg_mubi4_bool_to_mubi;
		input reg val;
		prim_mubi_pkg_mubi4_bool_to_mubi = (val ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	endfunction
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(0)
	) u_mubi4_sender_var0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_a_i[0])),
		.mubi_o(mubi4_var_out[0+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(0)
	) u_mubi4_sender_true1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h6)),
		.mubi_o(mubi4_true_out[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(0)
	) u_mubi4_sender_false1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_false_out[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(0)
	) u_mubi4_sender_var1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_a_i[1])),
		.mubi_o(mubi4_var_out[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(1)
	) u_mubi4_sender_true2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_true_out[8+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(1)
	) u_mubi4_sender_false2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_false_out[8+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(0),
		.EnSecBuf(1)
	) u_mubi4_sender_var2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_a_i[2])),
		.mubi_o(mubi4_var_out[8+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(1)
	) u_mubi4_sender_true3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_true_out[12+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(1)
	) u_mubi4_sender_false3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(sv2v_cast_EECFA(4'h9)),
		.mubi_o(mubi4_false_out[12+:prim_mubi_pkg_MuBi4Width])
	);
	prim_mubi4_sender #(
		.AsyncOn(1),
		.EnSecBuf(1)
	) u_mubi4_sender_var3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_a_i[3])),
		.mubi_o(mubi4_var_out[12+:prim_mubi_pkg_MuBi4Width])
	);
	genvar _gv_idx_2;
	function automatic prim_mubi_pkg_mubi4_test_false_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_loose = sv2v_cast_EECFA(4'h6) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_strict = sv2v_cast_EECFA(4'h9) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_loose = sv2v_cast_EECFA(4'h9) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	generate
		for (_gv_idx_2 = 0; _gv_idx_2 < NumSender; _gv_idx_2 = _gv_idx_2 + 1) begin : g_out
			localparam idx = _gv_idx_2;
			assign test_mubi_bool_out_o[idx * NumTests] = prim_mubi_pkg_mubi4_test_true_strict(mubi4_true_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 1] = prim_mubi_pkg_mubi4_test_true_loose(mubi4_true_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 2] = prim_mubi_pkg_mubi4_test_false_strict(mubi4_true_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 3] = prim_mubi_pkg_mubi4_test_false_loose(mubi4_true_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 4] = prim_mubi_pkg_mubi4_test_true_strict(mubi4_false_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 5] = prim_mubi_pkg_mubi4_test_true_loose(mubi4_false_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 6] = prim_mubi_pkg_mubi4_test_false_strict(mubi4_false_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 7] = prim_mubi_pkg_mubi4_test_false_loose(mubi4_false_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 8] = prim_mubi_pkg_mubi4_test_true_strict(mubi4_var_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 9] = prim_mubi_pkg_mubi4_test_true_loose(mubi4_var_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 10] = prim_mubi_pkg_mubi4_test_false_strict(mubi4_var_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
			assign test_mubi_bool_out_o[(idx * NumTests) + 11] = prim_mubi_pkg_mubi4_test_false_loose(mubi4_var_out[idx * prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
		end
	endgenerate
	localparam [31:0] NumCopies = 2;
	wire [(NumCopies * prim_mubi_pkg_MuBi4Width) - 1:0] mubi_var0;
	wire [(NumCopies * prim_mubi_pkg_MuBi4Width) - 1:0] mubi_var1;
	wire [7:0] mubi_var_comp;
	prim_mubi4_sync #(
		.NumCopies(NumCopies),
		.AsyncOn(0)
	) u_prim_mubi4_sync0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_a_i[0])),
		.mubi_o(mubi_var0)
	);
	prim_mubi4_sync #(
		.NumCopies(NumCopies),
		.AsyncOn(1)
	) u_prim_mubi4_sync1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(prim_mubi_pkg_mubi4_bool_to_mubi(data_b_i[0])),
		.mubi_o(mubi_var1)
	);
	function automatic [3:0] prim_mubi_pkg_mubi4_or;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_1
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi4_or = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_or_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_or_hi = prim_mubi_pkg_mubi4_or(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	assign mubi_var_comp[0+:prim_mubi_pkg_MuBi4Width] = prim_mubi_pkg_mubi4_or_hi(mubi_var0[0+:prim_mubi_pkg_MuBi4Width], mubi_var0[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
	function automatic [3:0] prim_mubi_pkg_mubi4_and;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_2
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi4_and = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_and_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_and_hi = prim_mubi_pkg_mubi4_and(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	assign mubi_var_comp[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width] = prim_mubi_pkg_mubi4_and_hi(mubi_var1[0+:prim_mubi_pkg_MuBi4Width], mubi_var1[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
	assign test_mubi_out_o[0] = prim_mubi_pkg_mubi4_test_false_loose(mubi_var_comp[0+:prim_mubi_pkg_MuBi4Width]);
	assign test_mubi_out_o[1] = prim_mubi_pkg_mubi4_test_true_loose(mubi_var_comp[prim_mubi_pkg_MuBi4Width+:prim_mubi_pkg_MuBi4Width]);
	wire [1:0] clk;
	wire [1:0] clk_muxed;
	prim_clock_gating u_prim_clk_gate_const0(
		.clk_i(clk_i),
		.en_i(1'b0),
		.test_en_i(1'b0),
		.clk_o(clk[0])
	);
	prim_clock_gating u_prim_clk_gate_const1(
		.clk_i(clk_i),
		.en_i(1'b1),
		.test_en_i(1'b0),
		.clk_o(clk[1])
	);
	prim_clock_mux2 u_prim_clock_mux_const0(
		.clk0_i(clk_i),
		.clk1_i(1'b0),
		.sel_i(1'b0),
		.clk_o(clk_muxed[0])
	);
	prim_clock_mux2 u_prim_clock_mux_const1(
		.clk0_i(clk_i),
		.clk1_i(1'b0),
		.sel_i(1'b1),
		.clk_o(clk_muxed[1])
	);
	genvar _gv_idx_3;
	generate
		for (_gv_idx_3 = 0; _gv_idx_3 < 2; _gv_idx_3 = _gv_idx_3 + 1) begin : g_flops
			localparam idx = _gv_idx_3;
			prim_flop #(.Width(Width)) u_prim_flop_clk_const(
				.clk_i(clk[idx]),
				.rst_ni(rst_ni),
				.d_i(data_a[7:0]),
				.q_o(test_clk_gen_o[(0 + (2 * idx)) * Width+:Width])
			);
			prim_flop #(.Width(Width)) u_prim_flop_clk_muxed(
				.clk_i(clk_muxed[idx]),
				.rst_ni(rst_ni),
				.d_i(data_b[7:0]),
				.q_o(test_clk_gen_o[(1 + (2 * idx)) * Width+:Width])
			);
		end
	endgenerate
	localparam [31:0] NumCopiesLc = 2;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	wire [(NumCopiesLc * lc_ctrl_pkg_TxWidth) - 1:0] lc_var0;
	wire [(NumCopiesLc * lc_ctrl_pkg_TxWidth) - 1:0] lc_var1;
	wire [7:0] lc_var_comp;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic [3:0] lc_ctrl_pkg_lc_tx_bool_to_lc_tx;
		input reg val;
		lc_ctrl_pkg_lc_tx_bool_to_lc_tx = (val ? sv2v_cast_BE429(4'b0101) : sv2v_cast_BE429(4'b1010));
	endfunction
	prim_lc_sync #(
		.NumCopies(NumCopiesLc),
		.AsyncOn(0)
	) u_prim_lc_sync0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_ctrl_pkg_lc_tx_bool_to_lc_tx(data_a_i[0])),
		.lc_en_o(lc_var0)
	);
	prim_lc_sync #(
		.NumCopies(NumCopiesLc),
		.AsyncOn(1)
	) u_prim_lc_sync1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_ctrl_pkg_lc_tx_bool_to_lc_tx(data_b_i[0])),
		.lc_en_o(lc_var1)
	);
	function automatic [3:0] lc_ctrl_pkg_lc_tx_or;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_3
				reg signed [31:0] k;
				for (k = 0; k < lc_ctrl_pkg_TxWidth; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			lc_ctrl_pkg_lc_tx_or = sv2v_cast_BE429(out);
		end
	endfunction
	function automatic [3:0] lc_ctrl_pkg_lc_tx_or_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		lc_ctrl_pkg_lc_tx_or_hi = lc_ctrl_pkg_lc_tx_or(a, b, sv2v_cast_BE429(4'b0101));
	endfunction
	assign lc_var_comp[0+:lc_ctrl_pkg_TxWidth] = lc_ctrl_pkg_lc_tx_or_hi(lc_var0[0+:lc_ctrl_pkg_TxWidth], lc_var0[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
	function automatic [3:0] lc_ctrl_pkg_lc_tx_and;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_4
				reg signed [31:0] k;
				for (k = 0; k < lc_ctrl_pkg_TxWidth; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			lc_ctrl_pkg_lc_tx_and = sv2v_cast_BE429(out);
		end
	endfunction
	function automatic [3:0] lc_ctrl_pkg_lc_tx_and_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		lc_ctrl_pkg_lc_tx_and_hi = lc_ctrl_pkg_lc_tx_and(a, b, sv2v_cast_BE429(4'b0101));
	endfunction
	assign lc_var_comp[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] = lc_ctrl_pkg_lc_tx_and_hi(lc_var1[0+:lc_ctrl_pkg_TxWidth], lc_var1[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
	function automatic lc_ctrl_pkg_lc_tx_test_false_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_false_loose = sv2v_cast_BE429(4'b0101) != val;
	endfunction
	assign test_lc_out_o[0] = lc_ctrl_pkg_lc_tx_test_false_loose(lc_var_comp[0+:lc_ctrl_pkg_TxWidth]);
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	assign test_lc_out_o[1] = lc_ctrl_pkg_lc_tx_test_true_loose(lc_var_comp[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
	wire [(NumSenderLc * lc_ctrl_pkg_TxWidth) - 1:0] lc_on_out;
	wire [(NumSenderLc * lc_ctrl_pkg_TxWidth) - 1:0] lc_off_out;
	wire [(NumSenderLc * lc_ctrl_pkg_TxWidth) - 1:0] lc_var_out;
	prim_lc_sender #(.AsyncOn(0)) u_lc_sender_on0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(sv2v_cast_BE429(4'b0101)),
		.lc_en_o(lc_on_out[0+:lc_ctrl_pkg_TxWidth])
	);
	prim_lc_sender #(.AsyncOn(0)) u_lc_sender_off0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(sv2v_cast_BE429(4'b1010)),
		.lc_en_o(lc_off_out[0+:lc_ctrl_pkg_TxWidth])
	);
	prim_lc_sender #(.AsyncOn(0)) u_lc_sender_var0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_ctrl_pkg_lc_tx_bool_to_lc_tx(data_a_i[0])),
		.lc_en_o(lc_var_out[0+:lc_ctrl_pkg_TxWidth])
	);
	prim_lc_sender #(.AsyncOn(1)) u_lc_sender_on1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(sv2v_cast_BE429(4'b0101)),
		.lc_en_o(lc_on_out[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth])
	);
	prim_lc_sender #(.AsyncOn(1)) u_lc_sender_off1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(sv2v_cast_BE429(4'b1010)),
		.lc_en_o(lc_off_out[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth])
	);
	prim_lc_sender #(.AsyncOn(1)) u_lc_sender_var1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_ctrl_pkg_lc_tx_bool_to_lc_tx(data_a_i[1])),
		.lc_en_o(lc_var_out[lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth])
	);
	genvar _gv_idx_4;
	function automatic lc_ctrl_pkg_lc_tx_test_false_strict;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_false_strict = sv2v_cast_BE429(4'b1010) == val;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_invalid;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_invalid = ~(|{((sv2v_cast_BE429(4'b0101) ^ (val ^ val)) === (val ^ (sv2v_cast_BE429(4'b0101) ^ sv2v_cast_BE429(4'b0101)))) & ((((val ^ val) ^ (sv2v_cast_BE429(4'b0101) ^ sv2v_cast_BE429(4'b0101))) === (sv2v_cast_BE429(4'b0101) ^ sv2v_cast_BE429(4'b0101))) | 1'bx), ((sv2v_cast_BE429(4'b1010) ^ (val ^ val)) === (val ^ (sv2v_cast_BE429(4'b1010) ^ sv2v_cast_BE429(4'b1010)))) & ((((val ^ val) ^ (sv2v_cast_BE429(4'b1010) ^ sv2v_cast_BE429(4'b1010))) === (sv2v_cast_BE429(4'b1010) ^ sv2v_cast_BE429(4'b1010))) | 1'bx)});
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_strict;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_strict = sv2v_cast_BE429(4'b0101) == val;
	endfunction
	generate
		for (_gv_idx_4 = 0; _gv_idx_4 < NumSenderLc; _gv_idx_4 = _gv_idx_4 + 1) begin : g_lc_bool_out
			localparam idx = _gv_idx_4;
			assign test_lc_bool_out_o[idx * NumTestsLc] = lc_ctrl_pkg_lc_tx_test_true_strict(lc_on_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
			assign test_lc_bool_out_o[(idx * NumTestsLc) + 1] = lc_ctrl_pkg_lc_tx_test_false_strict(lc_on_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
			assign test_lc_bool_out_o[(idx * NumTestsLc) + 2] = lc_ctrl_pkg_lc_tx_test_true_loose(lc_off_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
			assign test_lc_bool_out_o[(idx * NumTestsLc) + 3] = lc_ctrl_pkg_lc_tx_test_false_loose(lc_off_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
			assign test_lc_bool_out_o[(idx * NumTestsLc) + 4] = lc_ctrl_pkg_lc_tx_test_invalid(lc_var_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
			assign test_lc_bool_out_o[(idx * NumTestsLc) + 5] = lc_ctrl_pkg_lc_tx_test_true_strict(lc_var_out[idx * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth]);
		end
	endgenerate
endmodule
