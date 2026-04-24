module prim_sparse_fsm_flop (
	clk_i,
	rst_ni,
	state_i,
	state_o
);
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [Width - 1:0] state_i;
	output wire [Width - 1:0] state_o;
	wire unused_err_o;
	wire [Width - 1:0] state_raw;
	prim_flop #(
		.Width(Width),
		.ResetValue(ResetValue)
	) u_state_flop(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(state_i),
		.q_o(state_raw)
	);
	function automatic [Width - 1:0] sv2v_cast_62596;
		input reg [Width - 1:0] inp;
		sv2v_cast_62596 = inp;
	endfunction
	assign state_o = sv2v_cast_62596(state_raw);
	assign unused_err_o = 1'b0;
endmodule
