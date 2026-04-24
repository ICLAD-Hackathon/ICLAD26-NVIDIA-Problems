module prim_arbiter_fixed (
	clk_i,
	rst_ni,
	req_i,
	data_i,
	gnt_o,
	idx_o,
	valid_o,
	data_o,
	ready_i
);
	reg _sv2v_0;
	parameter signed [31:0] N = 8;
	parameter signed [31:0] DW = 32;
	parameter [0:0] EnDataPort = 1;
	localparam signed [31:0] IdxW = $clog2(N);
	input clk_i;
	input rst_ni;
	input [N - 1:0] req_i;
	input [(N * DW) - 1:0] data_i;
	output wire [N - 1:0] gnt_o;
	output wire [IdxW - 1:0] idx_o;
	output wire valid_o;
	output wire [DW - 1:0] data_o;
	input ready_i;
	generate
		if (N == 1) begin : gen_degenerate_case
			assign valid_o = req_i[0];
			assign data_o = data_i[(N - 1) * DW+:DW];
			assign gnt_o[0] = valid_o & ready_i;
			assign idx_o = 1'sb0;
		end
		else begin : gen_normal_case
			reg [(2 ** (IdxW + 1)) - 2:0] req_tree;
			reg [(2 ** (IdxW + 1)) - 2:0] gnt_tree;
			reg [(((2 ** (IdxW + 1)) - 2) >= 0 ? (((2 ** (IdxW + 1)) - 1) * IdxW) - 1 : ((3 - (2 ** (IdxW + 1))) * IdxW) + ((((2 ** (IdxW + 1)) - 2) * IdxW) - 1)):(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : ((2 ** (IdxW + 1)) - 2) * IdxW)] idx_tree;
			reg [(((2 ** (IdxW + 1)) - 2) >= 0 ? (((2 ** (IdxW + 1)) - 1) * DW) - 1 : ((3 - (2 ** (IdxW + 1))) * DW) + ((((2 ** (IdxW + 1)) - 2) * DW) - 1)):(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : ((2 ** (IdxW + 1)) - 2) * DW)] data_tree;
			genvar _gv_level_1;
			for (_gv_level_1 = 0; _gv_level_1 < (IdxW + 1); _gv_level_1 = _gv_level_1 + 1) begin : gen_tree
				localparam level = _gv_level_1;
				localparam signed [31:0] Base0 = (2 ** level) - 1;
				localparam signed [31:0] Base1 = (2 ** (level + 1)) - 1;
				genvar _gv_offset_1;
				for (_gv_offset_1 = 0; _gv_offset_1 < (2 ** level); _gv_offset_1 = _gv_offset_1 + 1) begin : gen_level
					localparam offset = _gv_offset_1;
					localparam signed [31:0] Pa = Base0 + offset;
					localparam signed [31:0] C0 = Base1 + (2 * offset);
					localparam signed [31:0] C1 = (Base1 + (2 * offset)) + 1;
					if (level == IdxW) begin : gen_leafs
						if (offset < N) begin : gen_assign
							wire [1:1] sv2v_tmp_82807;
							assign sv2v_tmp_82807 = req_i[offset];
							always @(*) req_tree[Pa] = sv2v_tmp_82807;
							wire [IdxW * 1:1] sv2v_tmp_82340;
							assign sv2v_tmp_82340 = offset;
							always @(*) idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = sv2v_tmp_82340;
							wire [DW * 1:1] sv2v_tmp_462FB;
							assign sv2v_tmp_462FB = data_i[((N - 1) - offset) * DW+:DW];
							always @(*) data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = sv2v_tmp_462FB;
							assign gnt_o[offset] = gnt_tree[Pa];
						end
						else begin : gen_tie_off
							wire [1:1] sv2v_tmp_DB8B3;
							assign sv2v_tmp_DB8B3 = 1'sb0;
							always @(*) req_tree[Pa] = sv2v_tmp_DB8B3;
							wire [IdxW * 1:1] sv2v_tmp_55789;
							assign sv2v_tmp_55789 = 1'sb0;
							always @(*) idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = sv2v_tmp_55789;
							wire [DW * 1:1] sv2v_tmp_DC98B;
							assign sv2v_tmp_DC98B = 1'sb0;
							always @(*) data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = sv2v_tmp_DC98B;
							wire unused_sigs;
							assign unused_sigs = gnt_tree[Pa];
						end
					end
					else begin : gen_nodes
						reg sel;
						always @(*) begin : p_node
							if (_sv2v_0)
								;
							sel = ~req_tree[C0];
							req_tree[Pa] = req_tree[C0] | req_tree[C1];
							idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = (sel ? idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C1 : ((2 ** (IdxW + 1)) - 2) - C1) * IdxW+:IdxW] : idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C0 : ((2 ** (IdxW + 1)) - 2) - C0) * IdxW+:IdxW]);
							data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = (sel ? data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C1 : ((2 ** (IdxW + 1)) - 2) - C1) * DW+:DW] : data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C0 : ((2 ** (IdxW + 1)) - 2) - C0) * DW+:DW]);
							gnt_tree[C0] = gnt_tree[Pa] & ~sel;
							gnt_tree[C1] = gnt_tree[Pa] & sel;
						end
					end
				end
			end
			if (EnDataPort) begin : gen_data_port
				assign data_o = data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : (2 ** (IdxW + 1)) - 2) * DW+:DW];
			end
			else begin : gen_no_dataport
				wire [DW - 1:0] unused_data;
				assign unused_data = data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : (2 ** (IdxW + 1)) - 2) * DW+:DW];
				assign data_o = 1'sb1;
			end
			assign idx_o = idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : (2 ** (IdxW + 1)) - 2) * IdxW+:IdxW];
			assign valid_o = req_tree[0];
			wire [1:1] sv2v_tmp_F03B8;
			assign sv2v_tmp_F03B8 = valid_o & ready_i;
			always @(*) gnt_tree[0] = sv2v_tmp_F03B8;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
