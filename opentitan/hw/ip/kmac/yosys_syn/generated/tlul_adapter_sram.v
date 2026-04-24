module tlul_adapter_sram (
	clk_i,
	rst_ni,
	tl_i,
	tl_o,
	en_ifetch_i,
	req_o,
	req_type_o,
	gnt_i,
	we_o,
	addr_o,
	wdata_o,
	wmask_o,
	intg_error_o,
	user_rsvd_o,
	rdata_i,
	rvalid_i,
	rerror_i,
	compound_txn_in_progress_o,
	readback_en_i,
	readback_error_o,
	wr_collision_i,
	write_pending_i
);
	reg _sv2v_0;
	parameter signed [31:0] SramAw = 12;
	parameter signed [31:0] SramDw = 32;
	parameter signed [31:0] Outstanding = 1;
	parameter signed [31:0] SramBusBankAW = 12;
	parameter [0:0] ByteAccess = 1;
	parameter [0:0] ErrOnWrite = 0;
	parameter [0:0] ErrOnRead = 0;
	parameter [0:0] CmdIntgCheck = 0;
	parameter [0:0] EnableRspIntgGen = 0;
	parameter [0:0] EnableDataIntgGen = 0;
	parameter [0:0] EnableDataIntgPt = 0;
	parameter [0:0] SecFifoPtr = 0;
	parameter [0:0] EnableReadback = 0;
	parameter [0:0] DataXorAddr = 0;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] WidthMult = SramDw / top_pkg_TL_DW;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] IntgWidth = tlul_pkg_DataIntgWidth * WidthMult;
	localparam signed [31:0] DataOutW = (EnableDataIntgPt ? SramDw + IntgWidth : SramDw);
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	input wire [3:0] en_ifetch_i;
	output wire req_o;
	output wire [3:0] req_type_o;
	input gnt_i;
	output wire we_o;
	output wire [SramAw - 1:0] addr_o;
	output wire [DataOutW - 1:0] wdata_o;
	output wire [DataOutW - 1:0] wmask_o;
	output wire intg_error_o;
	output wire [tlul_pkg_RsvdWidth - 1:0] user_rsvd_o;
	input [DataOutW - 1:0] rdata_i;
	input rvalid_i;
	input [1:0] rerror_i;
	output wire compound_txn_in_progress_o;
	input wire [3:0] readback_en_i;
	output wire readback_error_o;
	input wire wr_collision_i;
	input wire write_pending_i;
	localparam signed [31:0] SramByte = SramDw / 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam signed [31:0] DataBitWidth = prim_util_pkg_vbits(SramByte);
	localparam signed [31:0] WoffsetWidth = (SramByte == top_pkg_TL_DBW ? 1 : DataBitWidth - prim_util_pkg_vbits(top_pkg_TL_DBW));
	wire error_det;
	wire error_internal;
	wire wr_attr_error;
	wire instr_error;
	wire wr_vld_error;
	wire rd_vld_error;
	wire rsp_fifo_error;
	wire sramreqfifo_error;
	wire reqfifo_error;
	wire intg_error;
	wire tlul_error;
	wire readback_error;
	wire sram_byte_readback_error;
	reg readback_error_q;
	generate
		if (EnableReadback) begin : gen_cmd_readback_check
			assign readback_error = sram_byte_readback_error;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					readback_error_q <= 1'sb0;
				else if (readback_error)
					readback_error_q <= 1'b1;
		end
		else begin : gen_no_readback_check
			wire unused_sram_byte_readback_error;
			assign unused_sram_byte_readback_error = sram_byte_readback_error;
			assign readback_error = 1'sb0;
			wire [1:1] sv2v_tmp_EC2B7;
			assign sv2v_tmp_EC2B7 = 1'sb0;
			always @(*) readback_error_q = sv2v_tmp_EC2B7;
		end
	endgenerate
	assign readback_error_o = readback_error | readback_error_q;
	generate
		if (CmdIntgCheck) begin : gen_cmd_intg_check
			tlul_cmd_intg_chk u_cmd_intg_chk(
				.tl_i(tl_i),
				.err_o(intg_error)
			);
		end
		else begin : gen_no_cmd_intg_check
			assign intg_error = 1'sb0;
		end
	endgenerate
	reg intg_error_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			intg_error_q <= 1'sb0;
		else if (((intg_error || rsp_fifo_error) || sramreqfifo_error) || reqfifo_error)
			intg_error_q <= 1'b1;
	assign intg_error_o = (((intg_error | rsp_fifo_error) | sramreqfifo_error) | reqfifo_error) | intg_error_q;
	assign wr_attr_error = ((ByteAccess == 0) && ((tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0) || (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1))) && ((tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] != {((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1) * 1 {1'sb1}}) || (tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)] != 2'h2));
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_loose = sv2v_cast_EECFA(4'h6) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_invalid;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_invalid = ~(|{((sv2v_cast_EECFA(4'h6) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) === (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) | 1'bx), ((sv2v_cast_EECFA(4'h9) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) === (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) | 1'bx)});
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	assign instr_error = prim_mubi_pkg_mubi4_test_invalid(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]) | (prim_mubi_pkg_mubi4_test_true_strict(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]) & prim_mubi_pkg_mubi4_test_false_loose(en_ifetch_i));
	generate
		if (ErrOnWrite == 1) begin : gen_no_writes
			assign wr_vld_error = tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] != 3'h4;
		end
		else begin : gen_writes_allowed
			assign wr_vld_error = 1'b0;
		end
		if (ErrOnRead == 1) begin : gen_no_reads
			assign rd_vld_error = tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h4;
		end
		else begin : gen_reads_allowed
			assign rd_vld_error = 1'b0;
		end
	endgenerate
	tlul_err u_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_i),
		.err_o(tlul_error)
	);
	assign error_det = ((((wr_attr_error | wr_vld_error) | rd_vld_error) | instr_error) | tlul_error) | intg_error;
	wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i_int;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o_int;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_out;
	wire unused_tl_i_int;
	assign unused_tl_i_int = ^tl_i_int;
	tlul_rsp_intg_gen #(
		.EnableRspIntgGen(EnableRspIntgGen),
		.EnableDataIntgGen(EnableDataIntgGen),
		.RspIntgInIsZero(1'b1)
	) u_rsp_gen(
		.tl_i(tl_out),
		.tl_o(tl_o)
	);
	tlul_sram_byte #(
		.EnableIntg((ByteAccess & EnableDataIntgPt) & !ErrOnWrite),
		.Outstanding(Outstanding),
		.EnableReadback(EnableReadback)
	) u_sram_byte(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_i),
		.tl_o(tl_out),
		.tl_sram_o(tl_i_int),
		.tl_sram_i(tl_o_int),
		.error_i(error_det),
		.error_o(error_internal),
		.alert_o(sram_byte_readback_error),
		.compound_txn_in_progress_o(compound_txn_in_progress_o),
		.readback_en_i(readback_en_i),
		.wr_collision_i(wr_collision_i),
		.write_pending_i(write_pending_i)
	);
	localparam signed [31:0] SramReqWidth = top_pkg_TL_DBW + WoffsetWidth;
	localparam signed [31:0] SramReqFifoWidth = SramReqWidth + (DataXorAddr ? SramBusBankAW : 0);
	localparam signed [31:0] ReqFifoWidth = (6 + top_pkg_TL_SZW) + top_pkg_TL_AIW;
	localparam signed [31:0] RspFifoWidth = (((top_pkg_TL_DW + tlul_pkg_DataIntgWidth) + 0) >= 0 ? (top_pkg_TL_DW + tlul_pkg_DataIntgWidth) + 1 : 1 - ((top_pkg_TL_DW + tlul_pkg_DataIntgWidth) + 0));
	wire reqfifo_wvalid;
	wire reqfifo_wready;
	wire reqfifo_rvalid;
	wire reqfifo_rready;
	wire [((6 + top_pkg_TL_SZW) + top_pkg_TL_AIW) - 1:0] reqfifo_wdata;
	wire [((6 + top_pkg_TL_SZW) + top_pkg_TL_AIW) - 1:0] reqfifo_rdata;
	wire sramreqfifo_wvalid;
	wire sramreqfifo_wready;
	wire sramreqfifo_rready;
	wire [(top_pkg_TL_DBW + WoffsetWidth) - 1:0] sram_req_wdata;
	wire [(top_pkg_TL_DBW + WoffsetWidth) - 1:0] sram_req_rdata;
	wire [SramBusBankAW - 1:0] sram_addr_wdata;
	wire [SramBusBankAW - 1:0] sram_addr_rdata;
	wire [SramReqFifoWidth - 1:0] sramreqfifo_wdata;
	wire [SramReqFifoWidth - 1:0] sramreqfifo_rdata;
	generate
		if (DataXorAddr) begin : gen_combine_with_addr
			assign sramreqfifo_wdata = {sram_addr_wdata, sram_req_wdata};
			assign {sram_addr_rdata, sram_req_rdata} = sramreqfifo_rdata;
		end
		else begin : gen_combine_without_addr
			assign sramreqfifo_wdata = sram_req_wdata;
			assign sram_addr_rdata = 1'sb0;
			assign sram_req_rdata = sramreqfifo_rdata;
		end
	endgenerate
	wire rspfifo_wvalid;
	wire rspfifo_wready;
	wire rspfifo_rvalid;
	wire rspfifo_rready;
	wire [(top_pkg_TL_DW + tlul_pkg_DataIntgWidth) + 0:0] rspfifo_wdata;
	wire [(top_pkg_TL_DW + tlul_pkg_DataIntgWidth) + 0:0] rspfifo_rdata;
	wire a_ack;
	wire d_ack;
	wire sram_ack;
	assign a_ack = tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & tl_o_int[0];
	assign d_ack = tl_o_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] & tl_i_int[0];
	assign sram_ack = req_o & gnt_i;
	reg d_valid;
	reg d_error;
	always @(*) begin
		if (_sv2v_0)
			;
		d_valid = 1'b0;
		if (reqfifo_rvalid) begin
			if (reqfifo_rdata[1 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))])
				d_valid = 1'b1;
			else if (reqfifo_rdata[2 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))])
				d_valid = rspfifo_rvalid;
			else
				d_valid = 1'b1;
		end
		else
			d_valid = 1'b0;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		d_error = 1'b0;
		if (reqfifo_rvalid) begin
			if (reqfifo_rdata[2 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))])
				d_error = rspfifo_rdata[0] | reqfifo_rdata[1 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))];
			else
				d_error = reqfifo_rdata[1 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))];
		end
		else
			d_error = 1'b0;
	end
	wire vld_rd_rsp;
	assign vld_rd_rsp = (d_valid & rspfifo_rvalid) & reqfifo_rdata[2 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))];
	wire [31:0] error_blanking_data;
	localparam [31:0] tlul_pkg_DataWhenError = {top_pkg_TL_DW {1'b1}};
	localparam [31:0] tlul_pkg_DataWhenInstrError = 1'sb0;
	assign error_blanking_data = (prim_mubi_pkg_mubi4_test_true_strict(reqfifo_rdata[prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)-:((prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)) >= (top_pkg_TL_SZW + 8) ? ((prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)) - (top_pkg_TL_SZW + 8)) + 1 : ((top_pkg_TL_SZW + 8) - (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))) + 1)]) ? tlul_pkg_DataWhenInstrError : tlul_pkg_DataWhenError);
	wire [31:0] unused_instr;
	wire [31:0] unused_data;
	wire [6:0] error_instr_integ;
	wire [6:0] error_data_integ;
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	tlul_data_integ_enc u_tlul_data_integ_enc_instr(
		.data_i(sv2v_cast_32(tlul_pkg_DataWhenInstrError)),
		.data_intg_o({error_instr_integ, unused_instr})
	);
	tlul_data_integ_enc u_tlul_data_integ_enc_data(
		.data_i(sv2v_cast_32(tlul_pkg_DataWhenError)),
		.data_intg_o({error_data_integ, unused_data})
	);
	wire [6:0] error_blanking_integ;
	assign error_blanking_integ = (prim_mubi_pkg_mubi4_test_true_strict(reqfifo_rdata[prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)-:((prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)) >= (top_pkg_TL_SZW + 8) ? ((prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7)) - (top_pkg_TL_SZW + 8)) + 1 : ((top_pkg_TL_SZW + 8) - (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))) + 1)]) ? error_instr_integ : error_data_integ);
	wire [31:0] d_data;
	assign d_data = (vld_rd_rsp & ~d_error ? rspfifo_rdata[39-:32] : error_blanking_data);
	wire [6:0] data_intg;
	localparam [6:0] prim_secded_pkg_SecdedInv3932ZeroEcc = 7'h2a;
	assign data_intg = (reqfifo_rdata[5 + (top_pkg_TL_SZW + 7)] ? error_blanking_integ : (vld_rd_rsp ? rspfifo_rdata[7-:7] : prim_secded_pkg_SecdedInv3932ZeroEcc));
	wire missed_err_gnt_d;
	reg missed_err_gnt_q;
	assign missed_err_gnt_d = (error_internal & tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))]) & ~tl_o_int[0];
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			missed_err_gnt_q <= 1'b0;
		else
			missed_err_gnt_q <= missed_err_gnt_d;
	function automatic [6:0] sv2v_cast_71F0A;
		input reg [6:0] inp;
		sv2v_cast_71F0A = inp;
	endfunction
	function automatic [6:0] sv2v_cast_83AAC;
		input reg [6:0] inp;
		sv2v_cast_83AAC = inp;
	endfunction
	function automatic [top_pkg_TL_SZW - 1:0] sv2v_cast_FDEB5;
		input reg [top_pkg_TL_SZW - 1:0] inp;
		sv2v_cast_FDEB5 = inp;
	endfunction
	function automatic [7:0] sv2v_cast_15E34;
		input reg [7:0] inp;
		sv2v_cast_15E34 = inp;
	endfunction
	function automatic [0:0] sv2v_cast_17D81;
		input reg [0:0] inp;
		sv2v_cast_17D81 = inp;
	endfunction
	function automatic [31:0] sv2v_cast_9783B;
		input reg [31:0] inp;
		sv2v_cast_9783B = inp;
	endfunction
	function automatic [(tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 1:0] sv2v_cast_11E70;
		input reg [(tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 1:0] inp;
		sv2v_cast_11E70 = inp;
	endfunction
	function automatic [0:0] sv2v_cast_1;
		input reg [0:0] inp;
		sv2v_cast_1 = inp;
	endfunction
	assign tl_o_int = {d_valid, (d_valid && !reqfifo_rdata[6 + (top_pkg_TL_SZW + 7)] ? 3'h0 : 3'h1), 3'b000, sv2v_cast_FDEB5((d_valid ? reqfifo_rdata[top_pkg_TL_SZW + 7-:((top_pkg_TL_SZW + 7) >= 8 ? top_pkg_TL_SZW : 9 - (top_pkg_TL_SZW + 7))] : {((top_pkg_TL_SZW + 7) >= 8 ? top_pkg_TL_SZW : 9 - (top_pkg_TL_SZW + 7)) * 1 {1'sb0}})), sv2v_cast_15E34((d_valid ? reqfifo_rdata[7-:top_pkg_TL_AIW] : {8 {1'sb0}})), sv2v_cast_17D81(1'b0), sv2v_cast_9783B(d_data), sv2v_cast_11E70({sv2v_cast_71F0A(1'sb0), sv2v_cast_83AAC(data_intg)}), d_valid && d_error, sv2v_cast_1(((gnt_i | missed_err_gnt_q) & reqfifo_wready) & sramreqfifo_wready)};
	assign req_o = (tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & reqfifo_wready) & ~error_internal;
	assign req_type_o = tl_i_int[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4];
	assign we_o = tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & |{tl_i_int[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0, tl_i_int[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1};
	assign addr_o = (tl_i_int[7 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))] ? tl_i_int[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (31 - DataBitWidth)+:SramAw] : {SramAw {1'sb0}});
	assign user_rsvd_o = (tl_i_int[7 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))] ? tl_i_int[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1) - (tlul_pkg_RsvdWidth + 17))-:((tlul_pkg_RsvdWidth + 17) >= 18 ? tlul_pkg_RsvdWidth : 19 - (tlul_pkg_RsvdWidth + 17))] : {tlul_pkg_RsvdWidth {1'sb0}});
	wire [WoffsetWidth - 1:0] woffset;
	generate
		if (top_pkg_TL_DW != SramDw) begin : gen_wordwidthadapt
			assign woffset = tl_i_int[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - DataBitWidth):(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (31 - prim_util_pkg_vbits(top_pkg_TL_DBW))];
		end
		else begin : gen_no_wordwidthadapt
			assign woffset = 1'sb0;
		end
	endgenerate
	localparam signed [31:0] DataWidth = (EnableDataIntgPt ? top_pkg_TL_DW + tlul_pkg_DataIntgWidth : top_pkg_TL_DW);
	wire [(WidthMult * DataWidth) - 1:0] wmask_combined;
	wire [(WidthMult * DataWidth) - 1:0] wdata_combined;
	reg [(WidthMult * top_pkg_TL_DW) - 1:0] wmask_int;
	reg [(WidthMult * top_pkg_TL_DW) - 1:0] wdata_int;
	reg [(WidthMult * tlul_pkg_DataIntgWidth) - 1:0] wmask_intg;
	reg [(WidthMult * tlul_pkg_DataIntgWidth) - 1:0] wdata_intg;
	always @(*) begin
		if (_sv2v_0)
			;
		wmask_int = 1'sb0;
		wdata_int = 1'sb0;
		if (tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))]) begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < 4; i = i + 1)
				begin
					wmask_int[(woffset * top_pkg_TL_DW) + (8 * i)+:8] = {8 {tl_i_int[(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - ((top_pkg_TL_DBW - 1) - i)]}};
					wdata_int[(woffset * top_pkg_TL_DW) + (8 * i)+:8] = (tl_i_int[(top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) - ((top_pkg_TL_DBW - 1) - i)] && we_o ? tl_i_int[(top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - (31 - (8 * i))+:8] : {8 {1'sb0}});
				end
		end
	end
	always @(*) begin
		if (_sv2v_0)
			;
		wmask_intg = 1'sb0;
		wdata_intg = 1'sb0;
		if (tl_i_int[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))]) begin
			wmask_intg[woffset * tlul_pkg_DataIntgWidth+:tlul_pkg_DataIntgWidth] = {tlul_pkg_DataIntgWidth {1'b1}};
			wdata_intg[woffset * tlul_pkg_DataIntgWidth+:tlul_pkg_DataIntgWidth] = tl_i_int[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth];
		end
	end
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < WidthMult; _gv_i_1 = _gv_i_1 + 1) begin : gen_write_output
			localparam i = _gv_i_1;
			if (EnableDataIntgPt) begin : gen_combined_output
				assign wmask_combined[i * DataWidth+:DataWidth] = {wmask_intg[i * tlul_pkg_DataIntgWidth+:tlul_pkg_DataIntgWidth], wmask_int[i * top_pkg_TL_DW+:top_pkg_TL_DW]};
				assign wdata_combined[i * DataWidth+:DataWidth] = {wdata_intg[i * tlul_pkg_DataIntgWidth+:tlul_pkg_DataIntgWidth], wdata_int[i * top_pkg_TL_DW+:top_pkg_TL_DW]};
			end
			else begin : gen_ft_output
				wire unused_w;
				assign wmask_combined[i * DataWidth+:DataWidth] = wmask_int[i * top_pkg_TL_DW+:top_pkg_TL_DW];
				assign wdata_combined[i * DataWidth+:DataWidth] = wdata_int[i * top_pkg_TL_DW+:top_pkg_TL_DW];
				assign unused_w = |wmask_intg & |wdata_intg;
			end
		end
	endgenerate
	assign wmask_o = wmask_combined;
	assign wdata_o = wdata_combined;
	assign reqfifo_wvalid = a_ack;
	assign reqfifo_wdata = {tl_i_int[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h4, error_internal, sv2v_cast_EECFA(tl_i_int[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]), sv2v_cast_FDEB5(tl_i_int[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)]), sv2v_cast_15E34(tl_i_int[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) + 1)])};
	assign reqfifo_rready = d_ack;
	function automatic [top_pkg_TL_DBW - 1:0] sv2v_cast_B0D6A;
		input reg [top_pkg_TL_DBW - 1:0] inp;
		sv2v_cast_B0D6A = inp;
	endfunction
	function automatic [WoffsetWidth - 1:0] sv2v_cast_A1535;
		input reg [WoffsetWidth - 1:0] inp;
		sv2v_cast_A1535 = inp;
	endfunction
	assign sram_req_wdata = {sv2v_cast_B0D6A(tl_i_int[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)]), sv2v_cast_A1535(woffset)};
	assign sramreqfifo_wvalid = sram_ack & ~we_o;
	assign sramreqfifo_rready = rspfifo_wvalid;
	assign rspfifo_wvalid = rvalid_i & reqfifo_rvalid;
	assign sram_addr_wdata = tl_i_int[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (31 - DataBitWidth)+:SramBusBankAW];
	wire [(WidthMult * DataWidth) - 1:0] rdata_reshaped;
	reg [DataWidth - 1:0] rdata_tlword;
	assign rdata_reshaped = rdata_i;
	localparam [38:0] prim_secded_pkg_SecdedInv3932ZeroWord = 39'h2a00000000;
	generate
		if (EnableDataIntgPt) begin : gen_no_rmask
			always @(*) begin
				if (_sv2v_0)
					;
				rdata_tlword = prim_secded_pkg_SecdedInv3932ZeroWord;
				if (|sram_req_rdata[top_pkg_TL_DBW + (WoffsetWidth - 1)-:((top_pkg_TL_DBW + (WoffsetWidth - 1)) >= (WoffsetWidth + 0) ? ((top_pkg_TL_DBW + (WoffsetWidth - 1)) - (WoffsetWidth + 0)) + 1 : ((WoffsetWidth + 0) - (top_pkg_TL_DBW + (WoffsetWidth - 1))) + 1)]) begin
					if (DataXorAddr) begin : gen_data_xor_addr
						rdata_tlword = {rdata_reshaped[(sram_req_rdata[WoffsetWidth - 1-:WoffsetWidth] * DataWidth) + ((DataWidth - 1) >= top_pkg_TL_DW ? DataWidth - 1 : ((DataWidth - 1) + ((DataWidth - 1) >= top_pkg_TL_DW ? ((DataWidth - 1) - top_pkg_TL_DW) + 1 : (top_pkg_TL_DW - (DataWidth - 1)) + 1)) - 1)-:((DataWidth - 1) >= top_pkg_TL_DW ? ((DataWidth - 1) - top_pkg_TL_DW) + 1 : (top_pkg_TL_DW - (DataWidth - 1)) + 1)], rdata_reshaped[(sram_req_rdata[WoffsetWidth - 1-:WoffsetWidth] * DataWidth) + 31-:top_pkg_TL_DW] ^ {{top_pkg_TL_DW - SramBusBankAW {1'b0}}, sram_addr_rdata}};
					end
					else begin : gen_no_data_xor_addr
						rdata_tlword = rdata_reshaped[sram_req_rdata[WoffsetWidth - 1-:WoffsetWidth] * DataWidth+:DataWidth];
					end
				end
			end
		end
		else begin : gen_rmask
			reg [DataWidth - 1:0] rmask;
			always @(*) begin
				if (_sv2v_0)
					;
				rmask = 1'sb0;
				begin : sv2v_autoblock_2
					reg signed [31:0] i;
					for (i = 0; i < 4; i = i + 1)
						rmask[8 * i+:8] = {8 {sram_req_rdata[(top_pkg_TL_DBW + (WoffsetWidth - 1)) - ((top_pkg_TL_DBW - 1) - i)]}};
				end
			end
			wire [DataWidth:1] sv2v_tmp_4B3DB;
			assign sv2v_tmp_4B3DB = rdata_reshaped[sram_req_rdata[WoffsetWidth - 1-:WoffsetWidth] * DataWidth+:DataWidth] & rmask;
			always @(*) rdata_tlword = sv2v_tmp_4B3DB;
		end
	endgenerate
	assign rspfifo_wdata = {rdata_tlword[31:0], sv2v_cast_83AAC((EnableDataIntgPt ? rdata_tlword[DataWidth - 1-:tlul_pkg_DataIntgWidth] : {7 {1'sb0}})), rerror_i[1]};
	assign rspfifo_rready = (reqfifo_rdata[2 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))] & ~reqfifo_rdata[1 + (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_SZW + 7))]) & reqfifo_rready;
	wire unused_rerror;
	assign unused_rerror = rerror_i[0];
	prim_fifo_sync #(
		.Width(ReqFifoWidth),
		.Pass(1'b0),
		.Depth(Outstanding),
		.NeverClears(1'b1),
		.Secure(SecFifoPtr)
	) u_reqfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(reqfifo_wvalid),
		.wready_o(reqfifo_wready),
		.wdata_i(reqfifo_wdata),
		.rvalid_o(reqfifo_rvalid),
		.rready_i(reqfifo_rready),
		.rdata_o(reqfifo_rdata),
		.full_o(),
		.depth_o(),
		.err_o(reqfifo_error)
	);
	prim_fifo_sync #(
		.Width(SramReqFifoWidth),
		.Pass(1'b0),
		.Depth(Outstanding),
		.NeverClears(1'b1),
		.Secure(SecFifoPtr),
		.OutputZeroIfEmpty(1)
	) u_sramreqfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(sramreqfifo_wvalid),
		.wready_o(sramreqfifo_wready),
		.wdata_i(sramreqfifo_wdata),
		.rvalid_o(),
		.rready_i(sramreqfifo_rready),
		.rdata_o(sramreqfifo_rdata),
		.full_o(),
		.depth_o(),
		.err_o(sramreqfifo_error)
	);
	generate
		if (!DataXorAddr) begin : gen_no_data_xor_addr_fifo
			wire unused_sram_addresses;
			assign unused_sram_addresses = ^{sram_addr_wdata, sram_addr_rdata};
		end
	endgenerate
	prim_fifo_sync #(
		.Width(RspFifoWidth),
		.Pass(1'b1),
		.Depth(Outstanding),
		.NeverClears(1'b1),
		.Secure(SecFifoPtr)
	) u_rspfifo(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.clr_i(1'b0),
		.wvalid_i(rspfifo_wvalid),
		.wready_o(rspfifo_wready),
		.wdata_i(rspfifo_wdata),
		.rvalid_o(rspfifo_rvalid),
		.rready_i(rspfifo_rready),
		.rdata_o(rspfifo_rdata),
		.full_o(),
		.depth_o(),
		.err_o(rsp_fifo_error)
	);
	initial _sv2v_0 = 0;
endmodule
