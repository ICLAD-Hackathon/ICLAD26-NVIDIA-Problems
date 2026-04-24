module kmac_core (
	clk_i,
	rst_ni,
	fifo_valid_i,
	fifo_data_i,
	fifo_strb_i,
	fifo_ready_o,
	msg_valid_o,
	msg_data_o,
	msg_strb_o,
	msg_ready_i,
	kmac_en_i,
	mode_i,
	strength_i,
	key_data_i,
	key_len_i,
	key_valid_i,
	start_i,
	process_i,
	done_i,
	process_o,
	lc_escalate_en_i,
	sparse_fsm_error_o,
	key_index_error_o
);
	reg _sv2v_0;
	parameter [0:0] EnMasking = 0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	input clk_i;
	input rst_ni;
	input fifo_valid_i;
	localparam signed [31:0] sha3_pkg_MsgWidth = 64;
	localparam signed [31:0] kmac_pkg_MsgWidth = sha3_pkg_MsgWidth;
	input [(Share * kmac_pkg_MsgWidth) - 1:0] fifo_data_i;
	localparam signed [31:0] sha3_pkg_MsgStrbW = 8;
	localparam signed [31:0] kmac_pkg_MsgStrbW = sha3_pkg_MsgStrbW;
	input [7:0] fifo_strb_i;
	output wire fifo_ready_o;
	output wire msg_valid_o;
	output wire [(Share * kmac_pkg_MsgWidth) - 1:0] msg_data_o;
	output wire [7:0] msg_strb_o;
	input msg_ready_i;
	input kmac_en_i;
	input wire [1:0] mode_i;
	input wire [2:0] strength_i;
	localparam signed [31:0] kmac_pkg_MaxKeyLen = 512;
	input [(Share * kmac_pkg_MaxKeyLen) - 1:0] key_data_i;
	input wire [2:0] key_len_i;
	input wire key_valid_i;
	input start_i;
	input process_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] done_i;
	output wire process_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg sparse_fsm_error_o;
	output wire key_index_error_o;
	localparam signed [31:0] StateWidth = 6;
	localparam signed [31:0] kmac_pkg_MaxEncodedKeyLenW = 10;
	localparam signed [31:0] kmac_pkg_MaxEncodedKeyLenByte = 2;
	localparam signed [31:0] kmac_pkg_MaxEncodedKeyLenSize = 16;
	localparam signed [31:0] kmac_pkg_MaxEncodedKeyW = (kmac_pkg_MaxKeyLen + kmac_pkg_MaxEncodedKeyLenSize) + 8;
	reg [kmac_pkg_MaxEncodedKeyW - 1:0] encoded_key [0:Share - 1];
	localparam [31:0] sha3_pkg_KeccakEntries = 25;
	localparam [31:0] sha3_pkg_KeccakMsgAddrW = 5;
	wire [4:0] key_index;
	wire inc_keyidx;
	reg clr_keyidx;
	localparam [31:0] sha3_pkg_KeccakCountW = 5;
	reg [4:0] block_addr_limit;
	wire sent_blocksize;
	reg kmac_valid;
	wire [(Share * kmac_pkg_MsgWidth) - 1:0] kmac_data;
	wire [7:0] kmac_strb;
	reg kmac_process;
	reg process_latched;
	reg en_key_write;
	reg en_kmac_datapath;
	wire [(Share * kmac_pkg_MsgWidth) - 1:0] key_sliced;
	wire unused_signals;
	assign unused_signals = ^{mode_i, key_valid_i};
	wire [5:0] st;
	reg [5:0] st_d;
	function automatic [5:0] sv2v_cast_288BE;
		input reg [5:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(StateWidth),
		.ResetValue(sv2v_cast_288BE(6'b011000)),
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
		st_d = st;
		en_kmac_datapath = 1'b0;
		en_key_write = 1'b0;
		clr_keyidx = 1'b0;
		kmac_valid = 1'b0;
		kmac_process = 1'b0;
		sparse_fsm_error_o = 1'b0;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_288BE(6'b011000):
				if (kmac_en_i && start_i)
					st_d = sv2v_cast_288BE(6'b010111);
				else
					st_d = sv2v_cast_288BE(6'b011000);
			sv2v_cast_288BE(6'b010111): begin
				en_kmac_datapath = 1'b1;
				en_key_write = 1'b1;
				if (sent_blocksize) begin
					st_d = sv2v_cast_288BE(6'b001110);
					kmac_valid = 1'b0;
					clr_keyidx = 1'b1;
				end
				else begin
					st_d = sv2v_cast_288BE(6'b010111);
					kmac_valid = 1'b1;
				end
			end
			sv2v_cast_288BE(6'b001110):
				if (process_i || process_latched) begin
					st_d = sv2v_cast_288BE(6'b101011);
					kmac_process = 1'b1;
				end
				else
					st_d = sv2v_cast_288BE(6'b001110);
			sv2v_cast_288BE(6'b101011):
				if (prim_mubi_pkg_mubi4_test_true_strict(done_i))
					st_d = sv2v_cast_288BE(6'b011000);
				else
					st_d = sv2v_cast_288BE(6'b101011);
			sv2v_cast_288BE(6'b100000): begin
				st_d = st;
				sparse_fsm_error_o = 1'b1;
			end
			default: begin
				st_d = sv2v_cast_288BE(6'b100000);
				sparse_fsm_error_o = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_288BE(6'b100000);
	end
	assign msg_valid_o = (en_kmac_datapath ? kmac_valid : fifo_valid_i);
	assign msg_data_o = (en_kmac_datapath ? kmac_data : fifo_data_i);
	assign msg_strb_o = (en_kmac_datapath ? kmac_strb : fifo_strb_i);
	assign fifo_ready_o = (en_kmac_datapath ? 1'b0 : msg_ready_i);
	assign kmac_strb = (en_key_write ? {8 {1'sb1}} : {8 {1'sb0}});
	function automatic [63:0] sv2v_cast_45C77;
		input reg [63:0] inp;
		sv2v_cast_45C77 = inp;
	endfunction
	assign kmac_data = (en_key_write ? key_sliced : {Share {sv2v_cast_45C77(1'sb0)}});
	assign process_o = (kmac_en_i ? kmac_process : process_i);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			process_latched <= 1'b0;
		else if (process_i && !process_o)
			process_latched <= 1'b1;
		else if (process_o || prim_mubi_pkg_mubi4_test_true_strict(done_i))
			process_latched <= 1'b0;
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
	reg [23:0] encode_keylen [0:Share - 1];
	function automatic [23:0] sv2v_cast_B95DE;
		input reg [23:0] inp;
		sv2v_cast_B95DE = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_len_i)
			3'b000: encode_keylen[0] = sv2v_cast_B95DE('h8001);
			3'b001: encode_keylen[0] = sv2v_cast_B95DE('hc001);
			3'b010: encode_keylen[0] = sv2v_cast_B95DE('h102);
			3'b011: encode_keylen[0] = sv2v_cast_B95DE('h800102);
			3'b100: encode_keylen[0] = sv2v_cast_B95DE('h202);
			default: encode_keylen[0] = 1'sb0;
		endcase
	end
	generate
		if (EnMasking) begin : gen_encode_keylen_masked
			wire [24:1] sv2v_tmp_44679;
			assign sv2v_tmp_44679 = 1'sb0;
			always @(*) encode_keylen[1] = sv2v_tmp_44679;
		end
	endgenerate
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < Share; _gv_i_1 = _gv_i_1 + 1) begin : gen_encoded_key
			localparam i = _gv_i_1;
			always @(*) begin
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_len_i)
					3'b000: encoded_key[i] = {392'sd0, key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:128], encode_keylen[i][0+:kmac_pkg_MaxEncodedKeyLenSize]};
					3'b001: encoded_key[i] = {328'sd0, key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:192], encode_keylen[i][0+:kmac_pkg_MaxEncodedKeyLenSize]};
					3'b010: encoded_key[i] = {256'sd0, key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:256], encode_keylen[i]};
					3'b011: encoded_key[i] = {128'sd0, key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:384], encode_keylen[i]};
					3'b100: encoded_key[i] = {key_data_i[((Share - 1) - i) * kmac_pkg_MaxKeyLen+:512], encode_keylen[i]};
					default: encoded_key[i] = 1'sb0;
				endcase
			end
		end
	endgenerate
	wire [kmac_pkg_MaxEncodedKeyW + 15:0] encoded_key_block [0:Share - 1];
	assign encoded_key_block[0] = {encoded_key[0], encode_bytepad};
	generate
		if (EnMasking) begin : gen_encoded_key_block_masked
			assign encoded_key_block[1] = {encoded_key[1], 16'h0000};
		end
	endgenerate
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < Share; _gv_i_2 = _gv_i_2 + 1) begin : gen_key_slicer
			localparam i = _gv_i_2;
			prim_slicer #(
				.InW(kmac_pkg_MaxEncodedKeyW + 16),
				.IndexW(sha3_pkg_KeccakMsgAddrW),
				.OutW(kmac_pkg_MsgWidth)
			) u_key_slicer(
				.sel_i(key_index),
				.data_i(encoded_key_block[i]),
				.data_o(key_sliced[((Share - 1) - i) * kmac_pkg_MsgWidth+:kmac_pkg_MsgWidth])
			);
		end
	endgenerate
	assign inc_keyidx = kmac_valid & msg_ready_i;
	function automatic signed [4:0] sv2v_cast_8122E_signed;
		input reg signed [4:0] inp;
		sv2v_cast_8122E_signed = inp;
	endfunction
	prim_count #(.Width(sha3_pkg_KeccakMsgAddrW)) u_key_index_count(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(clr_keyidx),
		.set_i(1'b0),
		.set_cnt_i(1'sb0),
		.incr_en_i(inc_keyidx),
		.decr_en_i(1'b0),
		.step_i(sv2v_cast_8122E_signed(1)),
		.commit_i(1'b1),
		.cnt_o(key_index),
		.cnt_after_commit_o(),
		.err_o(key_index_error_o)
	);
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
	assign sent_blocksize = key_index == block_addr_limit;
	initial _sv2v_0 = 0;
endmodule
