module keccak_round (
	clk_i,
	rst_ni,
	valid_i,
	addr_i,
	data_i,
	ready_o,
	run_i,
	rand_valid_i,
	rand_early_i,
	rand_data_i,
	rand_aux_i,
	rand_update_o,
	rand_consumed_o,
	complete_o,
	state_o,
	lc_escalate_en_i,
	sparse_fsm_error_o,
	round_count_error_o,
	rst_storage_error_o,
	clear_i
);
	reg _sv2v_0;
	parameter signed [31:0] Width = 1600;
	localparam signed [31:0] W = Width / 25;
	localparam signed [31:0] L = $clog2(W);
	localparam signed [31:0] MaxRound = 12 + (2 * L);
	localparam signed [31:0] RndW = $clog2(MaxRound + 1);
	parameter signed [31:0] DInWidth = 64;
	localparam signed [31:0] DInEntry = Width / DInWidth;
	localparam signed [31:0] DInAddr = $clog2(DInEntry);
	parameter [0:0] EnMasking = 1'b0;
	parameter [0:0] ForceRandExt = 1'b0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	input clk_i;
	input rst_ni;
	input valid_i;
	input [DInAddr - 1:0] addr_i;
	input [(Share * DInWidth) - 1:0] data_i;
	output wire ready_o;
	input run_i;
	input rand_valid_i;
	input rand_early_i;
	input [(Width / 2) - 1:0] rand_data_i;
	input rand_aux_i;
	output wire rand_update_o;
	output wire rand_consumed_o;
	output reg complete_o;
	output wire [(Share * Width) - 1:0] state_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg sparse_fsm_error_o;
	output wire round_count_error_o;
	output wire rst_storage_error_o;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] clear_i;
	reg update_storage;
	reg rst_storage;
	reg xor_message;
	reg [3:0] phase_sel;
	reg low_then_high_d;
	reg low_then_high_q;
	wire dom_out_low_d;
	reg dom_out_low_q;
	reg dom_in_low_d;
	reg dom_in_low_q;
	reg dom_in_rand_ext_d;
	reg dom_in_rand_ext_q;
	reg dom_update;
	reg inc_rnd_num;
	reg rst_rnd_num;
	wire rnd_eq_end;
	reg complete_d;
	wire [(Share * Width) - 1:0] keccak_out;
	wire [RndW - 1:0] round;
	reg keccak_rand_update;
	reg keccak_rand_consumed;
	wire [(Width / 2) - 1:0] keccak_rand_data;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	assign rnd_eq_end = sv2v_cast_32_signed(round) == (MaxRound - 1);
	localparam signed [31:0] sha3_pkg_KeccakFsmWidth = 6;
	wire [5:0] keccak_st;
	reg [5:0] keccak_st_d;
	function automatic [5:0] sv2v_cast_F7A5D;
		input reg [5:0] inp;
		sv2v_cast_F7A5D = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(sha3_pkg_KeccakFsmWidth),
		.ResetValue(sv2v_cast_F7A5D(6'b011111)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(keccak_st_d),
		.state_o(keccak_st)
	);
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
	always @(*) begin
		if (_sv2v_0)
			;
		keccak_st_d = keccak_st;
		xor_message = 1'b0;
		update_storage = 1'b0;
		rst_storage = 1'b0;
		inc_rnd_num = 1'b0;
		rst_rnd_num = 1'b0;
		keccak_rand_update = 1'b0;
		keccak_rand_consumed = 1'b0;
		phase_sel = sv2v_cast_EECFA(4'h9);
		low_then_high_d = low_then_high_q;
		dom_in_low_d = dom_in_low_q;
		dom_in_rand_ext_d = dom_in_rand_ext_q;
		dom_update = 1'b0;
		complete_d = 1'b0;
		sparse_fsm_error_o = 1'b0;
		(* full_case, parallel_case *)
		case (keccak_st)
			sv2v_cast_F7A5D(6'b011111):
				if (valid_i) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b011111);
					xor_message = 1'b1;
					update_storage = 1'b1;
				end
				else if (prim_mubi_pkg_mubi4_test_true_strict(clear_i)) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b011111);
					rst_storage = 1'b1;
				end
				else if (EnMasking && run_i) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b101101);
					dom_in_low_d = low_then_high_q;
					dom_in_rand_ext_d = 1'b0;
				end
				else if (!EnMasking && run_i)
					keccak_st_d = sv2v_cast_F7A5D(6'b000100);
				else
					keccak_st_d = sv2v_cast_F7A5D(6'b011111);
			sv2v_cast_F7A5D(6'b000100): begin
				update_storage = 1'b1;
				if (rnd_eq_end) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b011111);
					rst_rnd_num = 1'b1;
					complete_d = 1'b1;
				end
				else begin
					keccak_st_d = sv2v_cast_F7A5D(6'b000100);
					inc_rnd_num = 1'b1;
				end
			end
			sv2v_cast_F7A5D(6'b101101): begin
				phase_sel = sv2v_cast_EECFA(4'h9);
				dom_update = 1'b0;
				if (rand_early_i || rand_valid_i) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b000011);
					update_storage = 1'b1;
					keccak_rand_update = 1'b1;
					low_then_high_d = rand_aux_i;
					dom_in_low_d = low_then_high_d;
					dom_in_rand_ext_d = 1'b1;
				end
				else
					keccak_st_d = sv2v_cast_F7A5D(6'b101101);
			end
			sv2v_cast_F7A5D(6'b000011): begin
				phase_sel = sv2v_cast_EECFA(4'h6);
				dom_update = 1'b1;
				keccak_rand_update = 1'b1;
				keccak_st_d = sv2v_cast_F7A5D(6'b011000);
				dom_in_low_d = ~low_then_high_q;
				dom_in_rand_ext_d = 1'b1;
			end
			sv2v_cast_F7A5D(6'b011000): begin
				phase_sel = sv2v_cast_EECFA(4'h6);
				dom_update = 1'b1;
				keccak_rand_update = 1'b1;
				keccak_rand_consumed = 1'b1;
				update_storage = 1'b1;
				keccak_st_d = sv2v_cast_F7A5D(6'b101010);
				dom_in_low_d = low_then_high_q;
				dom_in_rand_ext_d = 1'b0;
			end
			sv2v_cast_F7A5D(6'b101010): begin
				phase_sel = sv2v_cast_EECFA(4'h6);
				dom_update = 1'b0;
				update_storage = 1'b1;
				if (rnd_eq_end) begin
					keccak_st_d = sv2v_cast_F7A5D(6'b011111);
					rst_rnd_num = 1'b1;
					complete_d = 1'b1;
				end
				else begin
					keccak_st_d = sv2v_cast_F7A5D(6'b101101);
					inc_rnd_num = 1'b1;
					dom_in_low_d = low_then_high_q;
					dom_in_rand_ext_d = 1'b0;
				end
			end
			sv2v_cast_F7A5D(6'b110001): keccak_st_d = sv2v_cast_F7A5D(6'b110001);
			sv2v_cast_F7A5D(6'b110110): begin
				keccak_st_d = keccak_st;
				sparse_fsm_error_o = 1'b1;
			end
			default: begin
				keccak_st_d = sv2v_cast_F7A5D(6'b110110);
				sparse_fsm_error_o = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			keccak_st_d = sv2v_cast_F7A5D(6'b110110);
	end
	assign dom_out_low_d = ~dom_in_low_d;
	generate
		if (EnMasking) begin : gen_regs_dom_ctrl
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					low_then_high_q <= 1'b0;
					dom_out_low_q <= 1'b0;
					dom_in_low_q <= 1'b0;
				end
				else begin
					low_then_high_q <= low_then_high_d;
					dom_out_low_q <= dom_out_low_d;
					dom_in_low_q <= dom_in_low_d;
				end
			if (!ForceRandExt) begin : gen_reg_dom_in_rand_ext
				always @(posedge clk_i or negedge rst_ni)
					if (!rst_ni)
						dom_in_rand_ext_q <= 1'b0;
					else
						dom_in_rand_ext_q <= dom_in_rand_ext_d;
			end
			else begin : gen_force_dom_in_rand_ext
				wire [1:1] sv2v_tmp_9E7A5;
				assign sv2v_tmp_9E7A5 = 1'b1;
				always @(*) dom_in_rand_ext_q = sv2v_tmp_9E7A5;
				wire unused_dom_in_rand_ext;
				assign unused_dom_in_rand_ext = dom_in_rand_ext_d;
			end
		end
		else begin : gen_no_regs_dom_ctrl
			wire unused_dom_ctrl;
			assign unused_dom_ctrl = ^{low_then_high_d, dom_out_low_d, dom_in_low_d, dom_in_rand_ext_d};
			wire [1:1] sv2v_tmp_FCC39;
			assign sv2v_tmp_FCC39 = 1'b0;
			always @(*) low_then_high_q = sv2v_tmp_FCC39;
			wire [1:1] sv2v_tmp_6EA9A;
			assign sv2v_tmp_6EA9A = 1'b0;
			always @(*) dom_out_low_q = sv2v_tmp_6EA9A;
			wire [1:1] sv2v_tmp_B20C4;
			assign sv2v_tmp_B20C4 = 1'b0;
			always @(*) dom_in_low_q = sv2v_tmp_B20C4;
			wire [1:1] sv2v_tmp_DB8A4;
			assign sv2v_tmp_DB8A4 = 1'b0;
			always @(*) dom_in_rand_ext_q = sv2v_tmp_DB8A4;
		end
	endgenerate
	assign ready_o = (keccak_st == sv2v_cast_F7A5D(6'b011111) ? 1'b1 : 1'b0);
	wire rst_n;
	prim_sec_anchor_buf #(.Width(1)) u_prim_sec_anchor_buf(
		.in_i(rst_ni),
		.out_o(rst_n)
	);
	reg [(Share * Width) - 1:0] storage;
	reg [(Share * Width) - 1:0] storage_d;
	function automatic [Width - 1:0] sv2v_cast_B1B06;
		input reg [Width - 1:0] inp;
		sv2v_cast_B1B06 = inp;
	endfunction
	always @(posedge clk_i or negedge rst_n)
		if (!rst_n)
			storage <= {Share {sv2v_cast_B1B06(1'sb0)}};
		else if (rst_storage)
			storage <= {Share {sv2v_cast_B1B06(1'sb0)}};
		else if (update_storage)
			storage <= storage_d;
	assign state_o = storage;
	always @(*) begin
		if (_sv2v_0)
			;
		storage_d = keccak_out;
		if (xor_message) begin : sv2v_autoblock_1
			reg signed [31:0] j;
			for (j = 0; j < Share; j = j + 1)
				begin : sv2v_autoblock_2
					reg [31:0] i;
					for (i = 0; i < DInEntry; i = i + 1)
						if (addr_i == i[DInAddr - 1:0])
							storage_d[(((Share - 1) - j) * Width) + (i * DInWidth)+:DInWidth] = storage[(((Share - 1) - j) * Width) + (i * DInWidth)+:DInWidth] ^ data_i[((Share - 1) - j) * DInWidth+:DInWidth];
						else
							storage_d[(((Share - 1) - j) * Width) + (i * DInWidth)+:DInWidth] = storage[(((Share - 1) - j) * Width) + (i * DInWidth)+:DInWidth];
				end
		end
	end
	reg rst_storage_error;
	function automatic prim_mubi_pkg_mubi4_test_false_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_loose = sv2v_cast_EECFA(4'h6) != val;
	endfunction
	always @(*) begin : chk_rst_storage
		if (_sv2v_0)
			;
		rst_storage_error = 1'b0;
		if (rst_storage) begin
			if ((keccak_st != sv2v_cast_F7A5D(6'b011111)) || prim_mubi_pkg_mubi4_test_false_loose(clear_i))
				rst_storage_error = 1'b1;
		end
	end
	assign rst_storage_error_o = rst_storage_error;
	keccak_2share #(
		.Width(Width),
		.EnMasking(EnMasking),
		.ForceRandExt(ForceRandExt)
	) u_keccak_p(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_escalate_en_i(lc_escalate_en_i),
		.rnd_i(round),
		.phase_sel_i(phase_sel),
		.dom_out_low_i(dom_out_low_q),
		.dom_in_low_i(dom_in_low_q),
		.dom_in_rand_ext_i(dom_in_rand_ext_q),
		.dom_update_i(dom_update),
		.rand_i(keccak_rand_data),
		.s_i(storage),
		.s_o(keccak_out)
	);
	assign rand_update_o = keccak_rand_update;
	assign rand_consumed_o = keccak_rand_consumed;
	assign keccak_rand_data = rand_data_i;
	function automatic signed [RndW - 1:0] sv2v_cast_A738E_signed;
		input reg signed [RndW - 1:0] inp;
		sv2v_cast_A738E_signed = inp;
	endfunction
	prim_count #(.Width(RndW)) u_round_count(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(rst_rnd_num),
		.set_i(1'b0),
		.set_cnt_i(1'sb0),
		.incr_en_i(inc_rnd_num),
		.decr_en_i(1'b0),
		.step_i(sv2v_cast_A738E_signed(1)),
		.commit_i(1'b1),
		.cnt_o(round),
		.cnt_after_commit_o(),
		.err_o(round_count_error_o)
	);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			complete_o <= 1'b0;
		else
			complete_o <= complete_d;
	initial _sv2v_0 = 0;
endmodule
