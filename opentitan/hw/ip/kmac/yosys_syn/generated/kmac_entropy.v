module kmac_entropy (
	clk_i,
	rst_ni,
	entropy_req_o,
	entropy_ack_i,
	entropy_data_i,
	rand_valid_o,
	rand_early_o,
	rand_data_o,
	rand_aux_o,
	rand_update_i,
	rand_consumed_i,
	in_keyblock_i,
	mode_i,
	entropy_ready_i,
	fast_process_i,
	msg_mask_en_i,
	msg_mask_o,
	seed_update_i,
	seed_data_i,
	entropy_refresh_req_i,
	wait_timer_prescaler_i,
	wait_timer_limit_i,
	hash_cnt_o,
	hash_cnt_clr_i,
	hash_threshold_i,
	entropy_configured_o,
	lc_escalate_en_i,
	err_o,
	sparse_fsm_error_o,
	count_error_o,
	err_processed_i
);
	reg _sv2v_0;
	localparam [31:0] kmac_pkg_EntropyOutputW = 800;
	localparam [7999:0] kmac_pkg_RndCnstLfsrPermDefault = 8000'hb1a3e87aeb4e69f02d8a6ee2c9ac567b2aa401a639a2a8ea2553614c0a8daf672c06546fc0d35267c4572024bc116458dd0f1c10a8aef5c4ad9a788968d0d7ca7345c6b8f277a5d3ec5da20f261826ed3c8992724e70db897060be51b07a96902e14a42d12d320f8187049b6c25f35d0e485cc4b9ef01dad2865b5e558926f380718b74394fe0f82d5395a7d0aa4845af814e8681107a4c793758572c9467493bf1248a48f1b40c209319b55111d0401819685a43a06f0da441021a8c220b14f01d44e49c1683a82afeb980964aa050641f4205131d9d4741eb5dd658e603b8ed438cb1096628d4262c9d75ced78ed09a3ddbb60f533eef10aa5a54b478d61a06a4b326eb3402105c27d562c6d91b48440d6d06e543be9871628a4aa9b3d2e51fa0ac2eb89a17f6d207ad96caf25d1fcffab210c1aff12252346fe4d56a7cd9b8605c7fa638895a960158cd3a1ce4f2f6cf5d48579ac14b1e5219ca8914e0507b635dc712554f6bb0ae412943a7596f4644a0c13646adc91d02c406a10d232791d3de9919eec5424aa2cac5f556c15c647eb29365062daf6aa848e10b3f665abccca713036d9f1cb1c9bd4aaeb19c5ac01b1805e0d5479860870da49a55e8f386ca8232c728e2f613007aa420758818e5312401372eaa00d21c70c7e1158d2e08a1b6ac0b820cb67f0ba4b5c0865ff04f0f9d0175817c65d81918e43e14b2f83d574bfa9c6e6deae64c22c2974a1d5c55e2367004b249d5a02fc566685ea33b6f73aaa0244b34412b1a12230adb1748dc1d956f9f10c8e1aa52f4702e06a16680d92226c830ec4ce4c2eead21f08c387c3f1de89eb33b983c748e848f68b54f256715221177c5a4a0a47d82741955626755ba1cc24e2ba40504111b9e26136be714c5bc0d330c3f775e863de763270a993890d633c6897218e151943edd8b79ae145cf564b7746130b0a76c40e7e84c876640dc78260c09a85e92e5ab56c22c0e72a8669fe88ba108b99e437c776f0cea0d144f285b6ab7259e12284f380ae3410171cd6a8b04415e95081c8c57e3e526ad5b38019a5c1b5505540462157e7c7e68e6a6a16ac460a5d5578da28092c7cc927cb9c0ed614a79b0e32b4c5b6a269a40743bef42b5e29d9a75ecb5548a29e9d34ddda07c8404aabbf5479456731ece3785f6090c3f8626eb1a5119e8b8e56b1455d820b46e20e15bb7d185a636b10ab8565732c59a302329925186604edbd5029a9f865268e90003b5b69d3e99240c3432291a60c62a4ebad1ed028cd021b27260db22089e0c44481b1a4c120134ac63dc52fbc4cafb2e065add2665fb361665267b53024329d96587d661f724171155ee73a3f0c47a8149751a5903c8bbcaf1782e415dfda531eb2af67c25e190330a12000e1fbb9cd;
	parameter [7999:0] RndCnstLfsrPerm = kmac_pkg_RndCnstLfsrPermDefault;
	localparam [31:0] kmac_pkg_EntropyStateW = 288;
	localparam [287:0] kmac_pkg_RndCnstLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstLfsrSeed = kmac_pkg_RndCnstLfsrSeedDefault;
	localparam [799:0] kmac_pkg_RndCnstBufferLfsrSeedDefault = 800'h292603b4f1d83863e0bd06344544ad28a91d866824b66efd92ad81235381f2bc3d65392c83c01ea5d8be84f1e258891711849a075a71f35fe9b31605f9077a6b758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [799:0] RndCnstBufferLfsrSeed = kmac_pkg_RndCnstBufferLfsrSeedDefault;
	input clk_i;
	input rst_ni;
	output wire entropy_req_o;
	input entropy_ack_i;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	input [31:0] entropy_data_i;
	output reg rand_valid_o;
	output wire rand_early_o;
	localparam signed [31:0] sha3_pkg_StateW = 1600;
	output wire [799:0] rand_data_o;
	output wire rand_aux_o;
	input rand_update_i;
	input rand_consumed_i;
	input in_keyblock_i;
	input wire [1:0] mode_i;
	input entropy_ready_i;
	input fast_process_i;
	input msg_mask_en_i;
	localparam signed [31:0] sha3_pkg_MsgWidth = 64;
	localparam signed [31:0] kmac_pkg_MsgWidth = sha3_pkg_MsgWidth;
	output wire [63:0] msg_mask_o;
	input seed_update_i;
	input [31:0] seed_data_i;
	input entropy_refresh_req_i;
	localparam [31:0] kmac_pkg_TimerPrescalerW = 10;
	input [9:0] wait_timer_prescaler_i;
	localparam [31:0] kmac_pkg_EdnWaitTimerW = 16;
	input [15:0] wait_timer_limit_i;
	localparam [31:0] kmac_reg_pkg_HashCntW = 10;
	output wire [9:0] hash_cnt_o;
	input hash_cnt_clr_i;
	input [9:0] hash_threshold_i;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	output wire [3:0] entropy_configured_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	output reg [32:0] err_o;
	output reg sparse_fsm_error_o;
	output wire count_error_o;
	input err_processed_i;
	localparam signed [31:0] StateWidth = 10;
	localparam [31:0] TimerW = kmac_pkg_EdnWaitTimerW;
	reg timer_enable;
	reg timer_update;
	reg timer_expired;
	wire timer_pulse;
	wire [15:0] timer_limit;
	reg [15:0] timer_value;
	localparam [31:0] PrescalerW = kmac_pkg_TimerPrescalerW;
	reg [9:0] prescaler_cnt;
	reg seed_en;
	wire seed_done;
	wire seed_req;
	reg seed_ack;
	wire [31:0] seed;
	reg prng_en;
	wire [799:0] prng_data;
	wire [799:0] prng_data_permuted;
	reg [799:0] rand_data_q;
	reg data_update;
	wire aux_rand_d;
	reg aux_rand_q;
	reg aux_update;
	wire [3:0] prng_en_rand_d;
	reg [3:0] prng_en_rand_q;
	reg rand_valid_set;
	reg rand_valid_clear;
	reg mode_latch;
	reg [1:0] mode_q;
	wire [3:0] entropy_configured;
	reg entropy_req;
	wire entropy_req_hold_d;
	reg entropy_req_hold_q;
	reg non_zero_wait_timer_limit;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			non_zero_wait_timer_limit <= 1'sb0;
		else if (timer_update)
			non_zero_wait_timer_limit <= |wait_timer_limit_i;
	reg [9:0] wait_timer_prescaler_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			wait_timer_prescaler_d <= 1'sb0;
		else if (timer_update)
			wait_timer_prescaler_d <= wait_timer_prescaler_i;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			timer_value <= 1'sb0;
		else if (timer_update)
			timer_value <= timer_limit;
		else if (timer_expired)
			timer_value <= 1'sb0;
		else if ((timer_enable && timer_pulse) && |timer_value)
			timer_value <= timer_value - 1'b1;
	function automatic [15:0] sv2v_cast_9432F;
		input reg [15:0] inp;
		sv2v_cast_9432F = inp;
	endfunction
	assign timer_limit = sv2v_cast_9432F(wait_timer_limit_i);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			timer_expired <= 1'b0;
		else if (timer_update)
			timer_expired <= 1'b0;
		else if (timer_enable && (timer_value == {16 {1'sb0}}))
			timer_expired <= 1'b1;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			prescaler_cnt <= 1'sb0;
		else if (timer_update)
			prescaler_cnt <= wait_timer_prescaler_i;
		else if (timer_enable && (prescaler_cnt == {10 {1'sb0}}))
			prescaler_cnt <= wait_timer_prescaler_d;
		else if (timer_enable)
			prescaler_cnt <= prescaler_cnt - 1'b1;
	assign timer_pulse = timer_enable && (prescaler_cnt == {10 {1'sb0}});
	wire threshold_hit;
	reg threshold_hit_q;
	reg threshold_hit_clr;
	wire hash_progress_d;
	reg hash_progress_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			hash_progress_q <= 1'b0;
		else
			hash_progress_q <= hash_progress_d;
	assign hash_progress_d = in_keyblock_i;
	wire hash_cnt_clr;
	assign hash_cnt_clr = (hash_cnt_clr_i || threshold_hit) || entropy_refresh_req_i;
	wire hash_cnt_en;
	assign hash_cnt_en = hash_progress_q && !hash_progress_d;
	wire hash_count_error;
	function automatic signed [9:0] sv2v_cast_CAAA9_signed;
		input reg signed [9:0] inp;
		sv2v_cast_CAAA9_signed = inp;
	endfunction
	prim_count #(.Width(kmac_reg_pkg_HashCntW)) u_hash_count(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(hash_cnt_clr),
		.set_i(1'b0),
		.set_cnt_i(sv2v_cast_CAAA9_signed(0)),
		.incr_en_i(hash_cnt_en),
		.decr_en_i(1'b0),
		.step_i(sv2v_cast_CAAA9_signed(1)),
		.commit_i(1'b1),
		.cnt_o(hash_cnt_o),
		.cnt_after_commit_o(),
		.err_o(hash_count_error)
	);
	assign threshold_hit = |hash_threshold_i && (hash_threshold_i <= hash_cnt_o);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			threshold_hit_q <= 1'b0;
		else if (threshold_hit_clr)
			threshold_hit_q <= 1'b0;
		else if (threshold_hit)
			threshold_hit_q <= 1'b1;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			mode_q <= 2'h0;
		else if (mode_latch)
			mode_q <= mode_i;
	assign seed = (mode_q == 2'h2 ? seed_data_i : entropy_data_i);
	prim_trivium #(
		.BiviumVariant(1),
		.OutputWidth(kmac_pkg_EntropyOutputW),
		.StrictLockupProtection(1),
		.SeedType(32'sd2),
		.PartialSeedWidth(edn_pkg_ENDPOINT_BUS_WIDTH),
		.RndCnstTriviumLfsrSeed(RndCnstLfsrSeed)
	) u_prim_trivium(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(prng_en || msg_mask_en_i),
		.allow_lockup_i(1'sb0),
		.seed_en_i(seed_en),
		.seed_done_o(seed_done),
		.seed_req_o(seed_req),
		.seed_ack_i(seed_ack),
		.seed_key_i(1'sb0),
		.seed_iv_i(1'sb0),
		.seed_state_full_i(1'sb0),
		.seed_state_partial_i(seed),
		.key_o(prng_data),
		.err_o()
	);
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < kmac_pkg_EntropyOutputW; _gv_i_1 = _gv_i_1 + 1) begin : gen_perm
			localparam i = _gv_i_1;
			assign prng_data_permuted[i] = prng_data[RndCnstLfsrPerm[i * 10+:10]];
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			rand_data_q <= RndCnstBufferLfsrSeed;
		else if (data_update || msg_mask_en_i)
			rand_data_q <= prng_data_permuted;
	assign msg_mask_o = rand_data_q[63:0];
	assign aux_rand_d = (aux_update ? rand_data_q[799] : aux_rand_q);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			aux_rand_q <= 1'sb0;
		else
			aux_rand_q <= aux_rand_d;
	assign prng_en_rand_d = (aux_update ? rand_data_q[798-:4] : {1'b0, prng_en_rand_q[3:1]});
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			prng_en_rand_q <= 1'sb0;
		else
			prng_en_rand_q <= prng_en_rand_d;
	assign rand_data_o = rand_data_q;
	assign rand_aux_o = aux_rand_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			rand_valid_o <= 1'b0;
		else if (rand_valid_set)
			rand_valid_o <= 1'b1;
		else if (rand_valid_clear)
			rand_valid_o <= 1'b0;
	assign rand_early_o = rand_valid_set;
	assign entropy_req_o = entropy_req | entropy_req_hold_q;
	assign entropy_req_hold_d = (entropy_req_hold_q | entropy_req) & ~entropy_ack_i;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			entropy_req_hold_q <= 1'sb0;
		else
			entropy_req_hold_q <= entropy_req_hold_d;
	assign count_error_o = hash_count_error;
	wire [9:0] st;
	reg [9:0] st_d;
	function automatic [9:0] sv2v_cast_288BE;
		input reg [9:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	prim_sparse_fsm_flop #(
		.Width(StateWidth),
		.ResetValue(sv2v_cast_288BE(10'b1001111000)),
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
	function automatic [23:0] sv2v_cast_24;
		input reg [23:0] inp;
		sv2v_cast_24 = inp;
	endfunction
	always @(*) begin
		if (_sv2v_0)
			;
		st_d = st;
		sparse_fsm_error_o = 1'b0;
		timer_enable = 1'b0;
		timer_update = 1'b0;
		threshold_hit_clr = 1'b0;
		rand_valid_set = 1'b0;
		rand_valid_clear = 1'b0;
		mode_latch = 1'b0;
		seed_en = 1'b0;
		seed_ack = 1'b0;
		entropy_req = 1'b0;
		prng_en = 1'b0;
		data_update = 1'b0;
		aux_update = 1'b0;
		err_o = 33'h000000000;
		(* full_case, parallel_case *)
		case (st)
			sv2v_cast_288BE(10'b1001111000):
				if (entropy_ready_i) begin
					rand_valid_clear = 1'b1;
					mode_latch = 1'b1;
					(* full_case, parallel_case *)
					case (mode_i)
						2'h2: begin
							seed_en = 1'b1;
							st_d = sv2v_cast_288BE(10'b1011110110);
						end
						2'h1: begin
							seed_en = 1'b1;
							st_d = sv2v_cast_288BE(10'b1100100111);
							timer_update = 1'b1;
						end
						default: st_d = sv2v_cast_288BE(10'b1110010000);
					endcase
				end
				else begin
					st_d = sv2v_cast_288BE(10'b1001111000);
					rand_valid_set = 1'b1;
				end
			sv2v_cast_288BE(10'b0110000100): begin
				timer_enable = 1'b1;
				prng_en = prng_en_rand_q[0];
				if ((rand_update_i || rand_consumed_i) && ((fast_process_i && in_keyblock_i) || !fast_process_i)) begin
					prng_en = 1'b1;
					data_update = 1'b1;
					if (rand_consumed_i) begin
						st_d = sv2v_cast_288BE(10'b0000001100);
						rand_valid_clear = 1'b1;
					end
					else
						st_d = sv2v_cast_288BE(10'b0110000100);
				end
				else if ((mode_q == 2'h1) && (entropy_refresh_req_i || threshold_hit_q)) begin
					seed_en = 1'b1;
					st_d = sv2v_cast_288BE(10'b1100100111);
					timer_update = 1'b1;
					threshold_hit_clr = 1'b1;
				end
				else
					st_d = sv2v_cast_288BE(10'b0110000100);
			end
			sv2v_cast_288BE(10'b1100100111): begin
				entropy_req = seed_req;
				timer_enable = 1'b1;
				if (timer_expired && non_zero_wait_timer_limit)
					st_d = sv2v_cast_288BE(10'b0001100011);
				else if (entropy_req_o && entropy_ack_i) begin
					seed_ack = 1'b1;
					if (seed_done) begin
						st_d = sv2v_cast_288BE(10'b0000001100);
						if ((fast_process_i && in_keyblock_i) || !fast_process_i) begin
							prng_en = 1'b1;
							data_update = 1'b1;
							rand_valid_clear = 1'b1;
						end
					end
					else
						st_d = sv2v_cast_288BE(10'b1100100111);
				end
				else if ((rand_update_i || rand_consumed_i) && ((fast_process_i && in_keyblock_i) || !fast_process_i)) begin
					st_d = sv2v_cast_288BE(10'b1100100111);
					prng_en = 1'b1;
					data_update = 1'b1;
					rand_valid_clear = rand_consumed_i;
				end
				else
					st_d = sv2v_cast_288BE(10'b1100100111);
			end
			sv2v_cast_288BE(10'b1011110110): begin
				seed_ack = seed_req & seed_update_i;
				if (seed_done) begin
					st_d = sv2v_cast_288BE(10'b0000001100);
					prng_en = 1'b1;
					data_update = 1'b1;
					rand_valid_clear = 1'b1;
				end
				else
					st_d = sv2v_cast_288BE(10'b1011110110);
			end
			sv2v_cast_288BE(10'b0000001100): begin
				aux_update = 1'b1;
				rand_valid_set = 1'b1;
				prng_en = prng_en_rand_q[0];
				st_d = sv2v_cast_288BE(10'b0110000100);
			end
			sv2v_cast_288BE(10'b0001100011): begin
				st_d = sv2v_cast_288BE(10'b1000011110);
				err_o = {9'h104, sv2v_cast_24(timer_value)};
			end
			sv2v_cast_288BE(10'b1110010000): begin
				st_d = sv2v_cast_288BE(10'b1000011110);
				err_o = {9'h105, sv2v_cast_24(mode_q)};
			end
			sv2v_cast_288BE(10'b1000011110): begin
				rand_valid_set = 1'b1;
				prng_en = (rand_update_i | rand_consumed_i) & ((fast_process_i & in_keyblock_i) | ~fast_process_i);
				data_update = prng_en;
				if (err_processed_i)
					st_d = sv2v_cast_288BE(10'b1001111000);
				else
					st_d = sv2v_cast_288BE(10'b1000011110);
			end
			sv2v_cast_288BE(10'b0010011000): begin
				st_d = st;
				sparse_fsm_error_o = 1'b1;
			end
			default: begin
				st_d = sv2v_cast_288BE(10'b0010011000);
				sparse_fsm_error_o = 1'b1;
			end
		endcase
		if (lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			st_d = sv2v_cast_288BE(10'b0010011000);
	end
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	assign entropy_configured = (st != sv2v_cast_288BE(10'b1001111000) ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	prim_mubi4_sender #(.AsyncOn(1'b0)) u_entropy_configured(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.mubi_i(entropy_configured),
		.mubi_o(entropy_configured_o)
	);
	initial _sv2v_0 = 0;
endmodule
