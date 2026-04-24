module prim_max_tree (
	clk_i,
	rst_ni,
	values_i,
	valid_i,
	max_value_o,
	max_idx_o,
	max_valid_o
);
	parameter signed [31:0] NumSrc = 32;
	parameter signed [31:0] Width = 8;
	localparam signed [31:0] SrcWidth = $clog2(NumSrc);
	input clk_i;
	input rst_ni;
	input [(NumSrc * Width) - 1:0] values_i;
	input [NumSrc - 1:0] valid_i;
	output wire [Width - 1:0] max_value_o;
	output wire [SrcWidth - 1:0] max_idx_o;
	output wire max_valid_o;
	localparam signed [31:0] NumLevels = $clog2(NumSrc);
	wire [(2 ** (NumLevels + 1)) - 2:0] vld_tree;
	wire [(((2 ** (NumLevels + 1)) - 2) >= 0 ? (((2 ** (NumLevels + 1)) - 1) * SrcWidth) - 1 : ((3 - (2 ** (NumLevels + 1))) * SrcWidth) + ((((2 ** (NumLevels + 1)) - 2) * SrcWidth) - 1)):(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : ((2 ** (NumLevels + 1)) - 2) * SrcWidth)] idx_tree;
	wire [(((2 ** (NumLevels + 1)) - 2) >= 0 ? (((2 ** (NumLevels + 1)) - 1) * Width) - 1 : ((3 - (2 ** (NumLevels + 1))) * Width) + ((((2 ** (NumLevels + 1)) - 2) * Width) - 1)):(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : ((2 ** (NumLevels + 1)) - 2) * Width)] max_tree;
	genvar _gv_level_1;
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
						assign idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * SrcWidth+:SrcWidth] = offset;
						assign max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * Width+:Width] = values_i[offset * Width+:Width];
					end
					else begin : gen_tie_off
						assign vld_tree[Pa] = 1'sb0;
						assign idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * SrcWidth+:SrcWidth] = 1'sb0;
						assign max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * Width+:Width] = 1'sb0;
					end
				end
				else begin : gen_nodes
					wire sel;
					assign sel = (~vld_tree[C0] & vld_tree[C1]) | ((vld_tree[C0] & vld_tree[C1]) & (max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * Width+:Width] > max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * Width+:Width]));
					assign vld_tree[Pa] = (sel ? vld_tree[C1] : vld_tree[C0]);
					assign idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * SrcWidth+:SrcWidth] = (sel ? idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * SrcWidth+:SrcWidth] : idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * SrcWidth+:SrcWidth]);
					assign max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? Pa : ((2 ** (NumLevels + 1)) - 2) - Pa) * Width+:Width] = (sel ? max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C1 : ((2 ** (NumLevels + 1)) - 2) - C1) * Width+:Width] : max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? C0 : ((2 ** (NumLevels + 1)) - 2) - C0) * Width+:Width]);
				end
			end
		end
	endgenerate
	assign max_valid_o = vld_tree[0];
	assign max_idx_o = idx_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : (2 ** (NumLevels + 1)) - 2) * SrcWidth+:SrcWidth];
	assign max_value_o = max_tree[(((2 ** (NumLevels + 1)) - 2) >= 0 ? 0 : (2 ** (NumLevels + 1)) - 2) * Width+:Width];
endmodule
