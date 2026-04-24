module keccak_2share (
	clk_i,
	rst_ni,
	lc_escalate_en_i,
	rnd_i,
	phase_sel_i,
	dom_out_low_i,
	dom_in_low_i,
	dom_in_rand_ext_i,
	dom_update_i,
	rand_i,
	s_i,
	s_o
);
	reg _sv2v_0;
	parameter signed [31:0] Width = 1600;
	localparam signed [31:0] W = Width / 25;
	localparam signed [31:0] L = $clog2(W);
	localparam signed [31:0] MaxRound = 12 + (2 * L);
	localparam signed [31:0] RndW = $clog2(MaxRound + 1);
	parameter [0:0] EnMasking = 1'b0;
	parameter [0:0] ForceRandExt = 1'b0;
	localparam signed [31:0] Share = (EnMasking ? 2 : 1);
	input clk_i;
	input rst_ni;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input [RndW - 1:0] rnd_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] phase_sel_i;
	input dom_out_low_i;
	input dom_in_low_i;
	input dom_in_rand_ext_i;
	input dom_update_i;
	input [(Width / 2) - 1:0] rand_i;
	input [(Share * Width) - 1:0] s_i;
	output wire [(Share * Width) - 1:0] s_o;
	wire [(((Share * 5) * 5) * W) - 1:0] state_in;
	reg [(((Share * 5) * 5) * W) - 1:0] state_out;
	wire [(25 * W) - 1:0] theta_data [0:Share - 1];
	wire [(25 * W) - 1:0] rho_data [0:Share - 1];
	wire [(((Share * 5) * 5) * W) - 1:0] pi_data;
	wire [(25 * W) - 1:0] chi_data [0:Share - 1];
	wire [(((Share * 5) * 5) * W) - 1:0] iota_data;
	wire [(((Share * 5) * 5) * W) - 1:0] phase1_in;
	wire [(((Share * 5) * 5) * W) - 1:0] phase1_out;
	wire [(((Share * 5) * 5) * W) - 1:0] phase2_in;
	wire [(((Share * 5) * 5) * W) - 1:0] phase2_out;
	generate
		if (!EnMasking) begin : gen_tie_unused
			wire unused_clk;
			wire unused_rst_n;
			wire [3:0] unused_phase_sel;
			wire unused_dom_ctrl;
			wire [(Width / 2) - 1:0] unused_rand;
			assign unused_clk = clk_i;
			assign unused_rst_n = rst_ni;
			assign unused_phase_sel = phase_sel_i;
			assign unused_dom_ctrl = ^{dom_out_low_i, dom_in_low_i, dom_in_rand_ext_i, dom_update_i};
			assign unused_rand = rand_i;
		end
	endgenerate
	genvar _gv_i_1;
	function automatic [(25 * W) - 1:0] bitarray_to_box;
		input reg [Width - 1:0] s_in;
		reg [(25 * W) - 1:0] box;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] y;
				for (y = 0; y < 5; y = y + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] x;
						for (x = 0; x < 5; x = x + 1)
							begin : sv2v_autoblock_3
								reg signed [31:0] z;
								for (z = 0; z < W; z = z + 1)
									box[(((x * 5) + y) * W) + z] = s_in[(W * ((5 * y) + x)) + z];
							end
					end
			end
			bitarray_to_box = box;
		end
	endfunction
	function automatic [Width - 1:0] box_to_bitarray;
		input reg [(25 * W) - 1:0] state;
		reg [Width - 1:0] bitarray;
		begin
			begin : sv2v_autoblock_4
				reg signed [31:0] y;
				for (y = 0; y < 5; y = y + 1)
					begin : sv2v_autoblock_5
						reg signed [31:0] x;
						for (x = 0; x < 5; x = x + 1)
							begin : sv2v_autoblock_6
								reg signed [31:0] z;
								for (z = 0; z < W; z = z + 1)
									bitarray[(W * ((5 * y) + x)) + z] = state[(((x * 5) + y) * W) + z];
							end
					end
			end
			box_to_bitarray = bitarray;
		end
	endfunction
	generate
		for (_gv_i_1 = 0; _gv_i_1 < Share; _gv_i_1 = _gv_i_1 + 1) begin : g_state_inout
			localparam i = _gv_i_1;
			assign state_in[W * (5 * (((Share - 1) - i) * 5))+:W * 25] = bitarray_to_box(s_i[((Share - 1) - i) * Width+:Width]);
			assign s_o[((Share - 1) - i) * Width+:Width] = box_to_bitarray(state_out[W * (5 * (((Share - 1) - i) * 5))+:W * 25]);
		end
	endgenerate
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	generate
		if (EnMasking) begin : g_2share_data
			assign phase1_in = state_in;
			assign phase2_in = state_in;
			always @(*) begin
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (phase_sel_i)
					sv2v_cast_EECFA(4'h9): state_out = phase1_out;
					sv2v_cast_EECFA(4'h6): state_out = phase2_out;
					default: state_out = phase1_out;
				endcase
			end
		end
		else begin : g_single_data
			assign phase1_in = state_in;
			assign phase2_in = phase1_out;
			wire [((Share * 5) * 5) * W:1] sv2v_tmp_F7B14;
			assign sv2v_tmp_F7B14 = phase2_out;
			always @(*) state_out = sv2v_tmp_F7B14;
		end
	endgenerate
	genvar _gv_i_2;
	localparam signed [799:0] PiRotate = 800'h30000000100000004000000020000000100000004000000020000000000000003000000020000000000000003000000010000000400000003000000010000000400000002000000000000000400000002000000000000000300000001;
	function automatic [(25 * W) - 1:0] pi;
		input reg [(25 * W) - 1:0] state;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_7
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_8
						reg signed [31:0] y;
						for (y = 0; y < 5; y = y + 1)
							result[(((x * 5) + y) * W) + (W - 1)-:W] = state[(((PiRotate[(((4 - x) * 5) + (4 - y)) * 32+:32] * 5) + x) * W) + (W - 1)-:W];
					end
			end
			pi = result;
		end
	endfunction
	localparam signed [159:0] ThetaIndexX1 = 160'h0000000400000000000000010000000200000003;
	localparam signed [159:0] ThetaIndexX2 = 160'h0000000100000002000000030000000400000000;
	function automatic [(25 * W) - 1:0] theta;
		input reg [(25 * W) - 1:0] state;
		reg [(5 * W) - 1:0] c;
		reg [(5 * W) - 1:0] d;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_9
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					c[x * W+:W] = (((state[(x * 5) * W+:W] ^ state[((x * 5) + 1) * W+:W]) ^ state[((x * 5) + 2) * W+:W]) ^ state[((x * 5) + 3) * W+:W]) ^ state[((x * 5) + 4) * W+:W];
			end
			begin : sv2v_autoblock_10
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_11
						reg signed [31:0] z;
						for (z = 0; z < W; z = z + 1)
							begin : sv2v_autoblock_12
								reg signed [31:0] index_z;
								index_z = (z == 0 ? W - 1 : z - 1);
								d[(x * W) + z] = c[(ThetaIndexX1[(4 - x) * 32+:32] * W) + z] ^ c[(ThetaIndexX2[(4 - x) * 32+:32] * W) + index_z];
							end
					end
			end
			begin : sv2v_autoblock_13
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					begin : sv2v_autoblock_14
						reg signed [31:0] y;
						for (y = 0; y < 5; y = y + 1)
							result[((x * 5) + y) * W+:W] = state[((x * 5) + y) * W+:W] ^ d[x * W+:W];
					end
			end
			theta = result;
		end
	endfunction
	generate
		for (_gv_i_2 = 0; _gv_i_2 < Share; _gv_i_2 = _gv_i_2 + 1) begin : g_datapath
			localparam i = _gv_i_2;
			assign theta_data[i] = theta(phase1_in[W * (5 * (((Share - 1) - i) * 5))+:W * 25]);
			assign pi_data[W * (5 * (((Share - 1) - i) * 5))+:W * 25] = pi(rho_data[i]);
		end
	endgenerate
	assign phase1_out = pi_data;
	localparam [1535:0] RC = 1536'h10000000000008082800000000000808a8000000080008000000000000000808b000000008000000180000000800080818000000000008009000000000000008a00000000000000880000000080008009000000008000000a000000008000808b800000000000008b8000000000008089800000000000800380000000000080028000000000000080000000000000800a800000008000000a8000000080008081800000000000808000000000800000018000000080008008;
	function automatic [(25 * W) - 1:0] iota;
		input reg [(25 * W) - 1:0] state;
		input reg [RndW - 1:0] rnd;
		reg [(25 * W) - 1:0] result;
		begin
			result = state;
			result[W - 1-:W] = state[W - 1-:W] ^ RC[((23 - rnd) * 64) + (W - 1)-:W];
			iota = result;
		end
	endfunction
	generate
		if (EnMasking) begin : g_2share_iota
			assign iota_data[W * (5 * ((Share - 1) * 5))+:W * 25] = iota(chi_data[0], rnd_i);
			assign iota_data[W * (5 * ((Share - 2) * 5))+:W * 25] = chi_data[1];
		end
		else begin : g_single_iota
			assign iota_data[W * (5 * ((Share - 1) * 5))+:W * 25] = iota(chi_data[0], rnd_i);
		end
	endgenerate
	localparam signed [159:0] ChiIndexX1 = 160'h0000000100000002000000030000000400000000;
	localparam signed [159:0] ChiIndexX2 = 160'h0000000200000003000000040000000000000001;
	function automatic [(25 * W) - 1:0] chi;
		input reg [(25 * W) - 1:0] state;
		reg [(25 * W) - 1:0] result;
		begin
			begin : sv2v_autoblock_15
				reg signed [31:0] x;
				for (x = 0; x < 5; x = x + 1)
					result[W * (x * 5)+:W * 5] = state[W * (x * 5)+:W * 5] ^ (~state[W * (ChiIndexX1[(4 - x) * 32+:32] * 5)+:W * 5] & state[W * (ChiIndexX2[(4 - x) * 32+:32] * 5)+:W * 5]);
			end
			chi = result;
		end
	endfunction
	function automatic integer rot_int;
		input integer in;
		input integer num;
		integer out;
		begin
			if (in == 0)
				out = num - 1;
			else
				out = in - 1;
			rot_int = out;
		end
	endfunction
	generate
		if (EnMasking) begin : g_2share_chi
			localparam [31:0] WSheetHalf = (5 * W) / 2;
			wire [(5 * WSheetHalf) - 1:0] in_prd;
			wire [(5 * WSheetHalf) - 1:0] out_prd;
			genvar _gv_x_1;
			for (_gv_x_1 = 0; _gv_x_1 < 5; _gv_x_1 = _gv_x_1 + 1) begin : g_chi_w
				localparam x = _gv_x_1;
				localparam signed [31:0] X1 = (x + 1) % 5;
				localparam signed [31:0] X2 = (x + 2) % 5;
				wire [(5 * W) - 1:0] sheet0 [0:Share - 1];
				wire [(5 * W) - 1:0] sheet1 [0:Share - 1];
				wire [(5 * W) - 1:0] sheet2 [0:Share - 1];
				assign sheet0[0] = ~phase2_in[W * ((((Share - 1) * 5) + X1) * 5)+:W * 5];
				assign sheet0[1] = phase2_in[W * ((((Share - 2) * 5) + X1) * 5)+:W * 5];
				assign sheet1[0] = phase2_in[W * ((((Share - 1) * 5) + X2) * 5)+:W * 5];
				assign sheet1[1] = phase2_in[W * ((((Share - 2) * 5) + X2) * 5)+:W * 5];
				wire [WSheetHalf - 1:0] a0_l;
				wire [WSheetHalf - 1:0] a1_l;
				wire [WSheetHalf - 1:0] b0_l;
				wire [WSheetHalf - 1:0] b1_l;
				wire [WSheetHalf - 1:0] a0_h;
				wire [WSheetHalf - 1:0] a1_h;
				wire [WSheetHalf - 1:0] b0_h;
				wire [WSheetHalf - 1:0] b1_h;
				wire [WSheetHalf - 1:0] a0;
				wire [WSheetHalf - 1:0] a1;
				wire [WSheetHalf - 1:0] b0;
				wire [WSheetHalf - 1:0] b1;
				wire [WSheetHalf - 1:0] q0;
				wire [WSheetHalf - 1:0] q1;
				assign a0_l = {sheet0[0][(W / 2) - 1-:W / 2], sheet0[0][W + ((W / 2) - 1)-:W / 2], sheet0[0][(2 * W) + ((W / 2) - 1)-:W / 2], sheet0[0][(3 * W) + ((W / 2) - 1)-:W / 2], sheet0[0][(4 * W) + ((W / 2) - 1)-:W / 2]};
				assign a1_l = {sheet0[1][(W / 2) - 1-:W / 2], sheet0[1][W + ((W / 2) - 1)-:W / 2], sheet0[1][(2 * W) + ((W / 2) - 1)-:W / 2], sheet0[1][(3 * W) + ((W / 2) - 1)-:W / 2], sheet0[1][(4 * W) + ((W / 2) - 1)-:W / 2]};
				assign a0_h = {sheet0[0][0 + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[0][W + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[0][(2 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[0][(3 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[0][(4 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)]};
				assign a1_h = {sheet0[1][0 + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[1][W + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[1][(2 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[1][(3 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet0[1][(4 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)]};
				assign b0_l = {sheet1[0][(W / 2) - 1-:W / 2], sheet1[0][W + ((W / 2) - 1)-:W / 2], sheet1[0][(2 * W) + ((W / 2) - 1)-:W / 2], sheet1[0][(3 * W) + ((W / 2) - 1)-:W / 2], sheet1[0][(4 * W) + ((W / 2) - 1)-:W / 2]};
				assign b1_l = {sheet1[1][(W / 2) - 1-:W / 2], sheet1[1][W + ((W / 2) - 1)-:W / 2], sheet1[1][(2 * W) + ((W / 2) - 1)-:W / 2], sheet1[1][(3 * W) + ((W / 2) - 1)-:W / 2], sheet1[1][(4 * W) + ((W / 2) - 1)-:W / 2]};
				assign b0_h = {sheet1[0][0 + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[0][W + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[0][(2 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[0][(3 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[0][(4 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)]};
				assign b1_h = {sheet1[1][0 + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[1][W + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[1][(2 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[1][(3 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], sheet1[1][(4 * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)]};
				assign a0 = (dom_in_low_i ? a0_l : a0_h);
				assign a1 = (dom_in_low_i ? a1_l : a1_h);
				assign b0 = (dom_in_low_i ? b0_l : b0_h);
				assign b1 = (dom_in_low_i ? b1_l : b1_h);
				if (!ForceRandExt) begin : gen_in_prd_mux
					assign in_prd[x * WSheetHalf+:WSheetHalf] = (dom_in_rand_ext_i ? rand_i[x * WSheetHalf+:WSheetHalf] : out_prd[rot_int(x, 5) * WSheetHalf+:WSheetHalf]);
				end
				else begin : gen_no_in_prd_mux
					assign in_prd[x * WSheetHalf+:WSheetHalf] = rand_i[x * WSheetHalf+:WSheetHalf];
					wire unused_out_prd;
					assign unused_out_prd = ^{dom_in_rand_ext_i, out_prd[rot_int(x, 5) * WSheetHalf+:WSheetHalf]};
				end
				prim_dom_and_2share #(
					.DW(WSheetHalf),
					.Pipeline(1)
				) u_dom(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.a0_i(a0),
					.a1_i(a1),
					.b0_i(b0),
					.b1_i(b1),
					.z_valid_i(dom_update_i),
					.z_i(in_prd[x * WSheetHalf+:WSheetHalf]),
					.q0_o(q0),
					.q1_o(q1),
					.prd_o(out_prd[x * WSheetHalf+:WSheetHalf])
				);
				assign sheet2[0][4 * W+:W] = {2 {q0[0+:W / 2]}};
				assign sheet2[0][3 * W+:W] = {2 {q0[(W / 2) * 1+:W / 2]}};
				assign sheet2[0][2 * W+:W] = {2 {q0[(W / 2) * 2+:W / 2]}};
				assign sheet2[0][W+:W] = {2 {q0[(W / 2) * 3+:W / 2]}};
				assign sheet2[0][0+:W] = {2 {q0[(W / 2) * 4+:W / 2]}};
				assign sheet2[1][4 * W+:W] = {2 {q1[0+:W / 2]}};
				assign sheet2[1][3 * W+:W] = {2 {q1[(W / 2) * 1+:W / 2]}};
				assign sheet2[1][2 * W+:W] = {2 {q1[(W / 2) * 2+:W / 2]}};
				assign sheet2[1][W+:W] = {2 {q1[(W / 2) * 3+:W / 2]}};
				assign sheet2[1][0+:W] = {2 {q1[(W / 2) * 4+:W / 2]}};
				assign chi_data[0][W * (x * 5)+:W * 5] = sheet2[0] ^ phase2_in[W * ((((Share - 1) * 5) + x) * 5)+:W * 5];
				assign chi_data[1][W * (x * 5)+:W * 5] = sheet2[1] ^ phase2_in[W * ((((Share - 2) * 5) + x) * 5)+:W * 5];
			end
			genvar _gv_x_2;
			for (_gv_x_2 = 0; _gv_x_2 < 5; _gv_x_2 = _gv_x_2 + 1) begin : g_2share_phase2_out_row
				localparam x = _gv_x_2;
				genvar _gv_y_1;
				for (_gv_y_1 = 0; _gv_y_1 < 5; _gv_y_1 = _gv_y_1 + 1) begin : g_2share_phase2_out_col
					localparam y = _gv_y_1;
					assign phase2_out[(((((Share - 1) * 5) + x) * 5) + y) * W+:W] = (dom_out_low_i ? {state_in[((((((Share - 1) * 5) + x) * 5) + y) * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], iota_data[((((((Share - 1) * 5) + x) * 5) + y) * W) + ((W / 2) - 1)-:W / 2]} : {iota_data[((((((Share - 1) * 5) + x) * 5) + y) * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], state_in[((((((Share - 1) * 5) + x) * 5) + y) * W) + ((W / 2) - 1)-:W / 2]});
					assign phase2_out[(((((Share - 2) * 5) + x) * 5) + y) * W+:W] = (dom_out_low_i ? {state_in[((((((Share - 2) * 5) + x) * 5) + y) * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], iota_data[((((((Share - 2) * 5) + x) * 5) + y) * W) + ((W / 2) - 1)-:W / 2]} : {iota_data[((((((Share - 2) * 5) + x) * 5) + y) * W) + ((W - 1) >= (W / 2) ? W - 1 : ((W - 1) + ((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)) - 1)-:((W - 1) >= (W / 2) ? ((W - 1) - (W / 2)) + 1 : ((W / 2) - (W - 1)) + 1)], state_in[((((((Share - 2) * 5) + x) * 5) + y) * W) + ((W / 2) - 1)-:W / 2]});
				end
			end
		end
		else begin : g_single_chi
			assign chi_data[0] = chi(phase2_in[W * (5 * ((Share - 1) * 5))+:W * 25]);
			assign phase2_out = iota_data;
		end
	endgenerate
	localparam signed [799:0] RhoOffset = 800'h240000000300000069000000d2000000010000012c0000000a0000002d00000042000000be00000006000000ab0000000f000000fd0000001c000000370000009900000015000000780000005b00000114000000e7000000880000004e;
	genvar _gv_i_3;
	generate
		for (_gv_i_3 = 0; _gv_i_3 < Share; _gv_i_3 = _gv_i_3 + 1) begin : g_rho
			localparam i = _gv_i_3;
			wire [(25 * W) - 1:0] rho_in;
			wire [(25 * W) - 1:0] rho_out;
			assign rho_in = theta_data[i];
			assign rho_data[i] = rho_out;
			genvar _gv_x_3;
			for (_gv_x_3 = 0; _gv_x_3 < 5; _gv_x_3 = _gv_x_3 + 1) begin : gen_rho_x
				localparam x = _gv_x_3;
				genvar _gv_y_2;
				for (_gv_y_2 = 0; _gv_y_2 < 5; _gv_y_2 = _gv_y_2 + 1) begin : gen_rho_y
					localparam y = _gv_y_2;
					localparam signed [31:0] Offset = RhoOffset[(24 - ((5 * x) + y)) * 32+:32] % W;
					localparam signed [31:0] ShiftAmt = W - Offset;
					if (Offset == 0) begin : gen_offset0
						assign rho_out[(((x * 5) + y) * W) + (W - 1)-:W] = rho_in[(((x * 5) + y) * W) + (W - 1)-:W];
					end
					else begin : gen_others
						assign rho_out[(((x * 5) + y) * W) + (W - 1)-:W] = {rho_in[((x * 5) + y) * W+:ShiftAmt], rho_in[(((x * 5) + y) * W) + ShiftAmt+:Offset]};
					end
				end
			end
		end
	endgenerate
	wire [3:0] unused_lc_sig;
	assign unused_lc_sig = lc_escalate_en_i;
	initial _sv2v_0 = 0;
endmodule
