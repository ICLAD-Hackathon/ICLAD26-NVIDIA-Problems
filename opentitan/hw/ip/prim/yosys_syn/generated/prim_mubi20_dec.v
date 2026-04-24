module prim_mubi20_dec (
	mubi_i,
	mubi_dec_o
);
	parameter [0:0] TestTrue = 1;
	parameter [0:0] TestStrict = 1;
	localparam signed [31:0] prim_mubi_pkg_MuBi20Width = 20;
	input wire [19:0] mubi_i;
	output wire mubi_dec_o;
	wire [19:0] mubi;
	wire [19:0] mubi_out;
	function automatic [19:0] sv2v_cast_20;
		input reg [19:0] inp;
		sv2v_cast_20 = inp;
	endfunction
	assign mubi = sv2v_cast_20(mubi_i);
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < prim_mubi_pkg_MuBi20Width; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
			localparam k = _gv_k_1;
			prim_buf u_prim_buf(
				.in_i(mubi[k]),
				.out_o(mubi_out[k])
			);
		end
	endgenerate
	function automatic [19:0] sv2v_cast_15A0D;
		input reg [19:0] inp;
		sv2v_cast_15A0D = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi20_test_false_loose;
		input reg [19:0] val;
		prim_mubi_pkg_mubi20_test_false_loose = sv2v_cast_15A0D(20'h69696) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi20_test_false_strict;
		input reg [19:0] val;
		prim_mubi_pkg_mubi20_test_false_strict = sv2v_cast_15A0D(20'h96969) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi20_test_true_loose;
		input reg [19:0] val;
		prim_mubi_pkg_mubi20_test_true_loose = sv2v_cast_15A0D(20'h96969) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi20_test_true_strict;
		input reg [19:0] val;
		prim_mubi_pkg_mubi20_test_true_strict = sv2v_cast_15A0D(20'h69696) == val;
	endfunction
	generate
		if (TestTrue && TestStrict) begin : gen_test_true_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi20_test_true_strict(sv2v_cast_15A0D(mubi_out));
		end
		else if (TestTrue && !TestStrict) begin : gen_test_true_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi20_test_true_loose(sv2v_cast_15A0D(mubi_out));
		end
		else if (!TestTrue && TestStrict) begin : gen_test_false_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi20_test_false_strict(sv2v_cast_15A0D(mubi_out));
		end
		else if (!TestTrue && !TestStrict) begin : gen_test_false_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi20_test_false_loose(sv2v_cast_15A0D(mubi_out));
		end
	endgenerate
endmodule
