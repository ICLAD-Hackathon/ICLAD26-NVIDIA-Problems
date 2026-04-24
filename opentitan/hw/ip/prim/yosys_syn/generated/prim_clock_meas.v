module prim_clock_meas (
	clk_i,
	rst_ni,
	clk_ref_i,
	rst_ref_ni,
	en_i,
	max_cnt,
	min_cnt,
	valid_o,
	fast_o,
	slow_o,
	timeout_clk_ref_o,
	ref_timeout_clk_o
);
	reg _sv2v_0;
	parameter signed [31:0] Cnt = 16;
	parameter signed [31:0] RefCnt = 1;
	parameter [0:0] ClkTimeOutChkEn = 1;
	parameter [0:0] RefTimeOutChkEn = 1;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] CntWidth = prim_util_pkg_vbits(Cnt);
	localparam signed [31:0] RefCntWidth = prim_util_pkg_vbits(RefCnt);
	input clk_i;
	input rst_ni;
	input clk_ref_i;
	input rst_ref_ni;
	input en_i;
	input [CntWidth - 1:0] max_cnt;
	input [CntWidth - 1:0] min_cnt;
	output wire valid_o;
	output wire fast_o;
	output wire slow_o;
	output wire timeout_clk_ref_o;
	output wire ref_timeout_clk_o;
	wire ref_en;
	prim_flop_2sync #(.Width(1)) u_ref_meas_en_sync(
		.d_i(en_i),
		.clk_i(clk_ref_i),
		.rst_ni(rst_ref_ni),
		.q_o(ref_en)
	);
	wire en_ref_sync;
	prim_flop_2sync #(.Width(1)) ack_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(ref_en),
		.q_o(en_ref_sync)
	);
	reg [1:0] state_d;
	reg [1:0] state_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			state_q <= 2'd0;
		else
			state_q <= state_d;
	reg cnt_en;
	always @(*) begin
		if (_sv2v_0)
			;
		state_d = state_q;
		cnt_en = 1'sb0;
		(* full_case, parallel_case *)
		case (state_q)
			2'd0:
				if (en_i)
					state_d = 2'd1;
			2'd1:
				if (en_ref_sync)
					state_d = 2'd2;
			2'd2: begin
				cnt_en = 1'b1;
				if (!en_i)
					state_d = 2'd3;
			end
			2'd3:
				if (!en_ref_sync)
					state_d = 2'd0;
			default:
				;
		endcase
	end
	wire valid_ref;
	wire valid;
	prim_pulse_sync u_sync_ref(
		.clk_src_i(clk_ref_i),
		.rst_src_ni(rst_ref_ni),
		.src_pulse_i(ref_en),
		.clk_dst_i(clk_i),
		.rst_dst_ni(rst_ni),
		.dst_pulse_o(valid_ref)
	);
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	generate
		if (RefCnt == 1) begin : gen_degenerate_case
			assign valid = valid_ref;
		end
		else begin : gen_normal_case
			reg [RefCntWidth - 1:0] cnt_ref;
			assign valid = valid_ref & (sv2v_cast_32_signed(cnt_ref) == (RefCnt - 1));
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					cnt_ref <= 1'sb0;
				else if (!cnt_en && |cnt_ref)
					cnt_ref <= 1'sb0;
				else if (cnt_en && valid)
					cnt_ref <= 1'sb0;
				else if (cnt_en && valid_ref)
					cnt_ref <= cnt_ref + 1'b1;
		end
	endgenerate
	reg cnt_ovfl;
	reg [CntWidth - 1:0] cnt;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			cnt <= 1'sb0;
			cnt_ovfl <= 1'sb0;
		end
		else if (!cnt_en && |cnt) begin
			cnt <= 1'sb0;
			cnt_ovfl <= 1'sb0;
		end
		else if (valid_o) begin
			cnt <= 1'sb0;
			cnt_ovfl <= 1'sb0;
		end
		else if (cnt_ovfl)
			cnt <= {CntWidth {1'b1}};
		else if (cnt_en)
			{cnt_ovfl, cnt} <= cnt + 1'b1;
	assign valid_o = valid & |cnt;
	assign fast_o = valid_o & ((cnt > max_cnt) | cnt_ovfl);
	assign slow_o = valid_o & (cnt < min_cnt);
	localparam [0:0] TimeOutChkEn = ClkTimeOutChkEn | RefTimeOutChkEn;
	localparam signed [31:0] ClkRatio = Cnt / RefCnt;
	localparam signed [31:0] MaxClkCdcLatency = (((1 + (2 * ClkRatio)) + (1 * ClkRatio)) + 2) * 2;
	localparam signed [31:0] MaxRefCdcLatency = 6;
	generate
		if (RefTimeOutChkEn) begin : gen_ref_timeout_chk
			prim_clock_timeout #(.TimeOutCnt(MaxClkCdcLatency)) u_timeout_clk_to_ref(
				.clk_chk_i(clk_ref_i),
				.rst_chk_ni(rst_ref_ni),
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(en_i),
				.timeout_o(timeout_clk_ref_o)
			);
		end
		else begin : gen_unused_ref_timeout
			assign timeout_clk_ref_o = 1'b0;
		end
		if (ClkTimeOutChkEn) begin : gen_clk_timeout_chk
			prim_clock_timeout #(.TimeOutCnt(MaxRefCdcLatency)) u_timeout_ref_to_clk(
				.clk_chk_i(clk_i),
				.rst_chk_ni(rst_ni),
				.clk_i(clk_ref_i),
				.rst_ni(rst_ref_ni),
				.en_i(ref_en),
				.timeout_o(ref_timeout_clk_o)
			);
		end
		else begin : gen_unused_clk_timeout
			assign ref_timeout_clk_o = 1'b0;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
