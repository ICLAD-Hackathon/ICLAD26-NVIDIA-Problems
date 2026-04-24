module prim_sum_tree (
	clk_i,
	rst_ni,
	values_i,
	valid_i,
	sum_value_o,
	sum_valid_o
);
	parameter signed [31:0] NumSrc = 32;
	parameter [0:0] Saturate = 1'b1;
	parameter signed [31:0] InWidth = 8;
	localparam signed [31:0] NumLevels = $clog2(NumSrc);
	localparam signed [31:0] OutWidth = (Saturate ? InWidth : InWidth + NumLevels);
	input clk_i;
	input rst_ni;
	input [(NumSrc * InWidth) - 1:0] values_i;
	input [NumSrc - 1:0] valid_i;
	output wire [OutWidth - 1:0] sum_value_o;
	output wire sum_valid_o;
	wire [(2 ** (NumLevels + 1)) - 2:0] vld_tree;
	wire [(((2 ** (NumLevels + 1)) - 2) >= 0 ? (((2 ** (NumLevels + 1)) - 1) * OutWidth) - 1 : ((3 - (2 ** (NumLevels + 1))) * OutWidth) + ((((2 ** (NumLevels + 1)) - 2) * OutWidth) - 1)):(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : ((2 ** (NumLevels + 1)) - 2) * OutWidth)] sum_tree;
	genvar _gv_level_1;
	function automatic [OutWidth - 1:0] sv2v_cast_D7755;
		input reg [OutWidth - 1:0] inp;
		sv2v_cast_D7755 = inp;
	endfunction
	function automatic signed [OutWidth - 1:0] sv2v_cast_D7755_signed;
		input reg signed [OutWidth - 1:0] inp;
		sv2v_cast_D7755_signed = inp;
	endfunction
	generate
		for (_gv_level_1 = 0; _gv_level_1 < (NumLevels + 1); _gv_level_1 = _gv_level_1 + 1) begin : gen_tree
			localparam level = _gv_level_1;
			localparam signed [31:0] Base0 = (2 ** level) - 1;
			localparam signed [31:0] Base1 = (2 ** (level + 1)) - 1;
			genvar _gv_offset_1;
			for (_gv_offset_1 = 0; _gv_offset_1 < (2 ** level); _gv_offset_1 = _gv_offset_1 + 1) begin : gen_level
				localparam offset = _gv_offset_1;
				localparam signed [31:0] Pa = Base0 + offset;
				localparam signed [31:0] C0 = Base1 + (2 * offset);
				localparam signed [31:0] C1 = (Base1 + (2 * offset)) + 1;
				if (level == NumLevels) begin : gen_leafs
					if (offset < NumSrc) begin : gen_assign
						assign vld_tree[Pa] = valid_i[offset];
						assign sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * OutWidth+:OutWidth] = sv2v_cast_D7755(values_i[offset * InWidth+:InWidth]);
					end
					else begin : gen_tie_off
						assign vld_tree[Pa] = 1'sb0;
						assign sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * OutWidth+:OutWidth] = 1'sb0;
					end
				end
				else begin : gen_nodes
					wire [OutWidth - 1:0] node_sum;
					wire [OutWidth - 1:0] sum;
					if (Saturate) begin : gen_sat
						localparam signed [31:0] LocWidth = OutWidth + 1;
						wire [LocWidth - 1:0] loc_sum;
						function automatic [LocWidth - 1:0] sv2v_cast_0205B;
							input reg [LocWidth - 1:0] inp;
							sv2v_cast_0205B = inp;
						endfunction
						assign loc_sum = sv2v_cast_0205B(sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * OutWidth+:OutWidth]) + sv2v_cast_0205B(sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * OutWidth+:OutWidth]);
						assign sum = (loc_sum[LocWidth - 1] ? {OutWidth {1'b1}} : loc_sum[LocWidth - 2:0]);
					end
					else begin : gen_no_sat
						assign sum = sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * OutWidth+:OutWidth] + sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * OutWidth+:OutWidth];
					end
					assign node_sum = (vld_tree[C0] & vld_tree[C1] ? sum : (vld_tree[C0] ? sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * OutWidth+:OutWidth] : (vld_tree[C1] ? sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * OutWidth+:OutWidth] : {sv2v_cast_D7755_signed(0)})));
					assign vld_tree[Pa] = vld_tree[C1] | vld_tree[C0];
					assign sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * OutWidth+:OutWidth] = node_sum;
				end
			end
		end
	endgenerate
	assign sum_valid_o = vld_tree[0];
	assign sum_value_o = sum_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : (2 ** (NumLevels + 1)) - 2) * OutWidth+:OutWidth];
endmodule
