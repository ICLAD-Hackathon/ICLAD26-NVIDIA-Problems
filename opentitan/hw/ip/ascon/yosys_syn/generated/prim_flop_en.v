module prim_flop_en (
	clk_i,
	rst_ni,
	en_i,
	d_i,
	q_o
);
	parameter signed [31:0] Width = 1;
	parameter [0:0] EnSecBuf = 0;
	parameter [Width - 1:0] ResetValue = 0;
	input clk_i;
	input rst_ni;
	input en_i;
	input [Width - 1:0] d_i;
	output reg [Width - 1:0] q_o;
	wire en;
	generate
		if (EnSecBuf) begin : gen_en_sec_buf
			prim_sec_anchor_buf #(.Width(1)) u_en_buf(
				.in_i(en_i),
				.out_o(en)
			);
		end
		else begin : gen_en_no_sec_buf
			assign en = en_i;
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			q_o <= ResetValue;
		else if (en)
			q_o <= d_i;
endmodule
