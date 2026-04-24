module prim_mubi8_dec (
	mubi_i,
	mubi_dec_o
);
	parameter [0:0] TestTrue = 1;
	parameter [0:0] TestStrict = 1;
	localparam signed [31:0] prim_mubi_pkg_MuBi8Width = 8;
	input wire [7:0] mubi_i;
	output wire mubi_dec_o;
	wire [7:0] mubi;
	wire [7:0] mubi_out;
	function automatic [7:0] sv2v_cast_8;
		input reg [7:0] inp;
		sv2v_cast_8 = inp;
	endfunction
	assign mubi = sv2v_cast_8(mubi_i);
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < prim_mubi_pkg_MuBi8Width; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
			localparam k = _gv_k_1;
			prim_buf u_prim_buf(
				.in_i(mubi[k]),
				.out_o(mubi_out[k])
			);
		end
	endgenerate
	function automatic [7:0] sv2v_cast_FA5F6;
		input reg [7:0] inp;
		sv2v_cast_FA5F6 = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi8_test_false_loose;
		input reg [7:0] val;
		prim_mubi_pkg_mubi8_test_false_loose = sv2v_cast_FA5F6(8'h96) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi8_test_false_strict;
		input reg [7:0] val;
		prim_mubi_pkg_mubi8_test_false_strict = sv2v_cast_FA5F6(8'h69) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi8_test_true_loose;
		input reg [7:0] val;
		prim_mubi_pkg_mubi8_test_true_loose = sv2v_cast_FA5F6(8'h69) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi8_test_true_strict;
		input reg [7:0] val;
		prim_mubi_pkg_mubi8_test_true_strict = sv2v_cast_FA5F6(8'h96) == val;
	endfunction
	generate
		if (TestTrue && TestStrict) begin : gen_test_true_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi8_test_true_strict(sv2v_cast_FA5F6(mubi_out));
		end
		else if (TestTrue && !TestStrict) begin : gen_test_true_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi8_test_true_loose(sv2v_cast_FA5F6(mubi_out));
		end
		else if (!TestTrue && TestStrict) begin : gen_test_false_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi8_test_false_strict(sv2v_cast_FA5F6(mubi_out));
		end
		else if (!TestTrue && !TestStrict) begin : gen_test_false_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi8_test_false_loose(sv2v_cast_FA5F6(mubi_out));
		end
	endgenerate
endmodule
