module ascon_core (
	clk_i,
	rst_ni,
	lc_escalate_en_i,
	alert_recov_o,
	alert_fatal_o,
	error_recov_i,
	error_fatal_i,
	keymgr_key_i,
	reg2hw,
	hw2reg,
	idle_o
);
	reg _sv2v_0;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output wire alert_recov_o;
	output wire alert_fatal_o;
	input wire error_recov_i;
	input wire error_fatal_i;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	input wire [1273:0] reg2hw;
	output reg [1086:0] hw2reg;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	output wire [3:0] idle_o;
	wire [127:0] data_share0_in_d;
	reg [127:0] data_share0_in_q;
	wire [3:0] data_share0_in_new_d;
	reg [3:0] data_share0_in_new_q;
	wire data_share0_in_new;
	wire data_share0_in_load;
	wire [127:0] data_share1_in_d;
	reg [127:0] data_share1_in_q;
	wire [3:0] data_share1_in_new_d;
	reg [3:0] data_share1_in_new_q;
	wire data_share1_in_new;
	wire data_share1_in_load;
	wire [127:0] tag_in_q;
	wire [3:0] tag_in_new_d;
	reg [3:0] tag_in_new_q;
	wire tag_in_new;
	wire tag_in_load;
	wire [127:0] nonce_share0_in_d;
	reg [127:0] nonce_share0_in_q;
	wire [3:0] nonce_share0_in_new_d;
	reg [3:0] nonce_share0_in_new_q;
	wire nonce_share0_in_new;
	wire nonce_share0_in_load;
	wire [127:0] nonce_share1_in_d;
	reg [127:0] nonce_share1_in_q;
	wire [3:0] nonce_share1_in_new_d;
	reg [3:0] nonce_share1_in_new_q;
	wire nonce_share1_in_new;
	wire nonce_share1_in_load;
	wire [127:0] key_share0_in_d;
	reg [127:0] key_share0_in_q;
	wire [3:0] key_share0_in_new_d;
	reg [3:0] key_share0_in_new_q;
	wire key_share0_in_new;
	wire key_share0_in_load;
	wire [127:0] key_share1_in_d;
	reg [127:0] key_share1_in_q;
	wire [3:0] key_share1_in_new_d;
	reg [3:0] key_share1_in_new_q;
	wire key_share1_in_new;
	wire key_share1_in_load;
	wire force_data_overwrite;
	wire manual_start_trigger;
	wire sideload_key;
	wire start;
	wire start_ok;
	wire wipe;
	wire masked_ad_input;
	wire masked_msg_input;
	wire [4:0] valid_bytes;
	reg [3:0] no_ad;
	reg [3:0] no_msg;
	wire [11:0] data_type_last;
	wire [11:0] data_type_start;
	localparam signed [31:0] prim_ascon_pkg_DUPLEX_OP_WIDTH = 3;
	wire [2:0] operation;
	localparam signed [31:0] prim_ascon_pkg_DUPLEX_VARIANT_WIDTH = 2;
	wire [1:0] variant;
	wire [127:0] msg_out;
	wire [127:0] msg_out_d;
	reg [127:0] msg_out_q;
	wire msg_out_valid;
	wire msg_out_we;
	wire [127:0] unused_msg_out_q;
	wire [3:0] msg_out_read_d;
	reg [3:0] msg_out_read_q;
	wire msg_out_read;
	wire msg_out_ready;
	wire [127:0] tag_out;
	wire [127:0] tag_out_d;
	reg [127:0] tag_out_q;
	wire tag_out_valid;
	wire tag_out_we;
	wire [127:0] unused_tag_out_q;
	wire [3:0] tag_out_read_d;
	reg [3:0] tag_out_read_q;
	wire tag_out_read;
	wire tag_out_ready;
	wire [3:0] duplex_idle;
	assign idle_o = duplex_idle;
	wire duplex_done;
	wire ascon_error;
	wire duplex_fatal_error;
	assign alert_fatal_o = duplex_fatal_error;
	wire [3:0] unused_lc_escalate_en_i;
	wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] unused_keymgr_key_i;
	wire [3:0] tag_match;
	wire [3:0] tag_calculated;
	wire unused_sideload_key;
	assign unused_sideload_key = sideload_key;
	assign unused_keymgr_key_i = keymgr_key_i;
	wire unused_masked_msg_input;
	wire unused_masked_ad_input;
	assign unused_masked_ad_input = masked_ad_input;
	assign unused_masked_msg_input = masked_msg_input;
	assign unused_lc_escalate_en_i = lc_escalate_en_i;
	genvar _gv_i_1;
	localparam signed [31:0] ascon_reg_pkg_NumRegsKey = 4;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < ascon_reg_pkg_NumRegsKey; _gv_i_1 = _gv_i_1 + 1) begin : gen_hw_ext_key_regs
			localparam i = _gv_i_1;
			assign key_share0_in_d[i * 32+:32] = reg2hw[1138 + ((i * 33) + 32)-:32];
			assign key_share1_in_d[i * 32+:32] = reg2hw[1006 + ((i * 33) + 32)-:32];
			always @(posedge clk_i or negedge rst_ni) begin : input_reg_key_share0
				if (!rst_ni)
					key_share0_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[1138 + (i * 33)])
					key_share0_in_q[i * 32+:32] <= key_share0_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_34E3E;
			assign sv2v_tmp_34E3E = 1'sb0;
			always @(*) hw2reg[959 + ((i * 32) + 31)-:32] = sv2v_tmp_34E3E;
			always @(posedge clk_i or negedge rst_ni) begin : input_reg_key_share1
				if (!rst_ni)
					key_share1_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[1006 + (i * 33)])
					key_share1_in_q[i * 32+:32] <= key_share1_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_97181;
			assign sv2v_tmp_97181 = 1'sb0;
			always @(*) hw2reg[831 + ((i * 32) + 31)-:32] = sv2v_tmp_97181;
		end
	endgenerate
	genvar _gv_i_2;
	localparam signed [31:0] ascon_reg_pkg_NumRegsData = 4;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < ascon_reg_pkg_NumRegsData; _gv_i_2 = _gv_i_2 + 1) begin : gen_hw_ext_data_regs
			localparam i = _gv_i_2;
			assign data_share0_in_d[i * 32+:32] = reg2hw[610 + ((i * 33) + 32)-:32];
			assign data_share1_in_d[i * 32+:32] = reg2hw[478 + ((i * 33) + 32)-:32];
			always @(posedge clk_i or negedge rst_ni) begin : input_data_share0
				if (!rst_ni)
					data_share0_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[610 + (i * 33)])
					data_share0_in_q[i * 32+:32] <= data_share0_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_CCB8C;
			assign sv2v_tmp_CCB8C = 1'sb0;
			always @(*) hw2reg[447 + ((i * 32) + 31)-:32] = sv2v_tmp_CCB8C;
			always @(posedge clk_i or negedge rst_ni) begin : input_data_share1
				if (!rst_ni)
					data_share1_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[478 + (i * 33)])
					data_share1_in_q[i * 32+:32] <= data_share1_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_C16D0;
			assign sv2v_tmp_C16D0 = 1'sb0;
			always @(*) hw2reg[319 + ((i * 32) + 31)-:32] = sv2v_tmp_C16D0;
		end
	endgenerate
	genvar _gv_i_3;
	localparam signed [31:0] ascon_reg_pkg_NumRegsNonce = 4;
	generate
		for (_gv_i_3 = 0; _gv_i_3 < ascon_reg_pkg_NumRegsNonce; _gv_i_3 = _gv_i_3 + 1) begin : gen_hw_ext_nonce_regs
			localparam i = _gv_i_3;
			assign nonce_share0_in_d[i * 32+:32] = reg2hw[874 + ((i * 33) + 32)-:32];
			assign nonce_share1_in_d[i * 32+:32] = reg2hw[742 + ((i * 33) + 32)-:32];
			always @(posedge clk_i or negedge rst_ni) begin : input_reg_nonce_share0
				if (!rst_ni)
					nonce_share0_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[874 + (i * 33)])
					nonce_share0_in_q[i * 32+:32] <= nonce_share0_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_5529F;
			assign sv2v_tmp_5529F = 1'sb0;
			always @(*) hw2reg[703 + ((i * 32) + 31)-:32] = sv2v_tmp_5529F;
			always @(posedge clk_i or negedge rst_ni) begin : input_reg_nonce_share1
				if (!rst_ni)
					nonce_share1_in_q[i * 32+:32] <= {32 {1'b0}};
				else if (reg2hw[742 + (i * 33)])
					nonce_share1_in_q[i * 32+:32] <= nonce_share1_in_d[i * 32+:32];
			end
			wire [32:1] sv2v_tmp_173FC;
			assign sv2v_tmp_173FC = 1'sb0;
			always @(*) hw2reg[575 + ((i * 32) + 31)-:32] = sv2v_tmp_173FC;
		end
	endgenerate
	genvar _gv_i_4;
	generate
		for (_gv_i_4 = 0; _gv_i_4 < ascon_reg_pkg_NumRegsData; _gv_i_4 = _gv_i_4 + 1) begin : gen_hw_ext_data_output_regs
			localparam i = _gv_i_4;
			always @(posedge clk_i or negedge rst_ni) begin : reg_msg_out
				if (!rst_ni)
					msg_out_q[i * 32+:32] <= {32 {1'b0}};
				else if (msg_out_we)
					msg_out_q[i * 32+:32] <= msg_out_d[i * 32+:32];
			end
			assign unused_msg_out_q[i * 32+:32] = reg2hw[214 + ((i * 33) + 32)-:32];
			wire [32:1] sv2v_tmp_8C727;
			assign sv2v_tmp_8C727 = msg_out_q[i * 32+:32];
			always @(*) hw2reg[191 + ((i * 32) + 31)-:32] = sv2v_tmp_8C727;
		end
	endgenerate
	genvar _gv_i_5;
	localparam signed [31:0] ascon_reg_pkg_NumRegsTag = 4;
	generate
		for (_gv_i_5 = 0; _gv_i_5 < ascon_reg_pkg_NumRegsTag; _gv_i_5 = _gv_i_5 + 1) begin : gen_hw_ext_tag_output_regs
			localparam i = _gv_i_5;
			always @(posedge clk_i or negedge rst_ni) begin : reg_tag_out
				if (!rst_ni)
					tag_out_q[i * 32+:32] <= {32 {1'b0}};
				else if (tag_out_we)
					tag_out_q[i * 32+:32] <= tag_out_d[i * 32+:32];
			end
			assign unused_tag_out_q[i * 32+:32] = reg2hw[82 + ((i * 33) + 32)-:32];
			wire [32:1] sv2v_tmp_A82F1;
			assign sv2v_tmp_A82F1 = tag_out_q[i * 32+:32];
			always @(*) hw2reg[63 + ((i * 32) + 31)-:32] = sv2v_tmp_A82F1;
		end
	endgenerate
	assign operation = reg2hw[68-:3];
	assign variant = reg2hw[70-:2];
	assign sideload_key = reg2hw[71];
	assign masked_msg_input = reg2hw[73];
	assign masked_ad_input = reg2hw[72];
	assign force_data_overwrite = reg2hw[65];
	assign manual_start_trigger = reg2hw[64];
	assign valid_bytes = reg2hw[63-:5];
	assign data_type_last = reg2hw[58-:12];
	assign data_type_start = reg2hw[46-:12];
	reg no_msg_mubi4invalid;
	reg no_ad_mubi4invalid;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_invalid;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_invalid = ~(|{((sv2v_cast_EECFA(4'h6) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) === (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) | 1'bx), ((sv2v_cast_EECFA(4'h9) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) === (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) | 1'bx)});
	endfunction
	always @(*) begin : sanitize_mubi_reg
		if (_sv2v_0)
			;
		if (prim_mubi_pkg_mubi4_test_invalid(reg2hw[81-:4])) begin
			no_ad_mubi4invalid = 1'b1;
			no_ad = sv2v_cast_EECFA(4'h9);
		end
		else begin
			no_ad_mubi4invalid = 1'b0;
			no_ad = reg2hw[81-:4];
		end
		if (prim_mubi_pkg_mubi4_test_invalid(reg2hw[77-:4])) begin
			no_msg_mubi4invalid = 1'b1;
			no_msg = sv2v_cast_EECFA(4'h6);
		end
		else begin
			no_msg_mubi4invalid = 1'b0;
			no_msg = reg2hw[77-:4];
		end
	end
	assign alert_recov_o = no_ad_mubi4invalid | no_msg_mubi4invalid;
	assign start = reg2hw[33];
	assign wipe = reg2hw[34];
	wire [1:1] sv2v_tmp_93712;
	assign sv2v_tmp_93712 = 1'b0;
	always @(*) hw2reg[62] = sv2v_tmp_93712;
	wire [1:1] sv2v_tmp_F3AB0;
	assign sv2v_tmp_F3AB0 = 1'b1;
	always @(*) hw2reg[61] = sv2v_tmp_F3AB0;
	wire [1:1] sv2v_tmp_54090;
	assign sv2v_tmp_54090 = 1'b0;
	always @(*) hw2reg[60] = sv2v_tmp_54090;
	wire [1:1] sv2v_tmp_C9A4B;
	assign sv2v_tmp_C9A4B = 1'b1;
	always @(*) hw2reg[59] = sv2v_tmp_C9A4B;
	wire unused_wipe;
	assign unused_wipe = wipe;
	wire unused_manual_start_trigger;
	assign unused_manual_start_trigger = manual_start_trigger;
	wire unused_force_data_overwrite;
	assign unused_force_data_overwrite = force_data_overwrite;
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	wire [1:1] sv2v_tmp_58E9F;
	assign sv2v_tmp_58E9F = prim_mubi_pkg_mubi4_test_true_strict(duplex_idle);
	always @(*) hw2reg[58] = sv2v_tmp_58E9F;
	wire [1:1] sv2v_tmp_1E1C5;
	assign sv2v_tmp_1E1C5 = 1'b1;
	always @(*) hw2reg[57] = sv2v_tmp_1E1C5;
	wire [1:1] sv2v_tmp_7285B;
	assign sv2v_tmp_7285B = ascon_error;
	always @(*) hw2reg[52] = sv2v_tmp_7285B;
	wire [1:1] sv2v_tmp_1AC43;
	assign sv2v_tmp_1AC43 = 1'b1;
	always @(*) hw2reg[51] = sv2v_tmp_1AC43;
	wire [1:1] sv2v_tmp_DC860;
	assign sv2v_tmp_DC860 = error_recov_i;
	always @(*) hw2reg[50] = sv2v_tmp_DC860;
	wire [1:1] sv2v_tmp_B8B1A;
	assign sv2v_tmp_B8B1A = 1'b1;
	always @(*) hw2reg[49] = sv2v_tmp_B8B1A;
	wire [1:1] sv2v_tmp_1737A;
	assign sv2v_tmp_1737A = error_fatal_i;
	always @(*) hw2reg[48] = sv2v_tmp_1737A;
	wire [1:1] sv2v_tmp_D9394;
	assign sv2v_tmp_D9394 = 1'b1;
	always @(*) hw2reg[47] = sv2v_tmp_D9394;
	wire [1:1] sv2v_tmp_06C65;
	assign sv2v_tmp_06C65 = 1'b0;
	always @(*) hw2reg[56] = sv2v_tmp_06C65;
	wire [1:1] sv2v_tmp_FE0C7;
	assign sv2v_tmp_FE0C7 = 1'b1;
	always @(*) hw2reg[55] = sv2v_tmp_FE0C7;
	wire [1:1] sv2v_tmp_5EA67;
	assign sv2v_tmp_5EA67 = 1'b0;
	always @(*) hw2reg[54] = sv2v_tmp_5EA67;
	wire [1:1] sv2v_tmp_F6D41;
	assign sv2v_tmp_F6D41 = 1'b1;
	always @(*) hw2reg[53] = sv2v_tmp_F6D41;
	wire data_in_valid;
	assign data_in_valid = data_share1_in_new & data_share0_in_new;
	wire data_in_ready;
	wire data_in_read;
	assign data_in_read = data_in_ready & data_in_valid;
	assign data_share1_in_load = data_in_read;
	assign data_share0_in_load = data_in_read;
	reg msg_out_reg_valid;
	reg tag_out_reg_valid;
	always @(posedge clk_i or negedge rst_ni) begin : track_output_status
		if (!rst_ni) begin
			msg_out_reg_valid <= 1'b0;
			tag_out_reg_valid <= 1'b0;
		end
		else begin
			if (msg_out_we)
				msg_out_reg_valid <= 1'b1;
			else if (data_in_read)
				msg_out_reg_valid <= 1'b0;
			if (tag_out_we)
				tag_out_reg_valid <= 1'b1;
			else if (tag_out_read)
				tag_out_reg_valid <= 1'b0;
		end
	end
	wire [1:1] sv2v_tmp_85D01;
	assign sv2v_tmp_85D01 = msg_out_reg_valid;
	always @(*) hw2reg[46] = sv2v_tmp_85D01;
	wire [1:1] sv2v_tmp_BC296;
	assign sv2v_tmp_BC296 = 1'b1;
	always @(*) hw2reg[45] = sv2v_tmp_BC296;
	wire [1:1] sv2v_tmp_9E868;
	assign sv2v_tmp_9E868 = tag_out_reg_valid;
	always @(*) hw2reg[44] = sv2v_tmp_9E868;
	wire [1:1] sv2v_tmp_B1F10;
	assign sv2v_tmp_B1F10 = 1'b1;
	always @(*) hw2reg[43] = sv2v_tmp_B1F10;
	localparam signed [31:0] prim_ascon_pkg_AsconDuplexFSMStateWidth = 10;
	wire [9:0] duplex_fsm_state;
	wire [32:1] sv2v_tmp_7092E;
	assign sv2v_tmp_7092E = {{22 {1'b0}}, duplex_fsm_state};
	always @(*) hw2reg[39-:32] = sv2v_tmp_7092E;
	wire [31:0] unused_fsm_state_q;
	wire unused_fsm_state_qe;
	assign unused_fsm_state_q = reg2hw[32-:32];
	assign unused_fsm_state_qe = reg2hw[0];
	assign key_share0_in_new_d = (key_share0_in_load ? {4 {1'sb0}} : key_share0_in_new_q | {reg2hw[1237], reg2hw[1204], reg2hw[1171], reg2hw[1138]});
	assign key_share0_in_new = &key_share0_in_new_q;
	assign key_share1_in_new_d = (key_share1_in_load ? {4 {1'sb0}} : key_share1_in_new_q | {reg2hw[1105], reg2hw[1072], reg2hw[1039], reg2hw[1006]});
	assign key_share1_in_new = &key_share1_in_new_q;
	assign nonce_share0_in_new_d = (nonce_share0_in_load ? {4 {1'sb0}} : nonce_share0_in_new_q | {reg2hw[973], reg2hw[940], reg2hw[907], reg2hw[874]});
	assign nonce_share0_in_new = &nonce_share0_in_new_q;
	assign nonce_share1_in_new_d = (nonce_share1_in_load ? {4 {1'sb0}} : nonce_share1_in_new_q | {reg2hw[841], reg2hw[808], reg2hw[775], reg2hw[742]});
	assign nonce_share1_in_new = &nonce_share1_in_new_q;
	assign data_share0_in_new_d = (data_share0_in_load ? {4 {1'sb0}} : data_share0_in_new_q | {reg2hw[709], reg2hw[676], reg2hw[643], reg2hw[610]});
	assign data_share0_in_new = &data_share0_in_new_q;
	assign data_share1_in_new_d = (data_share1_in_load ? {4 {1'sb0}} : data_share1_in_new_q | {reg2hw[577], reg2hw[544], reg2hw[511], reg2hw[478]});
	assign data_share1_in_new = &data_share1_in_new_q;
	assign tag_in_new_d = (tag_in_load ? {4 {1'sb0}} : tag_in_new_q | {reg2hw[445], reg2hw[412], reg2hw[379], reg2hw[346]});
	assign tag_in_new = &tag_in_new_d;
	assign msg_out_read_d = (msg_out_we ? {4 {1'sb0}} : msg_out_read_q | {reg2hw[313], reg2hw[280], reg2hw[247], reg2hw[214]});
	assign msg_out_read = &msg_out_read_q;
	assign tag_out_read_d = (tag_out_we ? {4 {1'sb0}} : tag_out_read_q | {reg2hw[181], reg2hw[148], reg2hw[115], reg2hw[82]});
	assign tag_out_read = &tag_out_read_q;
	always @(posedge clk_i or negedge rst_ni) begin : reg_edge_detection
		if (!rst_ni) begin
			key_share0_in_new_q <= 1'sb0;
			key_share1_in_new_q <= 1'sb0;
			nonce_share0_in_new_q <= 1'sb0;
			nonce_share1_in_new_q <= 1'sb0;
			data_share0_in_new_q <= 1'sb0;
			data_share1_in_new_q <= 1'sb0;
			tag_in_new_q <= 1'sb0;
			msg_out_read_q <= 1'sb0;
			tag_out_read_q <= 1'sb0;
		end
		else begin
			key_share0_in_new_q <= key_share0_in_new_d;
			key_share1_in_new_q <= key_share1_in_new_d;
			nonce_share0_in_new_q <= nonce_share0_in_new_d;
			nonce_share1_in_new_q <= nonce_share1_in_new_d;
			data_share0_in_new_q <= data_share0_in_new_d;
			data_share1_in_new_q <= data_share1_in_new_d;
			tag_in_new_q <= tag_in_new_d;
			msg_out_read_q <= msg_out_read_d;
			tag_out_read_q <= tag_out_read_d;
		end
	end
	wire key_error;
	wire nonce_error;
	wire no_new_key;
	wire no_new_nonce;
	assign no_new_key = !(key_share0_in_new & key_share1_in_new);
	assign key_error = no_new_key;
	assign no_new_nonce = !(nonce_share0_in_new & nonce_share1_in_new);
	assign nonce_error = no_new_nonce;
	assign start_ok = start & !(key_error | nonce_error);
	assign key_share0_in_load = start_ok;
	assign key_share1_in_load = start_ok;
	assign nonce_share0_in_load = start_ok;
	assign nonce_share1_in_load = start_ok;
	wire [1:1] sv2v_tmp_F5EF1;
	assign sv2v_tmp_F5EF1 = key_error;
	always @(*) hw2reg[7] = sv2v_tmp_F5EF1;
	wire [1:1] sv2v_tmp_10684;
	assign sv2v_tmp_10684 = start;
	always @(*) hw2reg[6] = sv2v_tmp_10684;
	wire [1:1] sv2v_tmp_DC59F;
	assign sv2v_tmp_DC59F = nonce_error;
	always @(*) hw2reg[5] = sv2v_tmp_DC59F;
	wire [1:1] sv2v_tmp_CEA26;
	assign sv2v_tmp_CEA26 = start;
	always @(*) hw2reg[4] = sv2v_tmp_CEA26;
	wire flag_error;
	function automatic [11:0] sv2v_cast_12;
		input reg [11:0] inp;
		sv2v_cast_12 = inp;
	endfunction
	assign flag_error = (prim_mubi_pkg_mubi4_test_true_strict(no_ad) && ((data_type_start == sv2v_cast_12({sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9)})) || (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9)})))) || (prim_mubi_pkg_mubi4_test_true_strict(no_msg) && ((data_type_start == sv2v_cast_12({sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h9)})) || (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h9)}))));
	wire [1:1] sv2v_tmp_9D6DF;
	assign sv2v_tmp_9D6DF = flag_error;
	always @(*) hw2reg[1] = sv2v_tmp_9D6DF;
	function automatic prim_mubi_pkg_mubi4_test_false_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_strict = sv2v_cast_EECFA(4'h9) == val;
	endfunction
	wire [1:1] sv2v_tmp_4FA39;
	assign sv2v_tmp_4FA39 = prim_mubi_pkg_mubi4_test_false_strict(duplex_idle);
	always @(*) hw2reg[0] = sv2v_tmp_4FA39;
	wire order_error;
	reg msg_received_q;
	always @(posedge clk_i or negedge rst_ni) begin : reg_track_msg
		if (!rst_ni)
			msg_received_q <= 1'b0;
		else if (duplex_done)
			msg_received_q <= 1'b0;
		else if ((data_type_start == sv2v_cast_12({sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h9)})) || (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h9)})))
			msg_received_q <= 1'b1;
	end
	assign order_error = msg_received_q & ((data_type_start == sv2v_cast_12({sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9)})) || (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9)})));
	wire [1:1] sv2v_tmp_2CFEE;
	assign sv2v_tmp_2CFEE = order_error;
	always @(*) hw2reg[3] = sv2v_tmp_2CFEE;
	wire [1:1] sv2v_tmp_969FB;
	assign sv2v_tmp_969FB = prim_mubi_pkg_mubi4_test_false_strict(duplex_idle);
	always @(*) hw2reg[2] = sv2v_tmp_969FB;
	assign ascon_error = ((key_error | nonce_error) | flag_error) | order_error;
	reg track_reset_msg_q;
	reg track_reset_tag_q;
	always @(posedge clk_i or negedge rst_ni) begin : reg_track_reset
		if (!rst_ni) begin
			track_reset_msg_q <= 1'b1;
			track_reset_tag_q <= 1'b1;
		end
		else begin
			if (msg_out_we)
				track_reset_msg_q <= 1'b0;
			if (tag_out_we)
				track_reset_tag_q <= 1'b0;
		end
	end
	assign msg_out_ready = msg_out_read | track_reset_msg_q;
	assign msg_out_we = msg_out_valid & msg_out_ready;
	assign tag_out_ready = tag_out_read | track_reset_tag_q;
	assign tag_out_we = tag_out_valid & tag_out_ready;
	genvar _gv_i_6;
	generate
		for (_gv_i_6 = 0; _gv_i_6 < ascon_reg_pkg_NumRegsTag; _gv_i_6 = _gv_i_6 + 1) begin : gen_tag_in_conversion
			localparam i = _gv_i_6;
			assign tag_in_q[i * 32+:32] = reg2hw[346 + ((i * 33) + 32)-:32];
		end
	endgenerate
	assign tag_match = (tag_in_q == tag_out_q ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	assign tag_calculated = (tag_in_new && !tag_out_ready ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	always @(*) begin : tag_recoding
		if (_sv2v_0)
			;
		if (prim_mubi_pkg_mubi4_test_true_strict(tag_calculated)) begin
			if (prim_mubi_pkg_mubi4_test_true_strict(tag_match))
				hw2reg[42-:2] = 2'b01;
			else
				hw2reg[42-:2] = 2'b10;
		end
		else
			hw2reg[42-:2] = 2'b00;
	end
	wire [1:1] sv2v_tmp_590B3;
	assign sv2v_tmp_590B3 = 1'b1;
	always @(*) hw2reg[40] = sv2v_tmp_590B3;
	assign tag_in_load = tag_out_read | start_ok;
	wire [127:0] key_in;
	wire [127:0] data_in;
	wire [127:0] nonce_in;
	genvar _gv_i_7;
	generate
		for (_gv_i_7 = 0; _gv_i_7 < 4; _gv_i_7 = _gv_i_7 + 1) begin : gen_combine_shares
			localparam i = _gv_i_7;
			assign nonce_in[i * 32+:32] = nonce_share0_in_q[i * 32+:32] ^ nonce_share1_in_q[i * 32+:32];
			assign key_in[i * 32+:32] = key_share0_in_q[i * 32+:32] ^ key_share1_in_q[i * 32+:32];
			assign data_in[i * 32+:32] = data_share0_in_q[i * 32+:32] ^ data_share1_in_q[i * 32+:32];
		end
	endgenerate
	wire [3:0] last_ad_block;
	wire [3:0] last_msg_block;
	assign last_ad_block = (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9)}) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	assign last_msg_block = (data_type_last == sv2v_cast_12({sv2v_cast_EECFA(4'h6), sv2v_cast_EECFA(4'h9), sv2v_cast_EECFA(4'h9)}) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	function automatic [127:0] ascon_pkg_swap_endianess_byte;
		input reg [127:0] vector_in;
		reg [127:0] vector_out;
		begin
			vector_out[127:120] = vector_in[7:0];
			vector_out[119:112] = vector_in[15:8];
			vector_out[111:104] = vector_in[23:16];
			vector_out[103:96] = vector_in[31:24];
			vector_out[95:88] = vector_in[39:32];
			vector_out[87:80] = vector_in[47:40];
			vector_out[79:72] = vector_in[55:48];
			vector_out[71:64] = vector_in[63:56];
			vector_out[63:56] = vector_in[71:64];
			vector_out[55:48] = vector_in[79:72];
			vector_out[47:40] = vector_in[87:80];
			vector_out[39:32] = vector_in[95:88];
			vector_out[31:24] = vector_in[103:96];
			vector_out[23:16] = vector_in[111:104];
			vector_out[15:8] = vector_in[119:112];
			vector_out[7:0] = vector_in[127:120];
			ascon_pkg_swap_endianess_byte = vector_out;
		end
	endfunction
	assign msg_out_d = ascon_pkg_swap_endianess_byte(msg_out);
	assign tag_out_d = ascon_pkg_swap_endianess_byte(tag_out);
	prim_ascon_duplex ascon_duplex(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ascon_variant(variant),
		.ascon_operation(operation),
		.start_i(start_ok),
		.done_o(duplex_done),
		.idle_o(duplex_idle),
		.no_ad_i(no_ad),
		.no_msg_i(no_msg),
		.key_i(ascon_pkg_swap_endianess_byte(key_in)),
		.nonce_i(ascon_pkg_swap_endianess_byte(nonce_in)),
		.data_in_i(ascon_pkg_swap_endianess_byte(data_in)),
		.data_in_valid_bytes_i(valid_bytes),
		.last_block_ad_i(last_ad_block),
		.last_block_msg_i(last_msg_block),
		.data_in_valid_i(data_in_valid),
		.data_in_ready_o(data_in_ready),
		.data_out_o(msg_out),
		.data_out_ready_i(msg_out_ready),
		.data_out_valid_o(msg_out_valid),
		.tag_out_o(tag_out),
		.tag_out_valid_o(tag_out_valid),
		.fsm_state_o(duplex_fsm_state),
		.err_o(duplex_fatal_error)
	);
	wire unused_alert_signals;
	assign unused_alert_signals = ^reg2hw[1273-:4];
	initial _sv2v_0 = 0;
endmodule
