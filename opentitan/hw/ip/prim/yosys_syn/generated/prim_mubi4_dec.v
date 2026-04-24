module prim_mubi4_dec (
	mubi_i,
	mubi_dec_o
);
	parameter [0:0] TestTrue = 1;
	parameter [0:0] TestStrict = 1;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] mubi_i;
	output wire mubi_dec_o;
	wire [3:0] mubi;
	wire [3:0] mubi_out;
	function automatic [3:0] sv2v_cast_4;
		input reg [3:0] inp;
		sv2v_cast_4 = inp;
	endfunction
	assign mubi = sv2v_cast_4(mubi_i);
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < prim_mubi_pkg_MuBi4Width; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
			localparam k = _gv_k_1;
			prim_buf u_prim_buf(
				.in_i(mubi[k]),
				.out_o(mubi_out[k])
			);
		end
	endgenerate
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
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
		if (TestTrue && TestStrict) begin : gen_test_true_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi4_test_true_strict(sv2v_cast_EECFA(mubi_out));
		end
		else if (TestTrue && !TestStrict) begin : gen_test_true_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi4_test_true_loose(sv2v_cast_EECFA(mubi_out));
		end
		else if (!TestTrue && TestStrict) begin : gen_test_false_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi4_test_false_strict(sv2v_cast_EECFA(mubi_out));
		end
		else if (!TestTrue && !TestStrict) begin : gen_test_false_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi4_test_false_loose(sv2v_cast_EECFA(mubi_out));
		end
	endgenerate
endmodule
