module prim_fifo_async_sram_adapter (
	clk_wr_i,
	rst_wr_ni,
	wvalid_i,
	wready_o,
	wdata_i,
	wdepth_o,
	clk_rd_i,
	rst_rd_ni,
	rvalid_o,
	rready_i,
	rdata_o,
	rdepth_o,
	r_full_o,
	r_notempty_o,
	w_full_o,
	w_sram_req_o,
	w_sram_gnt_i,
	w_sram_write_o,
	w_sram_addr_o,
	w_sram_wdata_o,
	w_sram_wmask_o,
	w_sram_rvalid_i,
	w_sram_rdata_i,
	w_sram_rerror_i,
	r_sram_req_o,
	r_sram_gnt_i,
	r_sram_write_o,
	r_sram_addr_o,
	r_sram_wdata_o,
	r_sram_wmask_o,
	r_sram_rvalid_i,
	r_sram_rdata_i,
	r_sram_rerror_i
);
	reg _sv2v_0;
	parameter [31:0] Width = 32;
	parameter [31:0] Depth = 16;
	parameter [31:0] SramAw = 16;
	parameter [31:0] SramDw = 32;
	parameter [SramAw - 1:0] SramBaseAddr = 'h0;
	localparam [31:0] DepthW = $clog2(Depth + 1);
	input clk_wr_i;
	input rst_wr_ni;
	input wvalid_i;
	output wire wready_o;
	input [Width - 1:0] wdata_i;
	output wire [DepthW - 1:0] wdepth_o;
	input clk_rd_i;
	input rst_rd_ni;
	output wire rvalid_o;
	input rready_i;
	output wire [Width - 1:0] rdata_o;
	output wire [DepthW - 1:0] rdepth_o;
	output wire r_full_o;
	output wire r_notempty_o;
	output wire w_full_o;
	output wire w_sram_req_o;
	input w_sram_gnt_i;
	output wire w_sram_write_o;
	output wire [SramAw - 1:0] w_sram_addr_o;
	output wire [SramDw - 1:0] w_sram_wdata_o;
	output wire [SramDw - 1:0] w_sram_wmask_o;
	input w_sram_rvalid_i;
	input [SramDw - 1:0] w_sram_rdata_i;
	input [1:0] w_sram_rerror_i;
	output reg r_sram_req_o;
	input r_sram_gnt_i;
	output wire r_sram_write_o;
	output wire [SramAw - 1:0] r_sram_addr_o;
	output wire [SramDw - 1:0] r_sram_wdata_o;
	output wire [SramDw - 1:0] r_sram_wmask_o;
	input r_sram_rvalid_i;
	input [SramDw - 1:0] r_sram_rdata_i;
	input [1:0] r_sram_rerror_i;
	localparam [31:0] PtrVW = $clog2(Depth);
	localparam [31:0] PtrW = PtrVW + 1;
	reg [PtrW - 1:0] w_wptr_q;
	wire [PtrW - 1:0] w_wptr_d;
	wire [PtrW - 1:0] w_wptr_gray_d;
	reg [PtrW - 1:0] w_wptr_gray_q;
	wire [PtrW - 1:0] r_wptr_gray;
	wire [PtrW - 1:0] r_wptr;
	wire [PtrVW - 1:0] w_wptr_v;
	wire [PtrVW - 1:0] r_wptr_v;
	wire w_wptr_p;
	wire r_wptr_p;
	reg [PtrW - 1:0] r_rptr_q;
	wire [PtrW - 1:0] r_rptr_d;
	wire [PtrW - 1:0] r_rptr_gray_d;
	reg [PtrW - 1:0] r_rptr_gray_q;
	wire [PtrW - 1:0] w_rptr_gray;
	wire [PtrW - 1:0] w_rptr;
	wire [PtrVW - 1:0] r_rptr_v;
	wire [PtrVW - 1:0] w_rptr_v;
	wire r_rptr_p;
	wire w_rptr_p;
	wire w_wptr_inc;
	wire r_rptr_inc;
	wire w_full;
	wire r_full;
	wire r_empty;
	reg stored;
	reg [Width - 1:0] rdata_q;
	wire [Width - 1:0] rdata_d;
	wire r_sram_rptr_inc;
	reg [PtrW - 1:0] r_sram_rptr;
	wire r_sramrptr_empty;
	wire rfifo_ack;
	wire rsram_ack;
	assign w_wptr_inc = wvalid_i & wready_o;
	function automatic signed [PtrW - 1:0] sv2v_cast_09B00_signed;
		input reg signed [PtrW - 1:0] inp;
		sv2v_cast_09B00_signed = inp;
	endfunction
	assign w_wptr_d = w_wptr_q + sv2v_cast_09B00_signed(1);
	always @(posedge clk_wr_i or negedge rst_wr_ni)
		if (!rst_wr_ni) begin
			w_wptr_q <= sv2v_cast_09B00_signed(0);
			w_wptr_gray_q <= sv2v_cast_09B00_signed(0);
		end
		else if (w_wptr_inc) begin
			w_wptr_q <= w_wptr_d;
			w_wptr_gray_q <= w_wptr_gray_d;
		end
	assign w_wptr_v = w_wptr_q[0+:PtrVW];
	assign w_wptr_p = w_wptr_q[PtrW - 1];
	function automatic [PtrW - 1:0] sv2v_cast_09B00;
		input reg [PtrW - 1:0] inp;
		sv2v_cast_09B00 = inp;
	endfunction
	function automatic [PtrW - 1:0] dec2gray;
		input reg [PtrW - 1:0] decval;
		reg [PtrW - 1:0] decval_sub;
		reg [PtrW - 1:0] decval_in;
		reg unused_decval_msb;
		begin
			decval_sub = (sv2v_cast_09B00(Depth) - {1'b0, decval[PtrW - 2:0]}) - 1'b1;
			decval_in = (decval[PtrW - 1] ? decval_sub : decval);
			unused_decval_msb = decval_in[PtrW - 1];
			decval_in[PtrW - 1] = 1'b0;
			dec2gray = decval_in;
			dec2gray = dec2gray ^ (decval_in >> 1);
			dec2gray[PtrW - 1] = decval[PtrW - 1];
		end
	endfunction
	assign w_wptr_gray_d = dec2gray(w_wptr_d);
	prim_flop_2sync #(.Width(PtrW)) u_sync_wptr_gray(
		.clk_i(clk_rd_i),
		.rst_ni(rst_rd_ni),
		.d_i(w_wptr_gray_q),
		.q_o(r_wptr_gray)
	);
	function automatic [PtrW - 1:0] gray2dec;
		input reg [PtrW - 1:0] grayval;
		reg [PtrW - 1:0] dec_tmp;
		reg [PtrW - 1:0] dec_tmp_sub;
		reg unused_decsub_msb;
		begin
			dec_tmp = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = PtrW - 2; i >= 0; i = i - 1)
					dec_tmp[i] = dec_tmp[i + 1] ^ grayval[i];
			end
			dec_tmp_sub = (sv2v_cast_09B00(Depth) - dec_tmp) - 1'b1;
			if (grayval[PtrW - 1]) begin
				gray2dec = dec_tmp_sub;
				gray2dec[PtrW - 1] = 1'b1;
				unused_decsub_msb = dec_tmp_sub[PtrW - 1];
			end
			else
				gray2dec = dec_tmp;
		end
	endfunction
	assign r_wptr = gray2dec(r_wptr_gray);
	assign r_wptr_p = r_wptr[PtrW - 1];
	assign r_wptr_v = r_wptr[0+:PtrVW];
	function automatic [DepthW - 1:0] sv2v_cast_2DA09;
		input reg [DepthW - 1:0] inp;
		sv2v_cast_2DA09 = inp;
	endfunction
	assign wdepth_o = (w_wptr_p == w_rptr_p ? sv2v_cast_2DA09(w_wptr_v - w_rptr_v) : sv2v_cast_2DA09({1'b1, w_wptr_v} - {1'b0, w_rptr_v}));
	assign r_rptr_inc = rfifo_ack;
	assign r_rptr_d = r_rptr_q + sv2v_cast_09B00_signed(1);
	always @(posedge clk_rd_i or negedge rst_rd_ni)
		if (!rst_rd_ni) begin
			r_rptr_q <= sv2v_cast_09B00_signed(0);
			r_rptr_gray_q <= sv2v_cast_09B00_signed(0);
		end
		else if (r_rptr_inc) begin
			r_rptr_q <= r_rptr_d;
			r_rptr_gray_q <= r_rptr_gray_d;
		end
	assign r_rptr_v = r_rptr_q[0+:PtrVW];
	assign r_rptr_p = r_rptr_q[PtrW - 1];
	assign r_rptr_gray_d = dec2gray(r_rptr_d);
	prim_flop_2sync #(.Width(PtrW)) u_sync_rptr_gray(
		.clk_i(clk_wr_i),
		.rst_ni(rst_wr_ni),
		.d_i(r_rptr_gray_q),
		.q_o(w_rptr_gray)
	);
	assign w_rptr = gray2dec(w_rptr_gray);
	assign w_rptr_p = w_rptr[PtrW - 1];
	assign w_rptr_v = w_rptr[0+:PtrVW];
	assign rdepth_o = (r_wptr_p == r_rptr_p ? sv2v_cast_2DA09(r_wptr_v - r_rptr_v) : sv2v_cast_2DA09({1'b1, r_wptr_v} - {1'b0, r_rptr_v}));
	assign r_sram_rptr_inc = rsram_ack;
	always @(posedge clk_rd_i or negedge rst_rd_ni)
		if (!rst_rd_ni)
			r_sram_rptr <= sv2v_cast_09B00_signed(0);
		else if (r_sram_rptr_inc)
			r_sram_rptr <= r_sram_rptr + sv2v_cast_09B00_signed(1);
	assign r_sramrptr_empty = r_wptr == r_sram_rptr;
	localparam [PtrW - 1:0] XorMask = {1'b1, {PtrW - 1 {1'b0}}};
	assign w_full = w_wptr_q == (w_rptr ^ XorMask);
	assign r_full = r_wptr == (r_rptr_q ^ XorMask);
	assign r_empty = r_wptr == r_rptr_q;
	wire unused_r_empty;
	assign unused_r_empty = r_empty;
	assign r_full_o = r_full;
	assign w_full_o = w_full;
	assign r_notempty_o = rvalid_o;
	assign rsram_ack = r_sram_req_o && r_sram_gnt_i;
	assign rfifo_ack = rvalid_o && rready_i;
	assign w_sram_req_o = wvalid_i && !w_full;
	assign wready_o = !w_full && w_sram_gnt_i;
	assign w_sram_write_o = 1'b1;
	function automatic [SramAw - 1:0] sv2v_cast_55648;
		input reg [SramAw - 1:0] inp;
		sv2v_cast_55648 = inp;
	endfunction
	assign w_sram_addr_o = SramBaseAddr + sv2v_cast_55648(w_wptr_v);
	function automatic [SramDw - 1:0] sv2v_cast_A12ED;
		input reg [SramDw - 1:0] inp;
		sv2v_cast_A12ED = inp;
	endfunction
	assign w_sram_wdata_o = sv2v_cast_A12ED(wdata_i);
	assign w_sram_wmask_o = sv2v_cast_A12ED({Width {1'b1}});
	wire unused_w_sram;
	assign unused_w_sram = ^{w_sram_rvalid_i, w_sram_rdata_i, w_sram_rerror_i};
	always @(*) begin : r_sram_req
		if (_sv2v_0)
			;
		if (stored)
			r_sram_req_o = !r_sramrptr_empty && rfifo_ack;
		else
			r_sram_req_o = !r_sramrptr_empty && !(r_sram_rvalid_i ^ rfifo_ack);
	end
	assign rvalid_o = stored || r_sram_rvalid_i;
	assign r_sram_write_o = 1'b0;
	assign r_sram_wdata_o = 1'sb0;
	assign r_sram_wmask_o = 1'sb0;
	assign r_sram_addr_o = SramBaseAddr + sv2v_cast_55648(r_sram_rptr[0+:PtrVW]);
	function automatic signed [Width - 1:0] sv2v_cast_62596_signed;
		input reg signed [Width - 1:0] inp;
		sv2v_cast_62596_signed = inp;
	endfunction
	assign rdata_d = (r_sram_rvalid_i ? r_sram_rdata_i[0+:Width] : sv2v_cast_62596_signed(0));
	assign rdata_o = (stored ? rdata_q : rdata_d);
	wire unused_rsram;
	assign unused_rsram = ^{r_sram_rerror_i};
	generate
		if (Width < SramDw) begin : g_unused_rdata
			wire unused_rdata;
			assign unused_rdata = ^r_sram_rdata_i[SramDw - 1:Width];
		end
	endgenerate
	wire store_en;
	assign store_en = r_sram_rvalid_i && !(stored ^ rfifo_ack);
	always @(posedge clk_rd_i or negedge rst_rd_ni)
		if (!rst_rd_ni) begin
			stored <= 1'b0;
			rdata_q <= sv2v_cast_62596_signed(0);
		end
		else if (store_en) begin
			stored <= 1'b1;
			rdata_q <= rdata_d;
		end
		else if (!r_sram_rvalid_i && rfifo_ack) begin
			stored <= 1'b0;
			rdata_q <= sv2v_cast_62596_signed(0);
		end
	initial _sv2v_0 = 0;
endmodule
