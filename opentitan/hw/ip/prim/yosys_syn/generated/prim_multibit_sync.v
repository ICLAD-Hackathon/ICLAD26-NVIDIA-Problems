module prim_multibit_sync (
	clk_i,
	rst_ni,
	data_i,
	data_o
);
	parameter signed [31:0] Width = 8;
	parameter signed [31:0] NumChecks = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	input clk_i;
	input rst_ni;
	input wire [Width - 1:0] data_i;
	output wire [Width - 1:0] data_o;
	wire [(NumChecks >= 0 ? ((NumChecks + 1) * Width) - 1 : ((1 - NumChecks) * Width) + ((NumChecks * Width) - 1)):(NumChecks >= 0 ? 0 : NumChecks * Width)] data_check_d;
	reg [(NumChecks * Width) - 1:0] data_check_q;
	prim_flop_2sync #(
		.Width(Width),
		.ResetValue(ResetValue)
	) i_prim_flop_2sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(data_i),
		.q_o(data_check_d[(NumChecks >= 0 ? 0 : NumChecks) * Width+:Width])
	);
	assign data_check_d[Width * (NumChecks >= 0 ? (NumChecks >= 0 ? (NumChecks >= 1 ? NumChecks : (NumChecks + (NumChecks >= 1 ? NumChecks : 2 - NumChecks)) - 1) - ((NumChecks >= 1 ? NumChecks : 2 - NumChecks) - 1) : (NumChecks >= 1 ? NumChecks : (NumChecks + (NumChecks >= 1 ? NumChecks : 2 - NumChecks)) - 1)) : NumChecks - (NumChecks >= 0 ? (NumChecks >= 1 ? NumChecks : (NumChecks + (NumChecks >= 1 ? NumChecks : 2 - NumChecks)) - 1) - ((NumChecks >= 1 ? NumChecks : 2 - NumChecks) - 1) : (NumChecks >= 1 ? NumChecks : (NumChecks + (NumChecks >= 1 ? NumChecks : 2 - NumChecks)) - 1)))+:Width * (NumChecks >= 1 ? NumChecks : 2 - NumChecks)] = data_check_q[Width * ((NumChecks - 1) - (NumChecks - 1))+:Width * NumChecks];
	wire [NumChecks - 1:0] checks;
	genvar _gv_k_1;
	generate
		for (_gv_k_1 = 0; _gv_k_1 < NumChecks; _gv_k_1 = _gv_k_1 + 1) begin : gen_checks
			localparam k = _gv_k_1;
			assign checks[k] = data_check_d[(NumChecks >= 0 ? k : NumChecks - k) * Width+:Width] == data_check_d[(NumChecks >= 0 ? NumChecks : NumChecks - NumChecks) * Width+:Width];
		end
	endgenerate
	wire [Width - 1:0] data_synced_d;
	reg [Width - 1:0] data_synced_q;
	assign data_synced_d = (&checks ? data_check_d[(NumChecks >= 0 ? NumChecks : NumChecks - NumChecks) * Width+:Width] : data_synced_q);
	assign data_o = data_synced_q;
	always @(posedge clk_i or negedge rst_ni) begin : p_regs
		if (!rst_ni) begin
			data_synced_q <= ResetValue;
			data_check_q <= {NumChecks {ResetValue}};
		end
		else begin
			data_synced_q <= data_synced_d;
			data_check_q <= data_check_d[Width * (NumChecks >= 0 ? (NumChecks >= 0 ? (NumChecks - 1) - (NumChecks - 1) : NumChecks - 1) : NumChecks - (NumChecks >= 0 ? (NumChecks - 1) - (NumChecks - 1) : NumChecks - 1))+:Width * NumChecks];
		end
	end
endmodule
