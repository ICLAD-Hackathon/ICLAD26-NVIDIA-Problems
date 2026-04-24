module prim_arbiter_tree (
	clk_i,
	rst_ni,
	req_chk_i,
	req_i,
	data_i,
	gnt_o,
	idx_o,
	valid_o,
	data_o,
	ready_i
);
	parameter signed [31:0] N = 8;
	parameter signed [31:0] DW = 32;
	parameter [0:0] EnDataPort = 1;
	localparam signed [31:0] IdxW = $clog2(N);
	input clk_i;
	input rst_ni;
	input req_chk_i;
	input [N - 1:0] req_i;
	input [(N * DW) - 1:0] data_i;
	output wire [N - 1:0] gnt_o;
	output wire [IdxW - 1:0] idx_o;
	output wire valid_o;
	output wire [DW - 1:0] data_o;
	input ready_i;
	wire unused_req_chk;
	assign unused_req_chk = req_chk_i;
	generate
		if (N == 1) begin : gen_degenerate_case
			assign valid_o = req_i[0];
			assign data_o = data_i[(N - 1) * DW+:DW];
			assign gnt_o[0] = valid_o & ready_i;
			assign idx_o = 1'sb0;
		end
		else begin : gen_normal_case
			wire [(2 ** (IdxW + 1)) - 2:0] req_tree;
			wire [(2 ** (IdxW + 1)) - 2:0] prio_tree;
			wire [(2 ** (IdxW + 1)) - 2:0] sel_tree;
			wire [(2 ** (IdxW + 1)) - 2:0] mask_tree;
			wire [(((2 ** (IdxW + 1)) - 2) >= 0 ? (((2 ** (IdxW + 1)) - 1) * IdxW) - 1 : ((3 - (2 ** (IdxW + 1))) * IdxW) + ((((2 ** (IdxW + 1)) - 2) * IdxW) - 1)):(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : ((2 ** (IdxW + 1)) - 2) * IdxW)] idx_tree;
			wire [(((2 ** (IdxW + 1)) - 2) >= 0 ? (((2 ** (IdxW + 1)) - 1) * DW) - 1 : ((3 - (2 ** (IdxW + 1))) * DW) + ((((2 ** (IdxW + 1)) - 2) * DW) - 1)):(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : ((2 ** (IdxW + 1)) - 2) * DW)] data_tree;
			wire [N - 1:0] prio_mask_d;
			reg [N - 1:0] prio_mask_q;
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
							assign req_tree[Pa] = req_i[offset];
							assign prio_tree[Pa] = req_i[offset] & prio_mask_q[offset];
							assign idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = offset;
							assign data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = data_i[((N - 1) - offset) * DW+:DW];
							assign gnt_o[offset] = (req_i[offset] & sel_tree[Pa]) & ready_i;
							assign prio_mask_d[offset] = (|req_i ? mask_tree[Pa] | (sel_tree[Pa] & ~ready_i) : prio_mask_q[offset]);
						end
						else begin : gen_tie_off
							assign req_tree[Pa] = 1'sb0;
							assign prio_tree[Pa] = 1'sb0;
							assign idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = 1'sb0;
							assign data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = 1'sb0;
							wire unused_sigs;
							assign unused_sigs = ^{mask_tree[Pa], sel_tree[Pa]};
						end
					end
					else begin : gen_nodes
						wire sel;
						assign sel = ~req_tree[C0] | (~prio_tree[C0] & prio_tree[C1]);
						assign req_tree[Pa] = req_tree[C0] | req_tree[C1];
						assign prio_tree[Pa] = prio_tree[C1] | prio_tree[C0];
						assign idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * IdxW+:IdxW] = (sel ? idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C1 : ((2 ** (IdxW + 1)) - 2) - C1) * IdxW+:IdxW] : idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C0 : ((2 ** (IdxW + 1)) - 2) - C0) * IdxW+:IdxW]);
						assign data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? Pa : ((2 ** (IdxW + 1)) - 2) - Pa) * DW+:DW] = (sel ? data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C1 : ((2 ** (IdxW + 1)) - 2) - C1) * DW+:DW] : data_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? C0 : ((2 ** (IdxW + 1)) - 2) - C0) * DW+:DW]);
						assign sel_tree[C0] = sel_tree[Pa] & ~sel;
						assign sel_tree[C1] = sel_tree[Pa] & sel;
						assign mask_tree[C0] = mask_tree[Pa];
						assign mask_tree[C1] = mask_tree[Pa] | sel_tree[C0];
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
			wire unused_prio_tree;
			assign unused_prio_tree = prio_tree[0];
			assign idx_o = idx_tree[(((2 ** (IdxW + 1)) - 2) >= 0 ? 0 : (2 ** (IdxW + 1)) - 2) * IdxW+:IdxW];
			assign valid_o = req_tree[0];
			assign sel_tree[0] = 1'b1;
			assign mask_tree[0] = 1'b0;
			always @(posedge clk_i or negedge rst_ni) begin : p_mask_reg
				if (!rst_ni)
					prio_mask_q <= 1'sb0;
				else
					prio_mask_q <= prio_mask_d;
			end
		end
	endgenerate
endmodule
