module sha3pad (
	clk_i,
	rst_ni,
	msg_valid_i,
	msg_data_i,
	msg_strb_i,
	msg_ready_o,
	ns_data_i,
	keccak_valid_o,
	keccak_addr_o,
	keccak_data_o,
	keccak_ready_i,
	keccak_run_o,
	keccak_complete_i,
	mode_i,
	strength_i,
	start_i,
	process_i,
	done_i,
	absorbed_o,
	lc_escalate_en_i,
	sparse_fsm_error_o,
	msg_count_error_o
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
	output reg msg_ready_o;
	localparam signed [31:0] sha3_pkg_CsWidth = 256;
	localparam signed [31:0] sha3_pkg_FnWidth = 32;
	localparam signed [31:0] sha3_pkg_MaxCsEncodeSize = 3;
	localparam signed [31:0] sha3_pkg_MaxFnEncodeSize = 2;
	localparam signed [31:0] sha3_pkg_NSRegisterSizePre = 41;
	localparam signed [31:0] sha3_pkg_NSRegisterSize = 44;
	input [351:0] ns_data_i;
	output reg keccak_valid_o;
	localparam [31:0] sha3_pkg_KeccakEntries = 25;
	localparam [31:0] sha3_pkg_KeccakMsgAddrW = 5;
	output wire [4:0] keccak_addr_o;
	output reg [(Share * sha3_pkg_MsgWidth) - 1:0] keccak_data_o;
	input wire keccak_ready_i;
	output reg keccak_run_o;
	input keccak_complete_i;
	input wire [1:0] mode_i;
	input wire [2:0] strength_i;
	input start_i;
	input process_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] done_i;
	output reg [3:0] absorbed_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg sparse_fsm_error_o;
	output wire msg_count_error_o;
	localparam signed [31:0] StateWidthPad = 7;
	localparam [31:0] sha3_pkg_KeccakCountW = 5;
	reg [4:0] block_addr_limit;
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	localparam [159:0] sha3_pkg_KeccakRate = {sv2v_cast_32(21), sv2v_cast_32(18), sv2v_cast_32(17), sv2v_cast_32(13), sv2v_cast_32(9)};
	function automatic [4:0] sv2v_cast_3CAB5;
		input reg [4:0] inp;
		sv2v_cast_3CAB5 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (strength_i)
			3'b000: block_addr_limit = sv2v_cast_3CAB5(sha3_pkg_KeccakRate[128+:32]);
			3'b001: block_addr_limit = sv2v_cast_3CAB5(sha3_pkg_KeccakRate[96+:32]);
			3'b010: block_addr_limit = sv2v_cast_3CAB5(sha3_pkg_KeccakRate[64+:32]);
			3'b011: block_addr_limit = sv2v_cast_3CAB5(sha3_pkg_KeccakRate[32+:32]);
			3'b100: block_addr_limit = sv2v_cast_3CAB5(sha3_pkg_KeccakRate[0+:32]);
			default: block_addr_limit = 1'sb0;
		endcase
	end
	reg [2:0] sel_mux;
	wire [4:0] sent_message;
	wire inc_sentmsg;
	reg clr_sentmsg;
	function automatic signed [4:0] sv2v_cast_3CAB5_signed;
		input reg signed [4:0] inp;
		sv2v_cast_3CAB5_signed = inp;
	endfunction
	prim_count #(.Width(sha3_pkg_KeccakCountW)) u_sentmsg_count(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(clr_sentmsg),
		.set_i(1'b0),
		.set_cnt_i(sv2v_cast_3CAB5_signed(0)),
		.incr_en_i(inc_sentmsg),
		.decr_en_i(1'b0),
		.step_i(sv2v_cast_3CAB5_signed(1)),
		.commit_i(1'b1),
		.cnt_o(sent_message),
		.cnt_after_commit_o(),
		.err_o(msg_count_error_o)
	);
	assign inc_sentmsg = keccak_valid_o & keccak_ready_i;
	wire [4:0] prefix_index;
	assign prefix_index = (sent_message < block_addr_limit ? sent_message : {5 {1'sb0}});
	reg fsm_keccak_valid;
	reg hold_msg;
	reg en_msgbuf;
	reg clr_msgbuf;
	wire mode_eq_cshake;
	assign mode_eq_cshake = (mode_i == 2'b11 ? 1'b1 : 1'b0);
	wire sent_blocksize;
	assign sent_blocksize = (sent_message == block_addr_limit ? 1'b1 : 1'b0);
	wire keccak_ack;
	assign keccak_ack = keccak_valid_o & keccak_ready_i;
	wire msg_partial;
	assign msg_partial = &msg_strb_i != 1'b1;
	reg process_latched;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			process_latched <= 1'b0;
		else if (process_i)
			process_latched <= 1'b1;
		else if (prim_mubi_pkg_mubi4_test_true_strict(done_i))
			process_latched <= 1'b0;
	wire [6:0] st;
	reg [6:0] st_d;
	function automatic [6:0] sv2v_cast_2D80C;
		input reg [6:0] inp;
		sv2v_cast_2D80C = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(StateWidthPad),
		.ResetValue(sv2v_cast_2D80C(7'b1000010)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(st_d),
		.state_o(st)
	);
	wire end_of_block;
	assign end_of_block = ((sent_message + 1'b1) == block_addr_limit ? 1'b1 : 1'b0);
	reg [3:0] absorbed_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			absorbed_o <= sv2v_cast_EECFA(4'h9);
		else
			absorbed_o <= absorbed_d;
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
		keccak_run_o = 1'b0;
		sel_mux = 3'b000;
		fsm_keccak_valid = 1'b0;
		hold_msg = 1'b0;
		clr_sentmsg = 1'b0;
		en_msgbuf = 1'b0;
		clr_msgbuf = 1'b0;
		absorbed_d = sv2v_cast_EECFA(4'h9);
		sparse_fsm_error_o = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_2D80C(7'b1000010):
				if (start_i) begin
					if (mode_eq_cshake)
						st_d = sv2v_cast_2D80C(7'b0111100);
					else
						st_d = sv2v_cast_2D80C(7'b0100101);
				end
				else
					st_d = sv2v_cast_2D80C(7'b1000010);
			sv2v_cast_2D80C(7'b0111100): begin
				sel_mux = 3'b010;
				if (sent_blocksize) begin
					st_d = sv2v_cast_2D80C(7'b1001100);
					keccak_run_o = 1'b1;
					fsm_keccak_valid = 1'b0;
					clr_sentmsg = 1'b1;
				end
				else begin
					st_d = sv2v_cast_2D80C(7'b0111100);
					fsm_keccak_valid = 1'b1;
				end
			end
			sv2v_cast_2D80C(7'b1001100): begin
				sel_mux = 3'b010;
				if (keccak_complete_i)
					st_d = sv2v_cast_2D80C(7'b0100101);
				else
					st_d = sv2v_cast_2D80C(7'b1001100);
			end
			sv2v_cast_2D80C(7'b0100101): begin
				sel_mux = 3'b001;
				if (msg_valid_i && msg_partial) begin
					st_d = sv2v_cast_2D80C(7'b0100101);
					en_msgbuf = 1'b1;
				end
				else if (sent_blocksize) begin
					st_d = sv2v_cast_2D80C(7'b0001111);
					keccak_run_o = 1'b1;
					clr_sentmsg = 1'b1;
					hold_msg = 1'b1;
				end
				else if (process_latched || process_i) begin
					st_d = sv2v_cast_2D80C(7'b1111010);
					hold_msg = 1'b1;
				end
				else
					st_d = sv2v_cast_2D80C(7'b0100101);
			end
			sv2v_cast_2D80C(7'b0001111): begin
				hold_msg = 1'b1;
				if (keccak_complete_i)
					st_d = sv2v_cast_2D80C(7'b0100101);
				else
					st_d = sv2v_cast_2D80C(7'b0001111);
			end
			sv2v_cast_2D80C(7'b1111010): begin
				sel_mux = 3'b011;
				fsm_keccak_valid = 1'b1;
				if (keccak_ack && end_of_block) begin
					st_d = sv2v_cast_2D80C(7'b0011001);
					clr_msgbuf = 1'b1;
					clr_sentmsg = 1'b1;
				end
				else if (keccak_ack) begin
					st_d = sv2v_cast_2D80C(7'b1101001);
					clr_msgbuf = 1'b1;
				end
				else
					st_d = sv2v_cast_2D80C(7'b1111010);
			end
			sv2v_cast_2D80C(7'b0011001): begin
				st_d = sv2v_cast_2D80C(7'b1010111);
				keccak_run_o = 1'b1;
				clr_sentmsg = 1'b1;
			end
			sv2v_cast_2D80C(7'b1101001): begin
				sel_mux = 3'b100;
				if (sent_blocksize) begin
					st_d = sv2v_cast_2D80C(7'b1010111);
					fsm_keccak_valid = 1'b0;
					keccak_run_o = 1'b1;
					clr_sentmsg = 1'b1;
				end
				else begin
					st_d = sv2v_cast_2D80C(7'b1101001);
					fsm_keccak_valid = 1'b1;
				end
			end
			sv2v_cast_2D80C(7'b1010111): begin
				clr_sentmsg = 1'b1;
				clr_msgbuf = 1'b1;
				if (keccak_complete_i) begin
					st_d = sv2v_cast_2D80C(7'b1000010);
					absorbed_d = sv2v_cast_EECFA(4'h6);
				end
				else
					st_d = sv2v_cast_2D80C(7'b1010111);
			end
			sv2v_cast_2D80C(7'b0110011): begin
				st_d = st;
				sparse_fsm_error_o = 1'b1;
			end
			default: begin
				st_d = sv2v_cast_2D80C(7'b0110011);
				sparse_fsm_error_o = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_2D80C(7'b0110011);
	end
	wire [15:0] encode_bytepad;
	function automatic [15:0] sha3_pkg_encode_bytepad_len;
		input reg [2:0] kstrength;
		reg [15:0] result;
		begin
			(* full_case, parallel_case *)
			case (kstrength)
				3'b000: result = 16'ha801;
				3'b001: result = 16'h9001;
				3'b010: result = 16'h8801;
				3'b011: result = 16'h6801;
				3'b100: result = 16'h4801;
				default: result = 16'h0000;
			endcase
			sha3_pkg_encode_bytepad_len = result;
		end
	endfunction
	assign encode_bytepad = sha3_pkg_encode_bytepad_len(strength_i);
	localparam signed [31:0] sha3_pkg_PrefixSize = 46;
	wire [367:0] prefix;
	assign prefix = {ns_data_i, encode_bytepad};
	wire [63:0] prefix_sliced;
	wire [(Share * sha3_pkg_MsgWidth) - 1:0] prefix_data;
	prim_slicer #(
		.InW(368),
		.IndexW(sha3_pkg_KeccakMsgAddrW),
		.OutW(sha3_pkg_MsgWidth)
	) u_prefix_slicer(
		.sel_i(prefix_index),
		.data_i(prefix),
		.data_o(prefix_sliced)
	);
	generate
		if (EnMasking) begin : gen_prefix_masked
			assign prefix_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = 1'sb0;
			assign prefix_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = prefix_sliced;
		end
		else begin : gen_prefix_unmasked
			assign prefix_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = prefix_sliced;
		end
	endgenerate
	reg [4:0] funcpad;
	reg [(Share * sha3_pkg_MsgWidth) - 1:0] funcpad_data;
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (mode_i)
			2'b00: funcpad = 5'b00110;
			2'b10: funcpad = 5'b11111;
			2'b11: funcpad = 5'b00100;
			default: funcpad = 5'b00001;
		endcase
	end
	wire [(Share * sha3_pkg_MsgWidth) - 1:0] zero_with_endbit;
	generate
		if (EnMasking) begin : gen_zeroend_masked
			assign zero_with_endbit[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = 1'sb0;
			assign zero_with_endbit[((Share - 2) * sha3_pkg_MsgWidth) + 63] = end_of_block;
			assign zero_with_endbit[((Share - 2) * sha3_pkg_MsgWidth) + 62-:63] = 1'sb0;
		end
		else begin : gen_zeroend_unmasked
			assign zero_with_endbit[((Share - 1) * sha3_pkg_MsgWidth) + 63] = end_of_block;
			assign zero_with_endbit[((Share - 1) * sha3_pkg_MsgWidth) + 62-:63] = 1'sb0;
		end
	endgenerate
	assign keccak_addr_o = (sent_message < block_addr_limit ? sent_message : {5 {1'sb0}});
	function automatic [63:0] sv2v_cast_9C8B4;
		input reg [63:0] inp;
		sv2v_cast_9C8B4 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux)
			3'b001: keccak_data_o = msg_data_i;
			3'b010: keccak_data_o = prefix_data;
			3'b011: keccak_data_o = funcpad_data;
			3'b100: keccak_data_o = zero_with_endbit;
			default: keccak_data_o = {Share {sv2v_cast_9C8B4(1'sb0)}};
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux)
			3'b001: keccak_valid_o = (msg_valid_i & ~hold_msg) & ~en_msgbuf;
			3'b010: keccak_valid_o = fsm_keccak_valid;
			3'b011: keccak_valid_o = fsm_keccak_valid;
			3'b100: keccak_valid_o = fsm_keccak_valid;
			default: keccak_valid_o = 1'b0;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux)
			3'b001: msg_ready_o = en_msgbuf | (keccak_ready_i & ~hold_msg);
			3'b010: msg_ready_o = 1'b0;
			3'b011: msg_ready_o = 1'b0;
			3'b100: msg_ready_o = 1'b0;
			default: msg_ready_o = 1'b0;
		endcase
	end
	reg [(Share * 56) - 1:0] msg_buf;
	reg [6:0] msg_strb;
	function automatic [55:0] sv2v_cast_8C275;
		input reg [55:0] inp;
		sv2v_cast_8C275 = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			msg_buf <= {Share {sv2v_cast_8C275(1'sb0)}};
			msg_strb <= 1'sb0;
		end
		else if (en_msgbuf) begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < Share; i = i + 1)
					msg_buf[0 + (((Share - 1) - i) * 56)+:56] <= msg_data_i[((Share - 1) - i) * sha3_pkg_MsgWidth+:56];
			end
			msg_strb <= msg_strb_i[0+:7];
		end
		else if (clr_msgbuf) begin
			msg_buf <= {Share {sv2v_cast_8C275(1'sb0)}};
			msg_strb <= 1'sb0;
		end
	function automatic [62:0] sv2v_cast_63;
		input reg [62:0] inp;
		sv2v_cast_63 = inp;
	endfunction
	function automatic [54:0] sv2v_cast_55;
		input reg [54:0] inp;
		sv2v_cast_55 = inp;
	endfunction
	function automatic [46:0] sv2v_cast_47;
		input reg [46:0] inp;
		sv2v_cast_47 = inp;
	endfunction
	function automatic [38:0] sv2v_cast_39;
		input reg [38:0] inp;
		sv2v_cast_39 = inp;
	endfunction
	function automatic [30:0] sv2v_cast_31;
		input reg [30:0] inp;
		sv2v_cast_31 = inp;
	endfunction
	function automatic [22:0] sv2v_cast_23;
		input reg [22:0] inp;
		sv2v_cast_23 = inp;
	endfunction
	function automatic [14:0] sv2v_cast_15;
		input reg [14:0] inp;
		sv2v_cast_15 = inp;
	endfunction
	function automatic [6:0] sv2v_cast_7;
		input reg [6:0] inp;
		sv2v_cast_7 = inp;
	endfunction
	generate
		if (EnMasking) begin : gen_funcpad_data_masked
			always @(*) begin
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (msg_strb)
					7'b0000000: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = 1'sb0;
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_63(funcpad)};
					end
					7'b0000001: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {56'h00000000000000, msg_buf[((Share - 1) * 56) + 7-:8]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_55(funcpad), msg_buf[((Share - 2) * 56) + 7-:8]};
					end
					7'b0000011: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {48'h000000000000, msg_buf[((Share - 1) * 56) + 15-:16]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_47(funcpad), msg_buf[((Share - 2) * 56) + 15-:16]};
					end
					7'b0000111: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {40'h0000000000, msg_buf[((Share - 1) * 56) + 23-:24]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_39(funcpad), msg_buf[((Share - 2) * 56) + 23-:24]};
					end
					7'b0001111: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {32'h00000000, msg_buf[((Share - 1) * 56) + 31-:32]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_31(funcpad), msg_buf[((Share - 2) * 56) + 31-:32]};
					end
					7'b0011111: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {24'h000000, msg_buf[((Share - 1) * 56) + 39-:40]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_23(funcpad), msg_buf[((Share - 2) * 56) + 39-:40]};
					end
					7'b0111111: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {16'h0000, msg_buf[((Share - 1) * 56) + 47-:48]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_15(funcpad), msg_buf[((Share - 2) * 56) + 47-:48]};
					end
					7'b1111111: begin
						funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {8'h00, msg_buf[((Share - 1) * 56) + 55-:56]};
						funcpad_data[(Share - 2) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_7(funcpad), msg_buf[((Share - 2) * 56) + 55-:56]};
					end
					default: funcpad_data = {Share {sv2v_cast_9C8B4(1'sb0)}};
				endcase
			end
		end
		else begin : gen_funcpad_data_unmasked
			always @(*) begin
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (msg_strb)
					7'b0000000: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_63(funcpad)};
					7'b0000001: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_55(funcpad), msg_buf[((Share - 1) * 56) + 7-:8]};
					7'b0000011: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_47(funcpad), msg_buf[((Share - 1) * 56) + 15-:16]};
					7'b0000111: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_39(funcpad), msg_buf[((Share - 1) * 56) + 23-:24]};
					7'b0001111: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_31(funcpad), msg_buf[((Share - 1) * 56) + 31-:32]};
					7'b0011111: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_23(funcpad), msg_buf[((Share - 1) * 56) + 39-:40]};
					7'b0111111: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_15(funcpad), msg_buf[((Share - 1) * 56) + 47-:48]};
					7'b1111111: funcpad_data[(Share - 1) * sha3_pkg_MsgWidth+:sha3_pkg_MsgWidth] = {end_of_block, sv2v_cast_7(funcpad), msg_buf[((Share - 1) * 56) + 55-:56]};
					default: funcpad_data = {Share {sv2v_cast_9C8B4(1'sb0)}};
				endcase
			end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
