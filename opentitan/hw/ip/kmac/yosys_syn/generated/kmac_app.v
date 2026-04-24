module kmac_app (
	clk_i,
	rst_ni,
	reg_key_data_i,
	reg_key_len_i,
	reg_prefix_i,
	reg_kmac_en_i,
	reg_sha3_mode_i,
	reg_keccak_strength_i,
	sw_valid_i,
	sw_data_i,
	sw_mask_i,
	sw_ready_o,
	keymgr_key_i,
	app_i,
	app_o,
	key_data_o,
	key_len_o,
	key_valid_o,
	kmac_valid_o,
	kmac_data_o,
	kmac_mask_o,
	kmac_ready_i,
	kmac_en_o,
	sha3_prefix_o,
	sha3_mode_o,
	keccak_strength_o,
	keccak_state_valid_i,
	keccak_state_i,
	reg_state_valid_o,
	reg_state_o,
	keymgr_key_en_i,
	sw_cmd_i,
	absorbed_i,
	cmd_o,
	absorbed_o,
	app_active_o,
	entropy_ready_i,
	error_i,
	err_processed_i,
	clear_after_error_o,
	error_o,
	lc_escalate_en_i,
	sparse_fsm_error_o
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 1'b0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	parameter [0:0] SecIdleAcceptSwMsg = 1'b0;
	parameter [31:0] NumAppIntf = 3;
	localparam [15:0] kmac_pkg_EncodedStringEmpty = 16'h0001;
	localparam [47:0] kmac_pkg_EncodedStringKMAC = 48'h43414d4b2001;
	localparam signed [31:0] sha3_pkg_CsWidth = 256;
	localparam signed [31:0] sha3_pkg_FnWidth = 32;
	localparam signed [31:0] sha3_pkg_MaxCsEncodeSize = 3;
	localparam signed [31:0] sha3_pkg_MaxFnEncodeSize = 2;
	localparam signed [31:0] sha3_pkg_NSRegisterSizePre = 41;
	localparam signed [31:0] sha3_pkg_NSRegisterSize = 44;
	localparam [31:0] kmac_pkg_NSPrefixW = 352;
	function automatic [351:0] sv2v_cast_C7725;
		input reg [351:0] inp;
		sv2v_cast_C7725 = inp;
	endfunction
	localparam [357:0] kmac_pkg_AppCfgKeyMgr = {6'h25, sv2v_cast_C7725({kmac_pkg_EncodedStringEmpty, kmac_pkg_EncodedStringKMAC})};
	localparam [71:0] kmac_pkg_EncodedStringLcCtrl = 72'h4c5254435f434c3801;
	localparam [357:0] kmac_pkg_AppCfgLcCtrl = {6'h11, sv2v_cast_C7725({kmac_pkg_EncodedStringLcCtrl, kmac_pkg_EncodedStringEmpty})};
	localparam [79:0] kmac_pkg_EncodedStringRomCtrl = 80'h4c5254435f4d4f524001;
	localparam [357:0] kmac_pkg_AppCfgRomCtrl = {6'h15, sv2v_cast_C7725({kmac_pkg_EncodedStringRomCtrl, kmac_pkg_EncodedStringEmpty})};
	parameter [(NumAppIntf * 358) - 1:0] AppCfg = {kmac_pkg_AppCfgKeyMgr, kmac_pkg_AppCfgLcCtrl, kmac_pkg_AppCfgRomCtrl};
	input clk_i;
	input rst_ni;
	localparam signed [31:0] kmac_pkg_MaxKeyLen = 512;
	input [(Share * kmac_pkg_MaxKeyLen) - 1:0] reg_key_data_i;
	input wire [2:0] reg_key_len_i;
	input [351:0] reg_prefix_i;
	input reg_kmac_en_i;
	input wire [1:0] reg_sha3_mode_i;
	input wire [2:0] reg_keccak_strength_i;
	input sw_valid_i;
	localparam signed [31:0] sha3_pkg_MsgWidth = 64;
	localparam signed [31:0] kmac_pkg_MsgWidth = sha3_pkg_MsgWidth;
	input [63:0] sw_data_i;
	input [63:0] sw_mask_i;
	output reg sw_ready_o;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	localparam signed [31:0] sha3_pkg_MsgStrbW = 8;
	localparam signed [31:0] kmac_pkg_MsgStrbW = sha3_pkg_MsgStrbW;
	input wire [(NumAppIntf * 74) - 1:0] app_i;
	localparam [31:0] kmac_pkg_AppDigestW = 384;
	output reg [(NumAppIntf * 771) - 1:0] app_o;
	output reg [(Share * kmac_pkg_MaxKeyLen) - 1:0] key_data_o;
	output reg [2:0] key_len_o;
	output reg key_valid_o;
	output reg kmac_valid_o;
	output reg [63:0] kmac_data_o;
	output reg [63:0] kmac_mask_o;
	input kmac_ready_i;
	output reg kmac_en_o;
	output reg [351:0] sha3_prefix_o;
	output reg [1:0] sha3_mode_o;
	output reg [2:0] keccak_strength_o;
	input keccak_state_valid_i;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	input [(Share * sha3_pkg_StateW) - 1:0] keccak_state_i;
	output wire reg_state_valid_o;
	output reg [(Share * sha3_pkg_StateW) - 1:0] reg_state_o;
	input keymgr_key_en_i;
	input wire [5:0] sw_cmd_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] absorbed_i;
	output reg [5:0] cmd_o;
	output reg [3:0] absorbed_o;
	output wire app_active_o;
	input wire [3:0] entropy_ready_i;
	input error_i;
	input err_processed_i;
	output reg [3:0] clear_after_error_o;
	output reg [32:0] error_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg sparse_fsm_error_o;
	localparam signed [31:0] KeyMgrKeyW = keymgr_pkg_KeyWidth;
	localparam [14:0] KeyLengths = 15'b000001010011100;
	localparam [31:0] kmac_pkg_AppKeyW = 256;
	localparam signed [31:0] SelKeySize = 2;
	localparam signed [31:0] SelDigSize = 3;
	localparam [2:0] SideloadedKey = KeyLengths[6+:3];
	localparam signed [31:0] OutLenW = 24;
	localparam [119:0] EncodedOutLen = 120'h0001800001c0020001028001020002;
	localparam [119:0] EncodedOutLenMask = 120'h00ffff00ffffffffffffffffffffff;
	localparam signed [31:0] kmac_pkg_AppStateWidth = 10;
	wire [9:0] st;
	reg [9:0] st_d;
	reg keymgr_key_used;
	reg app_data_ready;
	reg fsm_data_ready;
	reg app_digest_done;
	reg fsm_digest_done_q;
	reg fsm_digest_done_d;
	reg [767:0] app_digest;
	localparam [31:0] AppIdxW = $clog2(NumAppIntf);
	reg [AppIdxW - 1:0] app_id;
	wire [AppIdxW - 1:0] app_id_d;
	reg clr_appid;
	reg set_appid;
	wire [23:0] encoded_outlen;
	wire [23:0] encoded_outlen_mask;
	localparam signed [31:0] kmac_pkg_AppMuxWidth = 5;
	reg [4:0] mux_sel;
	wire [4:0] mux_sel_buf_output;
	wire [4:0] mux_sel_buf_err_check;
	wire [4:0] mux_sel_buf_kmac;
	reg [32:0] fsm_err;
	reg [32:0] mux_err;
	reg service_rejected_error;
	reg service_rejected_error_set;
	reg service_rejected_error_clr;
	wire err_during_sw_d;
	reg err_during_sw_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			service_rejected_error <= 1'b0;
		else if (service_rejected_error_set)
			service_rejected_error <= 1'b1;
		else if (service_rejected_error_clr)
			service_rejected_error <= 1'b0;
	function automatic [383:0] sv2v_cast_C4EF0;
		input reg [383:0] inp;
		sv2v_cast_C4EF0 = inp;
	endfunction
	function automatic [383:0] sv2v_cast_984EB;
		input reg [383:0] inp;
		sv2v_cast_984EB = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_1
			reg [31:0] i;
			for (i = 0; i < NumAppIntf; i = i + 1)
				if (i == app_id)
					app_o[0 + (i * 771)+:771] = {app_data_ready | fsm_data_ready, app_digest_done | fsm_digest_done_q, sv2v_cast_C4EF0(app_digest[kmac_pkg_AppDigestW+:kmac_pkg_AppDigestW]), sv2v_cast_C4EF0(app_digest[0+:kmac_pkg_AppDigestW]), ((error_i | fsm_digest_done_q) | sparse_fsm_error_o) | service_rejected_error};
				else
					app_o[0 + (i * 771)+:771] = {2'b00, sv2v_cast_984EB(1'sb0), sv2v_cast_984EB(1'sb0), 1'b0};
		end
	end
	function automatic signed [AppIdxW - 1:0] sv2v_cast_51921_signed;
		input reg signed [AppIdxW - 1:0] inp;
		sv2v_cast_51921_signed = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			app_id <= sv2v_cast_51921_signed(0);
		else if (clr_appid)
			app_id <= sv2v_cast_51921_signed(0);
		else if (set_appid)
			app_id <= app_id_d;
	reg [NumAppIntf - 1:0] app_reqs;
	wire [NumAppIntf - 1:0] unused_app_gnts;
	wire [$clog2(NumAppIntf) - 1:0] arb_idx;
	wire arb_valid;
	wire arb_ready;
	always @(*) begin
		if (_sv2v_0)
			;
		app_reqs = 1'sb0;
		begin : sv2v_autoblock_2
			reg [31:0] i;
			for (i = 0; i < NumAppIntf; i = i + 1)
				app_reqs[i] = app_i[(i * 74) + 73];
		end
	end
	prim_arbiter_fixed #(
		.N(NumAppIntf),
		.DW(1),
		.EnDataPort(1'b0)
	) u_appid_arb(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.req_i(app_reqs),
		.data_i(1'sb0),
		.gnt_o(unused_app_gnts),
		.idx_o(arb_idx),
		.valid_o(arb_valid),
		.data_o(),
		.ready_i(arb_ready)
	);
	function automatic [AppIdxW - 1:0] sv2v_cast_51921;
		input reg [AppIdxW - 1:0] inp;
		sv2v_cast_51921 = inp;
	endfunction
	assign app_id_d = sv2v_cast_51921(arb_idx);
	assign arb_ready = set_appid;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			fsm_digest_done_q <= 1'b0;
		else
			fsm_digest_done_q <= fsm_digest_done_d;
	function automatic [9:0] sv2v_cast_A8CBB;
		input reg [9:0] inp;
		sv2v_cast_A8CBB = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(kmac_pkg_AppStateWidth),
		.ResetValue(sv2v_cast_A8CBB(10'b1010111110)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(st_d),
		.state_o(st)
	);
	localparam signed [31:0] KmacSecIdleAcceptSwMsgNonDefault = (SecIdleAcceptSwMsg == 0 ? 1 : 2);
	function automatic [KmacSecIdleAcceptSwMsgNonDefault - 1:0] sv2v_cast_72589;
		input reg [KmacSecIdleAcceptSwMsgNonDefault - 1:0] inp;
		sv2v_cast_72589 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_3
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72589(1'b1);
	end
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_strict = sv2v_cast_EECFA(4'h9) == val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	function automatic [4:0] sv2v_cast_6E3DE;
		input reg [4:0] inp;
		sv2v_cast_6E3DE = inp;
	endfunction
	function automatic [23:0] sv2v_cast_24;
		input reg [23:0] inp;
		sv2v_cast_24 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		st_d = st;
		mux_sel = (SecIdleAcceptSwMsg ? sv2v_cast_6E3DE(5'b01111) : sv2v_cast_6E3DE(5'b10100));
		set_appid = 1'b0;
		clr_appid = 1'b0;
		cmd_o = 6'b000000;
		absorbed_o = sv2v_cast_EECFA(4'h9);
		fsm_err = 33'h000000000;
		sparse_fsm_error_o = 1'b0;
		clear_after_error_o = sv2v_cast_EECFA(4'h9);
		service_rejected_error_set = 1'b0;
		service_rejected_error_clr = 1'b0;
		fsm_data_ready = 1'b0;
		fsm_digest_done_d = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_A8CBB(10'b1010111110):
				if (arb_valid) begin
					st_d = sv2v_cast_A8CBB(10'b1010101101);
					set_appid = 1'b1;
				end
				else if (sw_cmd_i == 6'b011101) begin
					st_d = sv2v_cast_A8CBB(10'b0010111011);
					cmd_o = 6'b011101;
				end
				else
					st_d = sv2v_cast_A8CBB(10'b1010111110);
			sv2v_cast_A8CBB(10'b1010101101):
				if ((AppCfg[(((NumAppIntf - 1) - app_id) * 358) + 357-:2] == 2'd2) && prim_mubi_pkg_mubi4_test_false_strict(entropy_ready_i)) begin
					st_d = sv2v_cast_A8CBB(10'b1110010111);
					service_rejected_error_set = 1'b1;
				end
				else begin
					st_d = sv2v_cast_A8CBB(10'b1110001011);
					cmd_o = 6'b011101;
				end
			sv2v_cast_A8CBB(10'b1110001011): begin
				mux_sel = sv2v_cast_6E3DE(5'b11001);
				if ((app_i[(app_id * 74) + 73] && app_o[(app_id * 771) + 770]) && app_i[(app_id * 74) + 0]) begin
					if (AppCfg[(((NumAppIntf - 1) - app_id) * 358) + 357-:2] == 2'd2)
						st_d = sv2v_cast_A8CBB(10'b1010011000);
					else
						st_d = sv2v_cast_A8CBB(10'b1110110010);
				end
				else
					st_d = sv2v_cast_A8CBB(10'b1110001011);
			end
			sv2v_cast_A8CBB(10'b1010011000): begin
				mux_sel = sv2v_cast_6E3DE(5'b00010);
				if (kmac_valid_o && kmac_ready_i)
					st_d = sv2v_cast_A8CBB(10'b1110110010);
				else
					st_d = sv2v_cast_A8CBB(10'b1010011000);
			end
			sv2v_cast_A8CBB(10'b1110110010): begin
				cmd_o = 6'b101110;
				st_d = sv2v_cast_A8CBB(10'b1001010000);
			end
			sv2v_cast_A8CBB(10'b1001010000):
				if (prim_mubi_pkg_mubi4_test_true_strict(absorbed_i)) begin
					st_d = sv2v_cast_A8CBB(10'b1010111110);
					cmd_o = 6'b010110;
					clr_appid = 1'b1;
				end
				else
					st_d = sv2v_cast_A8CBB(10'b1001010000);
			sv2v_cast_A8CBB(10'b0010111011): begin
				mux_sel = sv2v_cast_6E3DE(5'b01111);
				cmd_o = sw_cmd_i;
				absorbed_o = absorbed_i;
				if (sw_cmd_i == 6'b010110)
					st_d = sv2v_cast_A8CBB(10'b1010111110);
				else
					st_d = sv2v_cast_A8CBB(10'b0010111011);
			end
			sv2v_cast_A8CBB(10'b0111011111): begin
				st_d = sv2v_cast_A8CBB(10'b1110010111);
				fsm_err[32] = 1'b1;
				fsm_err[31-:8] = 8'h01;
				fsm_err[23-:24] = sv2v_cast_24(app_id);
			end
			sv2v_cast_A8CBB(10'b1110010111): begin
				st_d = sv2v_cast_A8CBB(10'b1110010111);
				fsm_data_ready = ~err_during_sw_q;
				(* full_case, parallel_case *)
				case ({err_processed_i, (app_i[(app_id * 74) + 73] && app_i[(app_id * 74) + 0]) || err_during_sw_q})
					2'b00: st_d = sv2v_cast_A8CBB(10'b1110010111);
					2'b01: begin
						fsm_digest_done_d = ~err_during_sw_q;
						if (service_rejected_error)
							st_d = sv2v_cast_A8CBB(10'b1101000111);
						else
							st_d = sv2v_cast_A8CBB(10'b0110001100);
					end
					2'b10: st_d = sv2v_cast_A8CBB(10'b1011100000);
					2'b11: begin
						fsm_digest_done_d = ~err_during_sw_q;
						cmd_o = 6'b101110;
						st_d = sv2v_cast_A8CBB(10'b0010100100);
					end
					default: st_d = sv2v_cast_A8CBB(10'b1110010111);
				endcase
			end
			sv2v_cast_A8CBB(10'b0110001100):
				if (err_processed_i) begin
					cmd_o = 6'b101110;
					st_d = sv2v_cast_A8CBB(10'b0010100100);
				end
			sv2v_cast_A8CBB(10'b1011100000): begin
				fsm_data_ready = 1'b1;
				if (app_i[(app_id * 74) + 73] && app_i[(app_id * 74) + 0]) begin
					fsm_digest_done_d = 1'b1;
					cmd_o = 6'b101110;
					st_d = sv2v_cast_A8CBB(10'b0010100100);
				end
			end
			sv2v_cast_A8CBB(10'b0010100100):
				if (prim_mubi_pkg_mubi4_test_true_strict(absorbed_i)) begin
					clr_appid = 1'b1;
					clear_after_error_o = sv2v_cast_EECFA(4'h6);
					service_rejected_error_clr = 1'b1;
					cmd_o = 6'b010110;
					st_d = sv2v_cast_A8CBB(10'b1010111110);
					if (err_during_sw_q)
						absorbed_o = sv2v_cast_EECFA(4'h6);
				end
			sv2v_cast_A8CBB(10'b1101000111): begin
				clr_appid = 1'b1;
				clear_after_error_o = sv2v_cast_EECFA(4'h6);
				service_rejected_error_clr = 1'b1;
				st_d = sv2v_cast_A8CBB(10'b1010111110);
			end
			sv2v_cast_A8CBB(10'b0101110110): begin
				st_d = st;
				sparse_fsm_error_o = 1'b1;
				fsm_err[32] = 1'b1;
				fsm_err[31-:8] = 8'hc1;
				fsm_err[23-:24] = sv2v_cast_24(app_id);
			end
			default: begin
				st_d = sv2v_cast_A8CBB(10'b0101110110);
				sparse_fsm_error_o = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_A8CBB(10'b0101110110);
		if (st_d != sv2v_cast_A8CBB(10'b0101110110)) begin
			if (keymgr_key_used && !keymgr_key_i[(keymgr_pkg_Shares * keymgr_pkg_KeyWidth) + 0])
				st_d = sv2v_cast_A8CBB(10'b0111011111);
		end
	end
	assign err_during_sw_d = ((mux_sel == sv2v_cast_6E3DE(5'b01111)) && |{((sv2v_cast_A8CBB(10'b1110010111) ^ (st_d ^ st_d)) === (st_d ^ (sv2v_cast_A8CBB(10'b1110010111) ^ sv2v_cast_A8CBB(10'b1110010111)))) & ((((st_d ^ st_d) ^ (sv2v_cast_A8CBB(10'b1110010111) ^ sv2v_cast_A8CBB(10'b1110010111))) === (sv2v_cast_A8CBB(10'b1110010111) ^ sv2v_cast_A8CBB(10'b1110010111))) | 1'bx), ((sv2v_cast_A8CBB(10'b0111011111) ^ (st_d ^ st_d)) === (st_d ^ (sv2v_cast_A8CBB(10'b0111011111) ^ sv2v_cast_A8CBB(10'b0111011111)))) & ((((st_d ^ st_d) ^ (sv2v_cast_A8CBB(10'b0111011111) ^ sv2v_cast_A8CBB(10'b0111011111))) === (sv2v_cast_A8CBB(10'b0111011111) ^ sv2v_cast_A8CBB(10'b0111011111))) | 1'bx)} ? 1'b1 : (st_d == sv2v_cast_A8CBB(10'b1010111110) ? 1'b0 : err_during_sw_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			err_during_sw_q <= 1'b0;
		else
			err_during_sw_q <= err_during_sw_d;
	assign encoded_outlen = EncodedOutLen[24+:OutLenW];
	assign encoded_outlen_mask = EncodedOutLenMask[48+:OutLenW];
	function automatic [63:0] sv2v_cast_64;
		input reg [63:0] inp;
		sv2v_cast_64 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		app_data_ready = 1'b0;
		sw_ready_o = 1'b1;
		kmac_valid_o = 1'b0;
		kmac_data_o = 1'sb0;
		kmac_mask_o = 1'sb0;
		(* full_case, parallel_case *)
		case (mux_sel_buf_kmac)
			sv2v_cast_6E3DE(5'b11001): begin
				kmac_valid_o = app_i[(app_id * 74) + 73];
				kmac_data_o = app_i[(app_id * 74) + 72-:64];
				begin : sv2v_autoblock_4
					reg signed [31:0] i;
					for (i = 0; i < 8; i = i + 1)
						kmac_mask_o[8 * i+:8] = {8 {app_i[(app_id * 74) + (1 + i)]}};
				end
				app_data_ready = kmac_ready_i;
			end
			sv2v_cast_6E3DE(5'b00010): begin
				kmac_valid_o = 1'b1;
				kmac_data_o = sv2v_cast_64(encoded_outlen);
				kmac_mask_o = sv2v_cast_64(encoded_outlen_mask);
			end
			sv2v_cast_6E3DE(5'b01111): begin
				kmac_valid_o = sw_valid_i;
				kmac_data_o = sw_data_i;
				kmac_mask_o = sw_mask_i;
				sw_ready_o = kmac_ready_i;
			end
			default: begin
				kmac_valid_o = 1'b0;
				kmac_data_o = 1'sb0;
				kmac_mask_o = 1'sb0;
			end
		endcase
	end
	function automatic [7:0] sv2v_cast_8;
		input reg [7:0] inp;
		sv2v_cast_8 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		mux_err = 33'h000000000;
		if ((mux_sel_buf_err_check != sv2v_cast_6E3DE(5'b01111)) && sw_valid_i)
			mux_err = {9'h102, sv2v_cast_24({8'h00, sv2v_cast_8(st), sv2v_cast_8(mux_sel_buf_err_check)})};
		else if (app_active_o && (sw_cmd_i != 6'b000000))
			mux_err = {9'h103, sv2v_cast_24(sw_cmd_i)};
	end
	wire [4:0] mux_sel_buf_output_logic;
	assign mux_sel_buf_output = sv2v_cast_6E3DE(mux_sel_buf_output_logic);
	prim_sec_anchor_buf #(.Width(kmac_pkg_AppMuxWidth)) u_prim_buf_state_output_sel(
		.in_i(mux_sel),
		.out_o(mux_sel_buf_output_logic)
	);
	wire [4:0] mux_sel_buf_err_check_logic;
	assign mux_sel_buf_err_check = sv2v_cast_6E3DE(mux_sel_buf_err_check_logic);
	prim_sec_anchor_buf #(.Width(kmac_pkg_AppMuxWidth)) u_prim_buf_state_err_check(
		.in_i(mux_sel),
		.out_o(mux_sel_buf_err_check_logic)
	);
	wire [4:0] mux_sel_buf_kmac_logic;
	assign mux_sel_buf_kmac = sv2v_cast_6E3DE(mux_sel_buf_kmac_logic);
	prim_sec_anchor_buf #(.Width(kmac_pkg_AppMuxWidth)) u_prim_buf_state_kmac_sel(
		.in_i(mux_sel),
		.out_o(mux_sel_buf_kmac_logic)
	);
	reg reg_state_valid;
	prim_sec_anchor_buf #(.Width(1)) u_prim_buf_state_output_valid(
		.in_i(reg_state_valid),
		.out_o(reg_state_valid_o)
	);
	function automatic lc_ctrl_pkg_lc_tx_test_false_strict;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_false_strict = sv2v_cast_BE429(4'b1010) == val;
	endfunction
	localparam [159:0] sha3_pkg_KeccakBitCapacity = 160'h00000100000001c0000002000000030000000400;
	function automatic [1599:0] sv2v_cast_E7E5C;
		input reg [1599:0] inp;
		sv2v_cast_E7E5C = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		reg_state_valid = 1'b0;
		reg_state_o = {Share {sv2v_cast_E7E5C(1'sb0)}};
		if ((mux_sel_buf_output == sv2v_cast_6E3DE(5'b01111)) && lc_ctrl_pkg_lc_tx_test_false_strict(lc_escalate_en_i)) begin
			reg_state_valid = keccak_state_valid_i;
			reg_state_o = keccak_state_i;
			if (keymgr_key_en_i) begin : sv2v_autoblock_5
				reg signed [31:0] i;
				for (i = 0; i < Share; i = i + 1)
					(* full_case, parallel_case *)
					case (reg_keccak_strength_i)
						3'b000: reg_state_o[(((Share - 1) - i) * sha3_pkg_StateW) + 1599-:sha3_pkg_KeccakBitCapacity[128+:32]] = 1'sb0;
						3'b001: reg_state_o[(((Share - 1) - i) * sha3_pkg_StateW) + 1599-:sha3_pkg_KeccakBitCapacity[96+:32]] = 1'sb0;
						3'b010: reg_state_o[(((Share - 1) - i) * sha3_pkg_StateW) + 1599-:sha3_pkg_KeccakBitCapacity[64+:32]] = 1'sb0;
						3'b011: reg_state_o[(((Share - 1) - i) * sha3_pkg_StateW) + 1599-:sha3_pkg_KeccakBitCapacity[32+:32]] = 1'sb0;
						3'b100: reg_state_o[(((Share - 1) - i) * sha3_pkg_StateW) + 1599-:sha3_pkg_KeccakBitCapacity[0+:32]] = 1'sb0;
						default: reg_state_o[((Share - 1) - i) * sha3_pkg_StateW+:sha3_pkg_StateW] = 1'sb0;
					endcase
			end
		end
	end
	always @(*) begin
		if (_sv2v_0)
			;
		app_digest_done = 1'b0;
		app_digest = {2 {sv2v_cast_984EB(1'sb0)}};
		if (((st == sv2v_cast_A8CBB(10'b1001010000)) && prim_mubi_pkg_mubi4_test_true_strict(absorbed_i)) && lc_ctrl_pkg_lc_tx_test_false_strict(lc_escalate_en_i)) begin
			app_digest_done = 1'b1;
			begin : sv2v_autoblock_6
				reg signed [31:0] i;
				for (i = 0; i < Share; i = i + 1)
					app_digest[(1 - i) * kmac_pkg_AppDigestW+:kmac_pkg_AppDigestW] = keccak_state_i[(((Share - 1) - i) * sha3_pkg_StateW) + 383-:kmac_pkg_AppDigestW];
			end
		end
	end
	reg [511:0] keymgr_key [0:Share - 1];
	function automatic signed [(32'sd512 - KeyMgrKeyW) - 1:0] sv2v_cast_12505_signed;
		input reg signed [(32'sd512 - KeyMgrKeyW) - 1:0] inp;
		sv2v_cast_12505_signed = inp;
	endfunction
	generate
		if (EnMasking == 1) begin : g_masked_key
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < Share; _gv_i_1 = _gv_i_1 + 1) begin : gen_key_pad
				localparam i = _gv_i_1;
				wire [512:1] sv2v_tmp_0DDE0;
				assign sv2v_tmp_0DDE0 = {sv2v_cast_12505_signed(0), keymgr_key_i[((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - (((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - (i * keymgr_pkg_KeyWidth))+:keymgr_pkg_KeyWidth]};
				always @(*) keymgr_key[i] = sv2v_tmp_0DDE0;
			end
		end
		else begin : g_unmasked_key
			always @(*) begin
				if (_sv2v_0)
					;
				keymgr_key[0] = 1'sb0;
				begin : sv2v_autoblock_7
					reg signed [31:0] i;
					for (i = 0; i < keymgr_pkg_Shares; i = i + 1)
						keymgr_key[0][255:0] = keymgr_key[0][255:0] ^ keymgr_key_i[((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - (((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - (i * keymgr_pkg_KeyWidth))+:keymgr_pkg_KeyWidth];
				end
			end
		end
	endgenerate
	always @(*) begin
		if (_sv2v_0)
			;
		keymgr_key_used = 1'b0;
		key_len_o = reg_key_len_i;
		begin : sv2v_autoblock_8
			reg signed [31:0] i;
			for (i = 0; i < Share; i = i + 1)
				key_data_o[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] = reg_key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen];
		end
		key_valid_o = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_A8CBB(10'b1010101101), sv2v_cast_A8CBB(10'b1110001011), sv2v_cast_A8CBB(10'b1010011000), sv2v_cast_A8CBB(10'b1110110010), sv2v_cast_A8CBB(10'b1001010000): begin
				keymgr_key_used = AppCfg[(((NumAppIntf - 1) - app_id) * 358) + 357-:2] == 2'd2;
				key_len_o = SideloadedKey;
				begin : sv2v_autoblock_9
					reg signed [31:0] i;
					for (i = 0; i < Share; i = i + 1)
						key_data_o[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] = keymgr_key[i];
				end
				key_valid_o = keymgr_key_used && keymgr_key_i[(keymgr_pkg_Shares * keymgr_pkg_KeyWidth) + 0];
			end
			sv2v_cast_A8CBB(10'b0010111011): begin
				if (keymgr_key_en_i) begin
					keymgr_key_used = kmac_en_o;
					key_len_o = SideloadedKey;
					begin : sv2v_autoblock_10
						reg signed [31:0] i;
						for (i = 0; i < Share; i = i + 1)
							key_data_o[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:kmac_pkg_MaxKeyLen] = keymgr_key[i];
					end
				end
				if (kmac_en_o) begin
					if (!keymgr_key_en_i)
						key_valid_o = 1'b1;
					else
						key_valid_o = keymgr_key_i[(keymgr_pkg_Shares * keymgr_pkg_KeyWidth) + 0];
				end
			end
			default:
				;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		sha3_prefix_o = 1'sb0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_A8CBB(10'b1010101101), sv2v_cast_A8CBB(10'b1110001011), sv2v_cast_A8CBB(10'b1010011000), sv2v_cast_A8CBB(10'b1110110010), sv2v_cast_A8CBB(10'b1001010000): begin : sv2v_autoblock_11
				reg [31:0] i;
				for (i = 0; i < NumAppIntf; i = i + 1)
					if (app_id == i) begin
						if (AppCfg[(((NumAppIntf - 1) - i) * 358) + 352] == 1'b0)
							sha3_prefix_o = reg_prefix_i;
						else
							sha3_prefix_o = AppCfg[(((NumAppIntf - 1) - i) * 358) + 351-:kmac_pkg_NSPrefixW];
					end
			end
			sv2v_cast_A8CBB(10'b0010111011): sha3_prefix_o = reg_prefix_i;
			default: sha3_prefix_o = reg_prefix_i;
		endcase
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			kmac_en_o <= 1'b0;
			sha3_mode_o <= 2'b00;
			keccak_strength_o <= 3'b010;
		end
		else if (clr_appid) begin
			kmac_en_o <= reg_kmac_en_i;
			sha3_mode_o <= reg_sha3_mode_i;
			keccak_strength_o <= reg_keccak_strength_i;
		end
		else if (set_appid) begin
			kmac_en_o <= (AppCfg[(((NumAppIntf - 1) - arb_idx) * 358) + 357-:2] == 2'd2 ? 1'b1 : 1'b0);
			sha3_mode_o <= (AppCfg[(((NumAppIntf - 1) - arb_idx) * 358) + 357-:2] == 2'd0 ? 2'b00 : 2'b11);
			keccak_strength_o <= AppCfg[(((NumAppIntf - 1) - arb_idx) * 358) + 355-:3];
		end
		else if (st == sv2v_cast_A8CBB(10'b1010111110)) begin
			kmac_en_o <= reg_kmac_en_i;
			sha3_mode_o <= reg_sha3_mode_i;
			keccak_strength_o <= reg_keccak_strength_i;
		end
	assign app_active_o = |{((sv2v_cast_A8CBB(10'b1010101101) ^ (st ^ st)) === (st ^ (sv2v_cast_A8CBB(10'b1010101101) ^ sv2v_cast_A8CBB(10'b1010101101)))) & ((((st ^ st) ^ (sv2v_cast_A8CBB(10'b1010101101) ^ sv2v_cast_A8CBB(10'b1010101101))) === (sv2v_cast_A8CBB(10'b1010101101) ^ sv2v_cast_A8CBB(10'b1010101101))) | 1'bx), ((sv2v_cast_A8CBB(10'b1110001011) ^ (st ^ st)) === (st ^ (sv2v_cast_A8CBB(10'b1110001011) ^ sv2v_cast_A8CBB(10'b1110001011)))) & ((((st ^ st) ^ (sv2v_cast_A8CBB(10'b1110001011) ^ sv2v_cast_A8CBB(10'b1110001011))) === (sv2v_cast_A8CBB(10'b1110001011) ^ sv2v_cast_A8CBB(10'b1110001011))) | 1'bx), ((sv2v_cast_A8CBB(10'b1010011000) ^ (st ^ st)) === (st ^ (sv2v_cast_A8CBB(10'b1010011000) ^ sv2v_cast_A8CBB(10'b1010011000)))) & ((((st ^ st) ^ (sv2v_cast_A8CBB(10'b1010011000) ^ sv2v_cast_A8CBB(10'b1010011000))) === (sv2v_cast_A8CBB(10'b1010011000) ^ sv2v_cast_A8CBB(10'b1010011000))) | 1'bx), ((sv2v_cast_A8CBB(10'b1110110010) ^ (st ^ st)) === (st ^ (sv2v_cast_A8CBB(10'b1110110010) ^ sv2v_cast_A8CBB(10'b1110110010)))) & ((((st ^ st) ^ (sv2v_cast_A8CBB(10'b1110110010) ^ sv2v_cast_A8CBB(10'b1110110010))) === (sv2v_cast_A8CBB(10'b1110110010) ^ sv2v_cast_A8CBB(10'b1110110010))) | 1'bx), ((sv2v_cast_A8CBB(10'b1001010000) ^ (st ^ st)) === (st ^ (sv2v_cast_A8CBB(10'b1001010000) ^ sv2v_cast_A8CBB(10'b1001010000)))) & ((((st ^ st) ^ (sv2v_cast_A8CBB(10'b1001010000) ^ sv2v_cast_A8CBB(10'b1001010000))) === (sv2v_cast_A8CBB(10'b1001010000) ^ sv2v_cast_A8CBB(10'b1001010000))) | 1'bx)};
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case *)
		casez ({fsm_err[32], mux_err[32]})
			2'bz1: error_o = mux_err;
			2'b10: error_o = fsm_err;
			default: error_o = 33'h000000000;
		endcase
	end
	initial _sv2v_0 = 0;
endmodule
