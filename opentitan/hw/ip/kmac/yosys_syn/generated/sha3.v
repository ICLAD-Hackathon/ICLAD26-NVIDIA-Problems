module sha3 (
	clk_i,
	rst_ni,
	msg_valid_i,
	msg_data_i,
	msg_strb_i,
	msg_ready_o,
	rand_valid_i,
	rand_early_i,
	rand_data_i,
	rand_aux_i,
	rand_update_o,
	rand_consumed_o,
	ns_data_i,
	mode_i,
	strength_i,
	start_i,
	process_i,
	run_i,
	done_i,
	absorbed_o,
	squeezing_o,
	block_processed_o,
	sha3_fsm_o,
	state_valid_o,
	state_o,
	run_req_o,
	run_ack_i,
	lc_escalate_en_i,
	error_o,
	sparse_fsm_error_o,
	count_error_o,
	keccak_storage_rst_error_o
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	input clk_i;
	input rst_ni;
	input msg_valid_i;
	localparam signed [31:0] sha3_pkg_MsgWidth = 64;
	input [(Share * sha3_pkg_MsgWidth) - 1:0] msg_data_i;
	localparam signed [31:0] sha3_pkg_MsgStrbW = 8;
	input [7:0] msg_strb_i;
	output wire msg_ready_o;
	input rand_valid_i;
	input rand_early_i;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	input [799:0] rand_data_i;
	input rand_aux_i;
	output wire rand_update_o;
	output wire rand_consumed_o;
	localparam signed [31:0] sha3_pkg_CsWidth = 256;
	localparam signed [31:0] sha3_pkg_FnWidth = 32;
	localparam signed [31:0] sha3_pkg_MaxCsEncodeSize = 3;
	localparam signed [31:0] sha3_pkg_MaxFnEncodeSize = 2;
	localparam signed [31:0] sha3_pkg_NSRegisterSizePre = 41;
	localparam signed [31:0] sha3_pkg_NSRegisterSize = 44;
	input [351:0] ns_data_i;
	input wire [1:0] mode_i;
	input wire [2:0] strength_i;
	input start_i;
	input process_i;
	input run_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] done_i;
	output reg [3:0] absorbed_o;
	output wire squeezing_o;
	output wire block_processed_o;
	localparam signed [31:0] sha3_pkg_StateWidthLogic = 3;
	output wire [2:0] sha3_fsm_o;
	output wire state_valid_o;
	output wire [(Share * sha3_pkg_StateW) - 1:0] state_o;
	output wire run_req_o;
	input run_ack_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg [32:0] error_o;
	output wire sparse_fsm_error_o;
	output wire count_error_o;
	output wire keccak_storage_rst_error_o;
	reg state_valid;
	wire [(Share * sha3_pkg_StateW) - 1:0] state;
	reg [(Share * sha3_pkg_StateW) - 1:0] state_guarded;
	reg [2:0] mux_sel;
	wire [3:0] absorbed;
	reg squeezing;
	reg processing;
	localparam signed [31:0] sha3_pkg_StateWidth = 6;
	wire [5:0] st;
	reg [5:0] st_d;
	reg keccak_start;
	reg keccak_process;
	reg [3:0] keccak_done;
	wire round_count_error;
	wire msg_count_error;
	assign count_error_o = round_count_error | msg_count_error;
	reg sha3_state_error;
	wire keccak_round_state_error;
	wire sha3pad_state_error;
	assign sparse_fsm_error_o = (sha3_state_error | keccak_round_state_error) | sha3pad_state_error;
	wire keccak_storage_rst_error;
	assign keccak_storage_rst_error_o = keccak_storage_rst_error;
	wire keccak_valid;
	localparam [31:0] sha3_pkg_KeccakEntries = 25;
	localparam [31:0] sha3_pkg_KeccakMsgAddrW = 5;
	wire [4:0] keccak_addr;
	wire [(Share * sha3_pkg_MsgWidth) - 1:0] keccak_data;
	wire keccak_ready;
	wire keccak_run;
	wire sha3pad_keccak_run;
	reg sw_keccak_run;
	wire keccak_run_req_d;
	reg keccak_run_req_q;
	wire keccak_triggered_d;
	reg keccak_triggered_q;
	wire keccak_complete;
	assign run_req_o = keccak_run_req_d;
	assign keccak_run_req_d = (sha3pad_keccak_run || sw_keccak_run ? 1'b1 : (keccak_complete ? 1'b0 : keccak_run_req_q));
	assign keccak_run = (run_req_o & run_ack_i) & ~keccak_triggered_q;
	assign keccak_triggered_d = (keccak_run ? 1'b1 : (keccak_complete ? 1'b0 : keccak_triggered_q));
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			keccak_run_req_q <= 1'b0;
			keccak_triggered_q <= 1'b0;
		end
		else begin
			keccak_run_req_q <= keccak_run_req_d;
			keccak_triggered_q <= keccak_triggered_d;
		end
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			absorbed_o <= sv2v_cast_EECFA(4'h9);
		else
			absorbed_o <= absorbed;
	assign squeezing_o = squeezing;
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			processing <= 1'b0;
		else if (process_i)
			processing <= 1'b1;
		else if (prim_mubi_pkg_mubi4_test_true_strict(absorbed))
			processing <= 1'b0;
	assign block_processed_o = keccak_complete;
	assign state_valid_o = state_valid;
	assign state_o = state_guarded;
	function automatic [5:0] sv2v_cast_09312;
		input reg [5:0] inp;
		sv2v_cast_09312 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_C95E7;
		input reg [2:0] inp;
		sv2v_cast_C95E7 = inp;
	endfunction
	function automatic [2:0] sha3_pkg_sparse2logic;
		input reg [5:0] st;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_09312(6'b101100): sha3_pkg_sparse2logic = sv2v_cast_C95E7(0);
			sv2v_cast_09312(6'b100001): sha3_pkg_sparse2logic = sv2v_cast_C95E7(1);
			sv2v_cast_09312(6'b001011): sha3_pkg_sparse2logic = sv2v_cast_C95E7(2);
			sv2v_cast_09312(6'b010000): sha3_pkg_sparse2logic = sv2v_cast_C95E7(3);
			sv2v_cast_09312(6'b000110): sha3_pkg_sparse2logic = sv2v_cast_C95E7(4);
			default: sha3_pkg_sparse2logic = sv2v_cast_C95E7(5);
		endcase
	endfunction
	assign sha3_fsm_o = sha3_pkg_sparse2logic(st);
	prim_sparse_fsm_flop #(
		.Width(sha3_pkg_StateWidth),
		.ResetValue(sv2v_cast_09312(6'b101100)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(st_d),
		.state_o(st)
	);
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		st_d = st;
		keccak_start = 1'b0;
		keccak_process = 1'b0;
		sw_keccak_run = 1'b0;
		keccak_done = sv2v_cast_EECFA(4'h9);
		squeezing = 1'b0;
		state_valid = 1'b0;
		mux_sel = 3'b010;
		sha3_state_error = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_09312(6'b101100):
				if (start_i) begin
					st_d = sv2v_cast_09312(6'b100001);
					keccak_start = 1'b1;
				end
				else
					st_d = sv2v_cast_09312(6'b101100);
			sv2v_cast_09312(6'b100001):
				if (process_i && !processing) begin
					st_d = sv2v_cast_09312(6'b100001);
					keccak_process = 1'b1;
				end
				else if (prim_mubi_pkg_mubi4_test_true_strict(absorbed))
					st_d = sv2v_cast_09312(6'b001011);
				else
					st_d = sv2v_cast_09312(6'b100001);
			sv2v_cast_09312(6'b001011): begin
				state_valid = 1'b1;
				mux_sel = 3'b101;
				squeezing = 1'b1;
				if (run_i) begin
					st_d = sv2v_cast_09312(6'b010000);
					sw_keccak_run = 1'b1;
				end
				else if (prim_mubi_pkg_mubi4_test_true_strict(done_i)) begin
					st_d = sv2v_cast_09312(6'b000110);
					keccak_done = done_i;
				end
				else
					st_d = sv2v_cast_09312(6'b001011);
			end
			sv2v_cast_09312(6'b010000):
				if (keccak_complete)
					st_d = sv2v_cast_09312(6'b001011);
				else
					st_d = sv2v_cast_09312(6'b010000);
			sv2v_cast_09312(6'b000110): st_d = sv2v_cast_09312(6'b101100);
			sv2v_cast_09312(6'b111010): begin
				st_d = sv2v_cast_09312(6'b111010);
				sha3_state_error = 1'b1;
			end
			default: begin
				st_d = sv2v_cast_09312(6'b111010);
				sha3_state_error = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_09312(6'b111010);
	end
	function automatic [1599:0] sv2v_cast_4A2C3;
		input reg [1599:0] inp;
		sv2v_cast_4A2C3 = inp;
	endfunction
	always @(*) begin : state_guarded_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (mux_sel)
			3'b010: state_guarded = {Share {sv2v_cast_4A2C3(1'sb0)}};
			3'b101: state_guarded = state;
			default: state_guarded = {Share {sv2v_cast_4A2C3(1'sb0)}};
		endcase
	end
	function automatic prim_mubi_pkg_mubi4_test_true_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_loose = sv2v_cast_EECFA(4'h9) != val;
	endfunction
	function automatic [23:0] sv2v_cast_24;
		input reg [23:0] inp;
		sv2v_cast_24 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		error_o = 33'h000000000;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_09312(6'b101100):
				if ((process_i || run_i) || prim_mubi_pkg_mubi4_test_true_loose(done_i))
					error_o = {9'h180, sv2v_cast_24({done_i, run_i, process_i, start_i})};
			sv2v_cast_09312(6'b100001):
				if (((start_i || run_i) || prim_mubi_pkg_mubi4_test_true_loose(done_i)) || (process_i && processing))
					error_o = {9'h180, sv2v_cast_24({done_i, run_i, process_i, start_i})};
			sv2v_cast_09312(6'b001011):
				if (start_i || process_i)
					error_o = {9'h180, sv2v_cast_24({done_i, run_i, process_i, start_i})};
			sv2v_cast_09312(6'b010000):
				if (((start_i || process_i) || run_i) || prim_mubi_pkg_mubi4_test_true_loose(done_i))
					error_o = {9'h180, sv2v_cast_24({done_i, run_i, process_i, start_i})};
			sv2v_cast_09312(6'b000110):
				if (((start_i || process_i) || run_i) || prim_mubi_pkg_mubi4_test_true_loose(done_i))
					error_o = {9'h180, sv2v_cast_24({done_i, run_i, process_i, start_i})};
			default:
				;
		endcase
	end
	sha3pad #(.EnMasking(EnMasking)) u_pad(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.msg_valid_i(msg_valid_i),
		.msg_data_i(msg_data_i),
		.msg_strb_i(msg_strb_i),
		.msg_ready_o(msg_ready_o),
		.ns_data_i(ns_data_i),
		.keccak_valid_o(keccak_valid),
		.keccak_addr_o(keccak_addr),
		.keccak_data_o(keccak_data),
		.keccak_ready_i(keccak_ready),
		.keccak_run_o(sha3pad_keccak_run),
		.keccak_complete_i(keccak_complete),
		.mode_i(mode_i),
		.strength_i(strength_i),
		.lc_escalate_en_i(lc_escalate_en_i),
		.start_i(keccak_start),
		.process_i(keccak_process),
		.done_i(keccak_done),
		.absorbed_o(absorbed),
		.sparse_fsm_error_o(sha3pad_state_error),
		.msg_count_error_o(msg_count_error)
	);
	keccak_round #(
		.Width(sha3_pkg_StateW),
		.DInWidth(sha3_pkg_MsgWidth),
		.EnMasking(EnMasking)
	) u_keccak(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.valid_i(keccak_valid),
		.addr_i(keccak_addr),
		.data_i(keccak_data),
		.ready_o(keccak_ready),
		.rand_valid_i(rand_valid_i),
		.rand_early_i(rand_early_i),
		.rand_data_i(rand_data_i),
		.rand_aux_i(rand_aux_i),
		.rand_update_o(rand_update_o),
		.rand_consumed_o(rand_consumed_o),
		.run_i(keccak_run),
		.complete_o(keccak_complete),
		.state_o(state),
		.lc_escalate_en_i(lc_escalate_en_i),
		.sparse_fsm_error_o(keccak_round_state_error),
		.round_count_error_o(round_count_error),
		.rst_storage_error_o(keccak_storage_rst_error),
		.clear_i(keccak_done)
	);
	initial _sv2v_0 = 0;
endmodule
