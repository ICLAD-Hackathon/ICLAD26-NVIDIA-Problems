module prim_lc_combine (
	lc_en_a_i,
	lc_en_b_i,
	lc_en_o
);
	parameter [0:0] ActiveLow = 0;
	parameter [0:0] CombineMode = 0;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_en_a_i;
	input wire [3:0] lc_en_b_i;
	output wire [3:0] lc_en_o;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	localparam [3:0] ActiveValue = (ActiveLow ? sv2v_cast_BE429(4'b1010) : sv2v_cast_BE429(4'b0101));
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < lc_ctrl_pkg_TxWidth; _gv_k_1 = _gv_k_1 + 1) begin : gen_loop
			localparam k = _gv_k_1;
			if ((CombineMode && ActiveValue[k]) || (!CombineMode && !ActiveValue[k])) begin : gen_and_gate
				assign lc_en_o[k] = lc_en_a_i[k] && lc_en_b_i[k];
			end
			else begin : gen_or_gate
				assign lc_en_o[k] = lc_en_a_i[k] || lc_en_b_i[k];
			end
		end
	endgenerate
endmodule
