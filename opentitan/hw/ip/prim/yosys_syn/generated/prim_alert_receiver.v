module prim_alert_receiver (
	clk_i,
	rst_ni,
	init_trig_i,
	ping_req_i,
	ping_ok_o,
	integ_fail_o,
	alert_o,
	alert_rx_o,
	alert_tx_i
);
	reg _sv2v_0;
	parameter [0:0] AsyncOn = 1'b0;
	parameter [31:0] SkewCycles = 1;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] init_trig_i;
	input ping_req_i;
	output reg ping_ok_o;
	output reg integ_fail_o;
	output reg alert_o;
	output wire [3:0] alert_rx_o;
	input wire [1:0] alert_tx_i;
	wire alert_level;
	wire alert_sigint;
	wire alert_p;
	wire alert_n;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_in(
		.in_i({alert_tx_i[0], alert_tx_i[1]}),
		.out_o({alert_n, alert_p})
	);
	prim_diff_decode #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_decode_alert(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(alert_p),
		.diff_ni(alert_n),
		.level_o(alert_level),
		.rise_o(),
		.fall_o(),
		.event_o(),
		.sigint_o(alert_sigint)
	);
	reg [2:0] state_d;
	reg [2:0] state_q;
	wire ping_rise;
	wire ping_tog_pd;
	wire ping_tog_pq;
	wire ping_tog_dn;
	wire ping_tog_nq;
	reg ack_pd;
	wire ack_pq;
	wire ack_dn;
	wire ack_nq;
	wire ping_req_d;
	reg ping_req_q;
	wire ping_pending_d;
	reg ping_pending_q;
	reg send_init;
	reg send_ping;
	assign ping_req_d = ping_req_i;
	assign ping_rise = ping_req_d && !ping_req_q;
	assign ping_tog_pd = (send_init ? 1'b0 : (send_ping ? ~ping_tog_pq : ping_tog_pq));
	assign ack_dn = (send_init ? ack_pd : ~ack_pd);
	assign ping_tog_dn = ~ping_tog_pd;
	prim_sec_anchor_flop #(
		.Width(2),
		.ResetValue(2'b10)
	) u_prim_generic_flop_ack(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i({ack_dn, ack_pd}),
		.q_o({ack_nq, ack_pq})
	);
	prim_sec_anchor_flop #(
		.Width(2),
		.ResetValue(2'b10)
	) u_prim_generic_flop_ping(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i({ping_tog_dn, ping_tog_pd}),
		.q_o({ping_tog_nq, ping_tog_pq})
	);
	assign ping_pending_d = ping_rise | ((~ping_ok_o & ping_req_i) & ping_pending_q);
	assign alert_rx_o[1] = ack_pq;
	assign alert_rx_o[0] = ack_nq;
	assign alert_rx_o[3] = ping_tog_pq;
	assign alert_rx_o[2] = ping_tog_nq;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		state_d = state_q;
		ack_pd = 1'b0;
		ping_ok_o = 1'b0;
		integ_fail_o = 1'b0;
		alert_o = 1'b0;
		send_init = 1'b0;
		send_ping = ping_rise;
		(* full_case, parallel_case *)
		case (state_q)
			3'd0:
				if (alert_level) begin
					state_d = 3'd1;
					ack_pd = 1'b1;
					if (ping_pending_q)
						ping_ok_o = 1'b1;
					else
						alert_o = 1'b1;
				end
			3'd1:
				if (!alert_level)
					state_d = 3'd2;
				else
					ack_pd = 1'b1;
			3'd2: state_d = 3'd3;
			3'd3: state_d = 3'd0;
			3'd4: begin
				send_init = 1'b1;
				send_ping = 1'b0;
				if (prim_mubi_pkg_mubi4_test_true_strict(init_trig_i))
					ping_ok_o = ping_pending_q;
				else if (alert_sigint)
					state_d = 3'd5;
			end
			3'd5: begin
				send_ping = 1'b0;
				if (!alert_sigint) begin
					state_d = 3'd2;
					send_ping = ping_rise || ping_pending_q;
				end
			end
			default: state_d = 3'd0;
		endcase
		if (!(|{state_q == 3'd4, state_q == 3'd5})) begin
			if (prim_mubi_pkg_mubi4_test_true_strict(init_trig_i)) begin
				state_d = 3'd4;
				ack_pd = 1'b0;
				ping_ok_o = 1'b0;
				integ_fail_o = 1'b0;
				alert_o = 1'b0;
				send_init = 1'b1;
			end
			else if (alert_sigint) begin
				state_d = 3'd0;
				ack_pd = 1'b0;
				ping_ok_o = 1'b0;
				integ_fail_o = 1'b1;
				alert_o = 1'b0;
			end
		end
	end
	always @(posedge clk_i or negedge rst_ni) begin : p_reg
		if (!rst_ni) begin
			state_q <= 3'd4;
			ping_req_q <= 1'b0;
			ping_pending_q <= 1'b0;
		end
		else begin
			state_q <= state_d;
			ping_req_q <= ping_req_d;
			ping_pending_q <= ping_pending_d;
		end
	end
	initial _sv2v_0 = 0;
endmodule
