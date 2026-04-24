module kmac_msgfifo (
	clk_i,
	rst_ni,
	fifo_valid_i,
	fifo_data_i,
	fifo_mask_i,
	fifo_ready_o,
	msg_valid_o,
	msg_data_o,
	msg_strb_o,
	msg_ready_i,
	fifo_empty_o,
	fifo_full_o,
	fifo_depth_o,
	clear_i,
	process_i,
	process_o,
	err_o
);
	reg _sv2v_0;
	parameter signed [31:0] OutWidth = 64;
	parameter [0:0] EnMasking = 1'b1;
	parameter signed [31:0] MsgDepth = 9;
	localparam signed [31:0] MsgDepthW = $clog2(MsgDepth + 1);
	input clk_i;
	input rst_ni;
	input fifo_valid_i;
	input [OutWidth - 1:0] fifo_data_i;
	input [OutWidth - 1:0] fifo_mask_i;
	output wire fifo_ready_o;
	output wire msg_valid_o;
	output wire [OutWidth - 1:0] msg_data_o;
	output wire [(OutWidth / 8) - 1:0] msg_strb_o;
	input msg_ready_i;
	output wire fifo_empty_o;
	output wire fifo_full_o;
	output wire [MsgDepthW - 1:0] fifo_depth_o;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	input wire [3:0] clear_i;
	input process_i;
	output wire process_o;
	output wire [32:0] err_o;
	wire packer_wvalid;
	wire [OutWidth - 1:0] packer_wdata;
	wire [OutWidth - 1:0] packer_wmask;
	wire packer_wready;
	wire fifo_wvalid;
	reg [(OutWidth + (OutWidth / 8)) - 1:0] fifo_wdata;
	wire fifo_wready;
	wire fifo_rvalid;
	wire [(OutWidth + (OutWidth / 8)) - 1:0] fifo_rdata;
	wire fifo_rready;
	wire fifo_err;
	wire packer_flush_done;
	reg msgfifo_flush_done;
	wire packer_err;
	prim_packer #(
		.InW(OutWidth),
		.OutW(OutWidth),
		.HintByteData(1),
		.EnProtection(EnMasking)
	) u_packer(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.valid_i(fifo_valid_i),
		.data_i(fifo_data_i),
		.mask_i(fifo_mask_i),
		.ready_o(fifo_ready_o),
		.valid_o(packer_wvalid),
		.data_o(packer_wdata),
		.mask_o(packer_wmask),
		.ready_i(packer_wready),
		.flush_i(process_i),
		.flush_done_o(packer_flush_done),
		.err_o(packer_err)
	);
	wire [((OutWidth + ((OutWidth / 8) - 1)) >= ((OutWidth / 8) + 0) ? ((OutWidth + ((OutWidth / 8) - 1)) - ((OutWidth / 8) + 0)) + 1 : (((OutWidth / 8) + 0) - (OutWidth + ((OutWidth / 8) - 1))) + 1) * 1:1] sv2v_tmp_C839A;
	assign sv2v_tmp_C839A = packer_wdata;
	always @(*) fifo_wdata[OutWidth + ((OutWidth / 8) - 1)-:((OutWidth + ((OutWidth / 8) - 1)) >= ((OutWidth / 8) + 0) ? ((OutWidth + ((OutWidth / 8) - 1)) - ((OutWidth / 8) + 0)) + 1 : (((OutWidth / 8) + 0) - (OutWidth + ((OutWidth / 8) - 1))) + 1)] = sv2v_tmp_C839A;
	always @(*) begin
		if (_sv2v_0)
			;
		fifo_wdata[(OutWidth / 8) - 1-:OutWidth / 8] = 1'sb0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < (OutWidth / 8); i = i + 1)
				fifo_wdata[((OutWidth / 8) - 1) - (((OutWidth / 8) - 1) - i)] = packer_wmask[8 * i];
		end
	end
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	prim_fifo_sync #(
		.Width(OutWidth + (OutWidth / 8)),
		.Pass(1'b1),
		.Depth(MsgDepth),
		.Secure(EnMasking)
	) u_msgfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(prim_mubi_pkg_mubi4_test_true_strict(clear_i)),
		.wvalid_i(fifo_wvalid),
		.wready_o(fifo_wready),
		.wdata_i(fifo_wdata),
		.rvalid_o(fifo_rvalid),
		.rready_i(fifo_rready),
		.rdata_o(fifo_rdata),
		.full_o(fifo_full_o),
		.depth_o(fifo_depth_o),
		.err_o(fifo_err)
	);
	assign fifo_wvalid = packer_wvalid;
	assign packer_wready = fifo_wready;
	assign msg_valid_o = fifo_rvalid;
	assign fifo_rready = msg_ready_i;
	assign msg_data_o = fifo_rdata[OutWidth + ((OutWidth / 8) - 1)-:((OutWidth + ((OutWidth / 8) - 1)) >= ((OutWidth / 8) + 0) ? ((OutWidth + ((OutWidth / 8) - 1)) - ((OutWidth / 8) + 0)) + 1 : (((OutWidth / 8) + 0) - (OutWidth + ((OutWidth / 8) - 1))) + 1)];
	assign msg_strb_o = fifo_rdata[(OutWidth / 8) - 1-:OutWidth / 8];
	assign fifo_empty_o = !fifo_rvalid;
	reg [1:0] flush_st;
	reg [1:0] flush_st_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			flush_st <= 2'd0;
		else
			flush_st <= flush_st_d;
	always @(*) begin
		if (_sv2v_0)
			;
		flush_st_d = flush_st;
		msgfifo_flush_done = 1'b0;
		(* full_case, parallel_case *)
		case (flush_st)
			2'd0:
				if (process_i)
					flush_st_d = 2'd1;
				else
					flush_st_d = 2'd0;
			2'd1:
				if (packer_flush_done)
					flush_st_d = 2'd2;
				else
					flush_st_d = 2'd1;
			2'd2:
				if (fifo_empty_o) begin
					flush_st_d = 2'd3;
					msgfifo_flush_done = 1'b1;
				end
				else
					flush_st_d = 2'd2;
			2'd3:
				if (prim_mubi_pkg_mubi4_test_true_strict(clear_i))
					flush_st_d = 2'd0;
				else
					flush_st_d = 2'd3;
			default: flush_st_d = 2'd0;
		endcase
	end
	assign process_o = msgfifo_flush_done;
	reg [32:0] error;
	assign err_o = error;
	localparam [31:0] kmac_pkg_ErrInfoW = 24;
	function automatic [23:0] sv2v_cast_F517E;
		input reg [23:0] inp;
		sv2v_cast_F517E = inp;
	endfunction
	function automatic [23:0] sv2v_cast_24;
		input reg [23:0] inp;
		sv2v_cast_24 = inp;
	endfunction
	always @(*) begin : error_logic
		if (_sv2v_0)
			;
		error = 33'h000000000;
		if (packer_err)
			error = {9'h1c2, sv2v_cast_24(sv2v_cast_F517E(flush_st))};
		else if (fifo_err)
			error = {9'h1c3, sv2v_cast_24(sv2v_cast_F517E(flush_st))};
	end
	initial _sv2v_0 = 0;
endmodule
