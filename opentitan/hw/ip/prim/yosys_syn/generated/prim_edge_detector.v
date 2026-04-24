module prim_edge_detector (
	clk_i,
	rst_ni,
	d_i,
	q_sync_o,
	q_posedge_pulse_o,
	q_negedge_pulse_o
);
	parameter [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnSync = 1'b1;
	input clk_i;
	input rst_ni;
	input [Width - 1:0] d_i;
	output wire [Width - 1:0] q_sync_o;
	output wire [Width - 1:0] q_posedge_pulse_o;
	output wire [Width - 1:0] q_negedge_pulse_o;
	wire [Width - 1:0] q_sync_d;
	reg [Width - 1:0] q_sync_q;
	generate
		if (EnSync) begin : g_sync
			prim_flop_2sync #(
				.Width(Width),
				.ResetValue(ResetValue)
			) u_sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(d_i),
				.q_o(q_sync_d)
			);
		end
		else begin : g_nosync
			assign q_sync_d = d_i;
		end
	endgenerate
	assign q_sync_o = q_sync_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			q_sync_q <= ResetValue;
		else
			q_sync_q <= q_sync_d;
	assign q_posedge_pulse_o = q_sync_d & ~q_sync_q;
	assign q_negedge_pulse_o = ~q_sync_d & q_sync_q;
endmodule
