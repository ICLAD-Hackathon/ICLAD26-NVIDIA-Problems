module prim_trivium (
	clk_i,
	rst_ni,
	en_i,
	allow_lockup_i,
	seed_en_i,
	seed_done_o,
	seed_req_o,
	seed_ack_i,
	seed_key_i,
	seed_iv_i,
	seed_state_full_i,
	seed_state_partial_i,
	key_o,
	err_o
);
	reg _sv2v_0;
	parameter [0:0] BiviumVariant = 0;
	parameter [31:0] OutputWidth = 64;
	parameter [0:0] StrictLockupProtection = 1;
	parameter integer SeedType = 32'sd1;
	localparam [31:0] prim_trivium_pkg_PartialSeedWidthDefault = 32;
	parameter [31:0] PartialSeedWidth = prim_trivium_pkg_PartialSeedWidthDefault;
	localparam signed [31:0] prim_trivium_pkg_BiviumStateWidth = 177;
	localparam signed [31:0] prim_trivium_pkg_TriviumLfsrWidth = 288;
	localparam signed [31:0] prim_trivium_pkg_TriviumStateWidth = prim_trivium_pkg_TriviumLfsrWidth;
	localparam [31:0] StateWidth = (BiviumVariant ? prim_trivium_pkg_BiviumStateWidth : prim_trivium_pkg_TriviumStateWidth);
	localparam [287:0] prim_trivium_pkg_RndCnstTriviumLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstTriviumLfsrSeed = prim_trivium_pkg_RndCnstTriviumLfsrSeedDefault;
	localparam [StateWidth - 1:0] StateSeed = RndCnstTriviumLfsrSeed[StateWidth - 1:0];
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	input wire allow_lockup_i;
	input wire seed_en_i;
	output wire seed_done_o;
	output wire seed_req_o;
	input wire seed_ack_i;
	localparam [31:0] prim_trivium_pkg_KeyIvWidth = 80;
	input wire [79:0] seed_key_i;
	input wire [79:0] seed_iv_i;
	input wire [StateWidth - 1:0] seed_state_full_i;
	input wire [PartialSeedWidth - 1:0] seed_state_partial_i;
	output reg [OutputWidth - 1:0] key_o;
	output wire err_o;
	localparam [31:0] LastStatePartFractional = ((StateWidth % PartialSeedWidth) != 0 ? 1 : 0);
	localparam [31:0] NumStateParts = (StateWidth / PartialSeedWidth) + LastStatePartFractional;
	localparam [31:0] NumBitsLastPart = StateWidth - ((NumStateParts - 1) * PartialSeedWidth);
	localparam [31:0] LastStatePart = NumStateParts - 1;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] StateIdxWidth = prim_util_pkg_vbits(NumStateParts);
	wire [StateWidth - 1:0] state_d;
	reg [StateWidth - 1:0] state_q;
	reg [StateWidth - 1:0] state_update;
	reg [StateWidth - 1:0] state_seed;
	wire seed_req_d;
	reg seed_req_q;
	wire unused_seed;
	wire update;
	wire update_init;
	wire wr_en_seed;
	wire [StateIdxWidth - 1:0] state_idx_d;
	reg [StateIdxWidth - 1:0] state_idx_q;
	wire last_state_part;
	wire lockup;
	wire restore;
	assign update = en_i | update_init;
	assign wr_en_seed = seed_req_o & seed_ack_i;
	assign lockup = ~(|state_q);
	assign err_o = lockup;
	function automatic prim_trivium_pkg_bivium_generate_key_stream;
		input reg [176:0] state;
		reg key;
		reg add_65_92;
		reg add_161_176;
		reg unused_state;
		begin
			add_65_92 = state[65] ^ state[92];
			add_161_176 = state[161] ^ state[176];
			key = add_161_176 ^ add_65_92;
			unused_state = ^{state[175:162], state[160:93], state[91:66], state[64:0]};
			prim_trivium_pkg_bivium_generate_key_stream = key;
		end
	endfunction
	function automatic [176:0] prim_trivium_pkg_bivium_update_state;
		input reg [176:0] in;
		reg [176:0] out;
		reg mul_90_91;
		reg mul_174_175;
		reg add_65_92;
		reg add_161_176;
		begin
			mul_90_91 = in[90] & in[91];
			add_65_92 = in[65] ^ in[92];
			mul_174_175 = in[174] & in[175];
			add_161_176 = in[161] ^ in[176];
			out[0] = in[68] ^ (mul_174_175 ^ add_161_176);
			out[93] = (in[170] ^ add_65_92) ^ mul_90_91;
			out[92:1] = in[91:0];
			out[176:94] = in[175:93];
			prim_trivium_pkg_bivium_update_state = out;
		end
	endfunction
	function automatic prim_trivium_pkg_trivium_generate_key_stream;
		input reg [287:0] state;
		reg key;
		reg add_65_92;
		reg add_161_176;
		reg add_242_287;
		reg unused_state;
		begin
			add_65_92 = state[65] ^ state[92];
			add_161_176 = state[161] ^ state[176];
			add_242_287 = state[242] ^ state[287];
			key = (add_161_176 ^ add_65_92) ^ add_242_287;
			unused_state = ^{state[286:243], state[241:177], state[175:162], state[160:93], state[91:66], state[64:0]};
			prim_trivium_pkg_trivium_generate_key_stream = key;
		end
	endfunction
	function automatic [287:0] prim_trivium_pkg_trivium_update_state;
		input reg [287:0] in;
		reg [287:0] out;
		reg mul_90_91;
		reg mul_174_175;
		reg mul_285_286;
		reg add_65_92;
		reg add_161_176;
		reg add_242_287;
		begin
			mul_90_91 = in[90] & in[91];
			add_65_92 = in[65] ^ in[92];
			mul_174_175 = in[174] & in[175];
			add_161_176 = in[161] ^ in[176];
			mul_285_286 = in[285] & in[286];
			add_242_287 = in[242] ^ in[287];
			out[0] = in[68] ^ (mul_285_286 ^ add_242_287);
			out[93] = in[170] ^ (add_65_92 ^ mul_90_91);
			out[177] = in[263] ^ (mul_174_175 ^ add_161_176);
			out[92:1] = in[91:0];
			out[176:94] = in[175:93];
			out[287:178] = in[286:177];
			prim_trivium_pkg_trivium_update_state = out;
		end
	endfunction
	generate
		if (BiviumVariant) begin : gen_update_and_output_bivium
			always @(*) begin
				if (_sv2v_0)
					;
				state_update = state_q;
				begin : sv2v_autoblock_1
					reg [31:0] i;
					for (i = 0; i < OutputWidth; i = i + 1)
						begin
							key_o[i] = prim_trivium_pkg_bivium_generate_key_stream(state_update);
							state_update = prim_trivium_pkg_bivium_update_state(state_update);
						end
				end
			end
		end
		else begin : gen_update_and_output_trivium
			always @(*) begin
				if (_sv2v_0)
					;
				state_update = state_q;
				begin : sv2v_autoblock_2
					reg [31:0] i;
					for (i = 0; i < OutputWidth; i = i + 1)
						begin
							key_o[i] = prim_trivium_pkg_trivium_generate_key_stream(state_update);
							state_update = prim_trivium_pkg_trivium_update_state(state_update);
						end
				end
			end
		end
	endgenerate
	function automatic [176:0] prim_trivium_pkg_bivium_seed_key_iv;
		input reg [79:0] key;
		input reg [79:0] iv;
		reg [176:0] state;
		begin
			state = {4'b0000, iv, 13'b0000000000000, key};
			prim_trivium_pkg_bivium_seed_key_iv = state;
		end
	endfunction
	function automatic [287:0] prim_trivium_pkg_trivium_seed_key_iv;
		input reg [79:0] key;
		input reg [79:0] iv;
		reg [287:0] state;
		begin
			state = {115'b1110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, iv, 13'b0000000000000, key};
			prim_trivium_pkg_trivium_seed_key_iv = state;
		end
	endfunction
	generate
		if (SeedType == 32'sd0) begin : gen_seed_type_key_iv
			if (BiviumVariant) begin : gen_seed_type_key_iv_bivium
				wire [StateWidth:1] sv2v_tmp_55514;
				assign sv2v_tmp_55514 = prim_trivium_pkg_bivium_seed_key_iv(seed_key_i, seed_iv_i);
				always @(*) state_seed = sv2v_tmp_55514;
			end
			else begin : gen_seed_type_key_iv_trivium
				wire [StateWidth:1] sv2v_tmp_CF5CF;
				assign sv2v_tmp_CF5CF = prim_trivium_pkg_trivium_seed_key_iv(seed_key_i, seed_iv_i);
				always @(*) state_seed = sv2v_tmp_CF5CF;
			end
		end
		else if (SeedType == 32'sd1) begin : gen_seed_type_state_full
			wire [StateWidth:1] sv2v_tmp_E618C;
			assign sv2v_tmp_E618C = seed_state_full_i;
			always @(*) state_seed = sv2v_tmp_E618C;
		end
		else begin : gen_seed_type_state_partial
			always @(*) begin
				if (_sv2v_0)
					;
				state_seed = (!update ? state_q : state_update);
				if (last_state_part)
					state_seed[StateWidth - 1-:NumBitsLastPart] = seed_state_partial_i[NumBitsLastPart - 1:0];
				else
					state_seed[state_idx_q * PartialSeedWidth+:PartialSeedWidth] = seed_state_partial_i;
			end
		end
	endgenerate
	assign restore = lockup & (StrictLockupProtection | ~allow_lockup_i);
	assign state_d = (restore ? StateSeed : (wr_en_seed ? state_seed : (update ? state_update : state_q)));
	always @(posedge clk_i or negedge rst_ni) begin : state_reg
		if (!rst_ni)
			state_q <= StateSeed;
		else
			state_q <= state_d;
	end
	assign seed_req_d = (seed_en_i | seed_req_q) & (~seed_ack_i | ~last_state_part);
	always @(posedge clk_i or negedge rst_ni) begin : seed_req_reg
		if (!rst_ni)
			seed_req_q <= 1'b0;
		else
			seed_req_q <= seed_req_d;
	end
	assign seed_req_o = seed_en_i | seed_req_q;
	generate
		if (SeedType == 32'sd0) begin : gen_key_iv_seed_handling
			localparam [31:0] NumInitUpdatesFractional = (((StateWidth * 4) % OutputWidth) != 0 ? 1 : 0);
			localparam [31:0] NumInitUpdates = ((StateWidth * 4) / OutputWidth) + NumInitUpdatesFractional;
			localparam [31:0] LastInitUpdate = NumInitUpdates - 1;
			localparam [31:0] InitUpdatesCtrWidth = prim_util_pkg_vbits(NumInitUpdates);
			wire [InitUpdatesCtrWidth - 1:0] init_update_ctr_d;
			reg [InitUpdatesCtrWidth - 1:0] init_update_ctr_q;
			wire init_update_d;
			reg init_update_q;
			wire last_init_update;
			assign init_update_ctr_d = (wr_en_seed ? {InitUpdatesCtrWidth {1'sb0}} : (init_update_q ? init_update_ctr_q + 1'b1 : init_update_ctr_q));
			always @(posedge clk_i or negedge rst_ni) begin : init_update_ctr_reg
				if (!rst_ni)
					init_update_ctr_q <= 1'sb0;
				else
					init_update_ctr_q <= init_update_ctr_d;
			end
			assign last_init_update = init_update_ctr_q == LastInitUpdate[InitUpdatesCtrWidth - 1:0];
			assign init_update_d = (wr_en_seed ? 1'b1 : (last_init_update ? 1'b0 : init_update_q));
			always @(posedge clk_i or negedge rst_ni) begin : init_update_reg
				if (!rst_ni)
					init_update_q <= 1'b0;
				else
					init_update_q <= init_update_d;
			end
			assign update_init = init_update_q;
			assign seed_done_o = init_update_q & last_init_update;
			assign state_idx_d = 1'sb0;
			wire [StateIdxWidth:1] sv2v_tmp_C639F;
			assign sv2v_tmp_C639F = 1'sb0;
			always @(*) state_idx_q = sv2v_tmp_C639F;
			assign last_state_part = 1'b0;
			assign unused_seed = ^{seed_state_full_i, seed_state_partial_i, state_idx_d, state_idx_q, last_state_part};
		end
		else if (SeedType == 32'sd1) begin : gen_full_seed_handling
			assign seed_done_o = seed_req_o & seed_ack_i;
			assign update_init = 1'b0;
			assign state_idx_d = 1'sb0;
			wire [StateIdxWidth:1] sv2v_tmp_C639F;
			assign sv2v_tmp_C639F = 1'sb0;
			always @(*) state_idx_q = sv2v_tmp_C639F;
			assign last_state_part = 1'b1;
			assign unused_seed = ^{seed_key_i, seed_iv_i, seed_state_partial_i, state_idx_d, state_idx_q, last_state_part};
		end
		else begin : gen_partial_seed_handling
			assign last_state_part = state_idx_q == LastStatePart[StateIdxWidth - 1:0];
			assign state_idx_d = (wr_en_seed & last_state_part ? {StateIdxWidth {1'sb0}} : (wr_en_seed & ~last_state_part ? state_idx_q + 1'b1 : state_idx_q));
			always @(posedge clk_i or negedge rst_ni) begin : state_idx_reg
				if (!rst_ni)
					state_idx_q <= 1'sb0;
				else
					state_idx_q <= state_idx_d;
			end
			assign seed_done_o = (seed_req_o & seed_ack_i) & last_state_part;
			assign update_init = 1'b0;
			assign unused_seed = ^{seed_key_i, seed_iv_i, seed_state_full_i};
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
