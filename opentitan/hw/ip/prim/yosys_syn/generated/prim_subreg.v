module prim_subreg (
	clk_i,
	rst_ni,
	we,
	wd,
	de,
	d,
	qe,
	q,
	ds,
	qs
);
	parameter signed [31:0] DW = 32;
	parameter [2:0] SwAccess = 3'd0;
	parameter [DW - 1:0] RESVAL = 1'sb0;
	parameter [0:0] Mubi = 1'b0;
	input clk_i;
	input rst_ni;
	input we;
	input [DW - 1:0] wd;
	input de;
	input [DW - 1:0] d;
	output wire qe;
	output reg [DW - 1:0] q;
	output wire [DW - 1:0] ds;
	output wire [DW - 1:0] qs;
	wire wr_en;
	wire [DW - 1:0] wr_data;
	prim_subreg_arb #(
		.DW(DW),
		.SwAccess(SwAccess),
		.Mubi(Mubi)
	) wr_en_data_arb(
		.we(we),
		.wd(wd),
		.de(de),
		.d(d),
		.q(q),
		.wr_en(wr_en),
		.wr_data(wr_data)
	);
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			q <= RESVAL;
		else if (wr_en)
			q <= wr_data;
	assign ds = (wr_en ? wr_data : qs);
	assign qe = we;
	generate
		if (SwAccess == 3'd6) begin : gen_rc
			assign qs = (de && we ? d : q);
		end
		else begin : gen_no_rc
			assign qs = q;
		end
	endgenerate
endmodule
