module prim_filter_ctr (
	clk_i,
	rst_ni,
	enable_i,
	filter_i,
	thresh_i,
	filter_o
);
	parameter [0:0] AsyncOn = 0;
	parameter [31:0] CntWidth = 2;
	input clk_i;
	input rst_ni;
	input enable_i;
	input filter_i;
	input [CntWidth - 1:0] thresh_i;
	output wire filter_o;
	reg [CntWidth - 1:0] diff_ctr_q;
	wire [CntWidth - 1:0] diff_ctr_d;
	reg filter_q;
	reg stored_value_q;
	wire update_stored_value;
	wire filter_synced;
	generate
		if (AsyncOn) begin : gen_async
			prim_flop_2sync #(.Width(1)) prim_flop_2sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(filter_i),
				.q_o(filter_synced)
			);
		end
		else begin : gen_sync
			assign filter_synced = filter_i;
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			filter_q <= 1'b0;
		else
			filter_q <= filter_synced;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			stored_value_q <= 1'b0;
		else if (update_stored_value)
			stored_value_q <= filter_synced;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			diff_ctr_q <= 1'sb0;
		else
			diff_ctr_q <= diff_ctr_d;
	assign update_stored_value = diff_ctr_d == thresh_i;
	assign diff_ctr_d = (filter_synced != filter_q ? {CntWidth {1'sb0}} : (diff_ctr_q >= thresh_i ? thresh_i : diff_ctr_q + 1'b1));
	assign filter_o = (enable_i ? stored_value_q : filter_synced);
endmodule
