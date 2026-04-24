module prim_ascon_duplex (
	clk_i,
	rst_ni,
	ascon_variant,
	ascon_operation,
	start_i,
	done_o,
	idle_o,
	no_ad_i,
	no_msg_i,
	key_i,
	nonce_i,
	data_in_i,
	data_in_valid_bytes_i,
	last_block_ad_i,
	last_block_msg_i,
	data_in_valid_i,
	data_in_ready_o,
	data_out_o,
	data_out_ready_i,
	data_out_valid_o,
	tag_out_o,
	tag_out_valid_o,
	fsm_state_o,
	err_o
);
	reg _sv2v_0;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] prim_ascon_pkg_DUPLEX_VARIANT_WIDTH = 2;
	input wire [1:0] ascon_variant;
	localparam signed [31:0] prim_ascon_pkg_DUPLEX_OP_WIDTH = 3;
	input wire [2:0] ascon_operation;
	input wire start_i;
	output reg done_o;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	output reg [3:0] idle_o;
	input wire [3:0] no_ad_i;
	input wire [3:0] no_msg_i;
	input wire [127:0] key_i;
	input wire [127:0] nonce_i;
	input wire [127:0] data_in_i;
	input wire [4:0] data_in_valid_bytes_i;
	input wire [3:0] last_block_ad_i;
	input wire [3:0] last_block_msg_i;
	input wire data_in_valid_i;
	output reg data_in_ready_o;
	output wire [127:0] data_out_o;
	input wire data_out_ready_i;
	output reg data_out_valid_o;
	output wire [127:0] tag_out_o;
	output reg tag_out_valid_o;
	localparam signed [31:0] prim_ascon_pkg_AsconDuplexFSMStateWidth = 10;
	output wire [9:0] fsm_state_o;
	output wire err_o;
	wire unused_data_out_ready_i;
	assign unused_data_out_ready_i = data_out_ready_i;
	wire round_count_error;
	reg sparse_fsm_error;
	reg set_round_counter;
	reg inc_round_counter;
	reg [319:0] ascon_state_q;
	reg [319:0] ascon_state_d;
	always @(posedge clk_i or negedge rst_ni) begin : ascon_state_reg
		if (!rst_ni)
			ascon_state_q <= 1'sb0;
		else
			ascon_state_q <= ascon_state_d;
	end
	reg [319:0] state_to_round;
	wire [319:0] state_from_round;
	wire [319:0] round_to_mux;
	assign round_to_mux = state_from_round;
	reg [9:0] fsm_state_d;
	wire [9:0] fsm_state_q;
	reg [3:0] perm_offset;
	assign fsm_state_o = fsm_state_q;
	wire [63:0] iv;
	localparam [63:0] prim_ascon_pkg_IV_128 = 64'h80400c0600000000;
	localparam [63:0] prim_ascon_pkg_IV_128A = 64'h80800c0800000000;
	function automatic [1:0] sv2v_cast_8D072;
		input reg [1:0] inp;
		sv2v_cast_8D072 = inp;
	endfunction
	assign iv = (ascon_variant == sv2v_cast_8D072(2'b01) ? prim_ascon_pkg_IV_128 : prim_ascon_pkg_IV_128A);
	wire [3:0] complete_block;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	assign complete_block = (((ascon_variant == sv2v_cast_8D072(2'b01)) && (data_in_valid_bytes_i == 8)) || ((ascon_variant == sv2v_cast_8D072(2'b10)) && (data_in_valid_bytes_i == 16)) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	wire [127:0] empty_padding;
	function automatic [127:0] prim_ascon_pkg_get_padding_mask;
		input reg [4:0] valid_bytes;
		reg [127:0] padding_byte_mask;
		begin
			(* full_case, parallel_case *)
			case (valid_bytes)
				5'b00000: padding_byte_mask = {8'h80, {120 {1'b0}}};
				5'b00001: padding_byte_mask = {{8 {1'b0}}, 8'h80, {112 {1'b0}}};
				5'b00010: padding_byte_mask = {{16 {1'b0}}, 8'h80, {104 {1'b0}}};
				5'b00011: padding_byte_mask = {{24 {1'b0}}, 8'h80, {96 {1'b0}}};
				5'b00100: padding_byte_mask = {{32 {1'b0}}, 8'h80, {88 {1'b0}}};
				5'b00101: padding_byte_mask = {{40 {1'b0}}, 8'h80, {80 {1'b0}}};
				5'b00110: padding_byte_mask = {{48 {1'b0}}, 8'h80, {72 {1'b0}}};
				5'b00111: padding_byte_mask = {{56 {1'b0}}, 8'h80, {64 {1'b0}}};
				5'b01000: padding_byte_mask = {{64 {1'b0}}, 8'h80, {56 {1'b0}}};
				5'b01001: padding_byte_mask = {{72 {1'b0}}, 8'h80, {48 {1'b0}}};
				5'b01010: padding_byte_mask = {{80 {1'b0}}, 8'h80, {40 {1'b0}}};
				5'b01011: padding_byte_mask = {{88 {1'b0}}, 8'h80, {32 {1'b0}}};
				5'b01100: padding_byte_mask = {{96 {1'b0}}, 8'h80, {24 {1'b0}}};
				5'b01101: padding_byte_mask = {{104 {1'b0}}, 8'h80, {16 {1'b0}}};
				5'b01110: padding_byte_mask = {{112 {1'b0}}, 8'h80, {8 {1'b0}}};
				5'b01111: padding_byte_mask = {{120 {1'b0}}, 8'h80};
				default: padding_byte_mask = {128 {1'b0}};
			endcase
			prim_ascon_pkg_get_padding_mask = padding_byte_mask;
		end
	endfunction
	assign empty_padding = prim_ascon_pkg_get_padding_mask(5'b00000);
	wire [127:0] valid_bytes_bit_mask;
	function automatic [127:0] prim_ascon_pkg_bin2thermo;
		input reg [4:0] valid_bytes;
		reg [127:0] valid_bytes_mask;
		begin
			(* full_case, parallel_case *)
			case (valid_bytes)
				5'b00000: valid_bytes_mask = {128 {1'b0}};
				5'b00001: valid_bytes_mask = {{8 {1'b1}}, {120 {1'b0}}};
				5'b00010: valid_bytes_mask = {{16 {1'b1}}, {112 {1'b0}}};
				5'b00011: valid_bytes_mask = {{24 {1'b1}}, {104 {1'b0}}};
				5'b00100: valid_bytes_mask = {{32 {1'b1}}, {96 {1'b0}}};
				5'b00101: valid_bytes_mask = {{40 {1'b1}}, {88 {1'b0}}};
				5'b00110: valid_bytes_mask = {{48 {1'b1}}, {80 {1'b0}}};
				5'b00111: valid_bytes_mask = {{56 {1'b1}}, {72 {1'b0}}};
				5'b01000: valid_bytes_mask = {{64 {1'b1}}, {64 {1'b0}}};
				5'b01001: valid_bytes_mask = {{72 {1'b1}}, {56 {1'b0}}};
				5'b01010: valid_bytes_mask = {{80 {1'b1}}, {48 {1'b0}}};
				5'b01011: valid_bytes_mask = {{88 {1'b1}}, {40 {1'b0}}};
				5'b01100: valid_bytes_mask = {{96 {1'b1}}, {32 {1'b0}}};
				5'b01101: valid_bytes_mask = {{104 {1'b1}}, {24 {1'b0}}};
				5'b01110: valid_bytes_mask = {{112 {1'b1}}, {16 {1'b0}}};
				5'b01111: valid_bytes_mask = {{120 {1'b1}}, {8 {1'b0}}};
				default: valid_bytes_mask = {128 {1'b1}};
			endcase
			prim_ascon_pkg_bin2thermo = valid_bytes_mask;
		end
	endfunction
	assign valid_bytes_bit_mask = prim_ascon_pkg_bin2thermo(data_in_valid_bytes_i);
	wire [127:0] padding_byte_bit_mask;
	assign padding_byte_bit_mask = prim_ascon_pkg_get_padding_mask(data_in_valid_bytes_i);
	wire [127:0] data_in_valid_bytes;
	assign data_in_valid_bytes = data_in_i & valid_bytes_bit_mask;
	wire [127:0] data_out;
	assign data_out = (data_in_i ^ {ascon_state_q[0+:64], ascon_state_q[64+:64]}) & valid_bytes_bit_mask;
	reg [127:0] data_in_padded;
	reg [127:0] data_out_padded;
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		if (prim_mubi_pkg_mubi4_test_true_strict(complete_block)) begin
			data_in_padded = data_in_valid_bytes;
			data_out_padded = data_out;
		end
		else begin
			data_in_padded = data_in_valid_bytes | padding_byte_bit_mask;
			data_out_padded = data_out | padding_byte_bit_mask;
		end
	end
	assign data_out_o = data_out;
	assign tag_out_o = {ascon_state_q[192+:64], ascon_state_q[256+:64]} ^ key_i;
	localparam signed [31:0] prim_ascon_pkg_AsconRoundCountW = 4;
	wire [3:0] current_round;
	prim_count #(.Width(prim_ascon_pkg_AsconRoundCountW)) u_round_counter(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.set_i(set_round_counter),
		.set_cnt_i(perm_offset),
		.incr_en_i(inc_round_counter),
		.decr_en_i(1'b0),
		.step_i(4'sd1),
		.commit_i(1'b1),
		.cnt_o(current_round),
		.cnt_after_commit_o(),
		.err_o(round_count_error)
	);
	localparam signed [31:0] prim_ascon_pkg_PADDING_MUX_WIDTH = 2;
	reg [1:0] sel_padding;
	localparam signed [31:0] prim_ascon_pkg_ASCON_WORD_MUX_WIDTH = 2;
	reg [1:0] sel_mux_word0;
	reg [1:0] sel_mux_word1;
	reg [1:0] sel_mux_word2;
	reg [1:0] sel_mux_word3;
	reg [1:0] sel_mux_word4;
	localparam signed [31:0] prim_ascon_pkg_WORD_LOW_KEY_HI_MUX_WIDTH = 1;
	reg [0:0] sel_mux_key_word1;
	localparam signed [31:0] prim_ascon_pkg_KEY_HI_LOW_MUX_WIDTH = 1;
	reg [0:0] sel_mux_key_word2;
	reg [0:0] sel_mux_key_word3;
	localparam signed [31:0] prim_ascon_pkg_ROUND_INPUT_MUX_WIDTH = 1;
	reg [0:0] sel_round_input;
	reg set_dom_sep;
	reg [319:0] xor_with_state;
	wire [63:0] word4_dom_sep;
	reg [127:0] data_to_duplex;
	function automatic [1:0] sv2v_cast_7D337;
		input reg [1:0] inp;
		sv2v_cast_7D337 = inp;
	endfunction
	always @(*) begin : Padding
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_padding)
			sv2v_cast_7D337(2'b00): data_to_duplex = data_in_padded;
			sv2v_cast_7D337(2'b01): data_to_duplex = data_out_padded;
			sv2v_cast_7D337(2'b10): data_to_duplex = empty_padding;
			default: data_to_duplex = empty_padding;
		endcase
	end
	function automatic [0:0] sv2v_cast_C8449;
		input reg [0:0] inp;
		sv2v_cast_C8449 = inp;
	endfunction
	always @(*) begin : state_input
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_round_input)
			sv2v_cast_C8449(1'b0): state_to_round = ascon_state_q;
			sv2v_cast_C8449(1'b1): state_to_round = 1'sb0;
			default: state_to_round = 1'sb0;
		endcase
	end
	wire [64:1] sv2v_tmp_E73F2;
	assign sv2v_tmp_E73F2 = data_to_duplex[127:64];
	always @(*) xor_with_state[0+:64] = sv2v_tmp_E73F2;
	function automatic [1:0] sv2v_cast_189E4;
		input reg [1:0] inp;
		sv2v_cast_189E4 = inp;
	endfunction
	always @(*) begin : state_word0
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_word0)
			sv2v_cast_189E4(2'b00): ascon_state_d[0+:64] = iv;
			sv2v_cast_189E4(2'b01): ascon_state_d[0+:64] = ascon_state_q[0+:64] ^ xor_with_state[0+:64];
			sv2v_cast_189E4(2'b10): ascon_state_d[0+:64] = ascon_state_q[0+:64];
			sv2v_cast_189E4(2'b11): ascon_state_d[0+:64] = round_to_mux[0+:64];
			default: ascon_state_d[0+:64] = ascon_state_q[0+:64];
		endcase
	end
	function automatic [0:0] sv2v_cast_D4B0D;
		input reg [0:0] inp;
		sv2v_cast_D4B0D = inp;
	endfunction
	always @(*) begin : key_word1
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_key_word1)
			sv2v_cast_D4B0D(1'b0): xor_with_state[64+:64] = data_to_duplex[63:0];
			sv2v_cast_D4B0D(1'b1): xor_with_state[64+:64] = key_i[127:64];
			default: xor_with_state[64+:64] = key_i[127:64];
		endcase
	end
	always @(*) begin : state_word1
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_word1)
			sv2v_cast_189E4(2'b00): ascon_state_d[64+:64] = key_i[127:64];
			sv2v_cast_189E4(2'b01): ascon_state_d[64+:64] = ascon_state_q[64+:64] ^ xor_with_state[64+:64];
			sv2v_cast_189E4(2'b10): ascon_state_d[64+:64] = ascon_state_q[64+:64];
			sv2v_cast_189E4(2'b11): ascon_state_d[64+:64] = round_to_mux[64+:64];
			default: ascon_state_d[64+:64] = ascon_state_q[64+:64];
		endcase
	end
	function automatic [0:0] sv2v_cast_CE2E7;
		input reg [0:0] inp;
		sv2v_cast_CE2E7 = inp;
	endfunction
	always @(*) begin : key_word2
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_key_word2)
			sv2v_cast_CE2E7(1'b0): xor_with_state[128+:64] = key_i[63:0];
			sv2v_cast_CE2E7(1'b1): xor_with_state[128+:64] = key_i[127:64];
			default: xor_with_state[128+:64] = key_i[127:64];
		endcase
	end
	always @(*) begin : state_word2
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_word2)
			sv2v_cast_189E4(2'b00): ascon_state_d[128+:64] = key_i[63:0];
			sv2v_cast_189E4(2'b01): ascon_state_d[128+:64] = ascon_state_q[128+:64] ^ xor_with_state[128+:64];
			sv2v_cast_189E4(2'b10): ascon_state_d[128+:64] = ascon_state_q[128+:64];
			sv2v_cast_189E4(2'b11): ascon_state_d[128+:64] = round_to_mux[128+:64];
			default: ascon_state_d[128+:64] = ascon_state_q[128+:64];
		endcase
	end
	always @(*) begin : key_word3
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_key_word3)
			sv2v_cast_CE2E7(1'b0): xor_with_state[192+:64] = key_i[63:0];
			sv2v_cast_CE2E7(1'b1): xor_with_state[192+:64] = key_i[127:64];
			default: xor_with_state[192+:64] = key_i[127:64];
		endcase
	end
	always @(*) begin : state_word3
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_word3)
			sv2v_cast_189E4(2'b00): ascon_state_d[192+:64] = nonce_i[127:64];
			sv2v_cast_189E4(2'b01): ascon_state_d[192+:64] = ascon_state_q[192+:64] ^ xor_with_state[192+:64];
			sv2v_cast_189E4(2'b10): ascon_state_d[192+:64] = ascon_state_q[192+:64];
			sv2v_cast_189E4(2'b11): ascon_state_d[192+:64] = round_to_mux[192+:64];
			default: ascon_state_d[192+:64] = ascon_state_q[192+:64];
		endcase
	end
	assign word4_dom_sep = {ascon_state_q[319-:63], ascon_state_q[256] ^ set_dom_sep};
	wire [64:1] sv2v_tmp_303A1;
	assign sv2v_tmp_303A1 = key_i[63:0];
	always @(*) xor_with_state[256+:64] = sv2v_tmp_303A1;
	always @(*) begin : state_word4
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (sel_mux_word4)
			sv2v_cast_189E4(2'b00): ascon_state_d[256+:64] = nonce_i[63:0];
			sv2v_cast_189E4(2'b01): ascon_state_d[256+:64] = word4_dom_sep ^ xor_with_state[256+:64];
			sv2v_cast_189E4(2'b10): ascon_state_d[256+:64] = word4_dom_sep;
			sv2v_cast_189E4(2'b11): ascon_state_d[256+:64] = round_to_mux[256+:64];
			default: ascon_state_d[256+:64] = word4_dom_sep;
		endcase
	end
	localparam [3:0] prim_ascon_pkg_ROUND_MAX = 4'b1011;
	function automatic [9:0] sv2v_cast_DCAFE;
		input reg [9:0] inp;
		sv2v_cast_DCAFE = inp;
	endfunction
	function automatic [2:0] sv2v_cast_5A327;
		input reg [2:0] inp;
		sv2v_cast_5A327 = inp;
	endfunction
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		fsm_state_d = fsm_state_q;
		data_in_ready_o = 1'b0;
		data_out_valid_o = 1'b0;
		tag_out_valid_o = 1'b0;
		sparse_fsm_error = 1'b0;
		set_round_counter = 1'b0;
		inc_round_counter = 1'b0;
		perm_offset = 4'b0000;
		done_o = 1'b0;
		idle_o = sv2v_cast_EECFA(4'h9);
		set_dom_sep = 1'b0;
		sel_mux_word0 = sv2v_cast_189E4(2'b10);
		sel_mux_word1 = sv2v_cast_189E4(2'b10);
		sel_mux_word2 = sv2v_cast_189E4(2'b10);
		sel_mux_word3 = sv2v_cast_189E4(2'b10);
		sel_mux_word4 = sv2v_cast_189E4(2'b10);
		sel_mux_key_word3 = sv2v_cast_CE2E7(1'b1);
		sel_mux_key_word2 = sv2v_cast_CE2E7(1'b0);
		sel_mux_key_word1 = sv2v_cast_D4B0D(1'b1);
		sel_padding = sv2v_cast_7D337(2'b10);
		sel_round_input = sv2v_cast_C8449(1'b1);
		(* full_case, parallel_case *)
		case (fsm_state_q)
			sv2v_cast_DCAFE(10'b1010101110): begin
				idle_o = sv2v_cast_EECFA(4'h6);
				if (start_i)
					fsm_state_d = sv2v_cast_DCAFE(10'b0110000110);
			end
			sv2v_cast_DCAFE(10'b0110000110): begin
				sel_mux_word0 = sv2v_cast_189E4(2'b00);
				sel_mux_word1 = sv2v_cast_189E4(2'b00);
				sel_mux_word2 = sv2v_cast_189E4(2'b00);
				sel_mux_word3 = sv2v_cast_189E4(2'b00);
				sel_mux_word4 = sv2v_cast_189E4(2'b00);
				fsm_state_d = sv2v_cast_DCAFE(10'b1011110110);
				perm_offset = 4'b0000;
				set_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1011110110): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b0001010011);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0001010011): begin
				sel_mux_word3 = sv2v_cast_189E4(2'b01);
				sel_mux_key_word3 = sv2v_cast_CE2E7(1'b1);
				sel_mux_word4 = sv2v_cast_189E4(2'b01);
				if (prim_mubi_pkg_mubi4_test_true_strict(no_ad_i))
					fsm_state_d = sv2v_cast_DCAFE(10'b0100110010);
				else
					fsm_state_d = sv2v_cast_DCAFE(10'b1110010000);
			end
			sv2v_cast_DCAFE(10'b1110010000): begin
				data_in_ready_o = 1'b1;
				if (data_in_valid_i) begin
					sel_mux_word0 = sv2v_cast_189E4(2'b01);
					sel_padding = sv2v_cast_7D337(2'b00);
					if (ascon_variant == sv2v_cast_8D072(2'b10)) begin
						sel_mux_word1 = sv2v_cast_189E4(2'b01);
						sel_mux_key_word1 = sv2v_cast_D4B0D(1'b0);
					end
					if (prim_mubi_pkg_mubi4_test_true_strict(last_block_ad_i)) begin
						if (prim_mubi_pkg_mubi4_test_true_strict(complete_block))
							fsm_state_d = sv2v_cast_DCAFE(10'b0010111100);
						else
							fsm_state_d = sv2v_cast_DCAFE(10'b1010000010);
					end
					else
						fsm_state_d = sv2v_cast_DCAFE(10'b1101101101);
				end
				if (ascon_variant == sv2v_cast_8D072(2'b01))
					perm_offset = 4'b0110;
				else
					perm_offset = 4'b0100;
				set_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1101101101): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b1110010000);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1010000010): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b0100110010);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0010111100): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b1101111011);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1101111011): begin
				sel_mux_word0 = sv2v_cast_189E4(2'b01);
				sel_padding = sv2v_cast_7D337(2'b10);
				fsm_state_d = sv2v_cast_DCAFE(10'b1010000010);
				if (ascon_variant == sv2v_cast_8D072(2'b01))
					perm_offset = 4'b0110;
				else begin
					perm_offset = 4'b0100;
					sel_mux_word1 = sv2v_cast_189E4(2'b01);
					sel_padding = sv2v_cast_7D337(2'b10);
				end
				set_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0100110010): begin
				set_dom_sep = 1'b1;
				sel_mux_word4 = sv2v_cast_189E4(2'b10);
				if (prim_mubi_pkg_mubi4_test_true_strict(no_msg_i))
					fsm_state_d = sv2v_cast_DCAFE(10'b0100101100);
				else
					fsm_state_d = sv2v_cast_DCAFE(10'b0011100011);
			end
			sv2v_cast_DCAFE(10'b0011100011): begin
				data_in_ready_o = 1'b1;
				if (data_in_valid_i) begin
					data_out_valid_o = 1'b1;
					if (ascon_operation == sv2v_cast_5A327(3'b001)) begin
						sel_mux_word0 = sv2v_cast_189E4(2'b01);
						sel_padding = sv2v_cast_7D337(2'b00);
						if (ascon_variant == sv2v_cast_8D072(2'b10))
							sel_mux_word1 = sv2v_cast_189E4(2'b01);
					end
					else begin
						sel_mux_word0 = sv2v_cast_189E4(2'b01);
						sel_padding = sv2v_cast_7D337(2'b01);
						if (ascon_variant == sv2v_cast_8D072(2'b10)) begin
							sel_mux_word1 = sv2v_cast_189E4(2'b01);
							sel_mux_key_word1 = sv2v_cast_D4B0D(1'b0);
						end
					end
					if (prim_mubi_pkg_mubi4_test_true_strict(last_block_msg_i)) begin
						if (prim_mubi_pkg_mubi4_test_true_strict(complete_block))
							fsm_state_d = sv2v_cast_DCAFE(10'b1011111000);
						else
							fsm_state_d = sv2v_cast_DCAFE(10'b1000011011);
					end
					else
						fsm_state_d = sv2v_cast_DCAFE(10'b0001001100);
				end
				if (ascon_variant == sv2v_cast_8D072(2'b01))
					perm_offset = 4'b0110;
				else
					perm_offset = 4'b0100;
				set_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0001001100): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b0011100011);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1011111000): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b0100101100);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0100101100): begin
				sel_padding = sv2v_cast_7D337(2'b10);
				sel_mux_word0 = sv2v_cast_189E4(2'b01);
				if (ascon_variant == sv2v_cast_8D072(2'b10)) begin
					sel_mux_word1 = sv2v_cast_189E4(2'b01);
					sel_mux_key_word1 = sv2v_cast_D4B0D(1'b0);
				end
				fsm_state_d = sv2v_cast_DCAFE(10'b1000011011);
			end
			sv2v_cast_DCAFE(10'b1000011011): begin
				if (ascon_variant == sv2v_cast_8D072(2'b01)) begin
					sel_mux_word1 = sv2v_cast_189E4(2'b01);
					sel_mux_key_word1 = sv2v_cast_D4B0D(1'b1);
					sel_mux_word2 = sv2v_cast_189E4(2'b01);
					sel_mux_key_word2 = sv2v_cast_CE2E7(1'b0);
				end
				else begin
					sel_mux_word2 = sv2v_cast_189E4(2'b01);
					sel_mux_key_word2 = sv2v_cast_CE2E7(1'b1);
					sel_mux_word3 = sv2v_cast_189E4(2'b01);
					sel_mux_key_word3 = sv2v_cast_CE2E7(1'b0);
				end
				fsm_state_d = sv2v_cast_DCAFE(10'b0011010000);
				set_round_counter = 1'b1;
				perm_offset = 4'b0000;
			end
			sv2v_cast_DCAFE(10'b0011010000): begin
				sel_round_input = sv2v_cast_C8449(1'b0);
				sel_mux_word0 = sv2v_cast_189E4(2'b11);
				sel_mux_word1 = sv2v_cast_189E4(2'b11);
				sel_mux_word2 = sv2v_cast_189E4(2'b11);
				sel_mux_word3 = sv2v_cast_189E4(2'b11);
				sel_mux_word4 = sv2v_cast_189E4(2'b11);
				if (current_round == prim_ascon_pkg_ROUND_MAX)
					fsm_state_d = sv2v_cast_DCAFE(10'b1111010111);
				else
					inc_round_counter = 1'b1;
			end
			sv2v_cast_DCAFE(10'b1111010111): begin
				tag_out_valid_o = 1'b1;
				fsm_state_d = sv2v_cast_DCAFE(10'b1010101110);
				done_o = 1'b1;
			end
			sv2v_cast_DCAFE(10'b0100011110): begin
				fsm_state_d = sv2v_cast_DCAFE(10'b0100011110);
				sparse_fsm_error = 1'b1;
			end
			default: begin
				fsm_state_d = sv2v_cast_DCAFE(10'b0100011110);
				sparse_fsm_error = 1'b1;
			end
		endcase
	end
	prim_sparse_fsm_flop #(
		.Width(prim_ascon_pkg_AsconDuplexFSMStateWidth),
		.ResetValue(sv2v_cast_DCAFE(10'b1010101110)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(fsm_state_d),
		.state_o(fsm_state_q)
	);
	wire mubi_error;
	function automatic prim_mubi_pkg_mubi4_test_invalid;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_invalid = ~(|{((sv2v_cast_EECFA(4'h6) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) === (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) | 1'bx), ((sv2v_cast_EECFA(4'h9) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) === (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) | 1'bx)});
	endfunction
	assign mubi_error = (((prim_mubi_pkg_mubi4_test_invalid(no_ad_i) | prim_mubi_pkg_mubi4_test_invalid(no_msg_i)) | prim_mubi_pkg_mubi4_test_invalid(complete_block)) | prim_mubi_pkg_mubi4_test_invalid(last_block_ad_i)) | prim_mubi_pkg_mubi4_test_invalid(last_block_msg_i);
	assign err_o = (round_count_error | sparse_fsm_error) | mubi_error;
	function automatic [7:0] prim_ascon_pkg_get_ascon_rcon;
		input reg [3:0] round;
		reg [7:0] result;
		begin
			(* full_case, parallel_case *)
			case (round)
				4'b0000: result = 8'hf0;
				4'b0001: result = 8'he1;
				4'b0010: result = 8'hd2;
				4'b0011: result = 8'hc3;
				4'b0100: result = 8'hb4;
				4'b0101: result = 8'ha5;
				4'b0110: result = 8'h96;
				4'b0111: result = 8'h87;
				4'b1000: result = 8'h78;
				4'b1001: result = 8'h69;
				4'b1010: result = 8'h5a;
				4'b1011: result = 8'h4b;
				default: result = 8'h00;
			endcase
			prim_ascon_pkg_get_ascon_rcon = result;
		end
	endfunction
	prim_ascon_round u_prim_ascon_round(
		.state_o(state_from_round),
		.state_i(state_to_round),
		.rcon_i(prim_ascon_pkg_get_ascon_rcon(current_round))
	);
	initial _sv2v_0 = 0;
endmodule
