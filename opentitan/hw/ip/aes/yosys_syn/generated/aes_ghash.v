module aes_ghash (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	op_i,
	gcm_phase_i,
	num_valid_bytes_i,
	load_hash_subkey_i,
	clear_i,
	first_block_o,
	alert_fatal_i,
	alert_o,
	data_in_prev_i,
	data_out_i,
	cipher_state_done_i,
	ghash_state_done_o
);
	reg _sv2v_0;
	parameter [0:0] SecMasking = 1;
	parameter [31:0] GFMultCycles = 32;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] in_valid_i;
	output reg [2:0] in_ready_o;
	output reg [2:0] out_valid_o;
	input wire [2:0] out_ready_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire [4:0] num_valid_bytes_i;
	input wire [2:0] load_hash_subkey_i;
	input wire clear_i;
	output wire first_block_o;
	input wire alert_fatal_i;
	output reg alert_o;
	localparam [31:0] aes_pkg_GCMDegree = 128;
	input wire [127:0] data_in_prev_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [127:0] data_out_i;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] cipher_state_done_i;
	output reg [127:0] ghash_state_done_o;
	localparam signed [31:0] GFMultStagesPerCycle = aes_pkg_GCMDegree / GFMultCycles;
	wire [127:0] s_d;
	reg [127:0] s_q;
	reg [2:0] s_we;
	wire [255:0] corr_d;
	reg [255:0] corr_q;
	reg [2:0] corr_we;
	reg corr0_en_d;
	wire corr0_en_q;
	reg [127:0] ghash_in;
	reg [127:0] ghash_in_valid;
	localparam signed [31:0] aes_pkg_GHashInSelWidth = aes_pkg_Mux2SelWidth;
	reg [2:0] ghash_in_sel;
	localparam signed [31:0] aes_pkg_GHashAddInSelWidth = 3;
	reg [5:0] ghash_add_in_sel_d;
	wire [5:0] ghash_add_in_sel_q;
	wire [1:0] ghash_add_in_sel_err;
	reg [127:0] ghash_state_d [0:NumShares - 1];
	reg [127:0] ghash_state_q [0:NumShares - 1];
	wire [127:0] add_s_in;
	reg add_s_en_d;
	wire add_s_en_q;
	wire [127:0] ghash_state_done;
	wire [127:0] ghash_state_add [0:NumShares - 1];
	reg [2:0] ghash_state_we [0:1];
	localparam signed [31:0] aes_pkg_Mux5SelWidth = 6;
	localparam signed [31:0] aes_pkg_GHashStateSelWidth = aes_pkg_Mux5SelWidth;
	reg [5:0] ghash_state_sel;
	wire [127:0] ghash_state_mult [0:NumShares - 1];
	wire [(NumShares * aes_pkg_GCMDegree) - 1:0] hash_subkey_d;
	reg [(NumShares * aes_pkg_GCMDegree) - 1:0] hash_subkey_q;
	reg [2:0] hash_subkey_we;
	reg gf_mult0_en_d;
	wire gf_mult0_en_q;
	localparam signed [31:0] aes_pkg_GFMultInSelWidth = 3;
	reg [2:0] gf_mult1_in_sel_d;
	wire [2:0] gf_mult1_in_sel_q;
	wire gf_mult1_in_sel_err;
	reg [1:0] gf_mult_req;
	wire [1:0] gf_mult_ack;
	wire [1:0] gf_mult_ack_pre;
	localparam signed [31:0] aes_pkg_GhashStateWidth = 7;
	reg [6:0] aes_ghash_ns;
	wire [6:0] aes_ghash_cs;
	reg first_block_d;
	reg first_block_q;
	reg final_add_d;
	reg final_add_q;
	reg advance;
	reg [(NumShares * aes_pkg_GCMDegree) - 1:0] cipher_state_done;
	reg [127:0] data_in_prev;
	reg [127:0] data_out;
	function automatic [127:0] aes_pkg_aes_state_to_ghash_vec;
		input reg [127:0] in;
		reg [127:0] out;
		reg [127:0] byte_vec;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 4; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 4; j = j + 1)
							byte_vec[((15 - (4 * i)) - j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			out = byte_vec;
			aes_pkg_aes_state_to_ghash_vec = out;
		end
	endfunction
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_3
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_4
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	always @(*) begin : data_in_conversion
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_5
			reg signed [31:0] s;
			for (s = 0; s < NumShares; s = s + 1)
				cipher_state_done[((NumShares - 1) - s) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree] = aes_pkg_aes_state_to_ghash_vec(cipher_state_done_i[8 * (4 * (((NumShares - 1) - s) * 4))+:128]);
		end
		data_in_prev = aes_pkg_aes_state_to_ghash_vec(aes_pkg_aes_transpose(data_in_prev_i));
		data_out = aes_pkg_aes_state_to_ghash_vec(aes_pkg_aes_transpose(data_out_i));
	end
	generate
		if (SecMasking) begin : gen_s1
			assign s_d = cipher_state_done[(NumShares - 2) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
		end
		else begin : gen_s0
			assign s_d = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
		end
	endgenerate
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni) begin : s_reg
		if (!rst_ni)
			s_q <= 1'sb0;
		else if (s_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			s_q <= s_d;
	end
	function automatic [127:0] sv2v_cast_C5D8B;
		input reg [127:0] inp;
		sv2v_cast_C5D8B = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_corr_terms
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_corr0_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(corr0_en_d),
				.q_o(corr0_en_q)
			);
			wire [127:0] ghash_state0_blanked;
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_corr0(
				.in_i(ghash_state_q[0]),
				.en_i(corr0_en_q),
				.out_o(ghash_state0_blanked)
			);
			assign corr_d[aes_pkg_GCMDegree+:aes_pkg_GCMDegree] = ghash_state_mult[0] ^ ghash_state0_blanked;
			assign corr_d[0+:aes_pkg_GCMDegree] = ghash_state_mult[1];
			always @(posedge clk_i or negedge rst_ni) begin : corr_reg
				if (!rst_ni)
					corr_q <= {2 {sv2v_cast_C5D8B(1'sb0)}};
				else if (corr_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					corr_q <= corr_d;
			end
		end
	endgenerate
	function automatic [2:0] sv2v_cast_8D447;
		input reg [2:0] inp;
		sv2v_cast_8D447 = inp;
	endfunction
	always @(*) begin : ghash_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (ghash_in_sel)
			sv2v_cast_8D447(sv2v_cast_14B94(3'b011)): ghash_in = data_in_prev;
			sv2v_cast_8D447(sv2v_cast_14B94(3'b100)): ghash_in = data_out;
			default: ghash_in = data_out;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_6
			reg [31:0] i;
			for (i = 0; i < 16; i = i + 1)
				ghash_in_valid[(15 - i) * 8+:8] = (num_valid_bytes_i > i[4:0] ? ghash_in[(15 - i) * 8+:8] : 8'b00000000);
		end
	end
	function automatic [2:0] sv2v_cast_4E16B;
		input reg [2:0] inp;
		sv2v_cast_4E16B = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_masked_add
			wire [127:0] add_in [0:NumShares - 1];
			wire [2:0] ghash_add_in_sel_q_raw [0:NumShares - 1];
			wire [(aes_pkg_GHashAddInSelWidth * aes_pkg_GCMDegree) - 1:0] ghash_add_in_mux_in [0:NumShares - 1];
			assign ghash_add_in_mux_in[0][256+:aes_pkg_GCMDegree] = ghash_in_valid;
			assign ghash_add_in_mux_in[0][128+:aes_pkg_GCMDegree] = corr_q[aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
			assign ghash_add_in_mux_in[0][0+:aes_pkg_GCMDegree] = ghash_state_q[1];
			assign ghash_add_in_mux_in[1][256+:aes_pkg_GCMDegree] = ghash_in_valid;
			assign ghash_add_in_mux_in[1][128+:aes_pkg_GCMDegree] = corr_q[0+:aes_pkg_GCMDegree];
			assign ghash_add_in_mux_in[1][0+:aes_pkg_GCMDegree] = ghash_state_mult[1];
			genvar _gv_s_1;
			for (_gv_s_1 = 0; _gv_s_1 < NumShares; _gv_s_1 = _gv_s_1 + 1) begin : gen_add_in_muxes
				localparam s = _gv_s_1;
				prim_flop #(
					.Width(aes_pkg_GHashAddInSelWidth),
					.ResetValue({sv2v_cast_4E16B(3'b001)})
				) u_prim_flop_add_in_sel(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i({ghash_add_in_sel_d[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]}),
					.q_o(ghash_add_in_sel_q_raw[s])
				);
				assign ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(ghash_add_in_sel_q_raw[s]);
				prim_onehot_check #(
					.OneHotWidth(aes_pkg_GHashAddInSelWidth),
					.AddrCheck(1'b0),
					.StrictCheck(1'b0)
				) u_prim_onehot_check_add_in_sel(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.oh_i({ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]}),
					.addr_i(1'sb0),
					.en_i(1'b1),
					.err_o(ghash_add_in_sel_err[s])
				);
				prim_onehot_mux #(
					.Width(aes_pkg_GCMDegree),
					.Inputs(aes_pkg_GHashAddInSelWidth)
				) u_prim_onehot_mux_add_in(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_i(ghash_add_in_mux_in[s]),
					.sel_i(ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]),
					.out_o(add_in[s])
				);
			end
			genvar _gv_s_2;
			for (_gv_s_2 = 0; _gv_s_2 < NumShares; _gv_s_2 = _gv_s_2 + 1) begin : gen_state_add
				localparam s = _gv_s_2;
				assign ghash_state_add[s] = ghash_state_q[s] ^ add_in[s];
			end
		end
		else begin : gen_unmasked_add
			assign ghash_state_add[0] = ghash_state_q[0] ^ ghash_in_valid;
		end
	endgenerate
	function automatic [5:0] sv2v_cast_D15E3;
		input reg [5:0] inp;
		sv2v_cast_D15E3 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_E839A;
		input reg [5:0] inp;
		sv2v_cast_E839A = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_ghash_state_mux_masked
			always @(*) begin : ghash_state0_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[0] = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000)): ghash_state_d[0] = data_in_prev;
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[0] = ghash_state_mult[0];
					default: ghash_state_d[0] = ghash_state_add[0];
				endcase
			end
			always @(*) begin : ghash_state1_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[1] = cipher_state_done[(NumShares - 2) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[1] = ghash_state_add[1];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[1] = ghash_state_mult[1];
					default: ghash_state_d[1] = ghash_state_add[1];
				endcase
			end
		end
		else begin : gen_ghash_state_mux_unmasked
			always @(*) begin : ghash_state_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[0] = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b011101)): ghash_state_d[0] = ghash_state_done;
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[0] = ghash_state_mult[0];
					default: ghash_state_d[0] = ghash_state_add[0];
				endcase
			end
		end
	endgenerate
	genvar _gv_s_3;
	generate
		for (_gv_s_3 = 0; _gv_s_3 < NumShares; _gv_s_3 = _gv_s_3 + 1) begin : gen_ghash_state_reg_shares
			localparam s = _gv_s_3;
			always @(posedge clk_i or negedge rst_ni) begin : ghash_state_reg
				if (!rst_ni)
					ghash_state_q[s] <= 1'sb0;
				else if (ghash_state_we[s] == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					ghash_state_q[s] <= ghash_state_d[s];
			end
		end
	endgenerate
	assign hash_subkey_d = cipher_state_done;
	always @(posedge clk_i or negedge rst_ni) begin : hash_subkey_reg
		if (!rst_ni)
			hash_subkey_q <= {NumShares {sv2v_cast_C5D8B(1'sb0)}};
		else if (hash_subkey_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			hash_subkey_q <= hash_subkey_d;
	end
	wire [127:0] gf_mult_op_b [0:NumShares - 1];
	wire [127:0] gf_mult_op_b_rev [0:NumShares - 1];
	wire [127:0] gf_mult_prod [0:NumShares - 1];
	generate
		if (SecMasking) begin : gen_gf_mult0_blanker
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_gf_mult0_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(gf_mult0_en_d),
				.q_o(gf_mult0_en_q)
			);
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_gf_mult0(
				.in_i(ghash_state_q[0]),
				.en_i(gf_mult0_en_q),
				.out_o(gf_mult_op_b[0])
			);
		end
		else begin : gen_no_gf_mult0_blanker
			assign gf_mult_op_b[0] = ghash_state_q[0];
		end
	endgenerate
	function automatic [127:0] aes_pkg_aes_ghash_reverse_bit_order;
		input reg [127:0] in;
		reg [127:0] out;
		begin
			begin : sv2v_autoblock_7
				reg signed [31:0] i;
				for (i = 0; i < 128; i = i + 1)
					out[i] = in[127 - i];
			end
			aes_pkg_aes_ghash_reverse_bit_order = out;
		end
	endfunction
	assign gf_mult_op_b_rev[0] = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_op_b[0]);
	function automatic [2:0] sv2v_cast_32E0C;
		input reg [2:0] inp;
		sv2v_cast_32E0C = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_gf_mult1_mux
			wire [2:0] gf_mult1_in_sel_q_raw;
			wire [(aes_pkg_GFMultInSelWidth * aes_pkg_GCMDegree) - 1:0] gf_mult1_op_b_mux_in;
			prim_flop #(
				.Width(aes_pkg_GFMultInSelWidth),
				.ResetValue({sv2v_cast_32E0C(3'b000)})
			) u_prim_flop_gf_mult1_in_sel(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i({gf_mult1_in_sel_d}),
				.q_o(gf_mult1_in_sel_q_raw)
			);
			assign gf_mult1_in_sel_q = sv2v_cast_32E0C(gf_mult1_in_sel_q_raw);
			prim_onehot_check #(
				.OneHotWidth(aes_pkg_GFMultInSelWidth),
				.AddrCheck(1'b0),
				.StrictCheck(1'b0)
			) u_prim_onehot_check_gf_mult1_in_sel(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.oh_i({gf_mult1_in_sel_q}),
				.addr_i(1'sb0),
				.en_i(1'b1),
				.err_o(gf_mult1_in_sel_err)
			);
			assign gf_mult1_op_b_mux_in[256+:aes_pkg_GCMDegree] = ghash_state_q[0];
			assign gf_mult1_op_b_mux_in[128+:aes_pkg_GCMDegree] = ghash_state_q[1];
			assign gf_mult1_op_b_mux_in[0+:aes_pkg_GCMDegree] = s_q;
			prim_onehot_mux #(
				.Width(aes_pkg_GCMDegree),
				.Inputs(aes_pkg_GFMultInSelWidth)
			) u_prim_onehot_mux_gf_mult1_op_b(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.in_i(gf_mult1_op_b_mux_in),
				.sel_i(gf_mult1_in_sel_q),
				.out_o(gf_mult_op_b[1])
			);
			wire [127:0] gf_mult1_op_b_rev;
			assign gf_mult1_op_b_rev = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_op_b[1]);
			wire [GFMultStagesPerCycle - 1:0] gf_mult1_op_b_rev_slice_d;
			reg [GFMultStagesPerCycle - 1:0] gf_mult1_op_b_rev_slice_q;
			assign gf_mult1_op_b_rev_slice_d = gf_mult1_op_b_rev[127-:GFMultStagesPerCycle];
			always @(posedge clk_i or negedge rst_ni) begin : gf_mult1_op_b_slice_reg
				if (!rst_ni)
					gf_mult1_op_b_rev_slice_q <= 1'sb0;
				else
					gf_mult1_op_b_rev_slice_q <= gf_mult1_op_b_rev_slice_d;
			end
			assign gf_mult_op_b_rev[1] = {gf_mult1_op_b_rev_slice_q, gf_mult1_op_b_rev[(aes_pkg_GCMDegree - GFMultStagesPerCycle) - 1:0]};
		end
	endgenerate
	genvar _gv_s_4;
	function automatic [127:0] sv2v_cast_D3020;
		input reg [127:0] inp;
		sv2v_cast_D3020 = inp;
	endfunction
	localparam [127:0] aes_pkg_GCMIPoly = (((sv2v_cast_D3020(1'b1) << 7) | (sv2v_cast_D3020(1'b1) << 2)) | (sv2v_cast_D3020(1'b1) << 1)) | (sv2v_cast_D3020(1'b1) << 0);
	generate
		for (_gv_s_4 = 0; _gv_s_4 < NumShares; _gv_s_4 = _gv_s_4 + 1) begin : gen_gf_mult
			localparam s = _gv_s_4;
			prim_gf_mult #(
				.Width(aes_pkg_GCMDegree),
				.StagesPerCycle(GFMultStagesPerCycle),
				.IPoly(aes_pkg_GCMIPoly),
				.OutputZeroUntilAck(1'b1)
			) u_gf_mult(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.req_i(gf_mult_req[s]),
				.ack_o(gf_mult_ack[s]),
				.ack_pre_o(gf_mult_ack_pre[s]),
				.operand_a_i(aes_pkg_aes_ghash_reverse_bit_order(hash_subkey_q[((NumShares - 1) - s) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree])),
				.operand_b_i(gf_mult_op_b_rev[s]),
				.prod_o(gf_mult_prod[s])
			);
			assign ghash_state_mult[s] = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_prod[s]);
		end
		if (!SecMasking) begin : gen_tie_offs
			wire [255:0] unused_corr_q;
			wire [2:0] unused_corr_we;
			assign corr_d = {2 {sv2v_cast_C5D8B(1'sb0)}};
			wire [256:1] sv2v_tmp_AF6E2;
			assign sv2v_tmp_AF6E2 = corr_d;
			always @(*) corr_q = sv2v_tmp_AF6E2;
			assign unused_corr_q = corr_q;
			assign unused_corr_we = corr_we;
			wire unused_corr0_en_q;
			assign corr0_en_q = corr0_en_d;
			assign unused_corr0_en_q = corr0_en_q;
			wire unused_ghash_add_in_sel_d;
			assign unused_ghash_add_in_sel_d = ^{ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth], ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth]};
			assign ghash_add_in_sel_q = {2 {sv2v_cast_4E16B(3'b001)}};
			assign ghash_add_in_sel_err = 2'b00;
			assign gf_mult1_in_sel_err = 1'b0;
			wire [2:0] unused_ghash_state_we;
			assign unused_ghash_state_we = ghash_state_we[1];
			wire unused_gf_mult_req;
			assign unused_gf_mult_req = gf_mult_req[1];
			assign gf_mult_ack[1] = 1'b1;
			assign gf_mult_ack_pre[1] = 1'b1;
			wire unused_add_s_en_q;
			assign add_s_en_q = add_s_en_d;
			assign unused_add_s_en_q = add_s_en_q;
		end
	endgenerate
	function automatic [6:0] sv2v_cast_F0BFD;
		input reg [6:0] inp;
		sv2v_cast_F0BFD = inp;
	endfunction
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	always @(*) begin : aes_ghash_fsm
		if (_sv2v_0)
			;
		in_ready_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		out_valid_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		corr_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		corr0_en_d = 1'b0;
		ghash_in_sel = sv2v_cast_8D447(sv2v_cast_14B94(3'b100));
		ghash_add_in_sel_d = ghash_add_in_sel_q;
		ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
		ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		gf_mult_req = 1'sb0;
		gf_mult0_en_d = gf_mult0_en_q;
		gf_mult1_in_sel_d = gf_mult1_in_sel_q;
		add_s_en_d = 1'b0;
		aes_ghash_ns = aes_ghash_cs;
		first_block_d = first_block_q;
		final_add_d = final_add_q;
		advance = 1'b0;
		alert_o = 1'b0;
		(* full_case, parallel_case *)
		case (aes_ghash_cs)
			sv2v_cast_F0BFD(7'b1100001): begin
				in_ready_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				if (in_valid_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) begin
					if (clear_i) begin
						s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b1;
						final_add_d = 1'b0;
						if (SecMasking) begin
							gf_mult0_en_d = 1'b1;
							gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b000001)) begin
						if (load_hash_subkey_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
							hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						else begin
							s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000));
							ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							first_block_d = 1'b1;
							if (SecMasking) begin
								gf_mult0_en_d = 1'b1;
								gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b001);
								aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
							end
							else
								aes_ghash_ns = sv2v_cast_F0BFD(7'b0000110);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b000010)) begin
						ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b0;
						ghash_in_sel = (!SecMasking ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : sv2v_cast_8D447(sv2v_cast_14B94(3'b100)));
						aes_ghash_ns = (!SecMasking ? sv2v_cast_F0BFD(7'b0000110) : sv2v_cast_F0BFD(7'b1100001));
					end
					else if (((gcm_phase_i == sv2v_cast_92B33(6'b000100)) || (gcm_phase_i == sv2v_cast_92B33(6'b001000))) || (gcm_phase_i == sv2v_cast_92B33(6'b100000))) begin
						ghash_in_sel = (gcm_phase_i == sv2v_cast_92B33(6'b000100) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : ((gcm_phase_i == sv2v_cast_92B33(6'b001000)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : ((gcm_phase_i == sv2v_cast_92B33(6'b001000)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b100)) : (gcm_phase_i == sv2v_cast_92B33(6'b100000) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : sv2v_cast_8D447(sv2v_cast_14B94(3'b100))))));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = (first_block_q ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
						if (SecMasking && !first_block_q) begin
							ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
						end
						else begin
							gf_mult0_en_d = 1'b1;
							gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0010001);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b010000)) begin
						final_add_d = 1'b1;
						if (SecMasking) begin
							ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
						end
						else begin
							add_s_en_d = 1'b1;
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0110111);
						end
					end
					else
						aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
				end
			end
			sv2v_cast_F0BFD(7'b1111100): begin
				gf_mult_req = 2'b11;
				if (gf_mult_ack_pre[0])
					corr0_en_d = 1'b1;
				if (gf_mult_ack_pre[1])
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
				if (&gf_mult_ack) begin
					gf_mult0_en_d = 1'b0;
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
					corr_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
				end
			end
			sv2v_cast_F0BFD(7'b0101101): begin
				ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
				ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				final_add_d = 1'b0;
				ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				if ((gcm_phase_i == sv2v_cast_92B33(6'b010000)) || ((gcm_phase_i == sv2v_cast_92B33(6'b100000)) && final_add_q)) begin
					add_s_en_d = 1'b1;
					aes_ghash_ns = sv2v_cast_F0BFD(7'b0110111);
				end
				else begin
					gf_mult0_en_d = 1'b1;
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b001);
					aes_ghash_ns = sv2v_cast_F0BFD(7'b0010001);
				end
			end
			sv2v_cast_F0BFD(7'b0010001): begin
				gf_mult_req = 2'b11;
				if (gf_mult_ack_pre[1])
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
				if (&gf_mult_ack) begin
					gf_mult0_en_d = 1'b0;
					gf_mult1_in_sel_d = (SecMasking && first_block_q ? sv2v_cast_32E0C(3'b100) : sv2v_cast_32E0C(3'b000));
					ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110));
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					if (SecMasking) begin
						ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b010);
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = (first_block_q ? sv2v_cast_4E16B(3'b001) : sv2v_cast_4E16B(3'b010));
						aes_ghash_ns = sv2v_cast_F0BFD(7'b0001000);
					end
					else begin
						first_block_d = 1'b0;
						aes_ghash_ns = (gcm_phase_i == sv2v_cast_92B33(6'b100000) ? sv2v_cast_F0BFD(7'b0110111) : sv2v_cast_F0BFD(7'b1100001));
					end
				end
			end
			sv2v_cast_F0BFD(7'b0001000): begin
				if (first_block_q) begin
					gf_mult_req = 2'b10;
					if (gf_mult_ack_pre[1]) begin
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
					end
					if (gf_mult_ack[1]) begin
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b0;
						advance = 1'b1;
					end
				end
				else begin
					advance = 1'b1;
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				end
				if (advance) begin
					if (gcm_phase_i == sv2v_cast_92B33(6'b100000))
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1001111);
					else begin
						ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
					end
				end
			end
			sv2v_cast_F0BFD(7'b1001111): begin
				final_add_d = 1'b1;
				ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
				ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
			end
			sv2v_cast_F0BFD(7'b0000110): begin
				ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b011101));
				ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
			end
			sv2v_cast_F0BFD(7'b0110111): begin
				add_s_en_d = 1'b1;
				out_valid_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				if (out_ready_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) begin
					add_s_en_d = 1'b0;
					s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					if (SecMasking) begin
						gf_mult0_en_d = 1'b1;
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
					end
					else
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
				end
			end
			sv2v_cast_F0BFD(7'b0111010): alert_o = 1'b1;
			default: begin
				aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
				alert_o = 1'b1;
			end
		endcase
		if ((|ghash_add_in_sel_err || gf_mult1_in_sel_err) || alert_fatal_i)
			aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_GhashStateWidth),
		.ResetValue(sv2v_cast_F0BFD(7'b1100001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_ghash_ns),
		.state_o(aes_ghash_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : fsm_reg
		if (!rst_ni)
			first_block_q <= 1'b0;
		else
			first_block_q <= first_block_d;
	end
	generate
		if (SecMasking) begin : gen_fsm_reg_masked
			always @(posedge clk_i or negedge rst_ni) begin : fsm_reg_masked
				if (!rst_ni)
					final_add_q <= 1'b0;
				else
					final_add_q <= final_add_d;
			end
		end
		else begin : gen_no_fsm_reg
			wire unused_final_add_d;
			wire [1:1] sv2v_tmp_A0552;
			assign sv2v_tmp_A0552 = 1'b0;
			always @(*) final_add_q = sv2v_tmp_A0552;
			assign unused_final_add_d = final_add_d;
			wire unused_gf_mult0_en_d;
			assign gf_mult0_en_q = 1'b0;
			assign unused_gf_mult0_en_d = gf_mult0_en_d;
			wire [2:0] unused_gf_mult1_in_sel_d;
			assign gf_mult1_in_sel_q = sv2v_cast_32E0C(3'b000);
			assign unused_gf_mult1_in_sel_d = gf_mult1_in_sel_d;
			wire unused_advance;
			assign unused_advance = advance;
		end
	endgenerate
	assign first_block_o = first_block_q;
	generate
		if (SecMasking) begin : gen_add_s_in_masked
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_add_s_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(add_s_en_d),
				.q_o(add_s_en_q)
			);
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_add_s_in(
				.in_i(ghash_state_q[0]),
				.en_i(add_s_en_q),
				.out_o(add_s_in)
			);
		end
		else begin : gen_add_s_in_unmasked
			assign add_s_in = ghash_state_q[0];
		end
	endgenerate
	assign ghash_state_done = s_q ^ add_s_in;
	always @(*) begin : data_out_conversion
		if (_sv2v_0)
			;
		ghash_state_done_o = aes_pkg_aes_transpose(aes_pkg_aes_state_to_ghash_vec(ghash_state_done));
	end
	initial _sv2v_0 = 0;
endmodule
