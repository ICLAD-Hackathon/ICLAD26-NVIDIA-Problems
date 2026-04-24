module prim_subreg_shadow (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	re,
	we,
	wd,
	de,
	d,
	qe,
	q,
	ds,
	qs,
	phase,
	err_update,
	err_storage
);
	reg _sv2v_0;
	parameter signed [31:0] DW = 32;
	parameter [2:0] SwAccess = 3'd0;
	parameter [DW - 1:0] RESVAL = 1'sb0;
	parameter [0:0] Mubi = 1'b0;
	input clk_i;
	input rst_ni;
	input rst_shadowed_ni;
	input re;
	input we;
	input [DW - 1:0] wd;
	input de;
	input [DW - 1:0] d;
	output wire qe;
	output wire [DW - 1:0] q;
	output wire [DW - 1:0] ds;
	output wire [DW - 1:0] qs;
	output wire phase;
	output wire err_update;
	output wire err_storage;
	localparam [2:0] InvertedSwAccess = (SwAccess == 3'd4 ? 3'd5 : (SwAccess == 3'd5 ? 3'd4 : SwAccess));
	wire phase_clear;
	reg phase_q;
	reg shadow_we;
	wire committed_we;
	wire committed_de;
	wire committed_qe;
	reg [DW - 1:0] shadow_wd;
	reg [DW - 1:0] shadow_q;
	wire [DW - 1:0] committed_q;
	wire [DW - 1:0] committed_qs;
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
	assign phase_clear = (SwAccess == 3'd1 ? 1'b0 : re);
	always @(posedge clk_i or negedge rst_ni) begin : phase_reg
		if (!rst_ni)
			phase_q <= 1'b0;
		else if ((wr_en && !err_storage) && !err_update)
			phase_q <= ~phase_q;
		else if ((phase_clear || err_storage) || err_update)
			phase_q <= 1'b0;
	end
	always @(posedge clk_i or negedge rst_shadowed_ni)
		if (!rst_shadowed_ni)
			shadow_q <= ~RESVAL;
		else if (shadow_we)
			shadow_q <= shadow_wd;
	generate
		if (InvertedSwAccess == SwAccess) begin : gen_shadow_reg_std
			wire shadow_wr_en;
			wire [DW - 1:0] shadow_wr_data;
			prim_subreg_arb #(
				.DW(DW),
				.SwAccess(InvertedSwAccess),
				.Mubi(Mubi)
			) wr_en_data_arb_shadow(
				.we(we),
				.wd(~wr_data),
				.de(de),
				.d(~d),
				.q(shadow_q),
				.wr_en(shadow_wr_en),
				.wr_data(shadow_wr_data)
			);
			always @(*) begin
				if (_sv2v_0)
					;
				shadow_we = 1'b0;
				shadow_wd = shadow_wr_data;
				if (!err_storage) begin
					if (err_update || phase_clear) begin
						shadow_we = 1'b1;
						shadow_wd = ~committed_q;
					end
					else if (!phase_q && shadow_wr_en) begin
						shadow_we = 1'b1;
						shadow_wd = shadow_wr_data;
					end
				end
			end
			assign err_update = (~shadow_q != wr_data ? phase_q & wr_en : 1'b0);
		end
		else begin : gen_shadow_reg_wxx
			wire shadow_wr_en_phase0;
			wire shadow_wr_en_phase1;
			wire [DW - 1:0] shadow_wr_data_phase0;
			wire [DW - 1:0] shadow_wr_data_phase1;
			prim_subreg_arb #(
				.DW(DW),
				.SwAccess(3'd0),
				.Mubi(Mubi)
			) wr_en_data_arb_phase0(
				.we(we),
				.wd(~wd),
				.de(de),
				.d(~d),
				.q(shadow_q),
				.wr_en(shadow_wr_en_phase0),
				.wr_data(shadow_wr_data_phase0)
			);
			prim_subreg_arb #(
				.DW(DW),
				.SwAccess(InvertedSwAccess),
				.Mubi(Mubi)
			) wr_en_data_arb_phase1(
				.we(we),
				.wd(~wr_data),
				.de(de),
				.d(~d),
				.q(~committed_q),
				.wr_en(shadow_wr_en_phase1),
				.wr_data(shadow_wr_data_phase1)
			);
			always @(*) begin
				if (_sv2v_0)
					;
				shadow_we = 1'b0;
				shadow_wd = shadow_wr_data_phase0;
				if (!err_storage) begin
					if (err_update || phase_clear) begin
						shadow_we = 1'b1;
						shadow_wd = ~committed_q;
					end
					else if (!phase_q) begin
						shadow_we = shadow_wr_en_phase0;
						shadow_wd = shadow_wr_data_phase0;
					end
					else begin
						shadow_we = shadow_wr_en_phase1;
						shadow_wd = shadow_wr_data_phase1;
					end
				end
			end
			assign err_update = (phase_q && wr_en ? ~shadow_q != wd : 1'b0);
		end
	endgenerate
	assign committed_we = ((we & phase_q) & ~err_update) & ~err_storage;
	assign committed_de = ((de & phase_q) & ~err_update) & ~err_storage;
	prim_subreg #(
		.DW(DW),
		.SwAccess(SwAccess),
		.RESVAL(RESVAL),
		.Mubi(Mubi)
	) committed_reg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(committed_we),
		.wd(wr_data),
		.de(committed_de),
		.d(d),
		.qe(committed_qe),
		.q(committed_q),
		.ds(ds),
		.qs(committed_qs)
	);
	assign phase = phase_q;
	assign err_storage = (~shadow_q != committed_q ? ~phase_q : 1'b0);
	assign qe = committed_qe;
	assign q = committed_q;
	assign qs = committed_qs;
	initial _sv2v_0 = 0;
endmodule
