module prim_mubi12_dec (
	mubi_i,
	mubi_dec_o
);
	parameter [0:0] TestTrue = 1;
	parameter [0:0] TestStrict = 1;
	localparam signed [31:0] prim_mubi_pkg_MuBi12Width = 12;
	input wire [11:0] mubi_i;
	output wire mubi_dec_o;
	wire [11:0] mubi;
	wire [11:0] mubi_out;
	function automatic [11:0] sv2v_cast_12;
		input reg [11:0] inp;
		sv2v_cast_12 = inp;
	endfunction
	assign mubi = sv2v_cast_12(mubi_i);
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < prim_mubi_pkg_MuBi12Width; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
			localparam k = _gv_k_1;
			prim_buf u_prim_buf(
				.in_i(mubi[k]),
				.out_o(mubi_out[k])
			);
		end
	endgenerate
	function automatic [11:0] sv2v_cast_9D81C;
		input reg [11:0] inp;
		sv2v_cast_9D81C = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi12_test_false_loose;
		input reg [11:0] val;
		prim_mubi_pkg_mubi12_test_false_loose = sv2v_cast_9D81C(12'h696) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi12_test_false_strict;
		input reg [11:0] val;
		prim_mubi_pkg_mubi12_test_false_strict = sv2v_cast_9D81C(12'h969) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi12_test_true_loose;
		input reg [11:0] val;
		prim_mubi_pkg_mubi12_test_true_loose = sv2v_cast_9D81C(12'h969) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi12_test_true_strict;
		input reg [11:0] val;
		prim_mubi_pkg_mubi12_test_true_strict = sv2v_cast_9D81C(12'h696) == val;
	endfunction
	generate
		if (TestTrue && TestStrict) begin : gen_test_true_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi12_test_true_strict(sv2v_cast_9D81C(mubi_out));
		end
		else if (TestTrue && !TestStrict) begin : gen_test_true_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi12_test_true_loose(sv2v_cast_9D81C(mubi_out));
		end
		else if (!TestTrue && TestStrict) begin : gen_test_false_strict
			assign mubi_dec_o = prim_mubi_pkg_mubi12_test_false_strict(sv2v_cast_9D81C(mubi_out));
		end
		else if (!TestTrue && !TestStrict) begin : gen_test_false_loose
			assign mubi_dec_o = prim_mubi_pkg_mubi12_test_false_loose(sv2v_cast_9D81C(mubi_out));
		end
	endgenerate
endmodule
