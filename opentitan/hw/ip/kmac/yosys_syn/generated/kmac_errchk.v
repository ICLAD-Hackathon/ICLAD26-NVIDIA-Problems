module kmac_errchk (
	clk_i,
	rst_ni,
	cfg_mode_i,
	cfg_strength_i,
	kmac_en_i,
	cfg_prefix_6B_i,
	cfg_en_unsupported_modestrength_i,
	entropy_ready_pulse_i,
	sw_cmd_i,
	sw_cmd_o,
	app_active_i,
	sha3_absorbed_i,
	keccak_done_i,
	lc_escalate_en_i,
	err_processed_i,
	clear_after_error_i,
	error_o,
	sparse_fsm_error_o
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 1'b1;
	input clk_i;
	input rst_ni;
	input wire [1:0] cfg_mode_i;
	input wire [2:0] cfg_strength_i;
	input kmac_en_i;
	input [47:0] cfg_prefix_6B_i;
	input cfg_en_unsupported_modestrength_i;
	input entropy_ready_pulse_i;
	input wire [5:0] sw_cmd_i;
	output reg [5:0] sw_cmd_o;
	input app_active_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] sha3_absorbed_i;
	input keccak_done_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input err_processed_i;
	input wire [3:0] clear_after_error_i;
	output wire [32:0] error_o;
	output reg sparse_fsm_error_o;
	localparam signed [31:0] StateWidth = 6;
	wire [5:0] st;
	reg [5:0] st_d;
	localparam signed [31:0] StateWidthL = 3;
	reg [2:0] stL;
	reg err_swsequence;
	reg err_modestrength;
	reg err_prefix;
	reg err_entropy_ready;
	reg cfg_entropy_ready;
	wire block_swcmd;
	function automatic [5:0] sv2v_cast_288BE;
		input reg [5:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		err_swsequence = 1'b0;
		sparse_fsm_error_o = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_288BE(6'b001101):
				if (!(|{sw_cmd_i == 6'b000000, sw_cmd_i == 6'b011101}))
					err_swsequence = 1'b1;
			sv2v_cast_288BE(6'b110001):
				if (!(|{sw_cmd_i == 6'b000000, sw_cmd_i == 6'b101110}))
					err_swsequence = 1'b1;
			sv2v_cast_288BE(6'b010110):
				if (sw_cmd_i != 6'b000000)
					err_swsequence = 1'b1;
			sv2v_cast_288BE(6'b100010):
				if (!(|{sw_cmd_i == 6'b000000, sw_cmd_i == 6'b110001, sw_cmd_i == 6'b010110}))
					err_swsequence = 1'b1;
			sv2v_cast_288BE(6'b111100):
				if (sw_cmd_i != 6'b000000)
					err_swsequence = 1'b1;
			sv2v_cast_288BE(6'b011011): begin
				err_swsequence = 1'b0;
				sparse_fsm_error_o = 1'b1;
			end
			default: begin
				err_swsequence = 1'b0;
				sparse_fsm_error_o = 1'b1;
			end
		endcase
	end
	assign block_swcmd = (err_swsequence || (err_modestrength && !cfg_en_unsupported_modestrength_i)) || err_entropy_ready;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			sw_cmd_o <= 6'b000000;
		else if (!block_swcmd)
			sw_cmd_o <= sw_cmd_i;
	always @(*) begin : check_modestrength
		if (_sv2v_0)
			;
		err_modestrength = 1'b0;
		if ((st == sv2v_cast_288BE(6'b001101)) && (st_d == sv2v_cast_288BE(6'b110001))) begin
			if (!(((cfg_mode_i == 2'b00) && |{cfg_strength_i == 3'b001, cfg_strength_i == 3'b010, cfg_strength_i == 3'b011, cfg_strength_i == 3'b100}) || (((cfg_mode_i == 2'b10) || (cfg_mode_i == 2'b11)) && |{cfg_strength_i == 3'b000, cfg_strength_i == 3'b010})))
				err_modestrength = 1'b1;
		end
	end
	localparam [47:0] kmac_pkg_EncodedStringKMAC = 48'h43414d4b2001;
	always @(*) begin : check_prefix
		if (_sv2v_0)
			;
		err_prefix = 1'b0;
		if (((st == sv2v_cast_288BE(6'b001101)) && (st_d == sv2v_cast_288BE(6'b110001))) && kmac_en_i) begin
			if (cfg_prefix_6B_i != kmac_pkg_EncodedStringKMAC)
				err_prefix = 1'b1;
		end
	end
	generate
		if (EnMasking) begin : g_entropy_chk
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					cfg_entropy_ready <= 1'b0;
				else if (err_processed_i)
					cfg_entropy_ready <= 1'b0;
				else if (entropy_ready_pulse_i && (st == sv2v_cast_288BE(6'b001101)))
					cfg_entropy_ready <= 1'b1;
			always @(*) begin : check_entropy_ready
				if (_sv2v_0)
					;
				err_entropy_ready = 1'b0;
				if (((st == sv2v_cast_288BE(6'b001101)) && (st_d == sv2v_cast_288BE(6'b110001))) && kmac_en_i) begin
					if (!cfg_entropy_ready)
						err_entropy_ready = 1'b1;
				end
			end
		end
		else begin : g_pseudo_entropy_chk
			wire [1:1] sv2v_tmp_9FE81;
			assign sv2v_tmp_9FE81 = 1'b0;
			always @(*) err_entropy_ready = sv2v_tmp_9FE81;
			wire [1:1] sv2v_tmp_1AC97;
			assign sv2v_tmp_1AC97 = 1'b1;
			always @(*) cfg_entropy_ready = sv2v_tmp_1AC97;
			wire unused_cfg_entropy_ready;
			assign unused_cfg_entropy_ready = cfg_entropy_ready;
			wire unused_err_processed;
			assign unused_err_processed = err_processed_i;
			wire unused_entropy_ready_puls;
			assign unused_entropy_ready_puls = entropy_ready_pulse_i;
		end
	endgenerate
	function automatic [2:0] sv2v_cast_DB473;
		input reg [2:0] inp;
		sv2v_cast_DB473 = inp;
	endfunction
	always @(*) begin : recode_st
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_288BE(6'b001101): stL = sv2v_cast_DB473(0);
			sv2v_cast_288BE(6'b110001): stL = sv2v_cast_DB473(1);
			sv2v_cast_288BE(6'b010110): stL = sv2v_cast_DB473(2);
			sv2v_cast_288BE(6'b100010): stL = sv2v_cast_DB473(3);
			sv2v_cast_288BE(6'b111100): stL = sv2v_cast_DB473(4);
			default: stL = sv2v_cast_DB473(5);
		endcase
	end
	reg [32:0] err;
	function automatic [23:0] sv2v_cast_24;
		input reg [23:0] inp;
		sv2v_cast_24 = inp;
	endfunction
	function automatic [7:0] sv2v_cast_8;
		input reg [7:0] inp;
		sv2v_cast_8 = inp;
	endfunction
	function automatic [15:0] sv2v_cast_16;
		input reg [15:0] inp;
		sv2v_cast_16 = inp;
	endfunction
	always @(*) begin : err_return
		if (_sv2v_0)
			;
		err = 33'h000000000;
		(* full_case *)
		case (1'b1)
			err_swsequence: err = {9'h108, sv2v_cast_24({5'h00, err_swsequence, err_modestrength, err_prefix, 5'h00, stL, 2'b00, sw_cmd_i})};
			err_modestrength: err = {9'h106, sv2v_cast_24({5'h00, err_swsequence, err_modestrength, err_prefix, 10'h000, cfg_mode_i, 1'b0, cfg_strength_i})};
			err_prefix: err = {9'h107, sv2v_cast_24({5'h00, err_swsequence, err_modestrength, err_prefix, 16'h0000})};
			err_entropy_ready: err = {9'h109, sv2v_cast_24({sv2v_cast_8({err_entropy_ready, err_swsequence, err_modestrength, err_prefix}), sv2v_cast_16({kmac_en_i, cfg_entropy_ready})})};
			default: err = 33'h000000000;
		endcase
	end
	assign error_o = err;
	wire [5:0] st_gated_d;
	prim_sparse_fsm_flop #(
		.Width(StateWidth),
		.ResetValue(sv2v_cast_288BE(6'b001101)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(st_gated_d),
		.state_o(st)
	);
	assign st_gated_d = (block_swcmd ? st : st_d);
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
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	always @(*) begin : next_state
		if (_sv2v_0)
			;
		st_d = st;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_288BE(6'b001101):
				if (!app_active_i && (sw_cmd_i == 6'b011101))
					st_d = sv2v_cast_288BE(6'b110001);
			sv2v_cast_288BE(6'b110001):
				if (sw_cmd_i == 6'b101110)
					st_d = sv2v_cast_288BE(6'b010110);
			sv2v_cast_288BE(6'b010110):
				if (prim_mubi_pkg_mubi4_test_true_strict(sha3_absorbed_i))
					st_d = sv2v_cast_288BE(6'b100010);
			sv2v_cast_288BE(6'b100010):
				if (sw_cmd_i == 6'b110001)
					st_d = sv2v_cast_288BE(6'b111100);
				else if (sw_cmd_i == 6'b010110)
					st_d = sv2v_cast_288BE(6'b001101);
			sv2v_cast_288BE(6'b111100):
				if (keccak_done_i)
					st_d = sv2v_cast_288BE(6'b100010);
			sv2v_cast_288BE(6'b011011): st_d = st;
			default: st_d = sv2v_cast_288BE(6'b011011);
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_288BE(6'b011011);
		if ((st_d != sv2v_cast_288BE(6'b011011)) && prim_mubi_pkg_mubi4_test_true_strict(clear_after_error_i))
			st_d = sv2v_cast_288BE(6'b001101);
	end
	initial _sv2v_0 = 0;
endmodule
