module tlul_adapter_reg (
	clk_i,
	rst_ni,
	tl_i,
	tl_o,
	en_ifetch_i,
	intg_error_o,
	re_o,
	we_o,
	addr_o,
	wdata_o,
	be_o,
	busy_i,
	rdata_i,
	error_i
);
	reg _sv2v_0;
	parameter [0:0] CmdIntgCheck = 0;
	parameter [0:0] EnableRspIntgGen = 0;
	parameter [0:0] EnableDataIntgGen = 0;
	parameter signed [31:0] RegAw = 8;
	parameter signed [31:0] RegDw = 32;
	parameter signed [31:0] AccessLatency = 0;
	localparam signed [31:0] RegBw = RegDw / 8;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	input wire [3:0] en_ifetch_i;
	output wire intg_error_o;
	output wire re_o;
	output wire we_o;
	output wire [RegAw - 1:0] addr_o;
	output wire [RegDw - 1:0] wdata_o;
	output wire [RegBw - 1:0] be_o;
	input busy_i;
	input [RegDw - 1:0] rdata_i;
	input error_i;
	localparam signed [31:0] IW = top_pkg_TL_AIW;
	localparam signed [31:0] SZW = top_pkg_TL_SZW;
	reg outstanding_q;
	wire a_ack;
	wire d_ack;
	reg [RegDw - 1:0] rdata;
	reg [RegDw - 1:0] rdata_q;
	reg error_q;
	reg error;
	wire err_internal;
	wire instr_error;
	wire intg_error;
	reg addr_align_err;
	wire tl_err;
	reg [7:0] reqid_q;
	reg [SZW - 1:0] reqsz_q;
	reg [2:0] rspop_q;
	wire rd_req;
	wire wr_req;
	assign a_ack = tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & tl_o[0];
	assign d_ack = tl_o[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] & tl_i[0];
	assign wr_req = a_ack & ((tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0) | (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1));
	assign rd_req = a_ack & (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h4);
	assign we_o = wr_req & ~err_internal;
	assign re_o = rd_req & ~err_internal;
	assign wdata_o = tl_i[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)];
	assign be_o = tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)];
	generate
		if (RegAw <= 2) begin : gen_only_one_reg
			assign addr_o = 1'sb0;
		end
		else begin : gen_more_regs
			assign addr_o = {tl_i[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (32 - RegAw):(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 29], 2'b00};
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			outstanding_q <= 1'b0;
		else if (a_ack)
			outstanding_q <= 1'b1;
		else if (d_ack)
			outstanding_q <= 1'b0;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			reqid_q <= 1'sb0;
			reqsz_q <= 1'sb0;
			rspop_q <= 3'h0;
		end
		else if (a_ack) begin
			reqid_q <= tl_i[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) + 1)];
			reqsz_q <= tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)];
			rspop_q <= (rd_req ? 3'h1 : 3'h0);
		end
	generate
		if (AccessLatency == 1) begin : gen_access_latency1
			reg a_ack_q;
			reg err_internal_q;
			reg wr_req_q;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					a_ack_q <= 1'b0;
					err_internal_q <= 1'b0;
					wr_req_q <= 1'b0;
					rdata_q <= 1'sb0;
					error_q <= 1'b0;
				end
				else begin
					a_ack_q <= a_ack;
					err_internal_q <= err_internal;
					wr_req_q <= wr_req;
					rdata_q <= rdata;
					error_q <= error;
				end
			always @(*) begin
				if (_sv2v_0)
					;
				if (a_ack_q) begin
					rdata = ((error_i || err_internal_q) || wr_req_q ? {RegDw {1'sb1}} : rdata_i);
					error = error_i || err_internal_q;
				end
				else begin
					rdata = rdata_q;
					error = error_q;
				end
			end
		end
		else begin : gen_access_latency0
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					rdata_q <= 1'sb0;
					error_q <= 1'b0;
				end
				else if (a_ack) begin
					rdata_q <= ((error_i || err_internal) || wr_req ? {RegDw {1'sb1}} : rdata_i);
					error_q <= error_i || err_internal;
				end
			wire [RegDw:1] sv2v_tmp_32829;
			assign sv2v_tmp_32829 = rdata_q;
			always @(*) rdata = sv2v_tmp_32829;
			wire [1:1] sv2v_tmp_3D4E9;
			assign sv2v_tmp_3D4E9 = error_q;
			always @(*) error = sv2v_tmp_3D4E9;
		end
	endgenerate
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o_pre;
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
	assign tl_o_pre = {outstanding_q, rspop_q, 3'b000, sv2v_cast_FDEB5(reqsz_q), sv2v_cast_15E34(reqid_q), sv2v_cast_17D81(1'sb0), sv2v_cast_9783B(rdata), sv2v_cast_11E70(1'sb0), error, sv2v_cast_1(~(outstanding_q | busy_i))};
	tlul_rsp_intg_gen #(
		.EnableRspIntgGen(EnableRspIntgGen),
		.EnableDataIntgGen(EnableDataIntgGen),
		.UserInIsZero(1'b1)
	) u_rsp_intg_gen(
		.tl_i(tl_o_pre),
		.tl_o(tl_o)
	);
	generate
		if (CmdIntgCheck) begin : gen_cmd_intg_check
			reg intg_error_q;
			tlul_cmd_intg_chk u_cmd_intg_chk(
				.tl_i(tl_i),
				.err_o(intg_error)
			);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					intg_error_q <= 1'b0;
				else if (intg_error)
					intg_error_q <= 1'b1;
			assign intg_error_o = intg_error_q;
		end
		else begin : gen_no_cmd_intg_check
			assign intg_error = 1'b0;
			assign intg_error_o = 1'b0;
		end
	endgenerate
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_false_loose;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_false_loose = sv2v_cast_EECFA(4'h6) != val;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	assign instr_error = prim_mubi_pkg_mubi4_test_true_strict(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]) & prim_mubi_pkg_mubi4_test_false_loose(en_ifetch_i);
	assign err_internal = ((addr_align_err | tl_err) | instr_error) | intg_error;
	always @(*) begin
		if (_sv2v_0)
			;
		if (wr_req)
			addr_align_err = |tl_i[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 30:(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31];
		else
			addr_align_err = 1'b0;
	end
	tlul_err u_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_i),
		.err_o(tl_err)
	);
	initial _sv2v_0 = 0;
endmodule
module tlul_err (
	clk_i,
	rst_ni,
	tl_i,
	err_o
);
	reg _sv2v_0;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	output wire err_o;
	localparam signed [31:0] IW = top_pkg_TL_AIW;
	localparam signed [31:0] SZW = top_pkg_TL_SZW;
	localparam signed [31:0] DW = top_pkg_TL_DW;
	localparam signed [31:0] MW = top_pkg_TL_DBW;
	localparam signed [31:0] SubAW = 2;
	wire opcode_allowed;
	wire a_config_allowed;
	wire op_full;
	wire op_partial;
	wire op_get;
	assign op_full = tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0;
	assign op_partial = tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1;
	assign op_get = tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h4;
	wire instr_wr_err;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic prim_mubi_pkg_mubi4_test_true_strict;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_true_strict = sv2v_cast_EECFA(4'h6) == val;
	endfunction
	assign instr_wr_err = prim_mubi_pkg_mubi4_test_true_strict(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]) & (op_full | op_partial);
	wire instr_type_err;
	function automatic prim_mubi_pkg_mubi4_test_invalid;
		input reg [3:0] val;
		prim_mubi_pkg_mubi4_test_invalid = ~(|{((sv2v_cast_EECFA(4'h6) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) === (sv2v_cast_EECFA(4'h6) ^ sv2v_cast_EECFA(4'h6))) | 1'bx), ((sv2v_cast_EECFA(4'h9) ^ (val ^ val)) === (val ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9)))) & ((((val ^ val) ^ (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) === (sv2v_cast_EECFA(4'h9) ^ sv2v_cast_EECFA(4'h9))) | 1'bx)});
	endfunction
	assign instr_type_err = prim_mubi_pkg_mubi4_test_invalid(tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4]);
	assign err_o = (~(opcode_allowed & a_config_allowed) | instr_wr_err) | instr_type_err;
	assign opcode_allowed = ((tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h0) | (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h1)) | (tl_i[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] == 3'h4);
	reg addr_sz_chk;
	reg mask_chk;
	reg fulldata_chk;
	localparam [MW - 1:0] MaskOne = 1;
	wire [MW - 1:0] mask;
	assign mask = MaskOne << tl_i[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 30:(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31];
	always @(*) begin
		if (_sv2v_0)
			;
		addr_sz_chk = 1'b0;
		mask_chk = 1'b0;
		fulldata_chk = 1'b0;
		if (tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))])
			(* full_case, parallel_case *)
			case (tl_i[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)])
				'h0: begin
					addr_sz_chk = 1'b1;
					mask_chk = ~|(tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] & ~mask);
					fulldata_chk = |(tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] & mask);
				end
				'h1: begin
					addr_sz_chk = ~tl_i[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31];
					mask_chk = (tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 30] ? ~|(tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] & 4'b0011) : ~|(tl_i[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] & 4'b1100));
					fulldata_chk = (tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 30] ? &tl_i[(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 4):(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 3)] : &tl_i[(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 2):(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 1)]);
				end
				'h2: begin
					addr_sz_chk = ~|tl_i[(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 30:(top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - 31];
					mask_chk = 1'b1;
					fulldata_chk = &tl_i[(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 4):(top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DBW - 1)];
				end
				default: begin
					addr_sz_chk = 1'b0;
					mask_chk = 1'b0;
					fulldata_chk = 1'b0;
				end
			endcase
	end
	assign a_config_allowed = (addr_sz_chk & mask_chk) & ((op_get | op_partial) | fulldata_chk);
	initial _sv2v_0 = 0;
endmodule
module tlul_cmd_intg_chk (
	tl_i,
	err_o
);
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	output wire err_o;
	wire [1:0] err;
	wire data_err;
	wire [(((prim_mubi_pkg_MuBi4Width + top_pkg_TL_AW) + 3) + top_pkg_TL_DBW) - 1:0] cmd;
	function automatic [(((prim_mubi_pkg_MuBi4Width + top_pkg_TL_AW) + 3) + top_pkg_TL_DBW) - 1:0] tlul_pkg_extract_h2d_cmd_intg;
		input reg [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl;
		reg [(((prim_mubi_pkg_MuBi4Width + top_pkg_TL_AW) + 3) + top_pkg_TL_DBW) - 1:0] payload;
		reg unused_tlul;
		begin
			unused_tlul = ^tl;
			payload[top_pkg_TL_AW + (top_pkg_TL_DBW + 2)-:((top_pkg_TL_AW + (top_pkg_TL_DBW + 2)) >= (3 + (top_pkg_TL_DBW + 0)) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + 2)) - (3 + (top_pkg_TL_DBW + 0))) + 1 : ((3 + (top_pkg_TL_DBW + 0)) - (top_pkg_TL_AW + (top_pkg_TL_DBW + 2))) + 1)] = tl[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)];
			payload[top_pkg_TL_DBW + 2-:((top_pkg_TL_DBW + 2) >= (top_pkg_TL_DBW + 0) ? ((top_pkg_TL_DBW + 2) - (top_pkg_TL_DBW + 0)) + 1 : ((top_pkg_TL_DBW + 0) - (top_pkg_TL_DBW + 2)) + 1)] = tl[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)];
			payload[top_pkg_TL_DBW - 1-:top_pkg_TL_DBW] = tl[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)];
			payload[prim_mubi_pkg_MuBi4Width + (top_pkg_TL_AW + (top_pkg_TL_DBW + 2))-:(((32'sd4 + 32'sd32) + (top_pkg_TL_DBW + 2)) >= (35 + (top_pkg_TL_DBW + 0)) ? ((prim_mubi_pkg_MuBi4Width + (top_pkg_TL_AW + (top_pkg_TL_DBW + 2))) - (top_pkg_TL_AW + (3 + (top_pkg_TL_DBW + 0)))) + 1 : ((top_pkg_TL_AW + (3 + (top_pkg_TL_DBW + 0))) - (prim_mubi_pkg_MuBi4Width + (top_pkg_TL_AW + (top_pkg_TL_DBW + 2)))) + 1)] = tl[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4];
			tlul_pkg_extract_h2d_cmd_intg = payload;
		end
	endfunction
	assign cmd = tlul_pkg_extract_h2d_cmd_intg(tl_i);
	localparam signed [31:0] tlul_pkg_H2DCmdMaxWidth = 57;
	function automatic [56:0] sv2v_cast_57;
		input reg [56:0] inp;
		sv2v_cast_57 = inp;
	endfunction
	prim_secded_inv_64_57_dec u_chk(
		.data_i({tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 14)-:7], sv2v_cast_57(cmd)}),
		.data_o(),
		.syndrome_o(),
		.err_o(err)
	);
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	tlul_data_integ_dec u_tlul_data_integ_dec(
		.data_intg_i({tl_i[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth], sv2v_cast_32(tl_i[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)])}),
		.data_err_o(data_err)
	);
	assign err_o = tl_i[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] & (|err | (|data_err));
	wire unused_tl;
	assign unused_tl = |tl_i;
endmodule
module tlul_rsp_intg_gen (
	tl_i,
	tl_o
);
	reg _sv2v_0;
	parameter [0:0] EnableRspIntgGen = 1'b1;
	parameter [0:0] EnableDataIntgGen = 1'b1;
	parameter [0:0] UserInIsZero = 1'b0;
	parameter [0:0] RspIntgInIsZero = UserInIsZero;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_i;
	output reg [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	wire [6:0] rsp_intg;
	localparam signed [31:0] tlul_pkg_D2HRspMaxWidth = 57;
	function automatic [(3 + top_pkg_TL_SZW) + 0:0] tlul_pkg_extract_d2h_rsp_intg;
		input reg [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl;
		reg [(3 + top_pkg_TL_SZW) + 0:0] payload;
		reg unused_tlul;
		begin
			unused_tlul = ^tl;
			payload[3 + (top_pkg_TL_SZW + 0)-:((3 + (top_pkg_TL_SZW + 0)) >= (top_pkg_TL_SZW + 1) ? ((3 + (top_pkg_TL_SZW + 0)) - (top_pkg_TL_SZW + 1)) + 1 : ((top_pkg_TL_SZW + 1) - (3 + (top_pkg_TL_SZW + 0))) + 1)] = tl[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))-:((6 + (top_pkg_TL_SZW + (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 1))))) >= (3 + (top_pkg_TL_SZW + (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 2))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))))) + 1)];
			payload[top_pkg_TL_SZW + 0-:((top_pkg_TL_SZW + 0) >= 1 ? top_pkg_TL_SZW + 0 : 2 - (top_pkg_TL_SZW + 0))] = tl[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))-:((top_pkg_TL_SZW + (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 1)))) >= (32'sd8 + ((32'sd1 + 32'sd32) + ((32'sd7 + 32'sd7) + 2))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))) + 1)];
			payload[0] = tl[1];
			tlul_pkg_extract_d2h_rsp_intg = payload;
		end
	endfunction
	function automatic [56:0] sv2v_cast_57;
		input reg [56:0] inp;
		sv2v_cast_57 = inp;
	endfunction
	generate
		if (EnableRspIntgGen) begin : gen_rsp_intg
			wire [(3 + top_pkg_TL_SZW) + 0:0] rsp;
			wire [56:0] unused_payload;
			assign rsp = tlul_pkg_extract_d2h_rsp_intg(tl_i);
			prim_secded_inv_64_57_enc u_rsp_gen(
				.data_i(sv2v_cast_57(rsp)),
				.data_o({rsp_intg, unused_payload})
			);
		end
		else if (RspIntgInIsZero) begin : gen_zero_rsp_intg
			assign rsp_intg = 0;
		end
		else begin : gen_passthrough_rsp_intg
			assign rsp_intg = tl_i[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 14)-:7];
		end
	endgenerate
	wire [6:0] data_intg;
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	function automatic [31:0] sv2v_cast_32;
		input reg [31:0] inp;
		sv2v_cast_32 = inp;
	endfunction
	generate
		if (EnableDataIntgGen) begin : gen_data_intg
			wire [31:0] unused_data;
			tlul_data_integ_enc u_tlul_data_integ_enc(
				.data_i(sv2v_cast_32(tl_i[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)])),
				.data_intg_o({data_intg, unused_data})
			);
		end
		else if (UserInIsZero) begin : gen_zero_data_intg
			assign data_intg = 0;
		end
		else begin : gen_passthrough_data_intg
			assign data_intg = tl_i[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth];
		end
	endgenerate
	always @(*) begin
		if (_sv2v_0)
			;
		tl_o = tl_i;
		tl_o[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 14)-:7] = rsp_intg;
		tl_o[((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth] = data_intg;
	end
	wire unused_tl;
	assign unused_tl = ^tl_i;
	initial _sv2v_0 = 0;
endmodule
module tlul_data_integ_dec (
	data_intg_i,
	data_err_o
);
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	input [(tlul_pkg_DataMaxWidth + tlul_pkg_DataIntgWidth) - 1:0] data_intg_i;
	output wire data_err_o;
	wire [1:0] data_err;
	prim_secded_inv_39_32_dec u_data_chk(
		.data_i(data_intg_i),
		.data_o(),
		.syndrome_o(),
		.err_o(data_err)
	);
	assign data_err_o = |data_err;
endmodule
module tlul_data_integ_enc (
	data_i,
	data_intg_o
);
	localparam signed [31:0] tlul_pkg_DataMaxWidth = 32;
	input [31:0] data_i;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	output wire [(tlul_pkg_DataMaxWidth + tlul_pkg_DataIntgWidth) - 1:0] data_intg_o;
	prim_secded_inv_39_32_enc u_data_gen(
		.data_i(data_i),
		.data_o(data_intg_o)
	);
endmodule
module prim_secded_inv_64_57_dec (
	data_i,
	data_o,
	syndrome_o,
	err_o
);
	reg _sv2v_0;
	input [63:0] data_i;
	output reg [56:0] data_o;
	output reg [6:0] syndrome_o;
	output reg [1:0] err_o;
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		syndrome_o[0] = ^((data_i ^ 64'h5400000000000000) & 64'h0303fff800007fff);
		syndrome_o[1] = ^((data_i ^ 64'h5400000000000000) & 64'h057c1ff801ff801f);
		syndrome_o[2] = ^((data_i ^ 64'h5400000000000000) & 64'h09bde1f87e0781e1);
		syndrome_o[3] = ^((data_i ^ 64'h5400000000000000) & 64'h11deee3b8e388e22);
		syndrome_o[4] = ^((data_i ^ 64'h5400000000000000) & 64'h21ef76cdb2c93244);
		syndrome_o[5] = ^((data_i ^ 64'h5400000000000000) & 64'h41f7bb56d5525488);
		syndrome_o[6] = ^((data_i ^ 64'h5400000000000000) & 64'h81fbdda769a46910);
		data_o[0] = (syndrome_o == 7'h07) ^ data_i[0];
		data_o[1] = (syndrome_o == 7'h0b) ^ data_i[1];
		data_o[2] = (syndrome_o == 7'h13) ^ data_i[2];
		data_o[3] = (syndrome_o == 7'h23) ^ data_i[3];
		data_o[4] = (syndrome_o == 7'h43) ^ data_i[4];
		data_o[5] = (syndrome_o == 7'h0d) ^ data_i[5];
		data_o[6] = (syndrome_o == 7'h15) ^ data_i[6];
		data_o[7] = (syndrome_o == 7'h25) ^ data_i[7];
		data_o[8] = (syndrome_o == 7'h45) ^ data_i[8];
		data_o[9] = (syndrome_o == 7'h19) ^ data_i[9];
		data_o[10] = (syndrome_o == 7'h29) ^ data_i[10];
		data_o[11] = (syndrome_o == 7'h49) ^ data_i[11];
		data_o[12] = (syndrome_o == 7'h31) ^ data_i[12];
		data_o[13] = (syndrome_o == 7'h51) ^ data_i[13];
		data_o[14] = (syndrome_o == 7'h61) ^ data_i[14];
		data_o[15] = (syndrome_o == 7'h0e) ^ data_i[15];
		data_o[16] = (syndrome_o == 7'h16) ^ data_i[16];
		data_o[17] = (syndrome_o == 7'h26) ^ data_i[17];
		data_o[18] = (syndrome_o == 7'h46) ^ data_i[18];
		data_o[19] = (syndrome_o == 7'h1a) ^ data_i[19];
		data_o[20] = (syndrome_o == 7'h2a) ^ data_i[20];
		data_o[21] = (syndrome_o == 7'h4a) ^ data_i[21];
		data_o[22] = (syndrome_o == 7'h32) ^ data_i[22];
		data_o[23] = (syndrome_o == 7'h52) ^ data_i[23];
		data_o[24] = (syndrome_o == 7'h62) ^ data_i[24];
		data_o[25] = (syndrome_o == 7'h1c) ^ data_i[25];
		data_o[26] = (syndrome_o == 7'h2c) ^ data_i[26];
		data_o[27] = (syndrome_o == 7'h4c) ^ data_i[27];
		data_o[28] = (syndrome_o == 7'h34) ^ data_i[28];
		data_o[29] = (syndrome_o == 7'h54) ^ data_i[29];
		data_o[30] = (syndrome_o == 7'h64) ^ data_i[30];
		data_o[31] = (syndrome_o == 7'h38) ^ data_i[31];
		data_o[32] = (syndrome_o == 7'h58) ^ data_i[32];
		data_o[33] = (syndrome_o == 7'h68) ^ data_i[33];
		data_o[34] = (syndrome_o == 7'h70) ^ data_i[34];
		data_o[35] = (syndrome_o == 7'h1f) ^ data_i[35];
		data_o[36] = (syndrome_o == 7'h2f) ^ data_i[36];
		data_o[37] = (syndrome_o == 7'h4f) ^ data_i[37];
		data_o[38] = (syndrome_o == 7'h37) ^ data_i[38];
		data_o[39] = (syndrome_o == 7'h57) ^ data_i[39];
		data_o[40] = (syndrome_o == 7'h67) ^ data_i[40];
		data_o[41] = (syndrome_o == 7'h3b) ^ data_i[41];
		data_o[42] = (syndrome_o == 7'h5b) ^ data_i[42];
		data_o[43] = (syndrome_o == 7'h6b) ^ data_i[43];
		data_o[44] = (syndrome_o == 7'h73) ^ data_i[44];
		data_o[45] = (syndrome_o == 7'h3d) ^ data_i[45];
		data_o[46] = (syndrome_o == 7'h5d) ^ data_i[46];
		data_o[47] = (syndrome_o == 7'h6d) ^ data_i[47];
		data_o[48] = (syndrome_o == 7'h75) ^ data_i[48];
		data_o[49] = (syndrome_o == 7'h79) ^ data_i[49];
		data_o[50] = (syndrome_o == 7'h3e) ^ data_i[50];
		data_o[51] = (syndrome_o == 7'h5e) ^ data_i[51];
		data_o[52] = (syndrome_o == 7'h6e) ^ data_i[52];
		data_o[53] = (syndrome_o == 7'h76) ^ data_i[53];
		data_o[54] = (syndrome_o == 7'h7a) ^ data_i[54];
		data_o[55] = (syndrome_o == 7'h7c) ^ data_i[55];
		data_o[56] = (syndrome_o == 7'h7f) ^ data_i[56];
		err_o[0] = ^syndrome_o;
		err_o[1] = ~err_o[0] & |syndrome_o;
	end
	initial _sv2v_0 = 0;
endmodule
module prim_secded_inv_64_57_enc (
	data_i,
	data_o
);
	reg _sv2v_0;
	input [56:0] data_i;
	output reg [63:0] data_o;
	function automatic [63:0] sv2v_cast_64;
		input reg [63:0] inp;
		sv2v_cast_64 = inp;
	endfunction
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		data_o = sv2v_cast_64(data_i);
		data_o[57] = ^(data_o & 64'h0103fff800007fff);
		data_o[58] = ^(data_o & 64'h017c1ff801ff801f);
		data_o[59] = ^(data_o & 64'h01bde1f87e0781e1);
		data_o[60] = ^(data_o & 64'h01deee3b8e388e22);
		data_o[61] = ^(data_o & 64'h01ef76cdb2c93244);
		data_o[62] = ^(data_o & 64'h01f7bb56d5525488);
		data_o[63] = ^(data_o & 64'h01fbdda769a46910);
		data_o = data_o ^ 64'h5400000000000000;
	end
	initial _sv2v_0 = 0;
endmodule
module prim_secded_inv_39_32_dec (
	data_i,
	data_o,
	syndrome_o,
	err_o
);
	reg _sv2v_0;
	input [38:0] data_i;
	output reg [31:0] data_o;
	output reg [6:0] syndrome_o;
	output reg [1:0] err_o;
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		syndrome_o[0] = ^((data_i ^ 39'h2a00000000) & 39'h012606bd25);
		syndrome_o[1] = ^((data_i ^ 39'h2a00000000) & 39'h02deba8050);
		syndrome_o[2] = ^((data_i ^ 39'h2a00000000) & 39'h04413d89aa);
		syndrome_o[3] = ^((data_i ^ 39'h2a00000000) & 39'h0831234ed1);
		syndrome_o[4] = ^((data_i ^ 39'h2a00000000) & 39'h10c2c1323b);
		syndrome_o[5] = ^((data_i ^ 39'h2a00000000) & 39'h202dcc624c);
		syndrome_o[6] = ^((data_i ^ 39'h2a00000000) & 39'h4098505586);
		data_o[0] = (syndrome_o == 7'h19) ^ data_i[0];
		data_o[1] = (syndrome_o == 7'h54) ^ data_i[1];
		data_o[2] = (syndrome_o == 7'h61) ^ data_i[2];
		data_o[3] = (syndrome_o == 7'h34) ^ data_i[3];
		data_o[4] = (syndrome_o == 7'h1a) ^ data_i[4];
		data_o[5] = (syndrome_o == 7'h15) ^ data_i[5];
		data_o[6] = (syndrome_o == 7'h2a) ^ data_i[6];
		data_o[7] = (syndrome_o == 7'h4c) ^ data_i[7];
		data_o[8] = (syndrome_o == 7'h45) ^ data_i[8];
		data_o[9] = (syndrome_o == 7'h38) ^ data_i[9];
		data_o[10] = (syndrome_o == 7'h49) ^ data_i[10];
		data_o[11] = (syndrome_o == 7'h0d) ^ data_i[11];
		data_o[12] = (syndrome_o == 7'h51) ^ data_i[12];
		data_o[13] = (syndrome_o == 7'h31) ^ data_i[13];
		data_o[14] = (syndrome_o == 7'h68) ^ data_i[14];
		data_o[15] = (syndrome_o == 7'h07) ^ data_i[15];
		data_o[16] = (syndrome_o == 7'h1c) ^ data_i[16];
		data_o[17] = (syndrome_o == 7'h0b) ^ data_i[17];
		data_o[18] = (syndrome_o == 7'h25) ^ data_i[18];
		data_o[19] = (syndrome_o == 7'h26) ^ data_i[19];
		data_o[20] = (syndrome_o == 7'h46) ^ data_i[20];
		data_o[21] = (syndrome_o == 7'h0e) ^ data_i[21];
		data_o[22] = (syndrome_o == 7'h70) ^ data_i[22];
		data_o[23] = (syndrome_o == 7'h32) ^ data_i[23];
		data_o[24] = (syndrome_o == 7'h2c) ^ data_i[24];
		data_o[25] = (syndrome_o == 7'h13) ^ data_i[25];
		data_o[26] = (syndrome_o == 7'h23) ^ data_i[26];
		data_o[27] = (syndrome_o == 7'h62) ^ data_i[27];
		data_o[28] = (syndrome_o == 7'h4a) ^ data_i[28];
		data_o[29] = (syndrome_o == 7'h29) ^ data_i[29];
		data_o[30] = (syndrome_o == 7'h16) ^ data_i[30];
		data_o[31] = (syndrome_o == 7'h52) ^ data_i[31];
		err_o[0] = ^syndrome_o;
		err_o[1] = ~err_o[0] & |syndrome_o;
	end
	initial _sv2v_0 = 0;
endmodule
module prim_secded_inv_39_32_enc (
	data_i,
	data_o
);
	reg _sv2v_0;
	input [31:0] data_i;
	output reg [38:0] data_o;
	function automatic [38:0] sv2v_cast_39;
		input reg [38:0] inp;
		sv2v_cast_39 = inp;
	endfunction
	always @(*) begin : p_encode
		if (_sv2v_0)
			;
		data_o = sv2v_cast_39(data_i);
		data_o[32] = ^(data_o & 39'h002606bd25);
		data_o[33] = ^(data_o & 39'h00deba8050);
		data_o[34] = ^(data_o & 39'h00413d89aa);
		data_o[35] = ^(data_o & 39'h0031234ed1);
		data_o[36] = ^(data_o & 39'h00c2c1323b);
		data_o[37] = ^(data_o & 39'h002dcc624c);
		data_o[38] = ^(data_o & 39'h0098505586);
		data_o = data_o ^ 39'h2a00000000;
	end
	initial _sv2v_0 = 0;
endmodule
module prim_sparse_fsm_flop (
	clk_i,
	rst_ni,
	state_i,
	state_o
);
	parameter signed [31:0] StateEnumT_aes_pkg_CtrlStateWidth = 0;
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [StateEnumT_aes_pkg_CtrlStateWidth - 1:0] state_i;
	output wire [StateEnumT_aes_pkg_CtrlStateWidth - 1:0] state_o;
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
	function automatic [StateEnumT_aes_pkg_CtrlStateWidth - 1:0] sv2v_cast_A8198;
		input reg [StateEnumT_aes_pkg_CtrlStateWidth - 1:0] inp;
		sv2v_cast_A8198 = inp;
	endfunction
	assign state_o = sv2v_cast_A8198(state_raw);
	assign unused_err_o = 1'b0;
endmodule
module prim_sparse_fsm_flop (
	clk_i,
	rst_ni,
	state_i,
	state_o
);
	parameter signed [31:0] StateEnumT_aes_pkg_CtrStateWidth = 0;
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [StateEnumT_aes_pkg_CtrStateWidth - 1:0] state_i;
	output wire [StateEnumT_aes_pkg_CtrStateWidth - 1:0] state_o;
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
	function automatic [StateEnumT_aes_pkg_CtrStateWidth - 1:0] sv2v_cast_7F835;
		input reg [StateEnumT_aes_pkg_CtrStateWidth - 1:0] inp;
		sv2v_cast_7F835 = inp;
	endfunction
	assign state_o = sv2v_cast_7F835(state_raw);
	assign unused_err_o = 1'b0;
endmodule
module prim_sparse_fsm_flop (
	clk_i,
	rst_ni,
	state_i,
	state_o
);
	parameter signed [31:0] StateEnumT_aes_pkg_GhashStateWidth = 0;
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [StateEnumT_aes_pkg_GhashStateWidth - 1:0] state_i;
	output wire [StateEnumT_aes_pkg_GhashStateWidth - 1:0] state_o;
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
	function automatic [StateEnumT_aes_pkg_GhashStateWidth - 1:0] sv2v_cast_5BEB7;
		input reg [StateEnumT_aes_pkg_GhashStateWidth - 1:0] inp;
		sv2v_cast_5BEB7 = inp;
	endfunction
	assign state_o = sv2v_cast_5BEB7(state_raw);
	assign unused_err_o = 1'b0;
endmodule
module prim_sparse_fsm_flop (
	clk_i,
	rst_ni,
	state_i,
	state_o
);
	parameter signed [31:0] StateEnumT_aes_pkg_CipherCtrlStateWidth = 0;
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [StateEnumT_aes_pkg_CipherCtrlStateWidth - 1:0] state_i;
	output wire [StateEnumT_aes_pkg_CipherCtrlStateWidth - 1:0] state_o;
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
	function automatic [StateEnumT_aes_pkg_CipherCtrlStateWidth - 1:0] sv2v_cast_22CAB;
		input reg [StateEnumT_aes_pkg_CipherCtrlStateWidth - 1:0] inp;
		sv2v_cast_22CAB = inp;
	endfunction
	assign state_o = sv2v_cast_22CAB(state_raw);
	assign unused_err_o = 1'b0;
endmodule
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
module prim_subreg_ext (
	re,
	we,
	wd,
	d,
	qe,
	qre,
	q,
	ds,
	qs
);
	parameter [31:0] DW = 32;
	input re;
	input we;
	input [DW - 1:0] wd;
	input [DW - 1:0] d;
	output wire qe;
	output wire qre;
	output wire [DW - 1:0] q;
	output wire [DW - 1:0] ds;
	output wire [DW - 1:0] qs;
	assign ds = d;
	assign qs = d;
	assign q = wd;
	assign qe = we;
	assign qre = re;
endmodule
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
module prim_subreg_arb (
	we,
	wd,
	de,
	d,
	q,
	wr_en,
	wr_data
);
	parameter signed [31:0] DW = 32;
	parameter [2:0] SwAccess = 3'd0;
	parameter [0:0] Mubi = 1'b0;
	input we;
	input [DW - 1:0] wd;
	input de;
	input [DW - 1:0] d;
	input [DW - 1:0] q;
	output wire wr_en;
	output wire [DW - 1:0] wr_data;
	localparam signed [31:0] prim_mubi_pkg_MuBi12Width = 12;
	localparam signed [31:0] prim_mubi_pkg_MuBi16Width = 16;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] prim_mubi_pkg_MuBi8Width = 8;
	function automatic [11:0] sv2v_cast_9D81C;
		input reg [11:0] inp;
		sv2v_cast_9D81C = inp;
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_and;
		input reg [11:0] a;
		input reg [11:0] b;
		input reg [11:0] act;
		reg [11:0] a_in;
		reg [11:0] b_in;
		reg [11:0] act_in;
		reg [11:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_1
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi12Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi12_and = sv2v_cast_9D81C(out);
		end
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_and_hi;
		input reg [11:0] a;
		input reg [11:0] b;
		prim_mubi_pkg_mubi12_and_hi = prim_mubi_pkg_mubi12_and(a, b, sv2v_cast_9D81C(12'h696));
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_or;
		input reg [11:0] a;
		input reg [11:0] b;
		input reg [11:0] act;
		reg [11:0] a_in;
		reg [11:0] b_in;
		reg [11:0] act_in;
		reg [11:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_2
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi12Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi12_or = sv2v_cast_9D81C(out);
		end
	endfunction
	function automatic [11:0] prim_mubi_pkg_mubi12_or_hi;
		input reg [11:0] a;
		input reg [11:0] b;
		prim_mubi_pkg_mubi12_or_hi = prim_mubi_pkg_mubi12_or(a, b, sv2v_cast_9D81C(12'h696));
	endfunction
	function automatic [15:0] sv2v_cast_B8818;
		input reg [15:0] inp;
		sv2v_cast_B8818 = inp;
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_and;
		input reg [15:0] a;
		input reg [15:0] b;
		input reg [15:0] act;
		reg [15:0] a_in;
		reg [15:0] b_in;
		reg [15:0] act_in;
		reg [15:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_3
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi16Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi16_and = sv2v_cast_B8818(out);
		end
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_and_hi;
		input reg [15:0] a;
		input reg [15:0] b;
		prim_mubi_pkg_mubi16_and_hi = prim_mubi_pkg_mubi16_and(a, b, sv2v_cast_B8818(16'h9696));
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_or;
		input reg [15:0] a;
		input reg [15:0] b;
		input reg [15:0] act;
		reg [15:0] a_in;
		reg [15:0] b_in;
		reg [15:0] act_in;
		reg [15:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_4
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi16Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi16_or = sv2v_cast_B8818(out);
		end
	endfunction
	function automatic [15:0] prim_mubi_pkg_mubi16_or_hi;
		input reg [15:0] a;
		input reg [15:0] b;
		prim_mubi_pkg_mubi16_or_hi = prim_mubi_pkg_mubi16_or(a, b, sv2v_cast_B8818(16'h9696));
	endfunction
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_and;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_5
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi4_and = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_and_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_and_hi = prim_mubi_pkg_mubi4_and(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_or;
		input reg [3:0] a;
		input reg [3:0] b;
		input reg [3:0] act;
		reg [3:0] a_in;
		reg [3:0] b_in;
		reg [3:0] act_in;
		reg [3:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_6
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi4Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi4_or = sv2v_cast_EECFA(out);
		end
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_or_hi;
		input reg [3:0] a;
		input reg [3:0] b;
		prim_mubi_pkg_mubi4_or_hi = prim_mubi_pkg_mubi4_or(a, b, sv2v_cast_EECFA(4'h6));
	endfunction
	function automatic [7:0] sv2v_cast_FA5F6;
		input reg [7:0] inp;
		sv2v_cast_FA5F6 = inp;
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_and;
		input reg [7:0] a;
		input reg [7:0] b;
		input reg [7:0] act;
		reg [7:0] a_in;
		reg [7:0] b_in;
		reg [7:0] act_in;
		reg [7:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_7
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi8Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] && b_in[k];
					else
						out[k] = a_in[k] || b_in[k];
			end
			prim_mubi_pkg_mubi8_and = sv2v_cast_FA5F6(out);
		end
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_and_hi;
		input reg [7:0] a;
		input reg [7:0] b;
		prim_mubi_pkg_mubi8_and_hi = prim_mubi_pkg_mubi8_and(a, b, sv2v_cast_FA5F6(8'h96));
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_or;
		input reg [7:0] a;
		input reg [7:0] b;
		input reg [7:0] act;
		reg [7:0] a_in;
		reg [7:0] b_in;
		reg [7:0] act_in;
		reg [7:0] out;
		begin
			a_in = a;
			b_in = b;
			act_in = act;
			begin : sv2v_autoblock_8
				reg signed [31:0] k;
				for (k = 0; k < prim_mubi_pkg_MuBi8Width; k = k + 1)
					if (act_in[k])
						out[k] = a_in[k] || b_in[k];
					else
						out[k] = a_in[k] && b_in[k];
			end
			prim_mubi_pkg_mubi8_or = sv2v_cast_FA5F6(out);
		end
	endfunction
	function automatic [7:0] prim_mubi_pkg_mubi8_or_hi;
		input reg [7:0] a;
		input reg [7:0] b;
		prim_mubi_pkg_mubi8_or_hi = prim_mubi_pkg_mubi8_or(a, b, sv2v_cast_FA5F6(8'h96));
	endfunction
	generate
		if ((SwAccess == 3'd0) || (SwAccess == 3'd2)) begin : gen_w
			assign wr_en = we | de;
			assign wr_data = (we == 1'b1 ? wd : d);
			wire [DW - 1:0] unused_q;
			assign unused_q = q;
		end
		else if (SwAccess == 3'd1) begin : gen_ro
			assign wr_en = de;
			assign wr_data = d;
			wire unused_we;
			wire [DW - 1:0] unused_wd;
			wire [DW - 1:0] unused_q;
			assign unused_we = we;
			assign unused_wd = wd;
			assign unused_q = q;
		end
		else if (SwAccess == 3'd4) begin : gen_w1s
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_or_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(wd) : sv2v_cast_EECFA(4'h9)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_or_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(wd) : sv2v_cast_FA5F6(8'h69)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_or_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(wd) : sv2v_cast_9D81C(12'h969)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_or_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h6969)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) | (we ? wd : {DW {1'sb0}});
			end
		end
		else if (SwAccess == 3'd3) begin : gen_w1c
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(~wd) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(~wd) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(~wd) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(~wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? ~wd : {DW {1'sb1}});
			end
		end
		else if (SwAccess == 3'd5) begin : gen_w0c
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(wd) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(wd) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(wd) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? wd : {DW {1'sb1}});
			end
		end
		else if (SwAccess == 3'd6) begin : gen_rc
			assign wr_en = we | de;
			if (Mubi) begin : gen_mubi
				if (DW == 4) begin : gen_mubi4
					assign wr_data = prim_mubi_pkg_mubi4_and_hi(sv2v_cast_EECFA((de ? d : q)), (we ? sv2v_cast_EECFA(4'h9) : sv2v_cast_EECFA(4'h6)));
				end
				else if (DW == 8) begin : gen_mubi8
					assign wr_data = prim_mubi_pkg_mubi8_and_hi(sv2v_cast_FA5F6((de ? d : q)), (we ? sv2v_cast_FA5F6(8'h69) : sv2v_cast_FA5F6(8'h96)));
				end
				else if (DW == 12) begin : gen_mubi12
					assign wr_data = prim_mubi_pkg_mubi12_and_hi(sv2v_cast_9D81C((de ? d : q)), (we ? sv2v_cast_9D81C(12'h969) : sv2v_cast_9D81C(12'h696)));
				end
				else if (DW == 16) begin : gen_mubi16
					assign wr_data = prim_mubi_pkg_mubi16_and_hi(sv2v_cast_B8818((de ? d : q)), (we ? sv2v_cast_B8818(wd) : sv2v_cast_B8818(16'h9696)));
				end
				else begin : gen_invalid_mubi
					$error("%m: Invalid width for MuBi");
				end
			end
			else begin : gen_non_mubi
				assign wr_data = (de ? d : q) & (we ? {DW {1'sb0}} : {DW {1'sb1}});
			end
			wire [DW - 1:0] unused_wd;
			assign unused_wd = wd;
		end
		else begin : gen_hw
			assign wr_en = de;
			assign wr_data = d;
			wire unused_we;
			wire [DW - 1:0] unused_wd;
			wire [DW - 1:0] unused_q;
			assign unused_we = we;
			assign unused_wd = wd;
			assign unused_q = q;
		end
	endgenerate
endmodule
module prim_alert_sender (
	clk_i,
	rst_ni,
	alert_test_i,
	alert_req_i,
	alert_ack_o,
	alert_state_o,
	alert_rx_i,
	alert_tx_o
);
	reg _sv2v_0;
	parameter [0:0] AsyncOn = 1'b1;
	parameter [31:0] SkewCycles = 1;
	parameter [0:0] IsFatal = 1'b0;
	input clk_i;
	input rst_ni;
	input alert_test_i;
	input alert_req_i;
	output wire alert_ack_o;
	output wire alert_state_o;
	input wire [3:0] alert_rx_i;
	output wire [1:0] alert_tx_o;
	wire ping_sigint;
	wire ping_event;
	wire ping_n;
	wire ping_p;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ping(
		.in_i({alert_rx_i[2], alert_rx_i[3]}),
		.out_o({ping_n, ping_p})
	);
	prim_diff_decode #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_decode_ping(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(ping_p),
		.diff_ni(ping_n),
		.level_o(),
		.rise_o(),
		.fall_o(),
		.event_o(ping_event),
		.sigint_o(ping_sigint)
	);
	wire ack_sigint;
	wire ack_level;
	wire ack_n;
	wire ack_p;
	prim_sec_anchor_buf #(.Width(2)) u_prim_buf_ack(
		.in_i({alert_rx_i[0], alert_rx_i[1]}),
		.out_o({ack_n, ack_p})
	);
	prim_diff_decode #(
		.AsyncOn(AsyncOn),
		.SkewCycles(SkewCycles)
	) u_decode_ack(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.diff_pi(ack_p),
		.diff_ni(ack_n),
		.level_o(ack_level),
		.rise_o(),
		.fall_o(),
		.event_o(),
		.sigint_o(ack_sigint)
	);
	reg [2:0] state_d;
	reg [2:0] state_q;
	wire alert_pq;
	wire alert_nq;
	reg alert_pd;
	reg alert_nd;
	wire sigint_detected;
	assign sigint_detected = ack_sigint | ping_sigint;
	assign alert_tx_o[1] = alert_pq;
	assign alert_tx_o[0] = alert_nq;
	wire alert_set_d;
	reg alert_set_q;
	reg alert_clr;
	wire alert_test_set_d;
	reg alert_test_set_q;
	wire ping_set_d;
	reg ping_set_q;
	reg ping_clr;
	wire alert_req_trigger;
	wire alert_test_trigger;
	wire ping_trigger;
	wire alert_req;
	prim_sec_anchor_buf #(.Width(1)) u_prim_buf_in_req(
		.in_i(alert_req_i),
		.out_o(alert_req)
	);
	assign alert_req_trigger = alert_req | alert_set_q;
	generate
		if (IsFatal) begin : gen_fatal
			assign alert_set_d = alert_req_trigger;
		end
		else begin : gen_recov
			assign alert_set_d = (alert_clr ? 1'b0 : alert_req_trigger);
		end
	endgenerate
	assign alert_test_trigger = alert_test_i | alert_test_set_q;
	assign alert_test_set_d = (alert_clr ? 1'b0 : alert_test_trigger);
	wire alert_trigger;
	assign alert_trigger = alert_req_trigger | alert_test_trigger;
	assign ping_trigger = ping_set_q | ping_event;
	assign ping_set_d = (ping_clr ? 1'b0 : ping_trigger);
	assign alert_ack_o = alert_clr & alert_set_q;
	assign alert_state_o = alert_set_q;
	always @(*) begin : p_fsm
		if (_sv2v_0)
			;
		state_d = state_q;
		alert_pd = 1'b0;
		alert_nd = 1'b1;
		ping_clr = 1'b0;
		alert_clr = 1'b0;
		(* full_case, parallel_case *)
		case (state_q)
			3'd0:
				if (alert_trigger || ping_trigger) begin
					state_d = (alert_trigger ? 3'd1 : 3'd3);
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd1:
				if (ack_level)
					state_d = 3'd2;
				else begin
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd2:
				if (!ack_level) begin
					state_d = 3'd5;
					alert_clr = 1'b1;
				end
			3'd3:
				if (ack_level)
					state_d = 3'd4;
				else begin
					alert_pd = 1'b1;
					alert_nd = 1'b0;
				end
			3'd4:
				if (!ack_level) begin
					ping_clr = 1'b1;
					state_d = 3'd5;
				end
			3'd5: state_d = 3'd6;
			3'd6: state_d = 3'd0;
			default: state_d = 3'd0;
		endcase
		if (sigint_detected) begin
			state_d = 3'd0;
			alert_pd = 1'b0;
			alert_nd = 1'b0;
			ping_clr = 1'b1;
			alert_clr = 1'b0;
		end
	end
	prim_sec_anchor_flop #(
		.Width(2),
		.ResetValue(2'b10)
	) u_prim_flop_alert(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i({alert_nd, alert_pd}),
		.q_o({alert_nq, alert_pq})
	);
	always @(posedge clk_i or negedge rst_ni) begin : p_reg
		if (!rst_ni) begin
			state_q <= 3'd0;
			alert_set_q <= 1'b0;
			alert_test_set_q <= 1'b0;
			ping_set_q <= 1'b0;
		end
		else begin
			state_q <= state_d;
			alert_set_q <= alert_set_d;
			alert_test_set_q <= alert_test_set_d;
			ping_set_q <= ping_set_d;
		end
	end
	initial _sv2v_0 = 0;
endmodule
module prim_diff_decode (
	clk_i,
	rst_ni,
	diff_pi,
	diff_ni,
	level_o,
	rise_o,
	fall_o,
	event_o,
	sigint_o
);
	reg _sv2v_0;
	parameter [0:0] AsyncOn = 1'b0;
	parameter [31:0] SkewCycles = 1;
	input clk_i;
	input rst_ni;
	input diff_pi;
	input diff_ni;
	output wire level_o;
	output reg rise_o;
	output reg fall_o;
	output wire event_o;
	output reg sigint_o;
	reg level_d;
	reg level_q;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	generate
		if (AsyncOn) begin : gen_async
			reg [1:0] state_d;
			reg [1:0] state_q;
			wire diff_p_edge;
			wire diff_n_edge;
			wire diff_check_ok;
			wire level;
			reg diff_pq;
			reg diff_nq;
			wire diff_pd;
			wire diff_nd;
			reg [prim_util_pkg_vbits(SkewCycles + 1) - 1:0] skew_cnt_d;
			reg [prim_util_pkg_vbits(SkewCycles + 1) - 1:0] skew_cnt_q;
			prim_flop_2sync #(
				.Width(1),
				.ResetValue(1'sb0)
			) i_sync_p(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(diff_pi),
				.q_o(diff_pd)
			);
			prim_flop_2sync #(
				.Width(1),
				.ResetValue(1'b1)
			) i_sync_n(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(diff_ni),
				.q_o(diff_nd)
			);
			assign diff_p_edge = diff_pq ^ diff_pd;
			assign diff_n_edge = diff_nq ^ diff_nd;
			assign diff_check_ok = diff_pd ^ diff_nd;
			assign level = diff_pd;
			assign level_o = level_d;
			assign event_o = rise_o | fall_o;
			always @(*) begin : p_diff_fsm
				if (_sv2v_0)
					;
				state_d = state_q;
				level_d = level_q;
				skew_cnt_d = skew_cnt_q;
				rise_o = 1'b0;
				fall_o = 1'b0;
				sigint_o = 1'b0;
				(* full_case, parallel_case *)
				case (state_q)
					2'd0:
						if (diff_check_ok) begin
							level_d = level;
							if (diff_p_edge && diff_n_edge) begin
								if (level)
									rise_o = 1'b1;
								else
									fall_o = 1'b1;
							end
						end
						else if (SkewCycles == 0) begin
							state_d = 2'd2;
							sigint_o = 1'b1;
						end
						else begin
							state_d = 2'd1;
							skew_cnt_d = 1;
						end
					2'd1:
						if (diff_check_ok) begin
							state_d = 2'd0;
							level_d = level;
							skew_cnt_d = 1'sb0;
							if (level)
								rise_o = 1'b1;
							else
								fall_o = 1'b1;
						end
						else if (skew_cnt_q < SkewCycles)
							skew_cnt_d = skew_cnt_q + 1;
						else begin
							state_d = 2'd2;
							sigint_o = 1'b1;
							skew_cnt_d = 1'sb0;
						end
					2'd2: begin
						sigint_o = 1'b1;
						if (diff_check_ok) begin
							state_d = 2'd0;
							sigint_o = 1'b0;
							level_d = level;
							if (level)
								rise_o = 1'b1;
							else
								fall_o = 1'b1;
						end
					end
					default:
						;
				endcase
			end
			always @(posedge clk_i or negedge rst_ni) begin : p_sync_reg
				if (!rst_ni) begin
					state_q <= 2'd0;
					diff_pq <= 1'b0;
					diff_nq <= 1'b1;
					level_q <= 1'b0;
					skew_cnt_q <= 1'sb0;
				end
				else begin
					state_q <= state_d;
					diff_pq <= diff_pd;
					diff_nq <= diff_nd;
					level_q <= level_d;
					skew_cnt_q <= skew_cnt_d;
				end
			end
		end
		else begin : gen_no_async
			reg diff_pq;
			wire diff_pd;
			assign diff_pd = diff_pi;
			wire [1:1] sv2v_tmp_u_xnor2_sigint_out_o;
			always @(*) sigint_o = sv2v_tmp_u_xnor2_sigint_out_o;
			prim_xnor2 #(.Width(1)) u_xnor2_sigint(
				.in0_i(diff_pi),
				.in1_i(diff_ni),
				.out_o(sv2v_tmp_u_xnor2_sigint_out_o)
			);
			assign level_o = (sigint_o ? level_q : diff_pi);
			wire [1:1] sv2v_tmp_AB662;
			assign sv2v_tmp_AB662 = level_o;
			always @(*) level_d = sv2v_tmp_AB662;
			wire [1:1] sv2v_tmp_8926B;
			assign sv2v_tmp_8926B = (~diff_pq & diff_pi) & ~sigint_o;
			always @(*) rise_o = sv2v_tmp_8926B;
			wire [1:1] sv2v_tmp_A5341;
			assign sv2v_tmp_A5341 = (diff_pq & ~diff_pi) & ~sigint_o;
			always @(*) fall_o = sv2v_tmp_A5341;
			assign event_o = rise_o | fall_o;
			always @(posedge clk_i or negedge rst_ni) begin : p_edge_reg
				if (!rst_ni) begin
					diff_pq <= 1'b0;
					level_q <= 1'b0;
				end
				else begin
					diff_pq <= diff_pd;
					level_q <= level_d;
				end
			end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module prim_lc_sync (
	clk_i,
	rst_ni,
	lc_en_i,
	lc_en_o
);
	parameter signed [31:0] NumCopies = 1;
	parameter [0:0] AsyncOn = 1;
	parameter [0:0] ResetValueIsOn = 0;
	input clk_i;
	input rst_ni;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_en_i;
	output wire [(NumCopies * lc_ctrl_pkg_TxWidth) - 1:0] lc_en_o;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	localparam [3:0] LcResetValue = (ResetValueIsOn ? sv2v_cast_BE429(4'b0101) : sv2v_cast_BE429(4'b1010));
	wire [3:0] lc_en;
	function automatic [3:0] sv2v_cast_4;
		input reg [3:0] inp;
		sv2v_cast_4 = inp;
	endfunction
	generate
		if (AsyncOn) begin : gen_flops
			prim_flop_2sync #(
				.Width(lc_ctrl_pkg_TxWidth),
				.ResetValue(sv2v_cast_4(LcResetValue))
			) u_prim_flop_2sync(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(lc_en_i),
				.q_o(lc_en)
			);
		end
		else begin : gen_no_flops
			reg [3:0] unused_logic;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					unused_logic <= sv2v_cast_BE429(4'b1010);
				else
					unused_logic <= lc_en_i;
			assign lc_en = lc_en_i;
		end
	endgenerate
	genvar _gv_j_1;
	generate
		for (_gv_j_1 = 0; _gv_j_1 < NumCopies; _gv_j_1 = _gv_j_1 + 1) begin : gen_buffs
			localparam j = _gv_j_1;
			wire [3:0] lc_en_out;
			genvar _gv_k_1;
			for (_gv_k_1 = 0; _gv_k_1 < lc_ctrl_pkg_TxWidth; _gv_k_1 = _gv_k_1 + 1) begin : gen_bits
				localparam k = _gv_k_1;
				prim_sec_anchor_buf u_prim_buf(
					.in_i(lc_en[k]),
					.out_o(lc_en_out[k])
				);
			end
			assign lc_en_o[j * lc_ctrl_pkg_TxWidth+:lc_ctrl_pkg_TxWidth] = sv2v_cast_BE429(lc_en_out);
		end
	endgenerate
endmodule
module prim_sync_reqack_data (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	req_chk_i,
	src_req_i,
	src_ack_o,
	dst_req_o,
	dst_ack_i,
	data_i,
	data_o
);
	parameter [31:0] Width = 1;
	parameter [0:0] EnRstChks = 1'b0;
	parameter [0:0] DataSrc2Dst = 1'b1;
	parameter [0:0] DataReg = 1'b0;
	parameter [0:0] EnRzHs = 1'b0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	input wire req_chk_i;
	input wire src_req_i;
	output wire src_ack_o;
	output wire dst_req_o;
	input wire dst_ack_i;
	input wire [Width - 1:0] data_i;
	output wire [Width - 1:0] data_o;
	prim_sync_reqack #(
		.EnRstChks(EnRstChks),
		.EnRzHs(EnRzHs)
	) u_prim_sync_reqack(
		.clk_src_i(clk_src_i),
		.rst_src_ni(rst_src_ni),
		.clk_dst_i(clk_dst_i),
		.rst_dst_ni(rst_dst_ni),
		.req_chk_i(req_chk_i),
		.src_req_i(src_req_i),
		.src_ack_o(src_ack_o),
		.dst_req_o(dst_req_o),
		.dst_ack_i(dst_ack_i)
	);
	generate
		if ((DataSrc2Dst == 1'b0) && (DataReg == 1'b1)) begin : gen_data_reg
			wire data_we;
			wire [Width - 1:0] data_d;
			reg [Width - 1:0] data_q;
			assign data_we = dst_req_o & dst_ack_i;
			assign data_d = data_i;
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					data_q <= 1'sb0;
				else if (data_we)
					data_q <= data_d;
			assign data_o = data_q;
		end
		else begin : gen_no_data_reg
			assign data_o = data_i;
		end
	endgenerate
endmodule
module prim_sync_reqack (
	clk_src_i,
	rst_src_ni,
	clk_dst_i,
	rst_dst_ni,
	req_chk_i,
	src_req_i,
	src_ack_o,
	dst_req_o,
	dst_ack_i
);
	reg _sv2v_0;
	parameter [0:0] EnRstChks = 1'b0;
	parameter [0:0] EnRzHs = 1'b0;
	input clk_src_i;
	input rst_src_ni;
	input clk_dst_i;
	input rst_dst_ni;
	input wire req_chk_i;
	input wire src_req_i;
	output reg src_ack_o;
	output reg dst_req_o;
	input wire dst_ack_i;
	wire unused_req_chk;
	assign unused_req_chk = req_chk_i;
	generate
		if (EnRzHs) begin : gen_rz_hs_protocol
			reg src_fsm_d;
			reg src_fsm_q;
			reg dst_fsm_d;
			reg dst_fsm_q;
			wire src_ack;
			reg dst_ack;
			reg src_req;
			wire dst_req;
			always @(*) begin : src_fsm
				if (_sv2v_0)
					;
				src_fsm_d = src_fsm_q;
				src_ack_o = 1'b0;
				src_req = 1'b0;
				(* full_case, parallel_case *)
				case (src_fsm_q)
					1'd0:
						if (!src_ack && src_req_i)
							src_fsm_d = 1'd1;
					1'd1: begin
						src_req = 1'b1;
						src_ack_o = src_ack;
						if (!src_req_i || src_ack)
							src_fsm_d = 1'd0;
					end
					default:
						;
				endcase
			end
			prim_flop_2sync #(.Width(1)) ack_sync(
				.clk_i(clk_src_i),
				.rst_ni(rst_src_ni),
				.d_i(dst_ack),
				.q_o(src_ack)
			);
			always @(posedge clk_src_i or negedge rst_src_ni)
				if (!rst_src_ni)
					src_fsm_q <= 1'd0;
				else
					src_fsm_q <= src_fsm_d;
			always @(*) begin : dst_fsm
				if (_sv2v_0)
					;
				dst_fsm_d = dst_fsm_q;
				dst_req_o = 1'b0;
				dst_ack = 1'b0;
				(* full_case, parallel_case *)
				case (dst_fsm_q)
					1'd0:
						if (dst_req) begin
							dst_req_o = 1'b1;
							if (dst_ack_i)
								dst_fsm_d = 1'd1;
						end
					1'd1: begin
						dst_ack = 1'b1;
						if (!dst_req)
							dst_fsm_d = 1'd0;
					end
					default:
						;
				endcase
			end
			prim_flop_2sync #(.Width(1)) req_sync(
				.clk_i(clk_dst_i),
				.rst_ni(rst_dst_ni),
				.d_i(src_req),
				.q_o(dst_req)
			);
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni)
					dst_fsm_q <= 1'd0;
				else
					dst_fsm_q <= dst_fsm_d;
		end
		else begin : gen_nrz_hs_protocol
			reg src_fsm_ns;
			reg src_fsm_cs;
			reg dst_fsm_ns;
			reg dst_fsm_cs;
			reg src_req_d;
			reg src_req_q;
			wire src_ack;
			reg dst_ack_d;
			reg dst_ack_q;
			wire dst_req;
			wire src_handshake;
			wire dst_handshake;
			assign src_handshake = src_req_i & src_ack_o;
			assign dst_handshake = dst_req_o & dst_ack_i;
			prim_flop_2sync #(.Width(1)) req_sync(
				.clk_i(clk_dst_i),
				.rst_ni(rst_dst_ni),
				.d_i(src_req_q),
				.q_o(dst_req)
			);
			prim_flop_2sync #(.Width(1)) ack_sync(
				.clk_i(clk_src_i),
				.rst_ni(rst_src_ni),
				.d_i(dst_ack_q),
				.q_o(src_ack)
			);
			always @(*) begin : src_fsm
				if (_sv2v_0)
					;
				src_fsm_ns = src_fsm_cs;
				src_req_d = src_req_q;
				src_ack_o = 1'b0;
				(* full_case, parallel_case *)
				case (src_fsm_cs)
					1'd0: begin
						src_req_d = src_req_i;
						src_ack_o = src_ack;
						if (src_handshake)
							src_fsm_ns = 1'd1;
					end
					1'd1: begin
						src_req_d = ~src_req_i;
						src_ack_o = ~src_ack;
						if (src_handshake)
							src_fsm_ns = 1'd0;
					end
					default:
						;
				endcase
			end
			always @(*) begin : dst_fsm
				if (_sv2v_0)
					;
				dst_fsm_ns = dst_fsm_cs;
				dst_req_o = 1'b0;
				dst_ack_d = dst_ack_q;
				(* full_case, parallel_case *)
				case (dst_fsm_cs)
					1'd0: begin
						dst_req_o = dst_req;
						dst_ack_d = dst_ack_i;
						if (dst_handshake)
							dst_fsm_ns = 1'd1;
					end
					1'd1: begin
						dst_req_o = ~dst_req;
						dst_ack_d = ~dst_ack_i;
						if (dst_handshake)
							dst_fsm_ns = 1'd0;
					end
					default:
						;
				endcase
			end
			always @(posedge clk_src_i or negedge rst_src_ni)
				if (!rst_src_ni) begin
					src_fsm_cs <= 1'd0;
					src_req_q <= 1'b0;
				end
				else begin
					src_fsm_cs <= src_fsm_ns;
					src_req_q <= src_req_d;
				end
			always @(posedge clk_dst_i or negedge rst_dst_ni)
				if (!rst_dst_ni) begin
					dst_fsm_cs <= 1'd0;
					dst_ack_q <= 1'b0;
				end
				else begin
					dst_fsm_cs <= dst_fsm_ns;
					dst_ack_q <= dst_ack_d;
				end
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module prim_trivium (
	clk_i,
	rst_ni,
	en_i,
	allow_lockup_i,
	seed_en_i,
	seed_done_o,
	seed_req_o,
	seed_ack_i,
	seed_key_i,
	seed_iv_i,
	seed_state_full_i,
	seed_state_partial_i,
	key_o,
	err_o
);
	reg _sv2v_0;
	parameter [0:0] BiviumVariant = 0;
	parameter [31:0] OutputWidth = 64;
	parameter [0:0] StrictLockupProtection = 1;
	parameter integer SeedType = 32'sd1;
	localparam [31:0] prim_trivium_pkg_PartialSeedWidthDefault = 32;
	parameter [31:0] PartialSeedWidth = prim_trivium_pkg_PartialSeedWidthDefault;
	localparam signed [31:0] prim_trivium_pkg_BiviumStateWidth = 177;
	localparam signed [31:0] prim_trivium_pkg_TriviumLfsrWidth = 288;
	localparam signed [31:0] prim_trivium_pkg_TriviumStateWidth = prim_trivium_pkg_TriviumLfsrWidth;
	localparam [31:0] StateWidth = (BiviumVariant ? prim_trivium_pkg_BiviumStateWidth : prim_trivium_pkg_TriviumStateWidth);
	localparam [287:0] prim_trivium_pkg_RndCnstTriviumLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstTriviumLfsrSeed = prim_trivium_pkg_RndCnstTriviumLfsrSeedDefault;
	localparam [StateWidth - 1:0] StateSeed = RndCnstTriviumLfsrSeed[StateWidth - 1:0];
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	input wire allow_lockup_i;
	input wire seed_en_i;
	output wire seed_done_o;
	output wire seed_req_o;
	input wire seed_ack_i;
	localparam [31:0] prim_trivium_pkg_KeyIvWidth = 80;
	input wire [79:0] seed_key_i;
	input wire [79:0] seed_iv_i;
	input wire [StateWidth - 1:0] seed_state_full_i;
	input wire [PartialSeedWidth - 1:0] seed_state_partial_i;
	output reg [OutputWidth - 1:0] key_o;
	output wire err_o;
	localparam [31:0] LastStatePartFractional = ((StateWidth % PartialSeedWidth) != 0 ? 1 : 0);
	localparam [31:0] NumStateParts = (StateWidth / PartialSeedWidth) + LastStatePartFractional;
	localparam [31:0] NumBitsLastPart = StateWidth - ((NumStateParts - 1) * PartialSeedWidth);
	localparam [31:0] LastStatePart = NumStateParts - 1;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] StateIdxWidth = prim_util_pkg_vbits(NumStateParts);
	wire [StateWidth - 1:0] state_d;
	reg [StateWidth - 1:0] state_q;
	reg [StateWidth - 1:0] state_update;
	reg [StateWidth - 1:0] state_seed;
	wire seed_req_d;
	reg seed_req_q;
	wire unused_seed;
	wire update;
	wire update_init;
	wire wr_en_seed;
	wire [StateIdxWidth - 1:0] state_idx_d;
	reg [StateIdxWidth - 1:0] state_idx_q;
	wire last_state_part;
	wire lockup;
	wire restore;
	assign update = en_i | update_init;
	assign wr_en_seed = seed_req_o & seed_ack_i;
	assign lockup = ~(|state_q);
	assign err_o = lockup;
	function automatic prim_trivium_pkg_bivium_generate_key_stream;
		input reg [176:0] state;
		reg key;
		reg add_65_92;
		reg add_161_176;
		reg unused_state;
		begin
			add_65_92 = state[65] ^ state[92];
			add_161_176 = state[161] ^ state[176];
			key = add_161_176 ^ add_65_92;
			unused_state = ^{state[175:162], state[160:93], state[91:66], state[64:0]};
			prim_trivium_pkg_bivium_generate_key_stream = key;
		end
	endfunction
	function automatic [176:0] prim_trivium_pkg_bivium_update_state;
		input reg [176:0] in;
		reg [176:0] out;
		reg mul_90_91;
		reg mul_174_175;
		reg add_65_92;
		reg add_161_176;
		begin
			mul_90_91 = in[90] & in[91];
			add_65_92 = in[65] ^ in[92];
			mul_174_175 = in[174] & in[175];
			add_161_176 = in[161] ^ in[176];
			out[0] = in[68] ^ (mul_174_175 ^ add_161_176);
			out[93] = (in[170] ^ add_65_92) ^ mul_90_91;
			out[92:1] = in[91:0];
			out[176:94] = in[175:93];
			prim_trivium_pkg_bivium_update_state = out;
		end
	endfunction
	function automatic prim_trivium_pkg_trivium_generate_key_stream;
		input reg [287:0] state;
		reg key;
		reg add_65_92;
		reg add_161_176;
		reg add_242_287;
		reg unused_state;
		begin
			add_65_92 = state[65] ^ state[92];
			add_161_176 = state[161] ^ state[176];
			add_242_287 = state[242] ^ state[287];
			key = (add_161_176 ^ add_65_92) ^ add_242_287;
			unused_state = ^{state[286:243], state[241:177], state[175:162], state[160:93], state[91:66], state[64:0]};
			prim_trivium_pkg_trivium_generate_key_stream = key;
		end
	endfunction
	function automatic [287:0] prim_trivium_pkg_trivium_update_state;
		input reg [287:0] in;
		reg [287:0] out;
		reg mul_90_91;
		reg mul_174_175;
		reg mul_285_286;
		reg add_65_92;
		reg add_161_176;
		reg add_242_287;
		begin
			mul_90_91 = in[90] & in[91];
			add_65_92 = in[65] ^ in[92];
			mul_174_175 = in[174] & in[175];
			add_161_176 = in[161] ^ in[176];
			mul_285_286 = in[285] & in[286];
			add_242_287 = in[242] ^ in[287];
			out[0] = in[68] ^ (mul_285_286 ^ add_242_287);
			out[93] = in[170] ^ (add_65_92 ^ mul_90_91);
			out[177] = in[263] ^ (mul_174_175 ^ add_161_176);
			out[92:1] = in[91:0];
			out[176:94] = in[175:93];
			out[287:178] = in[286:177];
			prim_trivium_pkg_trivium_update_state = out;
		end
	endfunction
	generate
		if (BiviumVariant) begin : gen_update_and_output_bivium
			always @(*) begin
				if (_sv2v_0)
					;
				state_update = state_q;
				begin : sv2v_autoblock_1
					reg [31:0] i;
					for (i = 0; i < OutputWidth; i = i + 1)
						begin
							key_o[i] = prim_trivium_pkg_bivium_generate_key_stream(state_update);
							state_update = prim_trivium_pkg_bivium_update_state(state_update);
						end
				end
			end
		end
		else begin : gen_update_and_output_trivium
			always @(*) begin
				if (_sv2v_0)
					;
				state_update = state_q;
				begin : sv2v_autoblock_2
					reg [31:0] i;
					for (i = 0; i < OutputWidth; i = i + 1)
						begin
							key_o[i] = prim_trivium_pkg_trivium_generate_key_stream(state_update);
							state_update = prim_trivium_pkg_trivium_update_state(state_update);
						end
				end
			end
		end
	endgenerate
	function automatic [176:0] prim_trivium_pkg_bivium_seed_key_iv;
		input reg [79:0] key;
		input reg [79:0] iv;
		reg [176:0] state;
		begin
			state = {4'b0000, iv, 13'b0000000000000, key};
			prim_trivium_pkg_bivium_seed_key_iv = state;
		end
	endfunction
	function automatic [287:0] prim_trivium_pkg_trivium_seed_key_iv;
		input reg [79:0] key;
		input reg [79:0] iv;
		reg [287:0] state;
		begin
			state = {115'b1110000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000, iv, 13'b0000000000000, key};
			prim_trivium_pkg_trivium_seed_key_iv = state;
		end
	endfunction
	generate
		if (SeedType == 32'sd0) begin : gen_seed_type_key_iv
			if (BiviumVariant) begin : gen_seed_type_key_iv_bivium
				wire [StateWidth:1] sv2v_tmp_55514;
				assign sv2v_tmp_55514 = prim_trivium_pkg_bivium_seed_key_iv(seed_key_i, seed_iv_i);
				always @(*) state_seed = sv2v_tmp_55514;
			end
			else begin : gen_seed_type_key_iv_trivium
				wire [StateWidth:1] sv2v_tmp_CF5CF;
				assign sv2v_tmp_CF5CF = prim_trivium_pkg_trivium_seed_key_iv(seed_key_i, seed_iv_i);
				always @(*) state_seed = sv2v_tmp_CF5CF;
			end
		end
		else if (SeedType == 32'sd1) begin : gen_seed_type_state_full
			wire [StateWidth:1] sv2v_tmp_E618C;
			assign sv2v_tmp_E618C = seed_state_full_i;
			always @(*) state_seed = sv2v_tmp_E618C;
		end
		else begin : gen_seed_type_state_partial
			always @(*) begin
				if (_sv2v_0)
					;
				state_seed = (!update ? state_q : state_update);
				if (last_state_part)
					state_seed[StateWidth - 1-:NumBitsLastPart] = seed_state_partial_i[NumBitsLastPart - 1:0];
				else
					state_seed[state_idx_q * PartialSeedWidth+:PartialSeedWidth] = seed_state_partial_i;
			end
		end
	endgenerate
	assign restore = lockup & (StrictLockupProtection | ~allow_lockup_i);
	assign state_d = (restore ? StateSeed : (wr_en_seed ? state_seed : (update ? state_update : state_q)));
	always @(posedge clk_i or negedge rst_ni) begin : state_reg
		if (!rst_ni)
			state_q <= StateSeed;
		else
			state_q <= state_d;
	end
	assign seed_req_d = (seed_en_i | seed_req_q) & (~seed_ack_i | ~last_state_part);
	always @(posedge clk_i or negedge rst_ni) begin : seed_req_reg
		if (!rst_ni)
			seed_req_q <= 1'b0;
		else
			seed_req_q <= seed_req_d;
	end
	assign seed_req_o = seed_en_i | seed_req_q;
	generate
		if (SeedType == 32'sd0) begin : gen_key_iv_seed_handling
			localparam [31:0] NumInitUpdatesFractional = (((StateWidth * 4) % OutputWidth) != 0 ? 1 : 0);
			localparam [31:0] NumInitUpdates = ((StateWidth * 4) / OutputWidth) + NumInitUpdatesFractional;
			localparam [31:0] LastInitUpdate = NumInitUpdates - 1;
			localparam [31:0] InitUpdatesCtrWidth = prim_util_pkg_vbits(NumInitUpdates);
			wire [InitUpdatesCtrWidth - 1:0] init_update_ctr_d;
			reg [InitUpdatesCtrWidth - 1:0] init_update_ctr_q;
			wire init_update_d;
			reg init_update_q;
			wire last_init_update;
			assign init_update_ctr_d = (wr_en_seed ? {InitUpdatesCtrWidth {1'sb0}} : (init_update_q ? init_update_ctr_q + 1'b1 : init_update_ctr_q));
			always @(posedge clk_i or negedge rst_ni) begin : init_update_ctr_reg
				if (!rst_ni)
					init_update_ctr_q <= 1'sb0;
				else
					init_update_ctr_q <= init_update_ctr_d;
			end
			assign last_init_update = init_update_ctr_q == LastInitUpdate[InitUpdatesCtrWidth - 1:0];
			assign init_update_d = (wr_en_seed ? 1'b1 : (last_init_update ? 1'b0 : init_update_q));
			always @(posedge clk_i or negedge rst_ni) begin : init_update_reg
				if (!rst_ni)
					init_update_q <= 1'b0;
				else
					init_update_q <= init_update_d;
			end
			assign update_init = init_update_q;
			assign seed_done_o = init_update_q & last_init_update;
			assign state_idx_d = 1'sb0;
			wire [StateIdxWidth:1] sv2v_tmp_C639F;
			assign sv2v_tmp_C639F = 1'sb0;
			always @(*) state_idx_q = sv2v_tmp_C639F;
			assign last_state_part = 1'b0;
			assign unused_seed = ^{seed_state_full_i, seed_state_partial_i, state_idx_d, state_idx_q, last_state_part};
		end
		else if (SeedType == 32'sd1) begin : gen_full_seed_handling
			assign seed_done_o = seed_req_o & seed_ack_i;
			assign update_init = 1'b0;
			assign state_idx_d = 1'sb0;
			wire [StateIdxWidth:1] sv2v_tmp_C639F;
			assign sv2v_tmp_C639F = 1'sb0;
			always @(*) state_idx_q = sv2v_tmp_C639F;
			assign last_state_part = 1'b1;
			assign unused_seed = ^{seed_key_i, seed_iv_i, seed_state_partial_i, state_idx_d, state_idx_q, last_state_part};
		end
		else begin : gen_partial_seed_handling
			assign last_state_part = state_idx_q == LastStatePart[StateIdxWidth - 1:0];
			assign state_idx_d = (wr_en_seed & last_state_part ? {StateIdxWidth {1'sb0}} : (wr_en_seed & ~last_state_part ? state_idx_q + 1'b1 : state_idx_q));
			always @(posedge clk_i or negedge rst_ni) begin : state_idx_reg
				if (!rst_ni)
					state_idx_q <= 1'sb0;
				else
					state_idx_q <= state_idx_d;
			end
			assign seed_done_o = (seed_req_o & seed_ack_i) & last_state_part;
			assign update_init = 1'b0;
			assign unused_seed = ^{seed_key_i, seed_iv_i, seed_state_full_i};
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module prim_packer_fifo (
	clk_i,
	rst_ni,
	clr_i,
	wvalid_i,
	wdata_i,
	wready_o,
	rvalid_o,
	rdata_o,
	rready_i,
	depth_o
);
	parameter signed [31:0] InW = 32;
	parameter signed [31:0] OutW = 8;
	parameter [0:0] ClearOnRead = 1'b1;
	localparam signed [31:0] MaxW = (InW > OutW ? InW : OutW);
	localparam signed [31:0] MinW = (InW < OutW ? InW : OutW);
	localparam signed [31:0] DepthW = $clog2(MaxW / MinW);
	input wire clk_i;
	input wire rst_ni;
	input wire clr_i;
	input wire wvalid_i;
	input wire [InW - 1:0] wdata_i;
	output wire wready_o;
	output wire rvalid_o;
	output wire [OutW - 1:0] rdata_o;
	input wire rready_i;
	output wire [DepthW:0] depth_o;
	localparam [31:0] WidthRatio = MaxW / MinW;
	localparam [DepthW:0] FullDepth = WidthRatio[DepthW:0];
	localparam [DepthW:0] DepthOne = 1;
	wire load_data;
	wire clear_data;
	wire clear_status;
	reg [DepthW:0] depth_q;
	wire [DepthW:0] depth_d;
	reg [MaxW - 1:0] data_q;
	wire [MaxW - 1:0] data_d;
	reg clr_q;
	wire clr_d;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			depth_q <= 1'sb0;
			data_q <= 1'sb0;
			clr_q <= 1'b1;
		end
		else begin
			depth_q <= depth_d;
			data_q <= data_d;
			clr_q <= clr_d;
		end
	assign clr_d = clr_i;
	assign depth_o = depth_q;
	generate
		if (InW < OutW) begin : gen_pack_mode
			wire [MaxW - 1:0] wdata_shifted;
			assign wdata_shifted = {{OutW - InW {1'b0}}, wdata_i} << (depth_q * InW);
			assign clear_status = (rready_i && rvalid_o) || clr_q;
			assign clear_data = (ClearOnRead && clear_status) || clr_q;
			assign load_data = wvalid_i && wready_o;
			assign depth_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (load_data ? depth_q + DepthOne : depth_q));
			assign data_d = (clear_data ? {MaxW {1'sb0}} : (load_data ? wdata_shifted | (depth_q == 0 ? {MaxW {1'sb0}} : data_q) : data_q));
			assign wready_o = (depth_q != FullDepth) && !clr_q;
			assign rdata_o = data_q;
			assign rvalid_o = (depth_q == FullDepth) && !clr_q;
		end
		else begin : gen_unpack_mode
			wire [MaxW - 1:0] rdata_shifted;
			wire pull_data;
			reg [DepthW:0] ptr_q;
			wire [DepthW:0] ptr_d;
			wire [DepthW:0] lsb_is_one;
			wire [DepthW:0] max_value;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					ptr_q <= 1'sb0;
				else
					ptr_q <= ptr_d;
			assign lsb_is_one = {{DepthW {1'b0}}, 1'b1};
			assign max_value = FullDepth;
			assign rdata_shifted = data_q >> (ptr_q * OutW);
			assign clear_status = (rready_i && (depth_q == lsb_is_one)) || clr_q;
			assign clear_data = (ClearOnRead && clear_status) || clr_q;
			assign load_data = wvalid_i && wready_o;
			assign pull_data = rvalid_o && rready_i;
			assign depth_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (load_data ? max_value : (pull_data ? depth_q - DepthOne : depth_q)));
			assign ptr_d = (clear_status ? {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}} : (pull_data ? ptr_q + DepthOne : ptr_q));
			assign data_d = (clear_data ? {MaxW {1'sb0}} : (load_data ? wdata_i : data_q));
			assign wready_o = (depth_q == {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}}) && !clr_q;
			assign rdata_o = rdata_shifted[OutW - 1:0];
			assign rvalid_o = (depth_q != {(DepthW >= 0 ? DepthW + 1 : 1 - DepthW) {1'sb0}}) && !clr_q;
			if (InW > OutW) begin : gen_unused
				wire [(MaxW - MinW) - 1:0] unused_rdata_shifted;
				assign unused_rdata_shifted = rdata_shifted[MaxW - 1:MinW];
			end
		end
	endgenerate
endmodule
module prim_lfsr (
	clk_i,
	rst_ni,
	seed_en_i,
	seed_i,
	lfsr_en_i,
	entropy_i,
	state_o
);
	reg _sv2v_0;
	parameter LfsrType = "GAL_XOR";
	parameter [31:0] LfsrDw = 32;
	localparam [31:0] LfsrIdxDw = $clog2(LfsrDw);
	parameter [31:0] EntropyDw = 8;
	parameter [31:0] StateOutDw = 8;
	function automatic signed [LfsrDw - 1:0] sv2v_cast_C2EBB_signed;
		input reg signed [LfsrDw - 1:0] inp;
		sv2v_cast_C2EBB_signed = inp;
	endfunction
	parameter [LfsrDw - 1:0] DefaultSeed = sv2v_cast_C2EBB_signed(1);
	parameter [LfsrDw - 1:0] CustomCoeffs = 1'sb0;
	parameter [0:0] StatePermEn = 1'b0;
	parameter [(LfsrDw * LfsrIdxDw) - 1:0] StatePerm = 1'sb0;
	parameter [0:0] MaxLenSVA = 1'b1;
	parameter [0:0] LockupSVA = 1'b1;
	parameter [0:0] ExtSeedSVA = 1'b1;
	parameter [0:0] NonLinearOut = 1'b0;
	input clk_i;
	input rst_ni;
	input seed_en_i;
	input [LfsrDw - 1:0] seed_i;
	input lfsr_en_i;
	input [EntropyDw - 1:0] entropy_i;
	output wire [StateOutDw - 1:0] state_o;
	localparam [31:0] LUT_OFF = 3;
	localparam [27887:0] LFSR_COEFFS = 27888'h600000000000000000000000000000000000000000c0000000000000000000000000000000000000000140000000000000000000000000000000000000000300000000000000000000000000000000000000000600000000000000000000000000000000000000000b800000000000000000000000000000000000000011000000000000000000000000000000000000000024000000000000000000000000000000000000000050000000000000000000000000000000000000000082900000000000000000000000000000000000000100d00000000000000000000000000000000000000201500000000000000000000000000000000000000600000000000000000000000000000000000000000d008000000000000000000000000000000000000012000000000000000000000000000000000000000020400000000000000000000000000000000000000040023000000000000000000000000000000000000090000000000000000000000000000000000000000140000000000000000000000000000000000000000300000000000000000000000000000000000000000420000000000000000000000000000000000000000e1000000000000000000000000000000000000000120000000000000000000000000000000000000000200002300000000000000000000000000000000000400001300000000000000000000000000000000000900000000000000000000000000000000000000001400000000000000000000000000000000000000002000002900000000000000000000000000000000004800000000000000000000000000000000000000008020000300000000000000000000000000000000010008000000000000000000000000000000000000020400000300000000000000000000000000000000050000000000000000000000000000000000000000080100000000000000000000000000000000000000100000001f00000000000000000000000000000000200000003100000000000000000000000000000000440000000000000000000000000000000000000000a0001400000000000000000000000000000000000120000000000000000000000000000000000000000300000c00000000000000000000000000000000000630000000000000000000000000000000000000000c00000300000000000000000000000000000000001b0000000000000000000000000000000000000000300003000000000000000000000000000000000000420000000000000000000000000000000000000000c00000180000000000000000000000000000000001008000000000000000000000000000000000000003000000c00000000000000000000000000000000006000c000000000000000000000000000000000000090000000000000000000000000000000000000000180030000000000000000000000000000000000000300000000300000000000000000000000000000000400000400000000000000000000000000000000000c0000600000000000000000000000000000000000102000000000000000000000000000000000000000200004000000000000000000000000000000000000600003000000000000000000000000000000000000c0000000000000000000000000000000000000000180030000000000000000000000000000000000000300000000000003000000000000000000000000000600000000000000000000000000000000000000000d80000000000000000000000000000000000000001000040000000000000000000000000000000000003018000000000000000000000000000000000000006030000000000000000000000000000000000000008040000000000000000000000000000000000000014000002800000000000000000000000000000000030006000000000000000000000000000000000000041000000000000000000000000000000000000000082000000000104000000000000000000000000000100000080000000000000000000000000000000000300060000000000000000000000000000000000000601800000000000000000000000000000000000000c0000000180000000000000000000000000000000180000006000000000000000000000000000000000300006000000000000000000000000000000000000402000000000000000000000000000000000000000c000000006000000000000000000000000000000011000000000000000000000000000000000000000024000000048000000000000000000000000000000060000000000300000000000000000000000000000080040000000000000000000000000000000000000180000030000000000000000000000000000000000300300000000000000000000000000000000000000400200000000000000000000000000000000000000c000000000000000018000000000000000000000010000000004000000000000000000000000000000030000c000000000000000000000000000000000000600000000000000000000c00000000000000000000c00c0000000000000000000000000000000000000140000000000000000000000000000000000000000200001000000000000000000000000000000000000400800000000000000000000000000000000000000a00000000001400000000000000000000000000001040000000000000000000000000000000000000002004000000000000000000000000000000000000005000000000028000000000000000000000000000008000000004000000000000000000000000000000018600000000000000000000000000000000000000030000000000000000c000000000000000000000000402000000000000000000000000000000000000000c03000000000000000000000000000000000000001000100000000000000000000000000000000000002000400000000000000000000000000000000000005000000000000000a000000000000000000000000080000001000000000000000000000000000000000186000000000000000000000000000000000000000300300000000000000000000000000000000000000401000000000000000000000000000000000000000a0000000001400000000000000000000000000000100800000000000000000000000000000000000000300000000000000000001800000000000000000000600180000000000000000000000000000000000000c00000000000000003000000000000000000000001400050000000000000000000000000000000000002000000010000000000000000000000000000000004040000000000000000000000000000000000000008100000000000000000000000001020000000000010000400000000000000000000000000000000000030000000000000060000000000000000000000000050000000000000000000000000000000000000000080000000040000000000000000000000000000000180000000000000000000000000300000000000000300000000300000000000000000000000000000000600000000000000000000000000000000000000000a0000014000000000000000000000000000000000108000000000000000000000000000000000000000240000000000000000000000000000000000000000600000000000c0000000000000000000000000000080000004000000000000000000000000000000000180000000000030000000000000000000000000000200000000000001000000000000000000000000000400800000000000000000000000000000000000000c00000000000000000000000000000060000000001000008000000000000000000000000000000000003060000000000000000000000000000000000000004a400000000000000000000000000000000000000080000004000000000000000000000000000000000180000003000000000000000000000000000000000200001000000000000000000000000000000000000600006000000000000000000000000000000000000c0000000000000000600000000000000000000000100000000000010000000000000000000000000000300000000000000600000000000000000000000000600000000300000000000000000000000000000000800000100000000000000000000000000000000001800000000000000000000000000c0000000000000200000000000010000000000000000000000000000480000000000000000000000000000000000000000c000000000000000600000000000000000000000018000000000000000000000000000000000000000028000000000000000000000000000000500000000060000000c000000000000000000000000000000000c00000000000000000000000000018000000000001800000600000000000000000000000000000000003000000c0000000000000000000000000000000000400000008000000000000000000000000000000000c0003000000000000000000000000000000000000100004000000000000000000000000000000000000300000000000000000000060000000000000000000600000000000000c00000000000000000000000000c00600000000000000000000000000000000000001800000060000000000000000000000000000000003000000000c0000000000000000000000000000000410000000000000000000000000000000000000000a00140000000000000000000000000000000000000;
	wire lockup;
	wire [LfsrDw - 1:0] lfsr_d;
	reg [LfsrDw - 1:0] lfsr_q;
	wire [LfsrDw - 1:0] next_lfsr_state;
	wire [LfsrDw - 1:0] coeffs;
	localparam [LfsrDw - 1:0] DefaultSeedLocal = DefaultSeed;
	function automatic [LfsrDw - 1:0] sv2v_cast_C2EBB;
		input reg [LfsrDw - 1:0] inp;
		sv2v_cast_C2EBB = inp;
	endfunction
	function automatic [63:0] sv2v_cast_64;
		input reg [63:0] inp;
		sv2v_cast_64 = inp;
	endfunction
	generate
		if (sv2v_cast_64(LfsrType) == 64'd20056519619399506) begin : gen_gal_xor
			if (CustomCoeffs > 0) begin : gen_custom
				assign coeffs = CustomCoeffs[LfsrDw - 1:0];
			end
			else begin : gen_lut
				assign coeffs = LFSR_COEFFS[((165 - (LfsrDw - LUT_OFF)) * 168) + (LfsrDw - 1)-:LfsrDw];
			end
			assign next_lfsr_state = (sv2v_cast_C2EBB(entropy_i) ^ ({LfsrDw {lfsr_q[0]}} & coeffs)) ^ (lfsr_q >> 1);
			assign lockup = ~(|lfsr_q);
		end
		else if (sv2v_cast_64(LfsrType) == "FIB_XNOR") begin : gen_fib_xnor
			if (CustomCoeffs > 0) begin : gen_custom
				assign coeffs = CustomCoeffs[LfsrDw - 1:0];
			end
			else begin : gen_lut
				assign coeffs = LFSR_COEFFS[((165 - (LfsrDw - LUT_OFF)) * 168) + (LfsrDw - 1)-:LfsrDw];
			end
			assign next_lfsr_state = sv2v_cast_C2EBB(entropy_i) ^ {lfsr_q[LfsrDw - 2:0], ~(^(lfsr_q & coeffs))};
			assign lockup = &lfsr_q;
		end
		else begin : gen_unknown_type
			assign coeffs = 1'sb0;
			assign next_lfsr_state = 1'sb0;
			assign lockup = 1'b0;
		end
	endgenerate
	assign lfsr_d = (seed_en_i ? seed_i : (lfsr_en_i && lockup ? DefaultSeedLocal : (lfsr_en_i ? next_lfsr_state : lfsr_q)));
	wire [LfsrDw - 1:0] sbox_out;
	localparam [63:0] prim_cipher_pkg_PRINCE_SBOX4 = 64'h4d5e087619ca23fb;
	generate
		if (NonLinearOut) begin : gen_out_non_linear
			localparam signed [31:0] NumSboxes = LfsrDw / 4;
			wire [((4 * NumSboxes) * LfsrIdxDw) - 1:0] matrix_indices;
			genvar _gv_j_2;
			for (_gv_j_2 = 0; _gv_j_2 < LfsrDw; _gv_j_2 = _gv_j_2 + 1) begin : gen_input_idx_map
				localparam j = _gv_j_2;
				assign matrix_indices[(((j / NumSboxes) * NumSboxes) + (j % NumSboxes)) * LfsrIdxDw+:LfsrIdxDw] = j;
			end
			reg [((4 * NumSboxes) * LfsrIdxDw) - 1:0] matrix_rotrev_indices;
			function automatic [(NumSboxes * LfsrIdxDw) - 1:0] lrotcol;
				input reg [(NumSboxes * LfsrIdxDw) - 1:0] col;
				input integer shift;
				reg [(NumSboxes * LfsrIdxDw) - 1:0] out;
				begin
					begin : sv2v_autoblock_1
						reg signed [31:0] k;
						for (k = 0; k < NumSboxes; k = k + 1)
							out[((k + shift) % NumSboxes) * LfsrIdxDw+:LfsrIdxDw] = col[k * LfsrIdxDw+:LfsrIdxDw];
					end
					lrotcol = out;
				end
			endfunction
			function automatic [(NumSboxes * LfsrIdxDw) - 1:0] revcol;
				input reg [(NumSboxes * LfsrIdxDw) - 1:0] col;
				reg [(0 + (NumSboxes * LfsrIdxDw)) - 1:0] _sv2v_strm_45112_inp;
				reg [(0 + (NumSboxes * LfsrIdxDw)) - 1:0] _sv2v_strm_45112_out;
				integer _sv2v_strm_45112_idx;
				begin
					_sv2v_strm_45112_inp = {col};
					for (_sv2v_strm_45112_idx = 0; _sv2v_strm_45112_idx <= ((0 + (NumSboxes * LfsrIdxDw)) - LfsrIdxDw); _sv2v_strm_45112_idx = _sv2v_strm_45112_idx + LfsrIdxDw)
						_sv2v_strm_45112_out[((0 + (NumSboxes * LfsrIdxDw)) - 1) - _sv2v_strm_45112_idx-:LfsrIdxDw] = _sv2v_strm_45112_inp[_sv2v_strm_45112_idx+:LfsrIdxDw];
					if (((0 + (NumSboxes * LfsrIdxDw)) % LfsrIdxDw) > 0)
						_sv2v_strm_45112_out[0+:(0 + (NumSboxes * LfsrIdxDw)) % LfsrIdxDw] = _sv2v_strm_45112_inp[_sv2v_strm_45112_idx+:(0 + (NumSboxes * LfsrIdxDw)) % LfsrIdxDw];
					revcol = ((0 + (NumSboxes * LfsrIdxDw)) <= (NumSboxes * LfsrIdxDw) ? _sv2v_strm_45112_out << ((NumSboxes * LfsrIdxDw) - (0 + (NumSboxes * LfsrIdxDw))) : _sv2v_strm_45112_out >> ((0 + (NumSboxes * LfsrIdxDw)) - (NumSboxes * LfsrIdxDw)));
				end
			endfunction
			always @(*) begin : p_rotrev
				if (_sv2v_0)
					;
				matrix_rotrev_indices[0+:LfsrIdxDw * NumSboxes] = matrix_indices[0+:LfsrIdxDw * NumSboxes];
				matrix_rotrev_indices[LfsrIdxDw * NumSboxes+:LfsrIdxDw * NumSboxes] = lrotcol(matrix_indices[LfsrIdxDw * NumSboxes+:LfsrIdxDw * NumSboxes], NumSboxes / 2);
				matrix_rotrev_indices[LfsrIdxDw * (2 * NumSboxes)+:LfsrIdxDw * NumSboxes] = revcol(matrix_indices[LfsrIdxDw * (2 * NumSboxes)+:LfsrIdxDw * NumSboxes]);
				matrix_rotrev_indices[LfsrIdxDw * (3 * NumSboxes)+:LfsrIdxDw * NumSboxes] = revcol(lrotcol(matrix_indices[LfsrIdxDw * (3 * NumSboxes)+:LfsrIdxDw * NumSboxes], 1));
			end
			wire [(LfsrDw * LfsrIdxDw) - 1:0] sbox_in_indices;
			genvar _gv_k_2;
			for (_gv_k_2 = 0; _gv_k_2 < LfsrDw; _gv_k_2 = _gv_k_2 + 1) begin : gen_reverse_upper
				localparam k = _gv_k_2;
				assign sbox_in_indices[k * LfsrIdxDw+:LfsrIdxDw] = matrix_rotrev_indices[(((k % 4) * NumSboxes) + (k / 4)) * LfsrIdxDw+:LfsrIdxDw];
			end
			genvar _gv_k_3;
			for (_gv_k_3 = 0; _gv_k_3 < NumSboxes; _gv_k_3 = _gv_k_3 + 1) begin : gen_sboxes
				localparam k = _gv_k_3;
				wire [3:0] sbox_in;
				assign sbox_in = {lfsr_q[sbox_in_indices[((k * 4) + 3) * LfsrIdxDw+:LfsrIdxDw]], lfsr_q[sbox_in_indices[((k * 4) + 2) * LfsrIdxDw+:LfsrIdxDw]], lfsr_q[sbox_in_indices[((k * 4) + 1) * LfsrIdxDw+:LfsrIdxDw]], lfsr_q[sbox_in_indices[((k * 4) + 0) * LfsrIdxDw+:LfsrIdxDw]]};
				assign sbox_out[k * 4+:4] = prim_cipher_pkg_PRINCE_SBOX4[sbox_in * 4+:4];
			end
		end
		else begin : gen_out_passthru
			assign sbox_out = lfsr_q;
		end
	endgenerate
	function automatic [StateOutDw - 1:0] sv2v_cast_7F415;
		input reg [StateOutDw - 1:0] inp;
		sv2v_cast_7F415 = inp;
	endfunction
	generate
		if (StatePermEn) begin : gen_state_perm
			genvar _gv_k_4;
			for (_gv_k_4 = 0; _gv_k_4 < StateOutDw; _gv_k_4 = _gv_k_4 + 1) begin : gen_perm_loop
				localparam k = _gv_k_4;
				assign state_o[k] = sbox_out[StatePerm[k * LfsrIdxDw+:LfsrIdxDw]];
			end
			if (LfsrDw > StateOutDw) begin : gen_tieoff_unused
				wire unused_sbox_out;
				assign unused_sbox_out = ^sbox_out;
			end
		end
		else begin : gen_no_state_perm
			assign state_o = sv2v_cast_7F415(sbox_out);
		end
	endgenerate
	always @(posedge clk_i or negedge rst_ni) begin : p_reg
		if (!rst_ni)
			lfsr_q <= DefaultSeedLocal;
		else
			lfsr_q <= lfsr_d;
	end
	initial _sv2v_0 = 0;
endmodule
module prim_cdc_rand_delay (
	clk_i,
	rst_ni,
	prev_data_i,
	src_data_i,
	dst_data_o
);
	parameter signed [31:0] DataWidth = 1;
	parameter [0:0] Enable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire [DataWidth - 1:0] prev_data_i;
	input wire [DataWidth - 1:0] src_data_i;
	output wire [DataWidth - 1:0] dst_data_o;
	assign dst_data_o = src_data_i;
endmodule
module prim_reg_we_check (
	clk_i,
	rst_ni,
	oh_i,
	en_i,
	err_o
);
	parameter [31:0] OneHotWidth = 32;
	input clk_i;
	input rst_ni;
	input wire [OneHotWidth - 1:0] oh_i;
	input wire en_i;
	output wire err_o;
	wire [OneHotWidth - 1:0] oh_buf;
	prim_buf #(.Width(OneHotWidth)) u_prim_buf(
		.in_i(oh_i),
		.out_o(oh_buf)
	);
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] sv2v_uu_u_prim_onehot_check_AddrWidth = prim_util_pkg_vbits(OneHotWidth);
	localparam [sv2v_uu_u_prim_onehot_check_AddrWidth - 1:0] sv2v_uu_u_prim_onehot_check_ext_addr_i_0 = 1'sb0;
	prim_onehot_check #(
		.OneHotWidth(OneHotWidth),
		.AddrWidth(prim_util_pkg_vbits(OneHotWidth)),
		.EnableCheck(1),
		.AddrCheck(0),
		.StrictCheck(0)
	) u_prim_onehot_check(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.oh_i(oh_buf),
		.addr_i(sv2v_uu_u_prim_onehot_check_ext_addr_i_0),
		.en_i(en_i),
		.err_o(err_o)
	);
endmodule
module prim_onehot_check (
	clk_i,
	rst_ni,
	oh_i,
	addr_i,
	en_i,
	err_o
);
	parameter [31:0] AddrWidth = 5;
	parameter [31:0] OneHotWidth = 2 ** AddrWidth;
	parameter [0:0] AddrCheck = 1;
	parameter [0:0] EnableCheck = 1;
	parameter [0:0] StrictCheck = 1;
	parameter [0:0] EnableAlertTriggerSVA = 1;
	input clk_i;
	input rst_ni;
	input wire [OneHotWidth - 1:0] oh_i;
	input wire [AddrWidth - 1:0] addr_i;
	input wire en_i;
	output wire err_o;
	localparam signed [31:0] NumLevels = AddrWidth;
	wire [(2 ** (NumLevels + 1)) - 2:0] or_tree;
	wire [(2 ** (NumLevels + 1)) - 2:0] and_tree;
	wire [(2 ** (NumLevels + 1)) - 2:0] err_tree;
	genvar _gv_level_1;
	generate
		for (_gv_level_1 = 0; _gv_level_1 < (NumLevels + 1); _gv_level_1 = _gv_level_1 + 1) begin : gen_tree
			localparam level = _gv_level_1;
			localparam signed [31:0] Base0 = (2 ** level) - 1;
			localparam signed [31:0] Base1 = (2 ** (level + 1)) - 1;
			genvar _gv_offset_1;
			for (_gv_offset_1 = 0; _gv_offset_1 < (2 ** level); _gv_offset_1 = _gv_offset_1 + 1) begin : gen_level
				localparam offset = _gv_offset_1;
				localparam signed [31:0] Pa = Base0 + offset;
				localparam signed [31:0] C0 = Base1 + (2 * offset);
				localparam signed [31:0] C1 = (Base1 + (2 * offset)) + 1;
				if (level == NumLevels) begin : gen_leafs
					if (offset < OneHotWidth) begin : gen_assign
						assign or_tree[Pa] = oh_i[offset];
						assign and_tree[Pa] = oh_i[offset];
					end
					else begin : gen_tie_off
						assign or_tree[Pa] = 1'b0;
						assign and_tree[Pa] = 1'b0;
					end
					assign err_tree[Pa] = 1'b0;
				end
				else begin : gen_nodes
					assign or_tree[Pa] = or_tree[C0] || or_tree[C1];
					assign and_tree[Pa] = (!addr_i[(AddrWidth - 1) - level] && and_tree[C0]) || (addr_i[(AddrWidth - 1) - level] && and_tree[C1]);
					assign err_tree[Pa] = ((or_tree[C0] && or_tree[C1]) || err_tree[C0]) || err_tree[C1];
				end
			end
		end
	endgenerate
	wire enable_err;
	wire addr_err;
	wire oh0_err;
	assign err_o = (oh0_err || enable_err) || addr_err;
	assign oh0_err = err_tree[0];
	generate
		if (EnableCheck) begin : gen_enable_check
			if (StrictCheck) begin : gen_strict
				assign enable_err = or_tree[0] ^ en_i;
			end
			else begin : gen_not_strict
				assign enable_err = !en_i && or_tree[0];
			end
		end
		else begin : gen_no_enable_check
			wire unused_or_tree;
			assign unused_or_tree = ^or_tree;
			assign enable_err = 1'b0;
		end
		if (AddrCheck) begin : gen_addr_check_strict
			assign addr_err = or_tree[0] ^ and_tree[0];
		end
		else begin : gen_no_addr_check_strict
			wire unused_and_tree;
			assign unused_and_tree = ^and_tree;
			assign addr_err = 1'b0;
		end
	endgenerate
endmodule
module prim_onehot_mux (
	clk_i,
	rst_ni,
	in_i,
	sel_i,
	out_o
);
	parameter signed [31:0] Width = 32;
	parameter signed [31:0] Inputs = 8;
	input clk_i;
	input rst_ni;
	input wire [(Inputs * Width) - 1:0] in_i;
	input wire [Inputs - 1:0] sel_i;
	output wire [Width - 1:0] out_o;
	wire [Inputs - 1:0] in_mux [0:Width - 1];
	genvar _gv_b_1;
	generate
		for (_gv_b_1 = 0; _gv_b_1 < Width; _gv_b_1 = _gv_b_1 + 1) begin : g_in_mux_outer
			localparam b = _gv_b_1;
			wire [Inputs - 1:0] out_mux_bits;
			genvar _gv_i_1;
			for (_gv_i_1 = 0; _gv_i_1 < Inputs; _gv_i_1 = _gv_i_1 + 1) begin : g_in_mux_inner
				localparam i = _gv_i_1;
				assign in_mux[b][i] = in_i[(((Inputs - 1) - i) * Width) + b];
			end
			prim_and2 #(.Width(Inputs)) u_mux_bit_and(
				.in0_i(in_mux[b]),
				.in1_i(sel_i),
				.out_o(out_mux_bits)
			);
			assign out_o[b] = |out_mux_bits;
		end
	endgenerate
	wire unused_clk;
	wire unused_rst_n;
	assign unused_clk = clk_i;
	assign unused_rst_n = rst_ni;
endmodule
module prim_blanker (
	in_i,
	en_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input wire [Width - 1:0] in_i;
	input wire en_i;
	output wire [Width - 1:0] out_o;
	prim_and2 #(.Width(Width)) u_blank_and(
		.in0_i(in_i),
		.in1_i({Width {en_i}}),
		.out_o(out_o)
	);
endmodule
module prim_sec_anchor_buf (
	in_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in_i;
	output wire [Width - 1:0] out_o;
	prim_buf #(.Width(Width)) u_secure_anchor_buf(
		.in_i(in_i),
		.out_o(out_o)
	);
endmodule
module prim_sec_anchor_flop (
	clk_i,
	rst_ni,
	d_i,
	q_o
);
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 0;
	input clk_i;
	input rst_ni;
	input [Width - 1:0] d_i;
	output wire [Width - 1:0] q_o;
	prim_flop #(
		.Width(Width),
		.ResetValue(ResetValue)
	) u_secure_anchor_flop(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(d_i),
		.q_o(q_o)
	);
endmodule
module prim_gf_mult (
	clk_i,
	rst_ni,
	req_i,
	operand_a_i,
	operand_b_i,
	ack_pre_o,
	ack_o,
	prod_o
);
	parameter signed [31:0] Width = 32;
	parameter signed [31:0] StagesPerCycle = Width;
	function automatic [Width - 1:0] sv2v_cast_62596;
		input reg [Width - 1:0] inp;
		sv2v_cast_62596 = inp;
	endfunction
	parameter [Width - 1:0] IPoly = (((((sv2v_cast_62596(1'b1) << 15) | (sv2v_cast_62596(1'b1) << 9)) | (sv2v_cast_62596(1'b1) << 7)) | (sv2v_cast_62596(1'b1) << 4)) | (sv2v_cast_62596(1'b1) << 3)) | (sv2v_cast_62596(1'b1) << 0);
	parameter [0:0] OutputZeroUntilAck = 1'b0;
	input clk_i;
	input rst_ni;
	input req_i;
	input [Width - 1:0] operand_a_i;
	input [Width - 1:0] operand_b_i;
	output wire ack_pre_o;
	output wire ack_o;
	output wire [Width - 1:0] prod_o;
	localparam signed [31:0] Loops = Width / StagesPerCycle;
	localparam signed [31:0] CntWidth = (Loops == 1 ? 1 : $clog2(Loops));
	wire [(Loops * StagesPerCycle) - 1:0] reformat_data;
	wire [StagesPerCycle - 1:0] op_i_slice;
	wire [(StagesPerCycle * Width) - 1:0] matrix;
	reg [Width - 1:0] vector;
	reg [CntWidth - 1:0] cnt;
	wire first;
	reg [Width - 1:0] prod_q;
	wire [Width - 1:0] prod_d;
	wire [Width - 1:0] out_int;
	assign reformat_data = operand_b_i;
	assign op_i_slice = reformat_data[cnt * StagesPerCycle+:StagesPerCycle];
	assign first = cnt == 0;
	function automatic signed [31:0] sv2v_cast_32_signed;
		input reg signed [31:0] inp;
		sv2v_cast_32_signed = inp;
	endfunction
	generate
		if (StagesPerCycle == Width) begin : gen_all_combo
			assign ack_o = 1'b1;
			wire [CntWidth:1] sv2v_tmp_594CD;
			assign sv2v_tmp_594CD = 1'sb0;
			always @(*) cnt = sv2v_tmp_594CD;
			wire [Width:1] sv2v_tmp_8D786;
			assign sv2v_tmp_8D786 = 1'sb0;
			always @(*) prod_q = sv2v_tmp_8D786;
			wire [Width:1] sv2v_tmp_96718;
			assign sv2v_tmp_96718 = 1'sb0;
			always @(*) vector = sv2v_tmp_96718;
		end
		else begin : gen_decomposed
			assign ack_pre_o = sv2v_cast_32_signed(cnt) == (Loops - 2);
			assign ack_o = sv2v_cast_32_signed(cnt) == (Loops - 1);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					cnt <= 1'sb0;
				else if (req_i && ack_o)
					cnt <= 1'sb0;
				else if (req_i && (sv2v_cast_32_signed(cnt) < (Loops - 1)))
					cnt <= cnt + 1'b1;
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni) begin
					prod_q <= 1'sb0;
					vector <= 1'sb0;
				end
				else if (ack_o) begin
					prod_q <= 1'sb0;
					vector <= 1'sb0;
				end
				else if (req_i) begin
					prod_q <= prod_d;
					vector <= matrix[(StagesPerCycle - 1) * Width+:Width];
				end
		end
	endgenerate
	function automatic [Width - 1:0] gf_mult2;
		input reg [Width - 1:0] operand;
		reg [Width - 1:0] mult_out;
		begin
			mult_out = (operand[Width - 1] ? (operand << 1) ^ IPoly : operand << 1);
			gf_mult2 = mult_out;
		end
	endfunction
	function automatic [(StagesPerCycle * Width) - 1:0] gen_matrix;
		input reg [Width - 1:0] seed;
		input reg init;
		reg [(StagesPerCycle * Width) - 1:0] matrix_out;
		begin
			matrix_out[0+:Width] = (init ? seed : gf_mult2(seed));
			matrix_out[Width * (((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : ((StagesPerCycle - 1) + ((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle)) - 1) - (((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle) - 1))+:Width * ((StagesPerCycle - 1) >= 1 ? StagesPerCycle - 1 : 3 - StagesPerCycle)] = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 1; i < StagesPerCycle; i = i + 1)
					matrix_out[i * Width+:Width] = gf_mult2(matrix_out[(i - 1) * Width+:Width]);
			end
			gen_matrix = matrix_out;
		end
	endfunction
	assign matrix = (first ? gen_matrix(operand_a_i, 1'b1) : gen_matrix(vector, 1'b0));
	function automatic [Width - 1:0] gf_mult;
		input reg [(StagesPerCycle * Width) - 1:0] matrix_;
		input reg [StagesPerCycle - 1:0] operand;
		reg [Width - 1:0] mult_out;
		reg [Width - 1:0] add_vector;
		begin
			mult_out = 1'sb0;
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < StagesPerCycle; i = i + 1)
					begin
						add_vector = (operand[i] ? matrix_[i * Width+:Width] : {Width {1'sb0}});
						mult_out = mult_out ^ add_vector;
					end
			end
			gf_mult = mult_out;
		end
	endfunction
	assign prod_d = prod_q ^ gf_mult(matrix, op_i_slice);
	generate
		if (OutputZeroUntilAck) begin : gen_out_int_zero
			assign out_int = 1'sb0;
		end
		else begin : gen_out_int_op_a
			assign out_int = operand_a_i;
		end
	endgenerate
	assign prod_o = (ack_o ? prod_d : out_int);
endmodule
module prim_flop_2sync (
	clk_i,
	rst_ni,
	d_i,
	q_o
);
	reg _sv2v_0;
	parameter signed [31:0] Width = 16;
	parameter [Width - 1:0] ResetValue = 1'sb0;
	parameter [0:0] EnablePrimCdcRand = 1;
	input clk_i;
	input rst_ni;
	input [Width - 1:0] d_i;
	output wire [Width - 1:0] q_o;
	reg [Width - 1:0] d_o;
	wire [Width - 1:0] intq;
	wire unused_sig;
	assign unused_sig = EnablePrimCdcRand;
	always @(*) begin
		if (_sv2v_0)
			;
		d_o = d_i;
	end
	prim_flop #(
		.Width(Width),
		.ResetValue(ResetValue)
	) u_sync_1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(d_o),
		.q_o(intq)
	);
	prim_flop #(
		.Width(Width),
		.ResetValue(ResetValue)
	) u_sync_2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(intq),
		.q_o(q_o)
	);
	initial _sv2v_0 = 0;
endmodule
module prim_flop (
	clk_i,
	rst_ni,
	d_i,
	q_o
);
	parameter signed [31:0] Width = 1;
	parameter [Width - 1:0] ResetValue = 0;
	input clk_i;
	input rst_ni;
	input [Width - 1:0] d_i;
	output reg [Width - 1:0] q_o;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			q_o <= ResetValue;
		else
			q_o <= d_i;
endmodule
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
module prim_and2 (
	in0_i,
	in1_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in0_i;
	input [Width - 1:0] in1_i;
	output wire [Width - 1:0] out_o;
	assign out_o = in0_i & in1_i;
endmodule
module prim_buf (
	in_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in_i;
	output wire [Width - 1:0] out_o;
	wire [Width - 1:0] inv;
	assign inv = ~in_i;
	assign out_o = ~inv;
endmodule
module prim_xor2 (
	in0_i,
	in1_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in0_i;
	input [Width - 1:0] in1_i;
	output wire [Width - 1:0] out_o;
	assign out_o = in0_i ^ in1_i;
endmodule
module prim_xnor2 (
	in0_i,
	in1_i,
	out_o
);
	parameter signed [31:0] Width = 1;
	input [Width - 1:0] in0_i;
	input [Width - 1:0] in1_i;
	output wire [Width - 1:0] out_o;
	assign out_o = ~(in0_i ^ in1_i);
endmodule
module aes (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	idle_o,
	lc_escalate_en_i,
	clk_edn_i,
	rst_edn_ni,
	edn_o,
	edn_i,
	keymgr_key_i,
	tl_i,
	tl_o,
	alert_rx_i,
	alert_tx_o
);
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] AESGCMEnable = 1;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	parameter [31:0] SecStartTriggerDelay = 0;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_reg_pkg_NumAlerts = 2;
	parameter [1:0] AlertAsyncOn = {aes_reg_pkg_NumAlerts {1'b1}};
	parameter [31:0] AlertSkewCycles = 1;
	localparam signed [31:0] aes_pkg_ClearingLfsrWidth = 64;
	localparam [63:0] aes_pkg_RndCnstClearingLfsrSeedDefault = 64'hc32d580f74f1713a;
	parameter [63:0] RndCnstClearingLfsrSeed = aes_pkg_RndCnstClearingLfsrSeedDefault;
	localparam [383:0] aes_pkg_RndCnstClearingLfsrPermDefault = 384'hb33fdfc81deb6292c21f8a31025850679c2f4be1bbe937b4b7c9d7f4e57568d99c8ae291a899143e0d8459d31b143223;
	parameter [383:0] RndCnstClearingLfsrPerm = aes_pkg_RndCnstClearingLfsrPermDefault;
	localparam [383:0] aes_pkg_RndCnstClearingSharePermDefault = 384'hf66fd61b27847edc2286706fb3a2e9009736b95ac3f3b5205caf8dc536aad73605d393c8dd94476e830e97891d4828d0;
	parameter [383:0] RndCnstClearingSharePerm = aes_pkg_RndCnstClearingSharePermDefault;
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstMaskingLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstMaskingLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	output wire [3:0] idle_o;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire clk_edn_i;
	input wire rst_edn_ni;
	output wire [0:0] edn_o;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	input wire [33:0] edn_i;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	input wire [7:0] alert_rx_i;
	output wire [3:0] alert_tx_o;
	localparam [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	wire [978:0] reg2hw;
	wire [948:0] hw2reg;
	wire [1:0] alert;
	wire [3:0] lc_escalate_en;
	wire edn_req_int;
	wire edn_req_hold_d;
	reg edn_req_hold_q;
	wire edn_req;
	wire edn_ack;
	wire [31:0] edn_data;
	wire unused_edn_fips;
	wire entropy_clearing_req;
	wire entropy_masking_req;
	wire entropy_clearing_ack;
	wire entropy_masking_ack;
	wire intg_err_alert;
	wire shadowed_storage_err;
	wire shadowed_update_err;
	aes_reg_top u_reg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.tl_i(tl_i),
		.tl_o(tl_o),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg),
		.shadowed_storage_err_o(shadowed_storage_err),
		.shadowed_update_err_o(shadowed_update_err),
		.intg_err_o(intg_err_alert)
	);
	prim_lc_sync #(.NumCopies(1)) u_prim_lc_sync(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_en_i(lc_escalate_en_i),
		.lc_en_o({lc_escalate_en})
	);
	assign edn_req_int = entropy_clearing_req | entropy_masking_req;
	assign entropy_clearing_ack = entropy_clearing_req & edn_ack;
	assign entropy_masking_ack = (~entropy_clearing_req & entropy_masking_req) & edn_ack;
	assign edn_req = edn_req_int | edn_req_hold_q;
	assign edn_req_hold_d = (edn_req_hold_q | edn_req) & ~edn_ack;
	always @(posedge clk_i or negedge rst_ni) begin : edn_req_reg
		if (!rst_ni)
			edn_req_hold_q <= 1'sb0;
		else
			edn_req_hold_q <= edn_req_hold_d;
	end
	prim_sync_reqack_data #(
		.Width(EntropyWidth),
		.DataSrc2Dst(1'b0),
		.DataReg(1'b0)
	) u_prim_sync_reqack_data(
		.clk_src_i(clk_i),
		.rst_src_ni(rst_ni),
		.clk_dst_i(clk_edn_i),
		.rst_dst_ni(rst_edn_ni),
		.req_chk_i(1'b1),
		.src_req_i(edn_req),
		.src_ack_o(edn_ack),
		.dst_req_o(edn_o[0]),
		.dst_ack_i(edn_i[33]),
		.data_i(edn_i[31-:edn_pkg_ENDPOINT_BUS_WIDTH]),
		.data_o(edn_data)
	);
	assign unused_edn_fips = edn_i[32];
	aes_core #(
		.AES192Enable(AES192Enable),
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl),
		.SecStartTriggerDelay(SecStartTriggerDelay),
		.SecAllowForcingMasks(SecAllowForcingMasks),
		.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
		.EntropyWidth(EntropyWidth),
		.RndCnstClearingLfsrSeed(RndCnstClearingLfsrSeed),
		.RndCnstClearingLfsrPerm(RndCnstClearingLfsrPerm),
		.RndCnstClearingSharePerm(RndCnstClearingSharePerm),
		.RndCnstMaskingLfsrSeed(RndCnstMaskingLfsrSeed),
		.RndCnstMaskingLfsrPerm(RndCnstMaskingLfsrPerm)
	) u_aes_core(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.entropy_clearing_req_o(entropy_clearing_req),
		.entropy_clearing_ack_i(entropy_clearing_ack),
		.entropy_clearing_i(edn_data),
		.entropy_masking_req_o(entropy_masking_req),
		.entropy_masking_ack_i(entropy_masking_ack),
		.entropy_masking_i(edn_data),
		.keymgr_key_i(keymgr_key_i),
		.lc_escalate_en_i(lc_escalate_en),
		.shadowed_storage_err_i(shadowed_storage_err),
		.shadowed_update_err_i(shadowed_update_err),
		.intg_err_alert_i(intg_err_alert),
		.alert_recov_o(alert[32'sd0]),
		.alert_fatal_o(alert[32'sd1]),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg)
	);
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic [3:0] prim_mubi_pkg_mubi4_bool_to_mubi;
		input reg val;
		prim_mubi_pkg_mubi4_bool_to_mubi = (val ? sv2v_cast_EECFA(4'h6) : sv2v_cast_EECFA(4'h9));
	endfunction
	assign idle_o = prim_mubi_pkg_mubi4_bool_to_mubi(reg2hw[15]);
	wire [1:0] alert_test;
	assign alert_test[32'sd0] = reg2hw[976] & reg2hw[975];
	assign alert_test[32'sd1] = reg2hw[978] & reg2hw[977];
	genvar _gv_i_2;
	generate
		for (_gv_i_2 = 0; _gv_i_2 < aes_reg_pkg_NumAlerts; _gv_i_2 = _gv_i_2 + 1) begin : gen_alert_tx
			localparam i = _gv_i_2;
			prim_alert_sender #(
				.AsyncOn(AlertAsyncOn[i]),
				.SkewCycles(AlertSkewCycles),
				.IsFatal(i == 32'sd1)
			) u_prim_alert_sender(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.alert_test_i(alert_test[i]),
				.alert_req_i(alert[i]),
				.alert_ack_o(),
				.alert_state_o(),
				.alert_rx_i(alert_rx_i[i * 4+:4]),
				.alert_tx_o(alert_tx_o[i * 2+:2])
			);
		end
	endgenerate
	genvar _gv_i_3;
	genvar _gv_i_4;
	genvar _gv_i_5;
	generate
		if (AESGCMEnable && SecMasking) begin : gen_ghash_onehot_sva
			genvar _gv_s_1;
		end
	endgenerate
endmodule
module aes_cipher_control (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_i,
	crypt_o,
	dec_key_gen_i,
	dec_key_gen_o,
	prng_reseed_i,
	prng_reseed_o,
	key_clear_i,
	key_clear_o,
	data_out_clear_i,
	data_out_clear_o,
	mux_sel_err_i,
	sp_enc_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_o,
	sub_bytes_en_o,
	sub_bytes_out_req_i,
	sub_bytes_out_ack_o,
	add_rk_sel_o,
	key_expand_op_o,
	key_full_sel_o,
	key_full_we_o,
	key_dec_sel_o,
	key_dec_we_o,
	key_expand_en_o,
	key_expand_out_req_i,
	key_expand_out_ack_o,
	key_expand_clear_o,
	key_expand_round_o,
	key_words_sel_o,
	round_key_sel_o
);
	reg _sv2v_0;
	parameter [0:0] CiphOpFwdOnly = 0;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] in_valid_i;
	output wire [2:0] in_ready_o;
	output wire [2:0] out_valid_o;
	input wire [2:0] out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire [2:0] crypt_i;
	output wire [2:0] crypt_o;
	input wire [2:0] dec_key_gen_i;
	output wire [2:0] dec_key_gen_o;
	input wire prng_reseed_i;
	output wire prng_reseed_o;
	input wire key_clear_i;
	output wire key_clear_o;
	input wire data_out_clear_i;
	output wire data_out_clear_o;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output wire alert_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] state_sel_o;
	output wire [2:0] state_we_o;
	output wire [2:0] sub_bytes_en_o;
	input wire [2:0] sub_bytes_out_req_i;
	output wire [2:0] sub_bytes_out_ack_o;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_rk_sel_o;
	output wire [1:0] key_expand_op_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_full_sel_o;
	output wire [2:0] key_full_we_o;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] key_dec_sel_o;
	output wire [2:0] key_dec_we_o;
	output wire [2:0] key_expand_en_o;
	input wire [2:0] key_expand_out_req_i;
	output wire [2:0] key_expand_out_ack_o;
	output wire key_expand_clear_o;
	output wire [3:0] key_expand_round_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] round_key_sel_o;
	reg [3:0] rnd_ctr;
	wire [2:0] crypt_d;
	wire [2:0] crypt_q;
	wire [2:0] dec_key_gen_d;
	wire [2:0] dec_key_gen_q;
	wire prng_reseed_d;
	reg prng_reseed_q;
	wire key_clear_d;
	reg key_clear_q;
	wire data_out_clear_d;
	reg data_out_clear_q;
	wire [2:0] sub_bytes_out_req;
	wire [2:0] key_expand_out_req;
	wire [2:0] in_valid;
	wire [2:0] out_ready;
	wire [2:0] crypt;
	wire [2:0] dec_key_gen;
	wire mux_sel_err;
	reg mr_err;
	wire sp_enc_err;
	reg rnd_ctr_err;
	wire [2:0] sp_in_valid;
	wire [2:0] sp_in_ready;
	wire [2:0] sp_out_valid;
	wire [2:0] sp_out_ready;
	wire [2:0] sp_crypt;
	wire [2:0] sp_dec_key_gen;
	wire [2:0] sp_state_we;
	wire [2:0] sp_sub_bytes_en;
	wire [2:0] sp_sub_bytes_out_req;
	wire [2:0] sp_sub_bytes_out_ack;
	wire [2:0] sp_key_full_we;
	wire [2:0] sp_key_dec_we;
	wire [2:0] sp_key_expand_en;
	wire [2:0] sp_key_expand_out_req;
	wire [2:0] sp_key_expand_out_ack;
	wire [2:0] sp_crypt_d;
	wire [2:0] sp_crypt_q;
	wire [2:0] sp_dec_key_gen_d;
	wire [2:0] sp_dec_key_gen_q;
	wire [2:0] mr_alert;
	wire [2:0] mr_prng_update;
	wire [2:0] mr_prng_reseed_req;
	wire [2:0] mr_key_expand_clear;
	wire [2:0] mr_prng_reseed_d;
	wire [2:0] mr_key_clear_d;
	wire [2:0] mr_data_out_clear_d;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_StateSelWidth) - 1:0] mr_state_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddRKSelWidth) - 1:0] mr_add_rk_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyFullSelWidth) - 1:0] mr_key_full_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyDecSelWidth) - 1:0] mr_key_dec_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyWordsSelWidth) - 1:0] mr_key_words_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_RoundKeySelWidth) - 1:0] mr_round_key_sel;
	wire [11:0] mr_rnd_ctr;
	assign sp_in_valid = {in_valid};
	assign sp_out_ready = {out_ready};
	assign sp_crypt = {crypt};
	assign sp_dec_key_gen = {dec_key_gen};
	assign sp_sub_bytes_out_req = {sub_bytes_out_req};
	assign sp_key_expand_out_req = {key_expand_out_req};
	assign sp_crypt_q = {crypt_q};
	assign sp_dec_key_gen_q = {dec_key_gen_q};
	genvar _gv_i_6;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	localparam [2:0] aes_pkg_SP2V_LOGIC_HIGH = {sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))};
	generate
		for (_gv_i_6 = 0; _gv_i_6 < aes_pkg_Sp2VWidth; _gv_i_6 = _gv_i_6 + 1) begin : gen_fsm
			localparam i = _gv_i_6;
			if (aes_pkg_SP2V_LOGIC_HIGH[i] == 1'b1) begin : gen_fsm_p
				aes_cipher_control_fsm_p #(
					.SecMasking(SecMasking),
					.SecSBoxImpl(SecSBoxImpl)
				) u_aes_cipher_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_valid_i(sp_in_valid[i]),
					.in_ready_o(sp_in_ready[i]),
					.out_valid_o(sp_out_valid[i]),
					.out_ready_i(sp_out_ready[i]),
					.cfg_valid_i(cfg_valid_i),
					.op_i(op_i),
					.key_len_i(key_len_i),
					.crypt_i(sp_crypt[i]),
					.dec_key_gen_i(sp_dec_key_gen[i]),
					.prng_reseed_i(prng_reseed_i),
					.key_clear_i(key_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.rnd_ctr_err_i(rnd_ctr_err),
					.op_err_i(op_err_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.state_sel_o(mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]),
					.state_we_o(sp_state_we[i]),
					.sub_bytes_en_o(sp_sub_bytes_en[i]),
					.sub_bytes_out_req_i(sp_sub_bytes_out_req[i]),
					.sub_bytes_out_ack_o(sp_sub_bytes_out_ack[i]),
					.add_rk_sel_o(mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]),
					.key_full_sel_o(mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]),
					.key_full_we_o(sp_key_full_we[i]),
					.key_dec_sel_o(mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]),
					.key_dec_we_o(sp_key_dec_we[i]),
					.key_expand_en_o(sp_key_expand_en[i]),
					.key_expand_out_req_i(sp_key_expand_out_req[i]),
					.key_expand_out_ack_o(sp_key_expand_out_ack[i]),
					.key_expand_clear_o(mr_key_expand_clear[i]),
					.rnd_ctr_o(mr_rnd_ctr[i * 4+:4]),
					.key_words_sel_o(mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]),
					.round_key_sel_o(mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]),
					.crypt_q_i(sp_crypt_q[i]),
					.crypt_d_o(sp_crypt_d[i]),
					.dec_key_gen_q_i(sp_dec_key_gen_q[i]),
					.dec_key_gen_d_o(sp_dec_key_gen_d[i]),
					.prng_reseed_q_i(prng_reseed_q),
					.prng_reseed_d_o(mr_prng_reseed_d[i]),
					.key_clear_q_i(key_clear_q),
					.key_clear_d_o(mr_key_clear_d[i]),
					.data_out_clear_q_i(data_out_clear_q),
					.data_out_clear_d_o(mr_data_out_clear_d[i])
				);
			end
			else begin : gen_fsm_n
				aes_cipher_control_fsm_n #(
					.SecMasking(SecMasking),
					.SecSBoxImpl(SecSBoxImpl)
				) u_aes_cipher_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_valid_ni(sp_in_valid[i]),
					.in_ready_no(sp_in_ready[i]),
					.out_valid_no(sp_out_valid[i]),
					.out_ready_ni(sp_out_ready[i]),
					.cfg_valid_i(cfg_valid_i),
					.op_i(op_i),
					.key_len_i(key_len_i),
					.crypt_ni(sp_crypt[i]),
					.dec_key_gen_ni(sp_dec_key_gen[i]),
					.prng_reseed_i(prng_reseed_i),
					.key_clear_i(key_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.rnd_ctr_err_i(rnd_ctr_err),
					.op_err_i(op_err_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.state_sel_o(mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]),
					.state_we_no(sp_state_we[i]),
					.sub_bytes_en_no(sp_sub_bytes_en[i]),
					.sub_bytes_out_req_ni(sp_sub_bytes_out_req[i]),
					.sub_bytes_out_ack_no(sp_sub_bytes_out_ack[i]),
					.add_rk_sel_o(mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]),
					.key_full_sel_o(mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]),
					.key_full_we_no(sp_key_full_we[i]),
					.key_dec_sel_o(mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]),
					.key_dec_we_no(sp_key_dec_we[i]),
					.key_expand_en_no(sp_key_expand_en[i]),
					.key_expand_out_req_ni(sp_key_expand_out_req[i]),
					.key_expand_out_ack_no(sp_key_expand_out_ack[i]),
					.key_expand_clear_o(mr_key_expand_clear[i]),
					.rnd_ctr_o(mr_rnd_ctr[i * 4+:4]),
					.key_words_sel_o(mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]),
					.round_key_sel_o(mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]),
					.crypt_q_ni(sp_crypt_q[i]),
					.crypt_d_no(sp_crypt_d[i]),
					.dec_key_gen_q_ni(sp_dec_key_gen_q[i]),
					.dec_key_gen_d_no(sp_dec_key_gen_d[i]),
					.prng_reseed_q_i(prng_reseed_q),
					.prng_reseed_d_o(mr_prng_reseed_d[i]),
					.key_clear_q_i(key_clear_q),
					.key_clear_d_o(mr_key_clear_d[i]),
					.data_out_clear_q_i(data_out_clear_q),
					.data_out_clear_d_o(mr_data_out_clear_d[i])
				);
			end
		end
	endgenerate
	assign in_ready_o = sv2v_cast_39E4E(sp_in_ready);
	assign out_valid_o = sv2v_cast_39E4E(sp_out_valid);
	assign state_we_o = sv2v_cast_39E4E(sp_state_we);
	assign sub_bytes_en_o = sv2v_cast_39E4E(sp_sub_bytes_en);
	assign sub_bytes_out_ack_o = sv2v_cast_39E4E(sp_sub_bytes_out_ack);
	assign key_full_we_o = sv2v_cast_39E4E(sp_key_full_we);
	assign key_dec_we_o = sv2v_cast_39E4E(sp_key_dec_we);
	assign key_expand_en_o = sv2v_cast_39E4E(sp_key_expand_en);
	assign key_expand_out_ack_o = sv2v_cast_39E4E(sp_key_expand_out_ack);
	assign crypt_d = sv2v_cast_39E4E(sp_crypt_d);
	assign dec_key_gen_d = sv2v_cast_39E4E(sp_dec_key_gen_d);
	assign alert_o = |mr_alert;
	assign prng_update_o = |mr_prng_update;
	assign prng_reseed_req_o = |mr_prng_reseed_req;
	assign key_expand_clear_o = |mr_key_expand_clear;
	assign prng_reseed_d = &mr_prng_reseed_d;
	assign key_clear_d = &mr_key_clear_d;
	assign data_out_clear_d = &mr_data_out_clear_d;
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_F5C01;
		input reg [2:0] inp;
		sv2v_cast_F5C01 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_21340;
		input reg [4:0] inp;
		sv2v_cast_21340 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_4C47F;
		input reg [2:0] inp;
		sv2v_cast_4C47F = inp;
	endfunction
	always @(*) begin : combine_sparse_signals
		if (_sv2v_0)
			;
		state_sel_o = sv2v_cast_73510({aes_pkg_StateSelWidth {1'b0}});
		add_rk_sel_o = sv2v_cast_7524F({aes_pkg_AddRKSelWidth {1'b0}});
		key_full_sel_o = sv2v_cast_7DAC1({aes_pkg_KeyFullSelWidth {1'b0}});
		key_dec_sel_o = sv2v_cast_F5C01({aes_pkg_KeyDecSelWidth {1'b0}});
		key_words_sel_o = sv2v_cast_21340({aes_pkg_KeyWordsSelWidth {1'b0}});
		round_key_sel_o = sv2v_cast_4C47F({aes_pkg_RoundKeySelWidth {1'b0}});
		mr_err = 1'b0;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				begin
					state_sel_o = sv2v_cast_73510({state_sel_o} | {mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]});
					add_rk_sel_o = sv2v_cast_7524F({add_rk_sel_o} | {mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth]});
					key_full_sel_o = sv2v_cast_7DAC1({key_full_sel_o} | {mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth]});
					key_dec_sel_o = sv2v_cast_F5C01({key_dec_sel_o} | {mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth]});
					key_words_sel_o = sv2v_cast_21340({key_words_sel_o} | {mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth]});
					round_key_sel_o = sv2v_cast_4C47F({round_key_sel_o} | {mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]});
				end
		end
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if ((((((state_sel_o != mr_state_sel[i * aes_pkg_StateSelWidth+:aes_pkg_StateSelWidth]) || (add_rk_sel_o != mr_add_rk_sel[i * aes_pkg_AddRKSelWidth+:aes_pkg_AddRKSelWidth])) || (key_full_sel_o != mr_key_full_sel[i * aes_pkg_KeyFullSelWidth+:aes_pkg_KeyFullSelWidth])) || (key_dec_sel_o != mr_key_dec_sel[i * aes_pkg_KeyDecSelWidth+:aes_pkg_KeyDecSelWidth])) || (key_words_sel_o != mr_key_words_sel[i * aes_pkg_KeyWordsSelWidth+:aes_pkg_KeyWordsSelWidth])) || (round_key_sel_o != mr_round_key_sel[i * aes_pkg_RoundKeySelWidth+:aes_pkg_RoundKeySelWidth]))
					mr_err = 1'b1;
		end
	end
	assign mux_sel_err = mux_sel_err_i | mr_err;
	always @(*) begin : combine_counter_signals
		if (_sv2v_0)
			;
		rnd_ctr = 1'sb0;
		rnd_ctr_err = 1'b0;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				rnd_ctr = rnd_ctr | mr_rnd_ctr[i * 4+:4];
		end
		begin : sv2v_autoblock_4
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if (rnd_ctr != mr_rnd_ctr[i * 4+:4])
					rnd_ctr_err = 1'b1;
		end
	end
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni) begin
			prng_reseed_q <= 1'b0;
			key_clear_q <= 1'b0;
			data_out_clear_q <= 1'b0;
		end
		else begin
			prng_reseed_q <= prng_reseed_d;
			key_clear_q <= key_clear_d;
			data_out_clear_q <= data_out_clear_d;
		end
	end
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign key_expand_op_o = (((dec_key_gen_d == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) || (dec_key_gen_q == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) || CiphOpFwdOnly ? sv2v_cast_63054(2'b01) : op_i);
	assign key_expand_round_o = rnd_ctr;
	assign crypt_o = crypt_q;
	assign dec_key_gen_o = dec_key_gen_q;
	assign prng_reseed_o = prng_reseed_q;
	assign key_clear_o = key_clear_q;
	assign data_out_clear_o = data_out_clear_q;
	wire [2:0] crypt_q_raw;
	function automatic [2:0] sv2v_cast_3;
		input reg [2:0] inp;
		sv2v_cast_3 = inp;
	endfunction
	prim_flop #(
		.Width(aes_pkg_Sp2VWidth),
		.ResetValue(sv2v_cast_3(sv2v_cast_39E4E(sv2v_cast_14B94(3'b100))))
	) u_crypt_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(crypt_d),
		.q_o(crypt_q_raw)
	);
	wire [2:0] dec_key_gen_q_raw;
	prim_flop #(
		.Width(aes_pkg_Sp2VWidth),
		.ResetValue(sv2v_cast_3(sv2v_cast_39E4E(sv2v_cast_14B94(3'b100))))
	) u_dec_key_gen_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(dec_key_gen_d),
		.q_o(dec_key_gen_q_raw)
	);
	localparam [31:0] NumSp2VSig = 8;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [7:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = in_valid_i;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = out_ready_i;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = crypt_i;
	assign sp2v_sig[9+:aes_pkg_Sp2VWidth] = dec_key_gen_i;
	assign sp2v_sig[12+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(crypt_q_raw);
	assign sp2v_sig[15+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(dec_key_gen_q_raw);
	assign sp2v_sig[18+:aes_pkg_Sp2VWidth] = sub_bytes_out_req_i;
	assign sp2v_sig[21+:aes_pkg_Sp2VWidth] = key_expand_out_req_i;
	localparam [7:0] Sp2VEnSecBuf = 8'b11000000;
	genvar _gv_i_7;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_7 = 0; _gv_i_7 < NumSp2VSig; _gv_i_7 = _gv_i_7 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_7;
			aes_sel_buf_chk #(
				.Num(aes_pkg_Sp2VNum),
				.Width(aes_pkg_Sp2VWidth),
				.EnSecBuf(Sp2VEnSecBuf[i])
			) u_aes_sp2v_sig_buf_chk_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.sel_i(sp2v_sig[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.sel_o(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.err_o(sp2v_sig_err[i])
			);
			assign sp2v_sig_chk[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign in_valid = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign out_ready = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign crypt = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign dec_key_gen = sp2v_sig_chk[9+:aes_pkg_Sp2VWidth];
	assign crypt_q = sp2v_sig_chk[12+:aes_pkg_Sp2VWidth];
	assign dec_key_gen_q = sp2v_sig_chk[15+:aes_pkg_Sp2VWidth];
	assign sub_bytes_out_req = sp2v_sig_chk[18+:aes_pkg_Sp2VWidth];
	assign key_expand_out_req = sp2v_sig_chk[21+:aes_pkg_Sp2VWidth];
	assign sp_enc_err = |sp2v_sig_err | sp_enc_err_i;
	initial _sv2v_0 = 0;
endmodule
module aes_cipher_control_fsm (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_i,
	dec_key_gen_i,
	prng_reseed_i,
	key_clear_i,
	data_out_clear_i,
	mux_sel_err_i,
	sp_enc_err_i,
	rnd_ctr_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_o,
	sub_bytes_en_o,
	sub_bytes_out_req_i,
	sub_bytes_out_ack_o,
	add_rk_sel_o,
	key_full_sel_o,
	key_full_we_o,
	key_dec_sel_o,
	key_dec_we_o,
	key_expand_en_o,
	key_expand_out_req_i,
	key_expand_out_ack_o,
	key_expand_clear_o,
	rnd_ctr_o,
	key_words_sel_o,
	round_key_sel_o,
	crypt_q_i,
	crypt_d_o,
	dec_key_gen_q_i,
	dec_key_gen_d_o,
	prng_reseed_q_i,
	prng_reseed_d_o,
	key_clear_q_i,
	key_clear_d_o,
	data_out_clear_q_i,
	data_out_clear_d_o
);
	reg _sv2v_0;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_i;
	output reg in_ready_o;
	output reg out_valid_o;
	input wire out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire crypt_i;
	input wire dec_key_gen_i;
	input wire prng_reseed_i;
	input wire key_clear_i;
	input wire data_out_clear_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire rnd_ctr_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output reg alert_o;
	output reg prng_update_o;
	output reg prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] state_sel_o;
	output reg state_we_o;
	output reg sub_bytes_en_o;
	input wire sub_bytes_out_req_i;
	output reg sub_bytes_out_ack_o;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_rk_sel_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_full_sel_o;
	output reg key_full_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] key_dec_sel_o;
	output reg key_dec_we_o;
	output reg key_expand_en_o;
	input wire key_expand_out_req_i;
	output reg key_expand_out_ack_o;
	output reg key_expand_clear_o;
	output wire [3:0] rnd_ctr_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output reg [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] round_key_sel_o;
	input wire crypt_q_i;
	output reg crypt_d_o;
	input wire dec_key_gen_q_i;
	output reg dec_key_gen_d_o;
	input wire prng_reseed_q_i;
	output reg prng_reseed_d_o;
	input wire key_clear_q_i;
	output reg key_clear_d_o;
	input wire data_out_clear_q_i;
	output reg data_out_clear_d_o;
	wire unused_cfg_valid;
	assign unused_cfg_valid = cfg_valid_i;
	generate
		if (!SecMasking) begin : gen_unused_prng_reseed
			wire unused_prng_reseed;
			assign unused_prng_reseed = prng_reseed_i;
		end
	endgenerate
	localparam signed [31:0] aes_pkg_CipherCtrlStateWidth = 6;
	reg [5:0] aes_cipher_ctrl_ns;
	wire [5:0] aes_cipher_ctrl_cs;
	reg advance;
	reg [2:0] cyc_ctr_d;
	reg [2:0] cyc_ctr_q;
	wire cyc_ctr_expr;
	reg prng_reseed_done_d;
	reg prng_reseed_done_q;
	reg [3:0] rnd_ctr_d;
	reg [3:0] rnd_ctr_q;
	reg [3:0] num_rounds_d;
	reg [3:0] num_rounds_q;
	wire [3:0] num_rounds_regular;
	assign num_rounds_regular = num_rounds_q - 4'd1;
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	function automatic [4:0] sv2v_cast_26872;
		input reg [4:0] inp;
		sv2v_cast_26872 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_F5C01;
		input reg [2:0] inp;
		sv2v_cast_F5C01 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_21340;
		input reg [4:0] inp;
		sv2v_cast_21340 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_4C47F;
		input reg [2:0] inp;
		sv2v_cast_4C47F = inp;
	endfunction
	function automatic [5:0] sv2v_cast_16A1F;
		input reg [5:0] inp;
		sv2v_cast_16A1F = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	always @(*) begin : aes_cipher_ctrl_fsm
		if (_sv2v_0)
			;
		in_ready_o = 1'b0;
		out_valid_o = 1'b0;
		prng_update_o = 1'b0;
		prng_reseed_req_o = 1'b0;
		state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b11000));
		state_we_o = 1'b0;
		add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b11000));
		sub_bytes_en_o = 1'b0;
		sub_bytes_out_ack_o = 1'b0;
		key_full_sel_o = sv2v_cast_7DAC1(sv2v_cast_26872(5'b00001));
		key_full_we_o = 1'b0;
		key_dec_sel_o = sv2v_cast_F5C01(sv2v_cast_14B94(3'b011));
		key_dec_we_o = 1'b0;
		key_expand_en_o = 1'b0;
		key_expand_out_ack_o = 1'b0;
		key_expand_clear_o = 1'b0;
		key_words_sel_o = sv2v_cast_21340(sv2v_cast_26872(5'b10111));
		round_key_sel_o = sv2v_cast_4C47F(sv2v_cast_14B94(3'b011));
		aes_cipher_ctrl_ns = aes_cipher_ctrl_cs;
		num_rounds_d = num_rounds_q;
		rnd_ctr_d = rnd_ctr_q;
		crypt_d_o = crypt_q_i;
		dec_key_gen_d_o = dec_key_gen_q_i;
		prng_reseed_d_o = prng_reseed_q_i;
		key_clear_d_o = key_clear_q_i;
		data_out_clear_d_o = data_out_clear_q_i;
		prng_reseed_done_d = prng_reseed_done_q | prng_reseed_ack_i;
		advance = 1'b0;
		cyc_ctr_d = (SecSBoxImpl == 32'sd4 ? cyc_ctr_q + 3'd1 : 3'd0);
		alert_o = 1'b0;
		(* full_case, parallel_case *)
		case (aes_cipher_ctrl_cs)
			sv2v_cast_16A1F(6'b001001): begin
				cyc_ctr_d = 3'd0;
				in_ready_o = 1'b1;
				if (in_valid_i) begin
					if (((SecMasking && prng_reseed_i) && !dec_key_gen_i) && !crypt_i) begin
						prng_reseed_d_o = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b100100);
					end
					else if (key_clear_i || data_out_clear_i) begin
						key_clear_d_o = key_clear_i;
						data_out_clear_d_o = data_out_clear_i;
						aes_cipher_ctrl_ns = (data_out_clear_i ? sv2v_cast_16A1F(6'b111010) : sv2v_cast_16A1F(6'b001110));
					end
					else if (dec_key_gen_i || crypt_i) begin
						crypt_d_o = ~dec_key_gen_i & crypt_i;
						dec_key_gen_d_o = dec_key_gen_i;
						prng_reseed_d_o = SecMasking & prng_reseed_i;
						state_sel_o = (dec_key_gen_i ? sv2v_cast_73510(sv2v_cast_19785(5'b00001)) : sv2v_cast_73510(sv2v_cast_19785(5'b01110)));
						state_we_o = 1'b1;
						prng_update_o = SecMasking;
						key_expand_clear_o = 1'b1;
						key_full_sel_o = (dec_key_gen_i ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)) : (op_i == sv2v_cast_63054(2'b01) ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)) : (op_i == sv2v_cast_63054(2'b10) ? sv2v_cast_7DAC1(sv2v_cast_26872(5'b11000)) : sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)))));
						key_full_we_o = 1'b1;
						num_rounds_d = (key_len_i == sv2v_cast_2BC67(3'b001) ? 4'd10 : (key_len_i == sv2v_cast_2BC67(3'b010) ? 4'd12 : 4'd14));
						rnd_ctr_d = 1'sb0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b100011);
					end
					else
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
				end
			end
			sv2v_cast_16A1F(6'b100011): begin
				add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b01110));
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				prng_reseed_done_d = 1'b0;
				if (key_len_i != sv2v_cast_2BC67(3'b100)) begin
					advance = key_expand_out_req_i & cyc_ctr_expr;
					prng_update_o = SecMasking;
					key_expand_en_o = 1'b1;
					if (advance) begin
						key_expand_out_ack_o = 1'b1;
						state_we_o = ~dec_key_gen_q_i;
						key_full_we_o = 1'b1;
						rnd_ctr_d = rnd_ctr_q + 4'b0001;
						cyc_ctr_d = 3'd0;
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b111101);
					end
				end
				else begin
					prng_update_o = SecMasking;
					state_we_o = ~dec_key_gen_q_i;
					rnd_ctr_d = rnd_ctr_q + 4'b0001;
					cyc_ctr_d = 3'd0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b111101);
				end
			end
			sv2v_cast_16A1F(6'b111101): begin
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				prng_reseed_req_o = (SecMasking & prng_reseed_q_i) & ~prng_reseed_done_q;
				round_key_sel_o = (op_i == sv2v_cast_63054(2'b01) ? sv2v_cast_4C47F(sv2v_cast_14B94(3'b011)) : (op_i == sv2v_cast_63054(2'b10) ? sv2v_cast_4C47F(sv2v_cast_14B94(3'b100)) : sv2v_cast_4C47F(sv2v_cast_14B94(3'b011))));
				advance = (key_expand_out_req_i & cyc_ctr_expr) & (dec_key_gen_q_i | sub_bytes_out_req_i);
				prng_update_o = SecMasking;
				sub_bytes_en_o = ~dec_key_gen_q_i;
				key_expand_en_o = 1'b1;
				if (advance) begin
					sub_bytes_out_ack_o = ~dec_key_gen_q_i;
					key_expand_out_ack_o = 1'b1;
					state_we_o = ~dec_key_gen_q_i;
					key_full_we_o = 1'b1;
					rnd_ctr_d = rnd_ctr_q + 4'b0001;
					cyc_ctr_d = 3'd0;
					if (rnd_ctr_q >= num_rounds_regular) begin
						aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010000);
						if (dec_key_gen_q_i) begin
							key_dec_we_o = 1'b1;
							out_valid_o = (SecMasking ? (prng_reseed_q_i ? prng_reseed_done_q : 1'b1) : 1'b1);
							if (out_valid_o && out_ready_i) begin
								dec_key_gen_d_o = 1'b0;
								prng_reseed_d_o = 1'b0;
								aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
							end
						end
					end
				end
			end
			sv2v_cast_16A1F(6'b010000): begin
				key_words_sel_o = (dec_key_gen_q_i ? sv2v_cast_21340(sv2v_cast_26872(5'b10111)) : (key_len_i == sv2v_cast_2BC67(3'b001) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b11000)) : ((key_len_i == sv2v_cast_2BC67(3'b010)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_21340(sv2v_cast_26872(5'b00001)) : ((key_len_i == sv2v_cast_2BC67(3'b100)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_21340(sv2v_cast_26872(5'b01110)) : sv2v_cast_21340(sv2v_cast_26872(5'b10111))))))));
				add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b00001));
				prng_reseed_req_o = (SecMasking & prng_reseed_q_i) & ~prng_reseed_done_q;
				state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b00001));
				advance = (sub_bytes_out_req_i & cyc_ctr_expr) | dec_key_gen_q_i;
				sub_bytes_en_o = ~dec_key_gen_q_i;
				out_valid_o = ((mux_sel_err_i || sp_enc_err_i) || op_err_i ? 1'b0 : (SecMasking ? (prng_reseed_q_i ? prng_reseed_done_q & advance : advance) : advance));
				cyc_ctr_d = (SecSBoxImpl == 32'sd4 ? (!advance ? cyc_ctr_q + 3'd1 : cyc_ctr_q) : 3'd0);
				prng_update_o = (SecSBoxImpl == 32'sd4 ? !advance : 1'b0) | (out_valid_o & out_ready_i);
				if (out_valid_o && out_ready_i) begin
					sub_bytes_out_ack_o = ~dec_key_gen_q_i;
					state_we_o = 1'b1;
					crypt_d_o = 1'b0;
					cyc_ctr_d = 3'd0;
					dec_key_gen_d_o = 1'b0;
					prng_reseed_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b100100): begin
				prng_reseed_req_o = prng_reseed_q_i & ~prng_reseed_done_q;
				cyc_ctr_d = 3'd0;
				out_valid_o = prng_reseed_done_q;
				if (out_valid_o && out_ready_i) begin
					prng_reseed_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b111010): begin
				state_we_o = 1'b1;
				state_sel_o = sv2v_cast_73510(sv2v_cast_19785(5'b00001));
				aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001110);
			end
			sv2v_cast_16A1F(6'b001110): begin
				if (key_clear_q_i) begin
					key_full_sel_o = sv2v_cast_7DAC1(sv2v_cast_26872(5'b10111));
					key_full_we_o = 1'b1;
					key_dec_sel_o = sv2v_cast_F5C01(sv2v_cast_14B94(3'b100));
					key_dec_we_o = 1'b1;
				end
				if (data_out_clear_q_i) begin
					add_rk_sel_o = sv2v_cast_7524F(sv2v_cast_19785(5'b01110));
					key_words_sel_o = sv2v_cast_21340(sv2v_cast_26872(5'b10111));
					round_key_sel_o = sv2v_cast_4C47F(sv2v_cast_14B94(3'b011));
				end
				out_valid_o = 1'b1;
				if (out_ready_i) begin
					key_clear_d_o = 1'b0;
					data_out_clear_d_o = 1'b0;
					aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b001001);
				end
			end
			sv2v_cast_16A1F(6'b010111): alert_o = 1'b1;
			default: begin
				aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
				alert_o = 1'b1;
			end
		endcase
		if ((((mux_sel_err_i || sp_enc_err_i) || rnd_ctr_err_i) || op_err_i) || alert_fatal_i)
			aes_cipher_ctrl_ns = sv2v_cast_16A1F(6'b010111);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_CipherCtrlStateWidth),
		.ResetValue(sv2v_cast_16A1F(6'b001001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_cipher_ctrl_ns),
		.state_o(aes_cipher_ctrl_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni) begin
			prng_reseed_done_q <= 1'b0;
			rnd_ctr_q <= 1'sb0;
			num_rounds_q <= 1'sb0;
		end
		else begin
			prng_reseed_done_q <= prng_reseed_done_d;
			rnd_ctr_q <= rnd_ctr_d;
			num_rounds_q <= num_rounds_d;
		end
	end
	assign rnd_ctr_o = rnd_ctr_q;
	generate
		if (SecSBoxImpl == 32'sd4) begin : gen_cyc_ctr
			always @(posedge clk_i or negedge rst_ni) begin : reg_cyc_ctr
				if (!rst_ni)
					cyc_ctr_q <= 3'd0;
				else
					cyc_ctr_q <= cyc_ctr_d;
			end
			assign cyc_ctr_expr = cyc_ctr_q >= 3'd4;
		end
		else begin : gen_no_cyc_ctr
			wire [2:0] unused_cyc_ctr;
			wire [3:1] sv2v_tmp_18218;
			assign sv2v_tmp_18218 = cyc_ctr_d;
			always @(*) cyc_ctr_q = sv2v_tmp_18218;
			assign unused_cyc_ctr = cyc_ctr_q;
			assign cyc_ctr_expr = 1'b1;
		end
	endgenerate
	localparam signed [31:0] AesCipherControlFsmSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesCipherControlFsmSecMaskingNonDefault - 1:0] sv2v_cast_94F9A;
		input reg [AesCipherControlFsmSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_94F9A = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_94F9A(1'b1);
	end
	localparam signed [31:0] AesCipherControlFsmSecSBoxImplNonDefault = (SecSBoxImpl == 32'sd4 ? 1 : 2);
	function automatic [AesCipherControlFsmSecSBoxImplNonDefault - 1:0] sv2v_cast_0AD1F;
		input reg [AesCipherControlFsmSecSBoxImplNonDefault - 1:0] inp;
		sv2v_cast_0AD1F = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_2
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_0AD1F(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
module aes_cipher_control_fsm_n (
	clk_i,
	rst_ni,
	in_valid_ni,
	in_ready_no,
	out_valid_no,
	out_ready_ni,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_ni,
	dec_key_gen_ni,
	prng_reseed_i,
	key_clear_i,
	data_out_clear_i,
	mux_sel_err_i,
	sp_enc_err_i,
	rnd_ctr_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_no,
	sub_bytes_en_no,
	sub_bytes_out_req_ni,
	sub_bytes_out_ack_no,
	add_rk_sel_o,
	key_full_sel_o,
	key_full_we_no,
	key_dec_sel_o,
	key_dec_we_no,
	key_expand_en_no,
	key_expand_out_req_ni,
	key_expand_out_ack_no,
	key_expand_clear_o,
	rnd_ctr_o,
	key_words_sel_o,
	round_key_sel_o,
	crypt_q_ni,
	crypt_d_no,
	dec_key_gen_q_ni,
	dec_key_gen_d_no,
	prng_reseed_q_i,
	prng_reseed_d_o,
	key_clear_q_i,
	key_clear_d_o,
	data_out_clear_q_i,
	data_out_clear_d_o
);
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_ni;
	output wire in_ready_no;
	output wire out_valid_no;
	input wire out_ready_ni;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire crypt_ni;
	input wire dec_key_gen_ni;
	input wire prng_reseed_i;
	input wire key_clear_i;
	input wire data_out_clear_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire rnd_ctr_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output wire alert_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] state_sel_o;
	output wire state_we_no;
	output wire sub_bytes_en_no;
	input wire sub_bytes_out_req_ni;
	output wire sub_bytes_out_ack_no;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_rk_sel_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_full_sel_o;
	output wire key_full_we_no;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] key_dec_sel_o;
	output wire key_dec_we_no;
	output wire key_expand_en_no;
	input wire key_expand_out_req_ni;
	output wire key_expand_out_ack_no;
	output wire key_expand_clear_o;
	output wire [3:0] rnd_ctr_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] round_key_sel_o;
	input wire crypt_q_ni;
	output wire crypt_d_no;
	input wire dec_key_gen_q_ni;
	output wire dec_key_gen_d_no;
	input wire prng_reseed_q_i;
	output wire prng_reseed_d_o;
	input wire key_clear_q_i;
	output wire key_clear_d_o;
	input wire data_out_clear_q_i;
	output wire data_out_clear_d_o;
	localparam signed [31:0] NumInBufBits = 26;
	wire [25:0] in;
	wire [25:0] in_buf;
	assign in = {in_valid_ni, out_ready_ni, cfg_valid_i, op_i, key_len_i, crypt_ni, dec_key_gen_ni, prng_reseed_i, key_clear_i, data_out_clear_i, mux_sel_err_i, sp_enc_err_i, rnd_ctr_err_i, op_err_i, alert_fatal_i, prng_reseed_ack_i, sub_bytes_out_req_ni, key_expand_out_req_ni, crypt_q_ni, dec_key_gen_q_ni, prng_reseed_q_i, key_clear_q_i, data_out_clear_q_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire in_valid_n;
	wire out_ready_n;
	wire cfg_valid;
	wire [1:0] op;
	wire [1:0] op_raw;
	wire [2:0] key_len;
	wire crypt_n;
	wire dec_key_gen_n;
	wire prng_reseed;
	wire key_clear;
	wire data_out_clear;
	wire mux_sel_err;
	wire sp_enc_err;
	wire rnd_ctr_err;
	wire op_err;
	wire alert_fatal;
	wire prng_reseed_ack;
	wire sub_bytes_out_req_n;
	wire key_expand_out_req_n;
	wire crypt_q_n;
	wire dec_key_gen_q_n;
	wire prng_reseed_q;
	wire key_clear_q;
	wire data_out_clear_q;
	assign {in_valid_n, out_ready_n, cfg_valid, op_raw, key_len, crypt_n, dec_key_gen_n, prng_reseed, key_clear, data_out_clear, mux_sel_err, sp_enc_err, rnd_ctr_err, op_err, alert_fatal, prng_reseed_ack, sub_bytes_out_req_n, key_expand_out_req_n, crypt_q_n, dec_key_gen_q_n, prng_reseed_q, key_clear_q, data_out_clear_q} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op = sv2v_cast_63054(op_raw);
	wire in_ready;
	wire out_valid;
	wire alert;
	wire prng_update;
	wire prng_reseed_req;
	wire [4:0] state_sel;
	wire state_we;
	wire sub_bytes_en;
	wire sub_bytes_out_ack;
	wire [4:0] add_rk_sel;
	wire [4:0] key_full_sel;
	wire key_full_we;
	wire [2:0] key_dec_sel;
	wire key_dec_we;
	wire key_expand_en;
	wire key_expand_out_ack;
	wire key_expand_clear;
	wire [4:0] key_words_sel;
	wire [2:0] round_key_sel;
	wire [3:0] rnd_ctr;
	wire crypt_d;
	wire dec_key_gen_d;
	wire prng_reseed_d;
	wire key_clear_d;
	wire data_out_clear_d;
	aes_cipher_control_fsm #(
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_cipher_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(~in_valid_n),
		.in_ready_o(in_ready),
		.out_valid_o(out_valid),
		.out_ready_i(~out_ready_n),
		.cfg_valid_i(cfg_valid),
		.op_i(op),
		.key_len_i(key_len),
		.crypt_i(~crypt_n),
		.dec_key_gen_i(~dec_key_gen_n),
		.prng_reseed_i(prng_reseed),
		.key_clear_i(key_clear),
		.data_out_clear_i(data_out_clear),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.rnd_ctr_err_i(rnd_ctr_err),
		.op_err_i(op_err),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.state_sel_o(state_sel),
		.state_we_o(state_we),
		.sub_bytes_en_o(sub_bytes_en),
		.sub_bytes_out_req_i(~sub_bytes_out_req_n),
		.sub_bytes_out_ack_o(sub_bytes_out_ack),
		.add_rk_sel_o(add_rk_sel),
		.key_full_sel_o(key_full_sel),
		.key_full_we_o(key_full_we),
		.key_dec_sel_o(key_dec_sel),
		.key_dec_we_o(key_dec_we),
		.key_expand_en_o(key_expand_en),
		.key_expand_out_req_i(~key_expand_out_req_n),
		.key_expand_out_ack_o(key_expand_out_ack),
		.key_expand_clear_o(key_expand_clear),
		.rnd_ctr_o(rnd_ctr),
		.key_words_sel_o(key_words_sel),
		.round_key_sel_o(round_key_sel),
		.crypt_q_i(~crypt_q_n),
		.crypt_d_o(crypt_d),
		.dec_key_gen_q_i(~dec_key_gen_q_n),
		.dec_key_gen_d_o(dec_key_gen_d),
		.key_clear_q_i(key_clear_q),
		.key_clear_d_o(key_clear_d),
		.prng_reseed_q_i(prng_reseed_q),
		.prng_reseed_d_o(prng_reseed_d),
		.data_out_clear_q_i(data_out_clear_q),
		.data_out_clear_d_o(data_out_clear_d)
	);
	localparam signed [31:0] NumOutBufBits = 48;
	wire [47:0] out;
	wire [47:0] out_buf;
	assign out = {~in_ready, ~out_valid, alert, prng_update, prng_reseed_req, state_sel, ~state_we, ~sub_bytes_en, ~sub_bytes_out_ack, add_rk_sel, key_full_sel, ~key_full_we, key_dec_sel, ~key_dec_we, ~key_expand_en, ~key_expand_out_ack, key_expand_clear, rnd_ctr, key_words_sel, round_key_sel, ~crypt_d, ~dec_key_gen_d, key_clear_d, prng_reseed_d, data_out_clear_d};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {in_ready_no, out_valid_no, alert_o, prng_update_o, prng_reseed_req_o, state_sel_o, state_we_no, sub_bytes_en_no, sub_bytes_out_ack_no, add_rk_sel_o, key_full_sel_o, key_full_we_no, key_dec_sel_o, key_dec_we_no, key_expand_en_no, key_expand_out_ack_no, key_expand_clear_o, rnd_ctr_o, key_words_sel_o, round_key_sel_o, crypt_d_no, dec_key_gen_d_no, key_clear_d_o, prng_reseed_d_o, data_out_clear_d_o} = out_buf;
endmodule
module aes_cipher_control_fsm_p (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_i,
	dec_key_gen_i,
	prng_reseed_i,
	key_clear_i,
	data_out_clear_i,
	mux_sel_err_i,
	sp_enc_err_i,
	rnd_ctr_err_i,
	op_err_i,
	alert_fatal_i,
	alert_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	state_sel_o,
	state_we_o,
	sub_bytes_en_o,
	sub_bytes_out_req_i,
	sub_bytes_out_ack_o,
	add_rk_sel_o,
	key_full_sel_o,
	key_full_we_o,
	key_dec_sel_o,
	key_dec_we_o,
	key_expand_en_o,
	key_expand_out_req_i,
	key_expand_out_ack_o,
	key_expand_clear_o,
	rnd_ctr_o,
	key_words_sel_o,
	round_key_sel_o,
	crypt_q_i,
	crypt_d_o,
	dec_key_gen_q_i,
	dec_key_gen_d_o,
	prng_reseed_q_i,
	prng_reseed_d_o,
	key_clear_q_i,
	key_clear_d_o,
	data_out_clear_q_i,
	data_out_clear_d_o
);
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_i;
	output wire in_ready_o;
	output wire out_valid_o;
	input wire out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire crypt_i;
	input wire dec_key_gen_i;
	input wire prng_reseed_i;
	input wire key_clear_i;
	input wire data_out_clear_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	input wire rnd_ctr_err_i;
	input wire op_err_i;
	input wire alert_fatal_i;
	output wire alert_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] state_sel_o;
	output wire state_we_o;
	output wire sub_bytes_en_o;
	input wire sub_bytes_out_req_i;
	output wire sub_bytes_out_ack_o;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_rk_sel_o;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_full_sel_o;
	output wire key_full_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] key_dec_sel_o;
	output wire key_dec_we_o;
	output wire key_expand_en_o;
	input wire key_expand_out_req_i;
	output wire key_expand_out_ack_o;
	output wire key_expand_clear_o;
	output wire [3:0] rnd_ctr_o;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	output wire [4:0] key_words_sel_o;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] round_key_sel_o;
	input wire crypt_q_i;
	output wire crypt_d_o;
	input wire dec_key_gen_q_i;
	output wire dec_key_gen_d_o;
	input wire prng_reseed_q_i;
	output wire prng_reseed_d_o;
	input wire key_clear_q_i;
	output wire key_clear_d_o;
	input wire data_out_clear_q_i;
	output wire data_out_clear_d_o;
	localparam signed [31:0] NumInBufBits = 26;
	wire [25:0] in;
	wire [25:0] in_buf;
	assign in = {in_valid_i, out_ready_i, cfg_valid_i, op_i, key_len_i, crypt_i, dec_key_gen_i, prng_reseed_i, key_clear_i, data_out_clear_i, mux_sel_err_i, sp_enc_err_i, rnd_ctr_err_i, op_err_i, alert_fatal_i, prng_reseed_ack_i, sub_bytes_out_req_i, key_expand_out_req_i, crypt_q_i, dec_key_gen_q_i, prng_reseed_q_i, key_clear_q_i, data_out_clear_q_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire in_valid;
	wire out_ready;
	wire cfg_valid;
	wire [1:0] op;
	wire [1:0] op_raw;
	wire [2:0] key_len;
	wire crypt;
	wire dec_key_gen;
	wire prng_reseed;
	wire key_clear;
	wire data_out_clear;
	wire mux_sel_err;
	wire sp_enc_err;
	wire rnd_ctr_err;
	wire op_err;
	wire alert_fatal;
	wire prng_reseed_ack;
	wire sub_bytes_out_req;
	wire key_expand_out_req;
	wire crypt_q;
	wire dec_key_gen_q;
	wire prng_reseed_q;
	wire key_clear_q;
	wire data_out_clear_q;
	assign {in_valid, out_ready, cfg_valid, op_raw, key_len, crypt, dec_key_gen, prng_reseed, key_clear, data_out_clear, mux_sel_err, sp_enc_err, rnd_ctr_err, op_err, alert_fatal, prng_reseed_ack, sub_bytes_out_req, key_expand_out_req, crypt_q, dec_key_gen_q, prng_reseed_q, key_clear_q, data_out_clear_q} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op = sv2v_cast_63054(op_raw);
	wire in_ready;
	wire out_valid;
	wire alert;
	wire prng_update;
	wire prng_reseed_req;
	wire [4:0] state_sel;
	wire state_we;
	wire sub_bytes_en;
	wire sub_bytes_out_ack;
	wire [4:0] add_rk_sel;
	wire [4:0] key_full_sel;
	wire key_full_we;
	wire [2:0] key_dec_sel;
	wire key_dec_we;
	wire key_expand_en;
	wire key_expand_out_ack;
	wire key_expand_clear;
	wire [3:0] rnd_ctr;
	wire [4:0] key_words_sel;
	wire [2:0] round_key_sel;
	wire crypt_d;
	wire dec_key_gen_d;
	wire prng_reseed_d;
	wire key_clear_d;
	wire data_out_clear_d;
	aes_cipher_control_fsm #(
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_cipher_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(in_valid),
		.in_ready_o(in_ready),
		.out_valid_o(out_valid),
		.out_ready_i(out_ready),
		.cfg_valid_i(cfg_valid),
		.op_i(op),
		.key_len_i(key_len),
		.crypt_i(crypt),
		.dec_key_gen_i(dec_key_gen),
		.prng_reseed_i(prng_reseed),
		.key_clear_i(key_clear),
		.data_out_clear_i(data_out_clear),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.rnd_ctr_err_i(rnd_ctr_err),
		.op_err_i(op_err),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.state_sel_o(state_sel),
		.state_we_o(state_we),
		.sub_bytes_en_o(sub_bytes_en),
		.sub_bytes_out_req_i(sub_bytes_out_req),
		.sub_bytes_out_ack_o(sub_bytes_out_ack),
		.add_rk_sel_o(add_rk_sel),
		.key_full_sel_o(key_full_sel),
		.key_full_we_o(key_full_we),
		.key_dec_sel_o(key_dec_sel),
		.key_dec_we_o(key_dec_we),
		.key_expand_en_o(key_expand_en),
		.key_expand_out_req_i(key_expand_out_req),
		.key_expand_out_ack_o(key_expand_out_ack),
		.key_expand_clear_o(key_expand_clear),
		.rnd_ctr_o(rnd_ctr),
		.key_words_sel_o(key_words_sel),
		.round_key_sel_o(round_key_sel),
		.crypt_q_i(crypt_q),
		.crypt_d_o(crypt_d),
		.dec_key_gen_q_i(dec_key_gen_q),
		.dec_key_gen_d_o(dec_key_gen_d),
		.key_clear_q_i(key_clear_q),
		.key_clear_d_o(key_clear_d),
		.prng_reseed_q_i(prng_reseed_q),
		.prng_reseed_d_o(prng_reseed_d),
		.data_out_clear_q_i(data_out_clear_q),
		.data_out_clear_d_o(data_out_clear_d)
	);
	localparam signed [31:0] NumOutBufBits = 48;
	wire [47:0] out;
	wire [47:0] out_buf;
	assign out = {in_ready, out_valid, alert, prng_update, prng_reseed_req, state_sel, state_we, sub_bytes_en, sub_bytes_out_ack, add_rk_sel, key_full_sel, key_full_we, key_dec_sel, key_dec_we, key_expand_en, key_expand_out_ack, key_expand_clear, rnd_ctr, key_words_sel, round_key_sel, crypt_d, dec_key_gen_d, key_clear_d, prng_reseed_d, data_out_clear_d};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {in_ready_o, out_valid_o, alert_o, prng_update_o, prng_reseed_req_o, state_sel_o, state_we_o, sub_bytes_en_o, sub_bytes_out_ack_o, add_rk_sel_o, key_full_sel_o, key_full_we_o, key_dec_sel_o, key_dec_we_o, key_expand_en_o, key_expand_out_ack_o, key_expand_clear_o, rnd_ctr_o, key_words_sel_o, round_key_sel_o, crypt_d_o, dec_key_gen_d_o, key_clear_d_o, prng_reseed_d_o, data_out_clear_d_o} = out_buf;
endmodule
module aes_cipher_core (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	cfg_valid_i,
	op_i,
	key_len_i,
	crypt_i,
	crypt_o,
	dec_key_gen_i,
	dec_key_gen_o,
	prng_reseed_i,
	prng_reseed_o,
	key_clear_i,
	key_clear_o,
	data_out_clear_i,
	data_out_clear_o,
	alert_fatal_i,
	alert_o,
	prd_clearing_state_i,
	prd_clearing_key_i,
	force_masks_i,
	data_in_mask_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i,
	state_init_i,
	key_init_i,
	state_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] CiphOpFwdOnly = 0;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstMaskingLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstMaskingLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] in_valid_i;
	output wire [2:0] in_ready_o;
	output wire [2:0] out_valid_o;
	input wire [2:0] out_ready_i;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire [2:0] crypt_i;
	output wire [2:0] crypt_o;
	input wire [2:0] dec_key_gen_i;
	output wire [2:0] dec_key_gen_o;
	input wire prng_reseed_i;
	output wire prng_reseed_o;
	input wire key_clear_i;
	output wire key_clear_o;
	input wire data_out_clear_i;
	output wire data_out_clear_o;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] prd_clearing_state_i;
	input wire [((NumShares * 8) * 32) - 1:0] prd_clearing_key_i;
	input wire force_masks_i;
	output wire [127:0] data_in_mask_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] state_init_i;
	input wire [((NumShares * 8) * 32) - 1:0] key_init_i;
	output wire [(((NumShares * 4) * 4) * 8) - 1:0] state_o;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] state_d;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] state_q;
	wire [2:0] state_we_ctrl;
	wire [2:0] state_we;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_StateSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] state_sel_raw;
	wire [4:0] state_sel_ctrl;
	wire [4:0] state_sel;
	wire state_sel_err;
	wire [2:0] sub_bytes_en;
	wire [2:0] sub_bytes_out_req;
	wire [2:0] sub_bytes_out_ack;
	wire sub_bytes_err;
	wire [127:0] sub_bytes_out;
	wire [127:0] sb_in_mask;
	wire [127:0] sb_out_mask;
	wire [127:0] shift_rows_in [0:NumShares - 1];
	wire [(((NumShares * 4) * 4) * 8) - 1:0] shift_rows_out;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] mix_columns_out;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] add_round_key_in;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] add_round_key_out;
	localparam signed [31:0] aes_pkg_AddRKSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] add_rk_sel_raw;
	wire [4:0] add_rk_sel_ctrl;
	wire [4:0] add_rk_sel;
	wire add_rk_sel_err;
	reg [((NumShares * 8) * 32) - 1:0] key_full_d;
	reg [((NumShares * 8) * 32) - 1:0] key_full_q;
	wire [2:0] key_full_we_ctrl;
	wire [2:0] key_full_we;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyFullSelWidth = aes_pkg_Mux4SelWidth;
	wire [4:0] key_full_sel_raw;
	wire [4:0] key_full_sel_ctrl;
	wire [4:0] key_full_sel;
	wire key_full_sel_err;
	reg [((NumShares * 8) * 32) - 1:0] key_dec_d;
	reg [((NumShares * 8) * 32) - 1:0] key_dec_q;
	wire [2:0] key_dec_we_ctrl;
	wire [2:0] key_dec_we;
	localparam signed [31:0] aes_pkg_KeyDecSelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] key_dec_sel_raw;
	wire [2:0] key_dec_sel_ctrl;
	wire [2:0] key_dec_sel;
	wire key_dec_sel_err;
	wire [((NumShares * 8) * 32) - 1:0] key_expand_out;
	wire [1:0] key_expand_op;
	wire [2:0] key_expand_en;
	wire key_expand_prd_we;
	wire [2:0] key_expand_out_req;
	wire [2:0] key_expand_out_ack;
	wire key_expand_err;
	wire key_expand_clear;
	wire [3:0] key_expand_round;
	localparam signed [31:0] aes_pkg_KeyWordsSelWidth = aes_pkg_Mux4SelWidth;
	wire [4:0] key_words_sel_raw;
	wire [4:0] key_words_sel_ctrl;
	wire [4:0] key_words_sel;
	wire key_words_sel_err;
	reg [127:0] key_words [0:NumShares - 1];
	wire [(((NumShares * 4) * 4) * 8) - 1:0] key_bytes;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] key_mix_columns_out;
	reg [(((NumShares * 4) * 4) * 8) - 1:0] round_key;
	localparam signed [31:0] aes_pkg_RoundKeySelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] round_key_sel_raw;
	wire [2:0] round_key_sel_ctrl;
	wire [2:0] round_key_sel;
	wire round_key_sel_err;
	wire cfg_valid;
	wire mux_sel_err;
	wire sp_enc_err_d;
	reg sp_enc_err_q;
	wire op_err;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDData = 128;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	localparam [31:0] aes_pkg_WidthPRDMasking = aes_pkg_WidthPRDData + aes_pkg_WidthPRDKey;
	wire [aes_pkg_WidthPRDMasking - 1:0] prd_masking;
	wire [127:0] prd_sub_bytes_d;
	reg [127:0] prd_sub_bytes_q;
	wire [31:0] prd_key_expand;
	wire prd_masking_upd;
	wire prd_masking_rsd_req;
	wire prd_masking_rsd_ack;
	wire [127:0] data_in_mask;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op_err = ~((op_i == sv2v_cast_63054(2'b01)) || (op_i == sv2v_cast_63054(2'b10)));
	assign cfg_valid = cfg_valid_i & ~op_err;
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_73510;
		input reg [4:0] inp;
		sv2v_cast_73510 = inp;
	endfunction
	always @(*) begin : state_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (state_sel)
			sv2v_cast_73510(sv2v_cast_19785(5'b01110)): state_d = state_init_i;
			sv2v_cast_73510(sv2v_cast_19785(5'b11000)): state_d = add_round_key_out;
			sv2v_cast_73510(sv2v_cast_19785(5'b00001)): state_d = prd_clearing_state_i;
			default: state_d = prd_clearing_state_i;
		endcase
	end
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni) begin : state_reg
		if (!rst_ni)
			state_q <= {NumShares {128'b00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
		else if (state_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			state_q <= state_d;
	end
	generate
		if (!SecMasking) begin : gen_no_masks
			assign sb_in_mask = 1'sb0;
			assign prd_masking = 1'sb0;
			wire unused_entropy_ack;
			wire [EntropyWidth - 1:0] unused_entropy;
			assign unused_entropy_ack = entropy_ack_i;
			assign unused_entropy = entropy_i;
			assign entropy_req_o = 1'b0;
			wire unused_force_masks;
			wire unused_prd_masking_upd;
			wire unused_prd_masking_rsd_req;
			assign unused_force_masks = force_masks_i;
			assign unused_prd_masking_upd = prd_masking_upd;
			assign unused_prd_masking_rsd_req = prd_masking_rsd_req;
			assign prd_masking_rsd_ack = 1'b0;
			wire [127:0] unused_sb_out_mask;
			assign unused_sb_out_mask = sb_out_mask;
		end
		else begin : gen_masks
			assign sb_in_mask = state_q[8 * (4 * ((NumShares - 2) * 4))+:128];
			aes_prng_masking #(
				.Width(aes_pkg_WidthPRDMasking),
				.EntropyWidth(EntropyWidth),
				.SecAllowForcingMasks(SecAllowForcingMasks),
				.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
				.RndCnstLfsrSeed(RndCnstMaskingLfsrSeed),
				.RndCnstLfsrPerm(RndCnstMaskingLfsrPerm)
			) u_aes_prng_masking(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.force_masks_i(force_masks_i),
				.data_update_i(prd_masking_upd),
				.data_o(prd_masking),
				.reseed_req_i(prd_masking_rsd_req),
				.reseed_ack_o(prd_masking_rsd_ack),
				.entropy_req_o(entropy_req_o),
				.entropy_ack_i(entropy_ack_i),
				.entropy_i(entropy_i)
			);
		end
	endgenerate
	assign prd_key_expand = prd_masking[aes_pkg_WidthPRDMasking - 1-:aes_pkg_WidthPRDKey];
	assign prd_sub_bytes_d = prd_masking[127-:aes_pkg_WidthPRDData];
	generate
		if (!SecMasking) begin : gen_no_prd_buffer
			wire [128:1] sv2v_tmp_5DA8C;
			assign sv2v_tmp_5DA8C = prd_sub_bytes_d;
			always @(*) prd_sub_bytes_q = sv2v_tmp_5DA8C;
		end
		else begin : gen_prd_buffer
			always @(posedge clk_i or negedge rst_ni) begin : prd_sub_bytes_reg
				if (!rst_ni)
					prd_sub_bytes_q <= 1'sb0;
				else if (state_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					prd_sub_bytes_q <= prd_sub_bytes_d;
			end
		end
	endgenerate
	wire [127:0] prd_sub_bytes;
	assign prd_sub_bytes = prd_sub_bytes_q;
	localparam [31:0] WidthPRDRow = 32;
	genvar _gv_i_8;
	function automatic [31:0] aes_pkg_aes_prd_get_lsbs;
		input reg [31:0] in;
		reg [31:0] prd_lsbs;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 4; i = i + 1)
					prd_lsbs[i * 8+:8] = in[i * aes_pkg_WidthPRDSBox+:8];
			end
			aes_pkg_aes_prd_get_lsbs = prd_lsbs;
		end
	endfunction
	generate
		for (_gv_i_8 = 0; _gv_i_8 < 4; _gv_i_8 = _gv_i_8 + 1) begin : gen_in_mask
			localparam i = _gv_i_8;
			assign data_in_mask[8 * (i * 4)+:32] = aes_pkg_aes_prd_get_lsbs(prd_sub_bytes[i * WidthPRDRow+:WidthPRDRow]);
		end
	endgenerate
	assign data_in_mask_o = {data_in_mask[32+:32], data_in_mask[0+:32], data_in_mask[96+:32], data_in_mask[64+:32]};
	aes_sub_bytes #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sub_bytes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(sub_bytes_en),
		.out_req_o(sub_bytes_out_req),
		.out_ack_i(sub_bytes_out_ack),
		.op_i(op_i),
		.data_i(state_q[8 * (4 * ((NumShares - 1) * 4))+:128]),
		.mask_i(sb_in_mask),
		.prd_i(prd_sub_bytes_q),
		.data_o(sub_bytes_out),
		.mask_o(sb_out_mask),
		.err_o(sub_bytes_err)
	);
	genvar _gv_s_2;
	generate
		for (_gv_s_2 = 0; _gv_s_2 < NumShares; _gv_s_2 = _gv_s_2 + 1) begin : gen_shares_shift_mix
			localparam s = _gv_s_2;
			if (s == 0) begin : gen_shift_in_data
				assign shift_rows_in[s] = sub_bytes_out;
			end
			else begin : gen_shift_in_mask
				assign shift_rows_in[s] = sb_out_mask;
			end
			aes_shift_rows u_aes_shift_rows(
				.op_i(op_i),
				.data_i(shift_rows_in[s]),
				.data_o(shift_rows_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
			aes_mix_columns u_aes_mix_columns(
				.op_i(op_i),
				.data_i(shift_rows_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128]),
				.data_o(mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
		end
	endgenerate
	function automatic [4:0] sv2v_cast_7524F;
		input reg [4:0] inp;
		sv2v_cast_7524F = inp;
	endfunction
	always @(*) begin : add_round_key_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (add_rk_sel)
			sv2v_cast_7524F(sv2v_cast_19785(5'b01110)): add_round_key_in = state_q;
			sv2v_cast_7524F(sv2v_cast_19785(5'b11000)): add_round_key_in = mix_columns_out;
			sv2v_cast_7524F(sv2v_cast_19785(5'b00001)): add_round_key_in = shift_rows_out;
			default: add_round_key_in = state_q;
		endcase
	end
	genvar _gv_s_3;
	generate
		for (_gv_s_3 = 0; _gv_s_3 < NumShares; _gv_s_3 = _gv_s_3 + 1) begin : gen_shares_add_round_key
			localparam s = _gv_s_3;
			assign add_round_key_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128] = add_round_key_in[8 * (4 * (((NumShares - 1) - s) * 4))+:128] ^ round_key[8 * (4 * (((NumShares - 1) - s) * 4))+:128];
		end
	endgenerate
	function automatic [4:0] sv2v_cast_26872;
		input reg [4:0] inp;
		sv2v_cast_26872 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_7DAC1;
		input reg [4:0] inp;
		sv2v_cast_7DAC1 = inp;
	endfunction
	always @(*) begin : key_full_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_full_sel)
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b01110)): key_full_d = key_init_i;
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b11000)): key_full_d = (!CiphOpFwdOnly ? key_dec_q : prd_clearing_key_i);
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b00001)): key_full_d = key_expand_out;
			sv2v_cast_7DAC1(sv2v_cast_26872(5'b10111)): key_full_d = prd_clearing_key_i;
			default: key_full_d = prd_clearing_key_i;
		endcase
	end
	always @(posedge clk_i or negedge rst_ni) begin : key_full_reg
		if (!rst_ni)
			key_full_q <= {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
		else if (key_full_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			key_full_q <= key_full_d;
	end
	function automatic [2:0] sv2v_cast_F5C01;
		input reg [2:0] inp;
		sv2v_cast_F5C01 = inp;
	endfunction
	generate
		if (!CiphOpFwdOnly) begin : gen_key_dec
			always @(*) begin : key_dec_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_dec_sel)
					sv2v_cast_F5C01(sv2v_cast_14B94(3'b011)): key_dec_d = key_expand_out;
					sv2v_cast_F5C01(sv2v_cast_14B94(3'b100)): key_dec_d = prd_clearing_key_i;
					default: key_dec_d = prd_clearing_key_i;
				endcase
			end
			always @(posedge clk_i or negedge rst_ni) begin : key_dec_reg
				if (!rst_ni)
					key_dec_q <= {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
				else if (key_dec_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					key_dec_q <= key_dec_d;
			end
		end
		else begin : gen_no_key_dec
			wire [(NumShares * 8) * 32:1] sv2v_tmp_AD7FF;
			assign sv2v_tmp_AD7FF = {NumShares {256'b0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000}};
			always @(*) key_dec_q = sv2v_tmp_AD7FF;
			wire [(NumShares * 8) * 32:1] sv2v_tmp_63858;
			assign sv2v_tmp_63858 = key_dec_q;
			always @(*) key_dec_d = sv2v_tmp_63858;
			reg unused_key_dec;
			always @(*) begin
				if (_sv2v_0)
					;
				unused_key_dec = ^{key_dec_sel, key_dec_we};
				begin : sv2v_autoblock_2
					reg signed [31:0] s;
					for (s = 0; s < NumShares; s = s + 1)
						unused_key_dec = unused_key_dec ^ ^{key_dec_d[32 * (((NumShares - 1) - s) * 8)+:256]};
				end
			end
		end
	endgenerate
	assign key_expand_prd_we = (key_full_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	aes_key_expand #(
		.AES192Enable(AES192Enable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_key_expand(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.cfg_valid_i(cfg_valid),
		.op_i(key_expand_op),
		.en_i(key_expand_en),
		.prd_we_i(key_expand_prd_we),
		.out_req_o(key_expand_out_req),
		.out_ack_i(key_expand_out_ack),
		.clear_i(key_expand_clear),
		.round_i(key_expand_round),
		.key_len_i(key_len_i),
		.key_i(key_full_q),
		.key_o(key_expand_out),
		.prd_i(prd_key_expand),
		.err_o(key_expand_err)
	);
	genvar _gv_s_4;
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_3
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_4
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	function automatic [4:0] sv2v_cast_21340;
		input reg [4:0] inp;
		sv2v_cast_21340 = inp;
	endfunction
	generate
		for (_gv_s_4 = 0; _gv_s_4 < NumShares; _gv_s_4 = _gv_s_4 + 1) begin : gen_shares_round_key
			localparam s = _gv_s_4;
			always @(*) begin : key_words_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_words_sel)
					sv2v_cast_21340(sv2v_cast_26872(5'b01110)): key_words[s] = key_full_q[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
					sv2v_cast_21340(sv2v_cast_26872(5'b11000)): key_words[s] = (AES192Enable ? key_full_q[32 * ((((NumShares - 1) - s) * 8) + 2)+:128] : {128 {1'sb0}});
					sv2v_cast_21340(sv2v_cast_26872(5'b00001)): key_words[s] = key_full_q[32 * ((((NumShares - 1) - s) * 8) + 4)+:128];
					sv2v_cast_21340(sv2v_cast_26872(5'b10111)): key_words[s] = 1'sb0;
					default: key_words[s] = 1'sb0;
				endcase
			end
			assign key_bytes[8 * (4 * (((NumShares - 1) - s) * 4))+:128] = aes_pkg_aes_transpose(key_words[s]);
			aes_mix_columns u_aes_key_mix_columns(
				.op_i(sv2v_cast_63054(2'b10)),
				.data_i(key_bytes[8 * (4 * (((NumShares - 1) - s) * 4))+:128]),
				.data_o(key_mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128])
			);
		end
	endgenerate
	function automatic [2:0] sv2v_cast_4C47F;
		input reg [2:0] inp;
		sv2v_cast_4C47F = inp;
	endfunction
	always @(*) begin : round_key_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (round_key_sel)
			sv2v_cast_4C47F(sv2v_cast_14B94(3'b011)): round_key = key_bytes;
			sv2v_cast_4C47F(sv2v_cast_14B94(3'b100)): round_key = (!CiphOpFwdOnly ? key_mix_columns_out : key_bytes);
			default: round_key = key_bytes;
		endcase
	end
	generate
		if (CiphOpFwdOnly) begin : gen_unused_key_mix_columns_out
			reg unused_key_mix_columns_out;
			always @(*) begin
				if (_sv2v_0)
					;
				unused_key_mix_columns_out = 1'b0;
				begin : sv2v_autoblock_5
					reg signed [31:0] s;
					for (s = 0; s < NumShares; s = s + 1)
						unused_key_mix_columns_out = unused_key_mix_columns_out ^ ^{key_mix_columns_out[8 * (4 * (((NumShares - 1) - s) * 4))+:128]};
				end
			end
		end
	endgenerate
	aes_cipher_control #(
		.CiphOpFwdOnly(CiphOpFwdOnly),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) u_aes_cipher_control(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(in_valid_i),
		.in_ready_o(in_ready_o),
		.out_valid_o(out_valid_o),
		.out_ready_i(out_ready_i),
		.cfg_valid_i(cfg_valid),
		.op_i(op_i),
		.key_len_i(key_len_i),
		.crypt_i(crypt_i),
		.crypt_o(crypt_o),
		.dec_key_gen_i(dec_key_gen_i),
		.dec_key_gen_o(dec_key_gen_o),
		.prng_reseed_i(prng_reseed_i),
		.prng_reseed_o(prng_reseed_o),
		.key_clear_i(key_clear_i),
		.key_clear_o(key_clear_o),
		.data_out_clear_i(data_out_clear_i),
		.data_out_clear_o(data_out_clear_o),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err_q),
		.op_err_i(op_err),
		.alert_fatal_i(alert_fatal_i),
		.alert_o(alert_o),
		.prng_update_o(prd_masking_upd),
		.prng_reseed_req_o(prd_masking_rsd_req),
		.prng_reseed_ack_i(prd_masking_rsd_ack),
		.state_sel_o(state_sel_ctrl),
		.state_we_o(state_we_ctrl),
		.sub_bytes_en_o(sub_bytes_en),
		.sub_bytes_out_req_i(sub_bytes_out_req),
		.sub_bytes_out_ack_o(sub_bytes_out_ack),
		.add_rk_sel_o(add_rk_sel_ctrl),
		.key_expand_op_o(key_expand_op),
		.key_full_sel_o(key_full_sel_ctrl),
		.key_full_we_o(key_full_we_ctrl),
		.key_dec_sel_o(key_dec_sel_ctrl),
		.key_dec_we_o(key_dec_we_ctrl),
		.key_expand_en_o(key_expand_en),
		.key_expand_out_req_i(key_expand_out_req),
		.key_expand_out_ack_o(key_expand_out_ack),
		.key_expand_clear_o(key_expand_clear),
		.key_expand_round_o(key_expand_round),
		.key_words_sel_o(key_words_sel_ctrl),
		.round_key_sel_o(round_key_sel_ctrl)
	);
	localparam signed [31:0] aes_pkg_StateSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_StateSelNum),
		.Width(aes_pkg_StateSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_state_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(state_sel_ctrl),
		.sel_o(state_sel_raw),
		.err_o(state_sel_err)
	);
	assign state_sel = sv2v_cast_73510(state_sel_raw);
	localparam signed [31:0] aes_pkg_AddRKSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_AddRKSelNum),
		.Width(aes_pkg_AddRKSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_add_rk_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(add_rk_sel_ctrl),
		.sel_o(add_rk_sel_raw),
		.err_o(add_rk_sel_err)
	);
	assign add_rk_sel = sv2v_cast_7524F(add_rk_sel_raw);
	localparam signed [31:0] aes_pkg_KeyFullSelNum = 4;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyFullSelNum),
		.Width(aes_pkg_KeyFullSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_full_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_full_sel_ctrl),
		.sel_o(key_full_sel_raw),
		.err_o(key_full_sel_err)
	);
	assign key_full_sel = sv2v_cast_7DAC1(key_full_sel_raw);
	localparam signed [31:0] aes_pkg_KeyDecSelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyDecSelNum),
		.Width(aes_pkg_KeyDecSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_dec_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_dec_sel_ctrl),
		.sel_o(key_dec_sel_raw),
		.err_o(key_dec_sel_err)
	);
	assign key_dec_sel = sv2v_cast_F5C01(key_dec_sel_raw);
	localparam signed [31:0] aes_pkg_KeyWordsSelNum = 4;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyWordsSelNum),
		.Width(aes_pkg_KeyWordsSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_words_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_words_sel_ctrl),
		.sel_o(key_words_sel_raw),
		.err_o(key_words_sel_err)
	);
	assign key_words_sel = sv2v_cast_21340(key_words_sel_raw);
	localparam signed [31:0] aes_pkg_RoundKeySelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_RoundKeySelNum),
		.Width(aes_pkg_RoundKeySelWidth),
		.EnSecBuf(1'b1)
	) u_aes_round_key_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(round_key_sel_ctrl),
		.sel_o(round_key_sel_raw),
		.err_o(round_key_sel_err)
	);
	assign round_key_sel = sv2v_cast_4C47F(round_key_sel_raw);
	assign mux_sel_err = ((((state_sel_err | add_rk_sel_err) | key_full_sel_err) | key_dec_sel_err) | key_words_sel_err) | round_key_sel_err;
	localparam [31:0] NumSp2VSig = 3;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [2:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = state_we_ctrl;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = key_full_we_ctrl;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = key_dec_we_ctrl;
	localparam [2:0] Sp2VEnSecBuf = {NumSp2VSig {1'b1}};
	genvar _gv_i_9;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_9 = 0; _gv_i_9 < NumSp2VSig; _gv_i_9 = _gv_i_9 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_9;
			aes_sel_buf_chk #(
				.Num(aes_pkg_Sp2VNum),
				.Width(aes_pkg_Sp2VWidth),
				.EnSecBuf(Sp2VEnSecBuf[i])
			) u_aes_sp2v_sig_buf_chk_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.sel_i(sp2v_sig[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.sel_o(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.err_o(sp2v_sig_err[i])
			);
			assign sp2v_sig_chk[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign state_we = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign key_full_we = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign key_dec_we = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign sp_enc_err_d = (|sp2v_sig_err | sub_bytes_err) | key_expand_err;
	always @(posedge clk_i or negedge rst_ni) begin : reg_sp_enc_err
		if (!rst_ni)
			sp_enc_err_q <= 1'b0;
		else if (sp_enc_err_d)
			sp_enc_err_q <= 1'b1;
	end
	assign state_o = add_round_key_out;
	initial _sv2v_0 = 0;
endmodule
module aes_control (
	clk_i,
	rst_ni,
	ctrl_qe_i,
	ctrl_we_o,
	ctrl_phase_i,
	ctrl_err_storage_i,
	op_i,
	mode_i,
	cipher_op_i,
	sideload_i,
	prng_reseed_rate_i,
	manual_operation_i,
	key_touch_forces_reseed_i,
	ctrl_gcm_qe_i,
	ctrl_gcm_we_o,
	ctrl_gcm_phase_i,
	gcm_init_done_o,
	gcm_phase_i,
	start_i,
	key_iv_data_in_clear_i,
	data_out_clear_i,
	prng_reseed_i,
	mux_sel_err_i,
	sp_enc_err_i,
	lc_escalate_en_i,
	alert_fatal_i,
	alert_o,
	key_sideload_valid_i,
	key_init_qe_i,
	iv_qe_i,
	data_in_qe_i,
	data_out_re_i,
	data_in_we_o,
	data_out_sel_o,
	data_out_we_o,
	data_in_prev_sel_o,
	data_in_prev_we_o,
	state_in_sel_o,
	add_state_in_sel_o,
	add_state_out_sel_o,
	ctr_inc32_o,
	ctr_incr_o,
	ctr_ready_i,
	ctr_we_i,
	cipher_in_valid_o,
	cipher_in_ready_i,
	cipher_out_valid_i,
	cipher_out_ready_o,
	cipher_crypt_o,
	cipher_crypt_i,
	cipher_dec_key_gen_o,
	cipher_dec_key_gen_i,
	cipher_prng_reseed_o,
	cipher_prng_reseed_i,
	cipher_key_clear_o,
	cipher_key_clear_i,
	cipher_data_out_clear_o,
	cipher_data_out_clear_i,
	ghash_in_valid_o,
	ghash_in_ready_i,
	ghash_out_valid_i,
	ghash_out_ready_o,
	ghash_load_hash_subkey_o,
	key_init_sel_o,
	key_init_we_o,
	iv_sel_o,
	iv_we_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	start_o,
	start_we_o,
	key_iv_data_in_clear_o,
	key_iv_data_in_clear_we_o,
	data_out_clear_o,
	data_out_clear_we_o,
	prng_reseed_o,
	prng_reseed_we_o,
	idle_o,
	idle_we_o,
	stall_o,
	stall_we_o,
	output_lost_i,
	output_lost_o,
	output_lost_we_o,
	output_valid_o,
	output_valid_we_o,
	input_ready_o,
	input_ready_we_o
);
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	parameter [31:0] SecStartTriggerDelay = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output wire ctrl_we_o;
	input wire ctrl_phase_i;
	input wire ctrl_err_storage_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	input wire [5:0] mode_i;
	input wire [1:0] cipher_op_i;
	input wire sideload_i;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	input wire [2:0] prng_reseed_rate_i;
	input wire manual_operation_i;
	input wire key_touch_forces_reseed_i;
	input wire ctrl_gcm_qe_i;
	output wire ctrl_gcm_we_o;
	input wire ctrl_gcm_phase_i;
	output wire gcm_init_done_o;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire start_i;
	input wire key_iv_data_in_clear_i;
	input wire data_out_clear_i;
	input wire prng_reseed_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output wire data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_out_sel_o;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_in_prev_sel_o;
	output wire [2:0] data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_state_out_sel_o;
	output wire [2:0] ctr_inc32_o;
	output wire [2:0] ctr_incr_o;
	input wire [2:0] ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we_i;
	output wire [2:0] cipher_in_valid_o;
	input wire [2:0] cipher_in_ready_i;
	input wire [2:0] cipher_out_valid_i;
	output wire [2:0] cipher_out_ready_o;
	output wire [2:0] cipher_crypt_o;
	input wire [2:0] cipher_crypt_i;
	output wire [2:0] cipher_dec_key_gen_o;
	input wire [2:0] cipher_dec_key_gen_i;
	output wire cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output wire cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output wire cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output wire [2:0] ghash_in_valid_o;
	input wire [2:0] ghash_in_ready_i;
	input wire [2:0] ghash_out_valid_i;
	output wire [2:0] ghash_out_ready_o;
	output wire [2:0] ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] key_init_sel_o;
	output wire [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 3) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output reg [5:0] iv_sel_o;
	output wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] iv_we_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_o;
	output wire start_we_o;
	output wire key_iv_data_in_clear_o;
	output wire key_iv_data_in_clear_we_o;
	output wire data_out_clear_o;
	output wire data_out_clear_we_o;
	output wire prng_reseed_o;
	output wire prng_reseed_we_o;
	output wire idle_o;
	output wire idle_we_o;
	output wire stall_o;
	output wire stall_we_o;
	input wire output_lost_i;
	output wire output_lost_o;
	output wire output_lost_we_o;
	output wire output_valid_o;
	output wire output_valid_we_o;
	output wire input_ready_o;
	output wire input_ready_we_o;
	wire start_trigger;
	localparam signed [31:0] AesSecStartTriggerDelayNonDefault = (SecStartTriggerDelay == 0 ? 1 : 2);
	function automatic [AesSecStartTriggerDelayNonDefault - 1:0] sv2v_cast_0740F;
		input reg [AesSecStartTriggerDelayNonDefault - 1:0] inp;
		sv2v_cast_0740F = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_0740F(1'b1);
	end
	generate
		if (SecStartTriggerDelay > 0) begin : gen_start_delay
			localparam [31:0] WidthCounter = $clog2(SecStartTriggerDelay + 1);
			wire [WidthCounter - 1:0] count_d;
			reg [WidthCounter - 1:0] count_q;
			assign count_d = (!start_i ? {WidthCounter {1'sb0}} : (start_trigger ? count_q : count_q + 1'b1));
			assign start_trigger = (count_q == SecStartTriggerDelay[WidthCounter - 1:0] ? 1'b1 : 1'b0);
			always @(posedge clk_i or negedge rst_ni)
				if (!rst_ni)
					count_q <= 1'sb0;
				else
					count_q <= count_d;
		end
		else begin : gen_no_start_delay
			assign start_trigger = start_i;
		end
	endgenerate
	wire [2:0] ctr_ready;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we;
	wire [2:0] cipher_in_ready;
	wire [2:0] cipher_out_valid;
	wire [2:0] cipher_crypt;
	wire [2:0] cipher_dec_key_gen;
	wire [2:0] ghash_in_ready;
	wire [2:0] ghash_out_valid;
	wire mux_sel_err;
	reg mr_err;
	wire sp_enc_err;
	wire [2:0] sp_data_out_we;
	wire [2:0] sp_data_in_prev_we;
	wire [2:0] sp_ctr_inc32;
	wire [2:0] sp_ctr_incr;
	wire [2:0] sp_ctr_ready;
	wire [2:0] sp_cipher_in_valid;
	wire [2:0] sp_cipher_in_ready;
	wire [2:0] sp_cipher_out_valid;
	wire [2:0] sp_cipher_out_ready;
	wire [2:0] sp_in_cipher_crypt;
	wire [2:0] sp_out_cipher_crypt;
	wire [2:0] sp_in_cipher_dec_key_gen;
	wire [2:0] sp_out_cipher_dec_key_gen;
	wire [2:0] sp_ghash_in_valid;
	wire [2:0] sp_ghash_in_ready;
	wire [2:0] sp_ghash_out_valid;
	wire [2:0] sp_ghash_out_ready;
	wire [2:0] sp_ghash_load_hash_subkey;
	wire [2:0] mr_ctrl_we;
	wire [2:0] mr_ctrl_gcm_we;
	wire [2:0] mr_gcm_init_done;
	wire [2:0] mr_alert;
	wire [2:0] mr_data_in_we;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_DataOutSelWidth) - 1:0] mr_data_out_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_DIPSelWidth) - 1:0] mr_data_in_prev_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_SISelWidth) - 1:0] mr_state_in_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddSISelWidth) - 1:0] mr_add_state_in_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_AddSOSelWidth) - 1:0] mr_add_state_out_sel;
	wire [2:0] mr_cipher_prng_reseed;
	wire [2:0] mr_cipher_key_clear;
	wire [2:0] mr_cipher_data_out_clear;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_KeyInitSelWidth) - 1:0] mr_key_init_sel;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_IVSelWidth) - 1:0] mr_iv_sel;
	wire [2:0] mr_prng_update;
	wire [2:0] mr_prng_reseed_req;
	wire [2:0] mr_start_we;
	wire [2:0] mr_key_iv_data_in_clear_we;
	wire [2:0] mr_data_out_clear_we;
	wire [2:0] mr_prng_reseed;
	wire [2:0] mr_prng_reseed_we;
	wire [2:0] mr_idle;
	wire [2:0] mr_idle_we;
	wire [2:0] mr_stall;
	wire [2:0] mr_stall_we;
	wire [2:0] mr_output_lost;
	wire [2:0] mr_output_lost_we;
	wire [2:0] mr_output_valid;
	wire [2:0] mr_output_valid_we;
	wire [2:0] mr_input_ready;
	wire [2:0] mr_input_ready_we;
	wire [((aes_pkg_Sp2VWidth * aes_pkg_NumSharesKey) * 8) - 1:0] int_key_init_we;
	wire [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 3) - 1:0] log_key_init_we;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] int_key_init_qe;
	genvar _gv_s_5;
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	generate
		for (_gv_s_5 = 0; _gv_s_5 < aes_pkg_NumSharesKey; _gv_s_5 = _gv_s_5 + 1) begin : gen_conv_key_init_wqe_shares
			localparam s = _gv_s_5;
			genvar _gv_i_10;
			for (_gv_i_10 = 0; _gv_i_10 < aes_reg_pkg_NumRegsKey; _gv_i_10 = _gv_i_10 + 1) begin : gen_conv_key_init_wqe_regs
				localparam i = _gv_i_10;
				assign int_key_init_qe[(s * aes_reg_pkg_NumRegsKey) + i] = key_init_qe_i[((1 - s) * aes_reg_pkg_NumRegsKey) + i];
				genvar _gv_j_3;
				for (_gv_j_3 = 0; _gv_j_3 < aes_pkg_Sp2VWidth; _gv_j_3 = _gv_j_3 + 1) begin : gen_conv_key_init_wqe_log
					localparam j = _gv_j_3;
					assign log_key_init_we[(((s * aes_reg_pkg_NumRegsKey) + i) * 3) + j] = int_key_init_we[(((j * aes_pkg_NumSharesKey) + s) * 8) + i];
				end
				assign key_init_we_o[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 3+:3] = sv2v_cast_39E4E(log_key_init_we[((s * aes_reg_pkg_NumRegsKey) + i) * 3+:3]);
			end
		end
	endgenerate
	wire [(aes_pkg_Sp2VWidth * aes_pkg_NumSlicesCtr) - 1:0] int_ctr_we;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] log_ctr_we;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_NumSlicesCtr) - 1:0] int_iv_we;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] log_iv_we;
	genvar _gv_i_11;
	generate
		for (_gv_i_11 = 0; _gv_i_11 < aes_pkg_NumSlicesCtr; _gv_i_11 = _gv_i_11 + 1) begin : gen_conv_ctr_iv_we_slices
			localparam i = _gv_i_11;
			assign log_ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = {ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]};
			genvar _gv_j_4;
			for (_gv_j_4 = 0; _gv_j_4 < aes_pkg_Sp2VWidth; _gv_j_4 = _gv_j_4 + 1) begin : gen_conv_ctr_iv_we_log
				localparam j = _gv_j_4;
				assign int_ctr_we[(j * aes_pkg_NumSlicesCtr) + i] = log_ctr_we[(i * aes_pkg_Sp2VWidth) + j];
				assign log_iv_we[(i * aes_pkg_Sp2VWidth) + j] = int_iv_we[(j * aes_pkg_NumSlicesCtr) + i];
			end
			assign iv_we_o[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(log_iv_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign sp_ctr_ready = {ctr_ready};
	assign sp_cipher_in_ready = {cipher_in_ready};
	assign sp_cipher_out_valid = {cipher_out_valid};
	assign sp_in_cipher_crypt = {cipher_crypt};
	assign sp_in_cipher_dec_key_gen = {cipher_dec_key_gen};
	assign sp_ghash_in_ready = {ghash_in_ready};
	assign sp_ghash_out_valid = {ghash_out_valid};
	genvar _gv_i_12;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	localparam [2:0] aes_pkg_SP2V_LOGIC_HIGH = {sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))};
	generate
		for (_gv_i_12 = 0; _gv_i_12 < aes_pkg_Sp2VWidth; _gv_i_12 = _gv_i_12 + 1) begin : gen_fsm
			localparam i = _gv_i_12;
			if (aes_pkg_SP2V_LOGIC_HIGH[i] == 1'b1) begin : gen_fsm_p
				aes_control_fsm_p #(
					.AESGCMEnable(AESGCMEnable),
					.SecMasking(SecMasking)
				) u_aes_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.ctrl_qe_i(ctrl_qe_i),
					.ctrl_we_o(mr_ctrl_we[i]),
					.ctrl_phase_i(ctrl_phase_i),
					.ctrl_err_storage_i(ctrl_err_storage_i),
					.op_i(op_i),
					.mode_i(mode_i),
					.cipher_op_i(cipher_op_i),
					.sideload_i(sideload_i),
					.prng_reseed_rate_i(prng_reseed_rate_i),
					.manual_operation_i(manual_operation_i),
					.key_touch_forces_reseed_i(key_touch_forces_reseed_i),
					.ctrl_gcm_qe_i(ctrl_gcm_qe_i),
					.ctrl_gcm_we_o(mr_ctrl_gcm_we[i]),
					.ctrl_gcm_phase_i(ctrl_gcm_phase_i),
					.gcm_init_done_o(mr_gcm_init_done[i]),
					.gcm_phase_i(gcm_phase_i),
					.start_i(start_trigger),
					.key_iv_data_in_clear_i(key_iv_data_in_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.prng_reseed_i(prng_reseed_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.lc_escalate_en_i(lc_escalate_en_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.key_sideload_valid_i(key_sideload_valid_i),
					.key_init_qe_i(int_key_init_qe),
					.iv_qe_i(iv_qe_i),
					.data_in_qe_i(data_in_qe_i),
					.data_out_re_i(data_out_re_i),
					.data_in_we_o(mr_data_in_we[i]),
					.data_out_sel_o(mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]),
					.data_out_we_o(sp_data_out_we[i]),
					.data_in_prev_sel_o(mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]),
					.data_in_prev_we_o(sp_data_in_prev_we[i]),
					.state_in_sel_o(mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]),
					.add_state_in_sel_o(mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]),
					.add_state_out_sel_o(mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]),
					.ctr_inc32_o(sp_ctr_inc32[i]),
					.ctr_incr_o(sp_ctr_incr[i]),
					.ctr_ready_i(sp_ctr_ready[i]),
					.ctr_we_i(int_ctr_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.cipher_in_valid_o(sp_cipher_in_valid[i]),
					.cipher_in_ready_i(sp_cipher_in_ready[i]),
					.cipher_out_valid_i(sp_cipher_out_valid[i]),
					.cipher_out_ready_o(sp_cipher_out_ready[i]),
					.cipher_crypt_o(sp_out_cipher_crypt[i]),
					.cipher_crypt_i(sp_in_cipher_crypt[i]),
					.cipher_dec_key_gen_o(sp_out_cipher_dec_key_gen[i]),
					.cipher_dec_key_gen_i(sp_in_cipher_dec_key_gen[i]),
					.cipher_prng_reseed_o(mr_cipher_prng_reseed[i]),
					.cipher_prng_reseed_i(cipher_prng_reseed_i),
					.cipher_key_clear_o(mr_cipher_key_clear[i]),
					.cipher_key_clear_i(cipher_key_clear_i),
					.cipher_data_out_clear_o(mr_cipher_data_out_clear[i]),
					.cipher_data_out_clear_i(cipher_data_out_clear_i),
					.ghash_in_valid_o(sp_ghash_in_valid[i]),
					.ghash_in_ready_i(sp_ghash_in_ready[i]),
					.ghash_out_valid_i(sp_ghash_out_valid[i]),
					.ghash_out_ready_o(sp_ghash_out_ready[i]),
					.ghash_load_hash_subkey_o(sp_ghash_load_hash_subkey[i]),
					.key_init_sel_o(mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]),
					.key_init_we_o(int_key_init_we[8 * (i * aes_pkg_NumSharesKey)+:16]),
					.iv_sel_o(mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]),
					.iv_we_o(int_iv_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.start_we_o(mr_start_we[i]),
					.key_iv_data_in_clear_we_o(mr_key_iv_data_in_clear_we[i]),
					.data_out_clear_we_o(mr_data_out_clear_we[i]),
					.prng_reseed_o(mr_prng_reseed[i]),
					.prng_reseed_we_o(mr_prng_reseed_we[i]),
					.idle_o(mr_idle[i]),
					.idle_we_o(mr_idle_we[i]),
					.stall_o(mr_stall[i]),
					.stall_we_o(mr_stall_we[i]),
					.output_lost_i(output_lost_i),
					.output_lost_o(mr_output_lost[i]),
					.output_lost_we_o(mr_output_lost_we[i]),
					.output_valid_o(mr_output_valid[i]),
					.output_valid_we_o(mr_output_valid_we[i]),
					.input_ready_o(mr_input_ready[i]),
					.input_ready_we_o(mr_input_ready_we[i])
				);
			end
			else begin : gen_fsm_n
				aes_control_fsm_n #(
					.AESGCMEnable(AESGCMEnable),
					.SecMasking(SecMasking)
				) u_aes_control_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.ctrl_qe_i(ctrl_qe_i),
					.ctrl_we_o(mr_ctrl_we[i]),
					.ctrl_phase_i(ctrl_phase_i),
					.ctrl_err_storage_i(ctrl_err_storage_i),
					.op_i(op_i),
					.mode_i(mode_i),
					.cipher_op_i(cipher_op_i),
					.sideload_i(sideload_i),
					.prng_reseed_rate_i(prng_reseed_rate_i),
					.manual_operation_i(manual_operation_i),
					.key_touch_forces_reseed_i(key_touch_forces_reseed_i),
					.ctrl_gcm_qe_i(ctrl_gcm_qe_i),
					.ctrl_gcm_we_o(mr_ctrl_gcm_we[i]),
					.ctrl_gcm_phase_i(ctrl_gcm_phase_i),
					.gcm_init_done_o(mr_gcm_init_done[i]),
					.gcm_phase_i(gcm_phase_i),
					.start_i(start_trigger),
					.key_iv_data_in_clear_i(key_iv_data_in_clear_i),
					.data_out_clear_i(data_out_clear_i),
					.prng_reseed_i(prng_reseed_i),
					.mux_sel_err_i(mux_sel_err),
					.sp_enc_err_i(sp_enc_err),
					.lc_escalate_en_i(lc_escalate_en_i),
					.alert_fatal_i(alert_fatal_i),
					.alert_o(mr_alert[i]),
					.key_sideload_valid_i(key_sideload_valid_i),
					.key_init_qe_i(int_key_init_qe),
					.iv_qe_i(iv_qe_i),
					.data_in_qe_i(data_in_qe_i),
					.data_out_re_i(data_out_re_i),
					.data_in_we_o(mr_data_in_we[i]),
					.data_out_sel_o(mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]),
					.data_out_we_no(sp_data_out_we[i]),
					.data_in_prev_sel_o(mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]),
					.data_in_prev_we_no(sp_data_in_prev_we[i]),
					.state_in_sel_o(mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]),
					.add_state_in_sel_o(mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]),
					.add_state_out_sel_o(mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]),
					.ctr_inc32_no(sp_ctr_inc32[i]),
					.ctr_incr_no(sp_ctr_incr[i]),
					.ctr_ready_ni(sp_ctr_ready[i]),
					.ctr_we_ni(int_ctr_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.cipher_in_valid_no(sp_cipher_in_valid[i]),
					.cipher_in_ready_ni(sp_cipher_in_ready[i]),
					.cipher_out_valid_ni(sp_cipher_out_valid[i]),
					.cipher_out_ready_no(sp_cipher_out_ready[i]),
					.cipher_crypt_no(sp_out_cipher_crypt[i]),
					.cipher_crypt_ni(sp_in_cipher_crypt[i]),
					.cipher_dec_key_gen_no(sp_out_cipher_dec_key_gen[i]),
					.cipher_dec_key_gen_ni(sp_in_cipher_dec_key_gen[i]),
					.cipher_prng_reseed_o(mr_cipher_prng_reseed[i]),
					.cipher_prng_reseed_i(cipher_prng_reseed_i),
					.cipher_key_clear_o(mr_cipher_key_clear[i]),
					.cipher_key_clear_i(cipher_key_clear_i),
					.cipher_data_out_clear_o(mr_cipher_data_out_clear[i]),
					.cipher_data_out_clear_i(cipher_data_out_clear_i),
					.ghash_in_valid_no(sp_ghash_in_valid[i]),
					.ghash_in_ready_ni(sp_ghash_in_ready[i]),
					.ghash_out_valid_ni(sp_ghash_out_valid[i]),
					.ghash_out_ready_no(sp_ghash_out_ready[i]),
					.ghash_load_hash_subkey_no(sp_ghash_load_hash_subkey[i]),
					.key_init_sel_o(mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]),
					.key_init_we_no(int_key_init_we[8 * (i * aes_pkg_NumSharesKey)+:16]),
					.iv_sel_o(mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]),
					.iv_we_no(int_iv_we[i * aes_pkg_NumSlicesCtr+:aes_pkg_NumSlicesCtr]),
					.prng_update_o(mr_prng_update[i]),
					.prng_reseed_req_o(mr_prng_reseed_req[i]),
					.prng_reseed_ack_i(prng_reseed_ack_i),
					.start_we_o(mr_start_we[i]),
					.key_iv_data_in_clear_we_o(mr_key_iv_data_in_clear_we[i]),
					.data_out_clear_we_o(mr_data_out_clear_we[i]),
					.prng_reseed_o(mr_prng_reseed[i]),
					.prng_reseed_we_o(mr_prng_reseed_we[i]),
					.idle_o(mr_idle[i]),
					.idle_we_o(mr_idle_we[i]),
					.stall_o(mr_stall[i]),
					.stall_we_o(mr_stall_we[i]),
					.output_lost_i(output_lost_i),
					.output_lost_o(mr_output_lost[i]),
					.output_lost_we_o(mr_output_lost_we[i]),
					.output_valid_o(mr_output_valid[i]),
					.output_valid_we_o(mr_output_valid_we[i]),
					.input_ready_o(mr_input_ready[i]),
					.input_ready_we_o(mr_input_ready_we[i])
				);
			end
		end
	endgenerate
	assign data_out_we_o = sv2v_cast_39E4E(sp_data_out_we);
	assign data_in_prev_we_o = sv2v_cast_39E4E(sp_data_in_prev_we);
	assign ctr_inc32_o = sv2v_cast_39E4E(sp_ctr_inc32);
	assign ctr_incr_o = sv2v_cast_39E4E(sp_ctr_incr);
	assign cipher_in_valid_o = sv2v_cast_39E4E(sp_cipher_in_valid);
	assign cipher_out_ready_o = sv2v_cast_39E4E(sp_cipher_out_ready);
	assign cipher_crypt_o = sv2v_cast_39E4E(sp_out_cipher_crypt);
	assign cipher_dec_key_gen_o = sv2v_cast_39E4E(sp_out_cipher_dec_key_gen);
	assign ghash_in_valid_o = sv2v_cast_39E4E(sp_ghash_in_valid);
	assign ghash_out_ready_o = sv2v_cast_39E4E(sp_ghash_out_ready);
	assign ghash_load_hash_subkey_o = sv2v_cast_39E4E(sp_ghash_load_hash_subkey);
	assign alert_o = |mr_alert;
	assign cipher_prng_reseed_o = |mr_cipher_prng_reseed;
	assign cipher_key_clear_o = |mr_cipher_key_clear;
	assign cipher_data_out_clear_o = |mr_cipher_data_out_clear;
	assign prng_update_o = |mr_prng_update;
	assign prng_reseed_req_o = |mr_prng_reseed_req;
	assign start_we_o = |mr_start_we;
	assign prng_reseed_o = |mr_prng_reseed;
	assign prng_reseed_we_o = |mr_prng_reseed_we;
	assign ctrl_we_o = &mr_ctrl_we;
	assign ctrl_gcm_we_o = &mr_ctrl_gcm_we;
	assign gcm_init_done_o = &mr_gcm_init_done;
	assign data_in_we_o = &mr_data_in_we;
	assign key_iv_data_in_clear_we_o = &mr_key_iv_data_in_clear_we;
	assign data_out_clear_we_o = &mr_data_out_clear_we;
	assign idle_o = &mr_idle;
	assign idle_we_o = &mr_idle_we;
	assign stall_o = &mr_stall;
	assign stall_we_o = &mr_stall_we;
	assign output_lost_o = &mr_output_lost;
	assign output_lost_we_o = &mr_output_lost_we;
	assign output_valid_o = &mr_output_valid;
	assign output_valid_we_o = &mr_output_valid_we;
	assign input_ready_o = &mr_input_ready;
	assign input_ready_we_o = &mr_input_ready_we;
	function automatic [2:0] sv2v_cast_D1B5B;
		input reg [2:0] inp;
		sv2v_cast_D1B5B = inp;
	endfunction
	function automatic [2:0] sv2v_cast_DB8EC;
		input reg [2:0] inp;
		sv2v_cast_DB8EC = inp;
	endfunction
	function automatic [2:0] sv2v_cast_5FB3A;
		input reg [2:0] inp;
		sv2v_cast_5FB3A = inp;
	endfunction
	function automatic [2:0] sv2v_cast_06ECC;
		input reg [2:0] inp;
		sv2v_cast_06ECC = inp;
	endfunction
	function automatic [4:0] sv2v_cast_32B2A;
		input reg [4:0] inp;
		sv2v_cast_32B2A = inp;
	endfunction
	function automatic [4:0] sv2v_cast_A4E58;
		input reg [4:0] inp;
		sv2v_cast_A4E58 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_CDC2F;
		input reg [5:0] inp;
		sv2v_cast_CDC2F = inp;
	endfunction
	always @(*) begin : combine_sparse_signals
		if (_sv2v_0)
			;
		data_out_sel_o = sv2v_cast_D1B5B({aes_pkg_DataOutSelWidth {1'b0}});
		data_in_prev_sel_o = sv2v_cast_DB8EC({aes_pkg_DIPSelWidth {1'b0}});
		state_in_sel_o = sv2v_cast_5FB3A({aes_pkg_SISelWidth {1'b0}});
		add_state_in_sel_o = sv2v_cast_06ECC({aes_pkg_AddSISelWidth {1'b0}});
		add_state_out_sel_o = sv2v_cast_32B2A({aes_pkg_AddSOSelWidth {1'b0}});
		key_init_sel_o = sv2v_cast_A4E58({aes_pkg_KeyInitSelWidth {1'b0}});
		iv_sel_o = sv2v_cast_CDC2F({aes_pkg_IVSelWidth {1'b0}});
		mr_err = 1'b0;
		begin : sv2v_autoblock_2
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				begin
					data_out_sel_o = sv2v_cast_D1B5B({data_out_sel_o} | {mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]});
					data_in_prev_sel_o = sv2v_cast_DB8EC({data_in_prev_sel_o} | {mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth]});
					state_in_sel_o = sv2v_cast_5FB3A({state_in_sel_o} | {mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth]});
					add_state_in_sel_o = sv2v_cast_06ECC({add_state_in_sel_o} | {mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth]});
					add_state_out_sel_o = sv2v_cast_32B2A({add_state_out_sel_o} | {mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth]});
					key_init_sel_o = sv2v_cast_A4E58({key_init_sel_o} | {mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth]});
					iv_sel_o = sv2v_cast_CDC2F({iv_sel_o} | {mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]});
				end
		end
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if (((((((data_out_sel_o != mr_data_out_sel[i * aes_pkg_DataOutSelWidth+:aes_pkg_DataOutSelWidth]) || (data_in_prev_sel_o != mr_data_in_prev_sel[i * aes_pkg_DIPSelWidth+:aes_pkg_DIPSelWidth])) || (state_in_sel_o != mr_state_in_sel[i * aes_pkg_SISelWidth+:aes_pkg_SISelWidth])) || (add_state_in_sel_o != mr_add_state_in_sel[i * aes_pkg_AddSISelWidth+:aes_pkg_AddSISelWidth])) || (add_state_out_sel_o != mr_add_state_out_sel[i * aes_pkg_AddSOSelWidth+:aes_pkg_AddSOSelWidth])) || (key_init_sel_o != mr_key_init_sel[i * aes_pkg_KeyInitSelWidth+:aes_pkg_KeyInitSelWidth])) || (iv_sel_o != mr_iv_sel[i * aes_pkg_IVSelWidth+:aes_pkg_IVSelWidth]))
					mr_err = 1'b1;
		end
	end
	assign mux_sel_err = mux_sel_err_i | mr_err;
	localparam [31:0] NumSp2VSig = 15;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [14:0] sp2v_sig_err;
	assign sp2v_sig[0+:aes_pkg_Sp2VWidth] = cipher_in_ready_i;
	assign sp2v_sig[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = cipher_out_valid_i;
	assign sp2v_sig[6+:aes_pkg_Sp2VWidth] = cipher_crypt_i;
	assign sp2v_sig[9+:aes_pkg_Sp2VWidth] = cipher_dec_key_gen_i;
	assign sp2v_sig[12+:aes_pkg_Sp2VWidth] = ghash_in_ready_i;
	assign sp2v_sig[15+:aes_pkg_Sp2VWidth] = ghash_out_valid_i;
	assign sp2v_sig[18+:aes_pkg_Sp2VWidth] = ctr_ready_i;
	genvar _gv_i_13;
	generate
		for (_gv_i_13 = 0; _gv_i_13 < aes_pkg_NumSlicesCtr; _gv_i_13 = _gv_i_13 + 1) begin : gen_use_ctr_we_i
			localparam i = _gv_i_13;
			assign sp2v_sig[(7 + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = ctr_we_i[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	localparam [14:0] Sp2VEnSecBuf = 1'sb0;
	genvar _gv_i_14;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_14 = 0; _gv_i_14 < NumSp2VSig; _gv_i_14 = _gv_i_14 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_14;
			aes_sel_buf_chk #(
				.Num(aes_pkg_Sp2VNum),
				.Width(aes_pkg_Sp2VWidth),
				.EnSecBuf(Sp2VEnSecBuf[i])
			) u_aes_sp2v_sig_buf_chk_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.sel_i(sp2v_sig[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.sel_o(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.err_o(sp2v_sig_err[i])
			);
			assign sp2v_sig_chk[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	assign cipher_in_ready = sp2v_sig_chk[0+:aes_pkg_Sp2VWidth];
	assign cipher_out_valid = sp2v_sig_chk[aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign cipher_crypt = sp2v_sig_chk[6+:aes_pkg_Sp2VWidth];
	assign cipher_dec_key_gen = sp2v_sig_chk[9+:aes_pkg_Sp2VWidth];
	assign ghash_in_ready = sp2v_sig_chk[12+:aes_pkg_Sp2VWidth];
	assign ghash_out_valid = sp2v_sig_chk[15+:aes_pkg_Sp2VWidth];
	assign ctr_ready = sp2v_sig_chk[18+:aes_pkg_Sp2VWidth];
	genvar _gv_i_15;
	generate
		for (_gv_i_15 = 0; _gv_i_15 < aes_pkg_NumSlicesCtr; _gv_i_15 = _gv_i_15 + 1) begin : gen_ctr_we
			localparam i = _gv_i_15;
			assign ctr_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sp2v_sig_chk[(7 + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	assign sp_enc_err = |sp2v_sig_err | sp_enc_err_i;
	assign start_o = 1'b0;
	assign key_iv_data_in_clear_o = 1'b0;
	assign data_out_clear_o = 1'b0;
	initial _sv2v_0 = 0;
endmodule
module aes_control_fsm (
	clk_i,
	rst_ni,
	ctrl_qe_i,
	ctrl_we_o,
	ctrl_phase_i,
	ctrl_err_storage_i,
	op_i,
	mode_i,
	cipher_op_i,
	sideload_i,
	prng_reseed_rate_i,
	manual_operation_i,
	key_touch_forces_reseed_i,
	ctrl_gcm_qe_i,
	ctrl_gcm_we_o,
	ctrl_gcm_phase_i,
	gcm_init_done_o,
	gcm_phase_i,
	start_i,
	key_iv_data_in_clear_i,
	data_out_clear_i,
	prng_reseed_i,
	mux_sel_err_i,
	sp_enc_err_i,
	lc_escalate_en_i,
	alert_fatal_i,
	alert_o,
	key_sideload_valid_i,
	key_init_qe_i,
	iv_qe_i,
	data_in_qe_i,
	data_out_re_i,
	data_in_we_o,
	data_out_sel_o,
	data_out_we_o,
	data_in_prev_sel_o,
	data_in_prev_we_o,
	state_in_sel_o,
	add_state_in_sel_o,
	add_state_out_sel_o,
	ctr_inc32_o,
	ctr_incr_o,
	ctr_ready_i,
	ctr_we_i,
	cipher_in_valid_o,
	cipher_in_ready_i,
	cipher_out_valid_i,
	cipher_out_ready_o,
	cipher_crypt_o,
	cipher_crypt_i,
	cipher_dec_key_gen_o,
	cipher_dec_key_gen_i,
	cipher_prng_reseed_o,
	cipher_prng_reseed_i,
	cipher_key_clear_o,
	cipher_key_clear_i,
	cipher_data_out_clear_o,
	cipher_data_out_clear_i,
	ghash_in_valid_o,
	ghash_in_ready_i,
	ghash_out_valid_i,
	ghash_out_ready_o,
	ghash_load_hash_subkey_o,
	key_init_sel_o,
	key_init_we_o,
	iv_sel_o,
	iv_we_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	start_we_o,
	key_iv_data_in_clear_we_o,
	data_out_clear_we_o,
	prng_reseed_o,
	prng_reseed_we_o,
	idle_o,
	idle_we_o,
	stall_o,
	stall_we_o,
	output_lost_i,
	output_lost_o,
	output_lost_we_o,
	output_valid_o,
	output_valid_we_o,
	input_ready_o,
	input_ready_we_o
);
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output reg ctrl_we_o;
	input wire ctrl_phase_i;
	input wire ctrl_err_storage_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	input wire [5:0] mode_i;
	input wire [1:0] cipher_op_i;
	input wire sideload_i;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	input wire [2:0] prng_reseed_rate_i;
	input wire manual_operation_i;
	input wire key_touch_forces_reseed_i;
	input wire ctrl_gcm_qe_i;
	output reg ctrl_gcm_we_o;
	input wire ctrl_gcm_phase_i;
	output wire gcm_init_done_o;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire start_i;
	input wire key_iv_data_in_clear_i;
	input wire data_out_clear_i;
	input wire prng_reseed_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire alert_fatal_i;
	output reg alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output reg data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_out_sel_o;
	output reg data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] data_in_prev_sel_o;
	output reg data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output reg [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] add_state_out_sel_o;
	output wire ctr_inc32_o;
	output reg ctr_incr_o;
	input wire ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [7:0] ctr_we_i;
	output reg cipher_in_valid_o;
	input wire cipher_in_ready_i;
	input wire cipher_out_valid_i;
	output reg cipher_out_ready_o;
	output reg cipher_crypt_o;
	input wire cipher_crypt_i;
	output reg cipher_dec_key_gen_o;
	input wire cipher_dec_key_gen_i;
	output reg cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output reg cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output reg cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output reg ghash_in_valid_o;
	input wire ghash_in_ready_i;
	input wire ghash_out_valid_i;
	output reg ghash_out_ready_o;
	output reg ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output reg [4:0] key_init_sel_o;
	output reg [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output reg [5:0] iv_sel_o;
	output reg [7:0] iv_we_o;
	output reg prng_update_o;
	output reg prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_we_o;
	output wire key_iv_data_in_clear_we_o;
	output wire data_out_clear_we_o;
	output wire prng_reseed_o;
	output wire prng_reseed_we_o;
	output wire idle_o;
	output wire idle_we_o;
	output wire stall_o;
	output wire stall_we_o;
	input wire output_lost_i;
	output wire output_lost_o;
	output wire output_lost_we_o;
	output wire output_valid_o;
	output wire output_valid_we_o;
	output wire input_ready_o;
	output wire input_ready_we_o;
	localparam signed [31:0] aes_pkg_CtrlStateWidth = 6;
	reg [5:0] aes_ctrl_ns;
	wire [5:0] aes_ctrl_cs;
	reg prng_reseed_done_d;
	reg prng_reseed_done_q;
	reg key_init_clear;
	wire key_init_new;
	wire key_init_new_pulse;
	reg key_init_load;
	reg key_init_arm;
	wire key_init_ready;
	wire key_sideload;
	wire [7:0] iv_qe;
	reg iv_clear;
	reg iv_load;
	reg iv_arm;
	wire iv_ready;
	wire [3:0] data_in_new_d;
	reg [3:0] data_in_new_q;
	wire data_in_new;
	reg data_in_load;
	wire [3:0] data_out_read_d;
	reg [3:0] data_out_read_q;
	wire data_out_read;
	reg output_valid_q;
	wire cfg_valid;
	wire no_alert;
	wire cipher_op_err;
	wire start_common;
	wire start_ecb;
	wire start_cbc;
	wire start_cfb;
	wire start_ofb;
	wire start_ctr;
	wire start;
	reg start_core;
	wire finish;
	wire crypt;
	reg cipher_out_done;
	wire doing_cbc_enc;
	wire doing_cbc_dec;
	wire doing_cfb_enc;
	wire doing_cfb_dec;
	wire doing_ofb;
	wire doing_ctr;
	reg ctrl_we_q;
	wire clear_in_out_status;
	wire clear_on_fatal;
	reg start_we;
	reg key_iv_data_in_clear_we;
	reg data_out_clear_we;
	reg prng_reseed_we;
	reg idle;
	reg idle_we;
	reg stall;
	reg stall_we;
	wire output_lost;
	wire output_lost_we;
	wire output_valid;
	wire output_valid_we;
	wire input_ready;
	wire input_ready_we;
	reg ctrl_gcm_we_q;
	wire gcm_clear;
	wire gcm_init;
	wire gcm_restore;
	wire gcm_aad;
	wire gcm_txt;
	wire gcm_save;
	wire gcm_tag;
	wire start_common_gcm;
	wire start_ghash;
	wire start_gcm_init;
	wire start_gcm_hsk;
	wire start_gcm_s;
	wire start_gcm_restore;
	wire start_gcm_aad;
	wire start_gcm_txt;
	wire start_gcm_save;
	wire start_gcm_tag;
	wire doing_gcm_hsk;
	wire doing_gcm_s;
	wire doing_gcm_txt;
	reg hash_subkey_ready_d;
	reg hash_subkey_ready_q;
	reg s_ready_d;
	reg s_ready_q;
	reg doing_gcm_restore_d;
	reg doing_gcm_restore_q;
	reg doing_gcm_aad_d;
	reg doing_gcm_aad_q;
	reg doing_gcm_tag_d;
	reg doing_gcm_tag_q;
	reg doing_gcm_save_d;
	reg doing_gcm_save_q;
	reg ghash_out_done;
	wire ghash_idle;
	wire block_ctr_expr;
	reg block_ctr_decr;
	assign iv_qe = {iv_qe_i[3], iv_qe_i[3], iv_qe_i[2], iv_qe_i[2], iv_qe_i[1], iv_qe_i[1], iv_qe_i[0], iv_qe_i[0]};
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	assign cfg_valid = ~((mode_i == sv2v_cast_86B6A(6'b111111)) | ctrl_err_storage_i);
	assign no_alert = ~alert_fatal_i;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op_err = ~((cipher_op_i == sv2v_cast_63054(2'b01)) || (cipher_op_i == sv2v_cast_63054(2'b10)));
	assign start_common = (key_init_ready & data_in_new) & (sideload_i ? key_sideload_valid_i : 1'b1);
	assign start_ecb = mode_i == sv2v_cast_86B6A(6'b000001);
	assign start_cbc = (mode_i == sv2v_cast_86B6A(6'b000010)) & iv_ready;
	assign start_cfb = (mode_i == sv2v_cast_86B6A(6'b000100)) & iv_ready;
	assign start_ofb = (mode_i == sv2v_cast_86B6A(6'b001000)) & iv_ready;
	assign start_ctr = ((mode_i == sv2v_cast_86B6A(6'b010000)) & iv_ready) & ctr_ready_i;
	assign start = (cfg_valid & no_alert) & (manual_operation_i ? start_i : (((((start_ecb | start_cbc) | start_cfb) | start_ofb) | start_ctr) & start_common) | (start_gcm_init | start_gcm_txt));
	assign finish = (cfg_valid & no_alert) & (manual_operation_i ? 1'b1 : ~output_valid_q | data_out_read);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	assign gcm_init = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000001));
	assign gcm_restore = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000010));
	assign gcm_aad = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b000100));
	assign gcm_txt = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b001000));
	assign gcm_save = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b010000));
	assign gcm_tag = (mode_i == sv2v_cast_86B6A(6'b100000)) & (gcm_phase_i == sv2v_cast_92B33(6'b100000));
	assign start_common_gcm = key_init_ready & (sideload_i ? key_sideload_valid_i : 1'b1);
	assign start_gcm_hsk = (((gcm_init & ~gcm_clear) & ~hash_subkey_ready_q) & iv_ready) & ctr_ready_i;
	assign start_gcm_s = (((gcm_init & ~gcm_clear) & ~s_ready_q) & iv_ready) & ctr_ready_i;
	assign start_gcm_init = (start_gcm_hsk | start_gcm_s) & start_common_gcm;
	assign start_gcm_restore = ((gcm_restore & cfg_valid) & no_alert) & (manual_operation_i ? start_i : ((iv_ready & ctr_ready_i) & data_in_new) & start_common_gcm);
	assign start_gcm_aad = ((gcm_aad & cfg_valid) & no_alert) & (manual_operation_i ? start_i : (iv_ready & ctr_ready_i) & start_common);
	assign start_gcm_txt = ((gcm_txt & iv_ready) & ctr_ready_i) & start_common;
	assign start_gcm_save = ((gcm_save & cfg_valid) & no_alert) & (manual_operation_i ? start_i : hash_subkey_ready_q & s_ready_q);
	assign start_gcm_tag = ((gcm_tag & cfg_valid) & no_alert) & (manual_operation_i ? start_i : (hash_subkey_ready_q & s_ready_q) & data_in_new);
	assign start_ghash = ((start_gcm_restore | start_gcm_aad) | start_gcm_save) | start_gcm_tag;
	assign ghash_idle = ghash_in_ready_i & ~start_ghash;
	assign ctr_inc32_o = mode_i == sv2v_cast_86B6A(6'b100000);
	assign crypt = cipher_crypt_o | cipher_crypt_i;
	assign doing_cbc_enc = ((mode_i == sv2v_cast_86B6A(6'b000010)) && (op_i == sv2v_cast_63054(2'b01))) & crypt;
	assign doing_cbc_dec = ((mode_i == sv2v_cast_86B6A(6'b000010)) && (op_i == sv2v_cast_63054(2'b10))) & crypt;
	assign doing_cfb_enc = ((mode_i == sv2v_cast_86B6A(6'b000100)) && (op_i == sv2v_cast_63054(2'b01))) & crypt;
	assign doing_cfb_dec = ((mode_i == sv2v_cast_86B6A(6'b000100)) && (op_i == sv2v_cast_63054(2'b10))) & crypt;
	assign doing_ofb = (mode_i == sv2v_cast_86B6A(6'b001000)) & crypt;
	assign doing_ctr = (mode_i == sv2v_cast_86B6A(6'b010000)) & crypt;
	assign doing_gcm_hsk = (gcm_init & ~hash_subkey_ready_q) & crypt;
	assign doing_gcm_s = (gcm_init & hash_subkey_ready_q) & crypt;
	assign doing_gcm_txt = gcm_txt & crypt;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	function automatic lc_ctrl_pkg_lc_tx_test_true_loose;
		input reg [3:0] val;
		lc_ctrl_pkg_lc_tx_test_true_loose = sv2v_cast_BE429(4'b1010) != val;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_DB8EC;
		input reg [2:0] inp;
		sv2v_cast_DB8EC = inp;
	endfunction
	function automatic [2:0] sv2v_cast_5FB3A;
		input reg [2:0] inp;
		sv2v_cast_5FB3A = inp;
	endfunction
	function automatic [2:0] sv2v_cast_06ECC;
		input reg [2:0] inp;
		sv2v_cast_06ECC = inp;
	endfunction
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_32B2A;
		input reg [4:0] inp;
		sv2v_cast_32B2A = inp;
	endfunction
	function automatic [4:0] sv2v_cast_A4E58;
		input reg [4:0] inp;
		sv2v_cast_A4E58 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_91DD0;
		input reg [5:0] inp;
		sv2v_cast_91DD0 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_CDC2F;
		input reg [5:0] inp;
		sv2v_cast_CDC2F = inp;
	endfunction
	function automatic [2:0] sv2v_cast_D1B5B;
		input reg [2:0] inp;
		sv2v_cast_D1B5B = inp;
	endfunction
	function automatic [5:0] sv2v_cast_69C80;
		input reg [5:0] inp;
		sv2v_cast_69C80 = inp;
	endfunction
	always @(*) begin : aes_ctrl_fsm
		if (_sv2v_0)
			;
		data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100));
		data_in_prev_we_o = 1'b0;
		state_in_sel_o = sv2v_cast_5FB3A(sv2v_cast_14B94(3'b100));
		add_state_in_sel_o = sv2v_cast_06ECC(sv2v_cast_14B94(3'b011));
		add_state_out_sel_o = sv2v_cast_32B2A(sv2v_cast_19785(5'b01110));
		ctr_incr_o = 1'b0;
		cipher_in_valid_o = 1'b0;
		cipher_out_ready_o = 1'b0;
		cipher_out_done = 1'b0;
		cipher_crypt_o = 1'b0;
		cipher_dec_key_gen_o = 1'b0;
		cipher_prng_reseed_o = 1'b0;
		cipher_key_clear_o = 1'b0;
		cipher_data_out_clear_o = 1'b0;
		ghash_in_valid_o = 1'b0;
		ghash_out_ready_o = 1'b0;
		ghash_out_done = 1'b0;
		ghash_load_hash_subkey_o = ~hash_subkey_ready_q;
		key_init_sel_o = (sideload_i ? sv2v_cast_A4E58(sv2v_cast_19785(5'b11000)) : sv2v_cast_A4E58(sv2v_cast_19785(5'b01110)));
		key_init_we_o = {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {1'b0}};
		iv_sel_o = sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101));
		iv_we_o = {aes_pkg_NumSlicesCtr {1'b0}};
		ctrl_we_o = 1'b0;
		ctrl_gcm_we_o = 1'b0;
		alert_o = 1'b0;
		prng_update_o = 1'b0;
		prng_reseed_req_o = 1'b0;
		start_we = 1'b0;
		key_iv_data_in_clear_we = 1'b0;
		data_out_clear_we = 1'b0;
		prng_reseed_we = 1'b0;
		idle = 1'b0;
		idle_we = 1'b0;
		stall = 1'b0;
		stall_we = 1'b0;
		data_in_load = 1'b0;
		data_in_we_o = 1'b0;
		data_out_sel_o = sv2v_cast_D1B5B(sv2v_cast_14B94(3'b011));
		data_out_we_o = 1'b0;
		key_init_clear = 1'b0;
		key_init_load = 1'b0;
		key_init_arm = 1'b0;
		iv_clear = 1'b0;
		iv_load = 1'b0;
		iv_arm = 1'b0;
		block_ctr_decr = 1'b0;
		aes_ctrl_ns = aes_ctrl_cs;
		start_core = 1'b0;
		prng_reseed_done_d = prng_reseed_done_q | prng_reseed_ack_i;
		hash_subkey_ready_d = hash_subkey_ready_q;
		s_ready_d = s_ready_q;
		doing_gcm_restore_d = doing_gcm_restore_q;
		doing_gcm_aad_d = doing_gcm_aad_q;
		doing_gcm_tag_d = doing_gcm_tag_q;
		doing_gcm_save_d = doing_gcm_save_q;
		(* full_case, parallel_case *)
		case (aes_ctrl_cs)
			sv2v_cast_69C80(6'b001001): begin
				start_core = ((start | key_iv_data_in_clear_i) | data_out_clear_i) | prng_reseed_i;
				idle = ~(start_core | (prng_reseed_o & prng_reseed_we_o)) & ghash_idle;
				idle_we = 1'b1;
				start_we = start_i & ((mode_i == sv2v_cast_86B6A(6'b111111)) | ~manual_operation_i);
				if (!start_core) begin
					key_init_we_o = (sideload_i ? {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {key_sideload}} : key_init_qe_i);
					iv_we_o = iv_qe;
				end
				if (!start_core && !start_ghash) begin
					ctrl_we_o = (!ctrl_err_storage_i ? ctrl_qe_i : 1'b0);
					ctrl_gcm_we_o = (!ctrl_err_storage_i ? ctrl_gcm_qe_i : 1'b0);
					key_init_clear = ctrl_we_o;
					iv_clear = ctrl_we_o | (gcm_init & gcm_clear);
					if (ctrl_we_o | gcm_clear) begin
						hash_subkey_ready_d = 1'b0;
						s_ready_d = 1'b0;
					end
				end
				if (prng_reseed_i) begin
					if (!SecMasking) begin
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b010000);
					end
					else begin
						cipher_prng_reseed_o = 1'b1;
						cipher_in_valid_o = 1'b1;
						if (cipher_in_ready_i) begin
							prng_reseed_done_d = 1'b0;
							aes_ctrl_ns = sv2v_cast_69C80(6'b010000);
						end
					end
				end
				else if (key_iv_data_in_clear_i || data_out_clear_i) begin
					prng_update_o = 1'b1;
					cipher_key_clear_o = key_iv_data_in_clear_i;
					cipher_data_out_clear_o = data_out_clear_i;
					cipher_in_valid_o = 1'b1;
					if (cipher_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b111101);
				end
				else if ((start_gcm_restore || start_gcm_aad) || start_gcm_tag) begin
					data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011));
					data_in_prev_we_o = 1'b1;
					doing_gcm_restore_d = start_gcm_restore;
					doing_gcm_aad_d = start_gcm_aad;
					doing_gcm_tag_d = start_gcm_tag;
					start_we = 1'b1;
					aes_ctrl_ns = sv2v_cast_69C80(6'b100011);
				end
				else if (start_gcm_save) begin
					prng_update_o = 1'b1;
					doing_gcm_save_d = 1'b1;
					start_we = 1'b1;
					aes_ctrl_ns = sv2v_cast_69C80(6'b111101);
				end
				else if (start) begin
					cipher_crypt_o = 1'b1;
					cipher_prng_reseed_o = block_ctr_expr;
					cipher_dec_key_gen_o = (cipher_op_i == sv2v_cast_63054(2'b10) ? key_init_new : 1'b0);
					data_in_prev_sel_o = (doing_cbc_dec ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_cfb_enc ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_cfb_dec ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_ofb ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_ctr ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : (doing_gcm_txt ? sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)) : sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100))))))));
					data_in_prev_we_o = ((((doing_cbc_dec | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_txt;
					state_in_sel_o = (doing_cfb_enc ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_cfb_dec ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_ofb ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_ctr ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_hsk ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_s ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : (doing_gcm_txt ? sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)) : sv2v_cast_5FB3A(sv2v_cast_14B94(3'b100)))))))));
					add_state_in_sel_o = (doing_cbc_enc ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_cfb_enc ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_cfb_dec ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_ofb ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_ctr ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_gcm_s ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : (doing_gcm_txt ? sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)) : sv2v_cast_06ECC(sv2v_cast_14B94(3'b011)))))))));
					cipher_in_valid_o = 1'b1;
					if (cipher_in_ready_i) begin
						start_we = ~cipher_dec_key_gen_o;
						aes_ctrl_ns = sv2v_cast_69C80(6'b100011);
					end
				end
			end
			sv2v_cast_69C80(6'b100011): begin
				key_init_load = cipher_dec_key_gen_i;
				key_init_arm = ~cipher_dec_key_gen_i;
				iv_load = ~cipher_dec_key_gen_i & ((((((((doing_cbc_enc | doing_cbc_dec) | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt);
				data_in_load = ~cipher_dec_key_gen_i;
				ctr_incr_o = ((doing_ctr | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt;
				prng_update_o = !cipher_dec_key_gen_i;
				aes_ctrl_ns = (!cipher_dec_key_gen_i ? sv2v_cast_69C80(6'b111101) : sv2v_cast_69C80(6'b100100));
			end
			sv2v_cast_69C80(6'b111101): begin
				iv_sel_o = (((doing_ctr || doing_gcm_hsk) || doing_gcm_s) || doing_gcm_txt ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101)));
				iv_we_o = (((doing_ctr || doing_gcm_hsk) || doing_gcm_s) || doing_gcm_txt ? ctr_we_i : {aes_pkg_NumSlicesCtr {1'b0}});
				if (cipher_crypt_i) begin
					if ((doing_gcm_hsk || doing_gcm_s) || doing_gcm_txt) begin
						if (ghash_in_ready_i)
							aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
					end
					else
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (doing_gcm_restore_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i) begin
						doing_gcm_restore_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_aad_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i) begin
						doing_gcm_aad_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_save_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (doing_gcm_tag_q) begin
					ghash_in_valid_o = 1'b1;
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b100100);
				end
				else if (((key_iv_data_in_clear_i || data_out_clear_i) || cipher_key_clear_i) || cipher_data_out_clear_i) begin
					if (ghash_in_ready_i)
						aes_ctrl_ns = sv2v_cast_69C80(6'b111010);
				end
				else
					aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
			end
			sv2v_cast_69C80(6'b010000): begin
				prng_reseed_req_o = ~prng_reseed_done_q;
				if (!SecMasking) begin
					if (prng_reseed_done_q) begin
						prng_reseed_we = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else begin
					cipher_out_ready_o = prng_reseed_done_q;
					if (cipher_out_ready_o && cipher_out_valid_i) begin
						prng_reseed_we = 1'b1;
						prng_reseed_done_d = 1'b0;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
			end
			sv2v_cast_69C80(6'b100100):
				if (cipher_dec_key_gen_i) begin
					cipher_out_ready_o = 1'b1;
					if (cipher_out_valid_i) begin
						block_ctr_decr = 1'b1;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else if (doing_gcm_save_q || doing_gcm_tag_q) begin
					ghash_out_ready_o = finish;
					ghash_out_done = (((finish & ghash_out_valid_i) & ~mux_sel_err_i) & ~sp_enc_err_i) & ~cipher_op_err;
					stall = ~finish & ghash_out_valid_i;
					stall_we = 1'b1;
					data_out_sel_o = sv2v_cast_D1B5B(sv2v_cast_14B94(3'b100));
					if (ghash_out_done) begin
						doing_gcm_save_d = 1'b0;
						doing_gcm_tag_d = 1'b0;
						hash_subkey_ready_d = 1'b0;
						s_ready_d = 1'b0;
						data_out_we_o = 1'b1;
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
				else begin
					cipher_out_ready_o = finish;
					cipher_out_done = (((finish & cipher_out_valid_i) & ~mux_sel_err_i) & ~sp_enc_err_i) & ~cipher_op_err;
					stall = ~finish & cipher_out_valid_i;
					stall_we = 1'b1;
					add_state_out_sel_o = (doing_cbc_dec ? sv2v_cast_32B2A(sv2v_cast_19785(5'b11000)) : (doing_cfb_enc ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_cfb_dec ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_ofb ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_ctr ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : (doing_gcm_txt ? sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)) : sv2v_cast_32B2A(sv2v_cast_19785(5'b01110))))))));
					iv_sel_o = (doing_cbc_enc ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b110000)) : (doing_cbc_dec ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b000011)) : (doing_cfb_enc ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b110000)) : (doing_cfb_dec ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b000011)) : (doing_ofb ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b001000)) : (doing_ctr ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_hsk ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_s ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : (doing_gcm_txt ? sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)) : sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101)))))))))));
					iv_we_o = ((((doing_cbc_enc || doing_cbc_dec) || doing_cfb_enc) || doing_cfb_dec) || doing_ofb ? {aes_pkg_NumSlicesCtr {cipher_out_done}} : (doing_ctr ? ctr_we_i : (doing_gcm_hsk ? ctr_we_i : (doing_gcm_s ? ctr_we_i : (doing_gcm_txt ? ctr_we_i : {aes_pkg_NumSlicesCtr {1'b0}})))));
					iv_arm = ((((((((doing_cbc_enc | doing_cbc_dec) | doing_cfb_enc) | doing_cfb_dec) | doing_ofb) | doing_ctr) | doing_gcm_hsk) | doing_gcm_s) | doing_gcm_txt) & cipher_out_done;
					if (cipher_out_done) begin
						block_ctr_decr = 1'b1;
						data_out_we_o = (doing_gcm_hsk | doing_gcm_s ? 1'b0 : 1'b1);
						ghash_in_valid_o = ((doing_gcm_hsk | doing_gcm_s) | doing_gcm_txt ? 1'b1 : 1'b0);
						hash_subkey_ready_d = (doing_gcm_hsk ? 1'b1 : hash_subkey_ready_q);
						s_ready_d = (doing_gcm_s ? 1'b1 : s_ready_q);
						aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
					end
				end
			sv2v_cast_69C80(6'b111010): begin
				if (key_iv_data_in_clear_i) begin
					key_init_sel_o = sv2v_cast_A4E58(sv2v_cast_19785(5'b00001));
					key_init_we_o = {aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey {1'b1}};
					key_init_clear = 1'b1;
					iv_sel_o = sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b100101));
					iv_we_o = {aes_pkg_NumSlicesCtr {1'b1}};
					iv_clear = 1'b1;
					data_in_we_o = 1'b1;
					data_in_prev_sel_o = sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100));
					data_in_prev_we_o = 1'b1;
				end
				aes_ctrl_ns = sv2v_cast_69C80(6'b001110);
			end
			sv2v_cast_69C80(6'b001110): begin
				cipher_out_ready_o = 1'b1;
				if (cipher_out_valid_i) begin
					if (cipher_key_clear_i) begin
						key_iv_data_in_clear_we = 1'b1;
						ghash_in_valid_o = 1'b1;
					end
					if (cipher_data_out_clear_i) begin
						data_out_we_o = (~mux_sel_err_i & ~sp_enc_err_i) & ~cipher_op_err;
						data_out_clear_we = 1'b1;
					end
					aes_ctrl_ns = sv2v_cast_69C80(6'b001001);
				end
			end
			sv2v_cast_69C80(6'b010111): alert_o = 1'b1;
			default: begin
				aes_ctrl_ns = sv2v_cast_69C80(6'b010111);
				alert_o = 1'b1;
			end
		endcase
		if (((mux_sel_err_i || sp_enc_err_i) || cipher_op_err) || lc_ctrl_pkg_lc_tx_test_true_loose(lc_escalate_en_i))
			aes_ctrl_ns = sv2v_cast_69C80(6'b010111);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_CtrlStateWidth),
		.ResetValue(sv2v_cast_69C80(6'b001001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_ctrl_ns),
		.state_o(aes_ctrl_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_fsm
		if (!rst_ni)
			prng_reseed_done_q <= 1'b0;
		else
			prng_reseed_done_q <= prng_reseed_done_d;
	end
	generate
		if (AESGCMEnable) begin : gen_reg_fsm_gcm
			always @(posedge clk_i or negedge rst_ni) begin : reg_fsm_gcm
				if (!rst_ni) begin
					hash_subkey_ready_q <= 1'b0;
					s_ready_q <= 1'b0;
					doing_gcm_restore_q <= 1'b0;
					doing_gcm_aad_q <= 1'b0;
					doing_gcm_save_q <= 1'b0;
					doing_gcm_tag_q <= 1'b0;
				end
				else begin
					hash_subkey_ready_q <= hash_subkey_ready_d;
					s_ready_q <= s_ready_d;
					doing_gcm_restore_q <= doing_gcm_restore_d;
					doing_gcm_aad_q <= doing_gcm_aad_d;
					doing_gcm_save_q <= doing_gcm_save_d;
					doing_gcm_tag_q <= doing_gcm_tag_d;
				end
			end
		end
		else begin : gen_no_reg_fsm_gcm
			wire [1:1] sv2v_tmp_B1E22;
			assign sv2v_tmp_B1E22 = 1'b0;
			always @(*) hash_subkey_ready_q = sv2v_tmp_B1E22;
			wire [1:1] sv2v_tmp_314E5;
			assign sv2v_tmp_314E5 = 1'b0;
			always @(*) s_ready_q = sv2v_tmp_314E5;
			wire [1:1] sv2v_tmp_C3BC2;
			assign sv2v_tmp_C3BC2 = 1'b0;
			always @(*) doing_gcm_restore_q = sv2v_tmp_C3BC2;
			wire [1:1] sv2v_tmp_E7982;
			assign sv2v_tmp_E7982 = 1'b0;
			always @(*) doing_gcm_aad_q = sv2v_tmp_E7982;
			wire [1:1] sv2v_tmp_38FC6;
			assign sv2v_tmp_38FC6 = 1'b0;
			always @(*) doing_gcm_save_q = sv2v_tmp_38FC6;
			wire [1:1] sv2v_tmp_43494;
			assign sv2v_tmp_43494 = 1'b0;
			always @(*) doing_gcm_tag_q = sv2v_tmp_43494;
			wire unused_gcm_d;
			assign unused_gcm_d = ^{hash_subkey_ready_d, s_ready_d, doing_gcm_restore_d, doing_gcm_aad_d, doing_gcm_save_d, doing_gcm_tag_d};
		end
	endgenerate
	assign key_sideload = ((sideload_i & key_sideload_valid_i) & ctrl_we_q) & ~ctrl_phase_i;
	aes_reg_status #(.Width(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) u_reg_status_key_init(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(key_init_we_o),
		.use_i(key_init_load),
		.clear_i(key_init_clear),
		.arm_i(key_init_arm),
		.new_o(key_init_new),
		.new_pulse_o(key_init_new_pulse),
		.clean_o(key_init_ready)
	);
	aes_reg_status #(.Width(aes_pkg_NumSlicesCtr)) u_reg_status_iv(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(iv_we_o),
		.use_i(iv_load),
		.clear_i(iv_clear),
		.arm_i(iv_arm),
		.new_o(iv_ready),
		.new_pulse_o(),
		.clean_o()
	);
	always @(posedge clk_i or negedge rst_ni) begin : reg_ctrl_we
		if (!rst_ni)
			ctrl_we_q <= 1'b0;
		else
			ctrl_we_q <= ctrl_we_o;
	end
	assign clear_in_out_status = ctrl_we_q;
	assign data_in_new_d = ((data_in_load || &data_in_qe_i) || clear_in_out_status ? {4 {1'sb0}} : data_in_new_q | data_in_qe_i);
	assign data_in_new = &data_in_new_d;
	assign data_out_read_d = (&data_out_read_q || clear_in_out_status ? {4 {1'sb0}} : data_out_read_q | data_out_re_i);
	assign data_out_read = &data_out_read_d;
	always @(posedge clk_i or negedge rst_ni) begin : reg_edge_detection
		if (!rst_ni) begin
			data_in_new_q <= 1'sb0;
			data_out_read_q <= 1'sb0;
		end
		else begin
			data_in_new_q <= data_in_new_d;
			data_out_read_q <= data_out_read_d;
		end
	end
	assign input_ready = ~data_in_new;
	assign input_ready_we = ((data_in_new | data_in_load) | data_in_we_o) | clear_in_out_status;
	assign output_valid = data_out_we_o & ~data_out_clear_we;
	assign output_valid_we = ((data_out_we_o | data_out_read) | data_out_clear_we) | clear_in_out_status;
	always @(posedge clk_i or negedge rst_ni) begin : reg_output_valid
		if (!rst_ni)
			output_valid_q <= 1'sb0;
		else if (output_valid_we)
			output_valid_q <= output_valid;
	end
	assign output_lost = (ctrl_we_o ? 1'b0 : (output_lost_i ? 1'b1 : output_valid_q & ~data_out_read));
	assign output_lost_we = ctrl_we_o | data_out_we_o;
	assign gcm_clear = ((gcm_phase_i == sv2v_cast_92B33(6'b000001)) & ctrl_gcm_we_q) & ~ctrl_gcm_phase_i;
	generate
		if (AESGCMEnable) begin : gen_reg_ctrl_gcm_we
			always @(posedge clk_i or negedge rst_ni) begin : reg_ctrl_gcm_we
				if (!rst_ni)
					ctrl_gcm_we_q <= 1'b0;
				else
					ctrl_gcm_we_q <= ctrl_gcm_we_o;
			end
		end
		else begin : gen_no_reg_ctrl_gcm_we
			wire [1:1] sv2v_tmp_81535;
			assign sv2v_tmp_81535 = 1'b1;
			always @(*) ctrl_gcm_we_q = sv2v_tmp_81535;
		end
	endgenerate
	assign gcm_init_done_o = hash_subkey_ready_q & s_ready_q;
	localparam [0:0] aes_pkg_ClearStatusOnFatalAlert = 1'b0;
	assign clear_on_fatal = (aes_pkg_ClearStatusOnFatalAlert ? alert_fatal_i : 1'b0);
	assign idle_o = (clear_on_fatal ? 1'b0 : idle);
	assign idle_we_o = (clear_on_fatal ? 1'b1 : idle_we);
	assign stall_o = (clear_on_fatal ? 1'b0 : stall);
	assign stall_we_o = (clear_on_fatal ? 1'b1 : stall_we);
	assign output_lost_o = (clear_on_fatal ? 1'b0 : output_lost);
	assign output_lost_we_o = (clear_on_fatal ? 1'b1 : output_lost_we);
	assign output_valid_o = (clear_on_fatal ? 1'b0 : output_valid);
	assign output_valid_we_o = (clear_on_fatal ? 1'b1 : output_valid_we);
	assign input_ready_o = (clear_on_fatal ? 1'b0 : input_ready);
	assign input_ready_we_o = (clear_on_fatal ? 1'b1 : input_ready_we);
	assign start_we_o = (clear_on_fatal ? 1'b1 : start_we);
	assign key_iv_data_in_clear_we_o = (clear_on_fatal ? 1'b1 : key_iv_data_in_clear_we);
	assign data_out_clear_we_o = (clear_on_fatal ? 1'b1 : data_out_clear_we);
	assign prng_reseed_o = (clear_on_fatal ? 1'b0 : (key_init_new_pulse ? 1'b1 : 1'b0));
	assign prng_reseed_we_o = (clear_on_fatal ? 1'b1 : (key_init_new_pulse ? key_touch_forces_reseed_i : prng_reseed_we));
	localparam [31:0] aes_pkg_BlockCtrWidth = 13;
	function automatic [2:0] sv2v_cast_421A6;
		input reg [2:0] inp;
		sv2v_cast_421A6 = inp;
	endfunction
	function automatic signed [12:0] sv2v_cast_849AA_signed;
		input reg signed [12:0] inp;
		sv2v_cast_849AA_signed = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_block_ctr
			wire block_ctr_set;
			wire [12:0] block_ctr_d;
			reg [12:0] block_ctr_q;
			wire [12:0] block_ctr_set_val;
			wire [12:0] block_ctr_decr_val;
			assign block_ctr_expr = block_ctr_q == {13 {1'sb0}};
			assign block_ctr_set = ctrl_we_q | (block_ctr_decr & (block_ctr_expr | cipher_prng_reseed_i));
			assign block_ctr_set_val = (prng_reseed_rate_i == sv2v_cast_421A6(3'b001) ? {13 {1'sb0}} : (prng_reseed_rate_i == sv2v_cast_421A6(3'b010) ? sv2v_cast_849AA_signed(63) : (prng_reseed_rate_i == sv2v_cast_421A6(3'b100) ? sv2v_cast_849AA_signed(8191) : {13 {1'sb0}})));
			assign block_ctr_decr_val = block_ctr_q - sv2v_cast_849AA_signed(1);
			assign block_ctr_d = (block_ctr_set ? block_ctr_set_val : (block_ctr_decr ? block_ctr_decr_val : block_ctr_q));
			always @(posedge clk_i or negedge rst_ni) begin : reg_block_ctr
				if (!rst_ni)
					block_ctr_q <= 1'sb0;
				else
					block_ctr_q <= block_ctr_d;
			end
		end
		else begin : gen_no_block_ctr
			assign block_ctr_expr = 1'b0;
			wire unused_block_ctr_decr;
			wire [2:0] unused_prng_reseed_rate;
			wire unused_cipher_prng_reseed;
			assign unused_block_ctr_decr = block_ctr_decr;
			assign unused_prng_reseed_rate = prng_reseed_rate_i;
			assign unused_cipher_prng_reseed = cipher_prng_reseed_i;
		end
	endgenerate
	localparam signed [31:0] AesControlFsmSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesControlFsmSecMaskingNonDefault - 1:0] sv2v_cast_2E649;
		input reg [AesControlFsmSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_2E649 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_2E649(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
module aes_control_fsm_n (
	clk_i,
	rst_ni,
	ctrl_qe_i,
	ctrl_we_o,
	ctrl_phase_i,
	ctrl_err_storage_i,
	op_i,
	mode_i,
	cipher_op_i,
	sideload_i,
	prng_reseed_rate_i,
	manual_operation_i,
	key_touch_forces_reseed_i,
	ctrl_gcm_qe_i,
	ctrl_gcm_we_o,
	ctrl_gcm_phase_i,
	gcm_init_done_o,
	gcm_phase_i,
	start_i,
	key_iv_data_in_clear_i,
	data_out_clear_i,
	prng_reseed_i,
	mux_sel_err_i,
	sp_enc_err_i,
	lc_escalate_en_i,
	alert_fatal_i,
	alert_o,
	key_sideload_valid_i,
	key_init_qe_i,
	iv_qe_i,
	data_in_qe_i,
	data_out_re_i,
	data_in_we_o,
	data_out_sel_o,
	data_out_we_no,
	data_in_prev_sel_o,
	data_in_prev_we_no,
	state_in_sel_o,
	add_state_in_sel_o,
	add_state_out_sel_o,
	ctr_inc32_no,
	ctr_incr_no,
	ctr_ready_ni,
	ctr_we_ni,
	cipher_in_valid_no,
	cipher_in_ready_ni,
	cipher_out_valid_ni,
	cipher_out_ready_no,
	cipher_crypt_no,
	cipher_crypt_ni,
	cipher_dec_key_gen_no,
	cipher_dec_key_gen_ni,
	cipher_prng_reseed_o,
	cipher_prng_reseed_i,
	cipher_key_clear_o,
	cipher_key_clear_i,
	cipher_data_out_clear_o,
	cipher_data_out_clear_i,
	ghash_in_valid_no,
	ghash_in_ready_ni,
	ghash_out_valid_ni,
	ghash_out_ready_no,
	ghash_load_hash_subkey_no,
	key_init_sel_o,
	key_init_we_no,
	iv_sel_o,
	iv_we_no,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	start_we_o,
	key_iv_data_in_clear_we_o,
	data_out_clear_we_o,
	prng_reseed_o,
	prng_reseed_we_o,
	idle_o,
	idle_we_o,
	stall_o,
	stall_we_o,
	output_lost_i,
	output_lost_o,
	output_lost_we_o,
	output_valid_o,
	output_valid_we_o,
	input_ready_o,
	input_ready_we_o
);
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output wire ctrl_we_o;
	input wire ctrl_phase_i;
	input wire ctrl_err_storage_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	input wire [5:0] mode_i;
	input wire [1:0] cipher_op_i;
	input wire sideload_i;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	input wire [2:0] prng_reseed_rate_i;
	input wire manual_operation_i;
	input wire key_touch_forces_reseed_i;
	input wire ctrl_gcm_qe_i;
	output wire ctrl_gcm_we_o;
	input wire ctrl_gcm_phase_i;
	output wire gcm_init_done_o;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire start_i;
	input wire key_iv_data_in_clear_i;
	input wire data_out_clear_i;
	input wire prng_reseed_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output wire data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_out_sel_o;
	output wire data_out_we_no;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_in_prev_sel_o;
	output wire data_in_prev_we_no;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_state_out_sel_o;
	output wire ctr_inc32_no;
	output wire ctr_incr_no;
	input wire ctr_ready_ni;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [7:0] ctr_we_ni;
	output wire cipher_in_valid_no;
	input wire cipher_in_ready_ni;
	input wire cipher_out_valid_ni;
	output wire cipher_out_ready_no;
	output wire cipher_crypt_no;
	input wire cipher_crypt_ni;
	output wire cipher_dec_key_gen_no;
	input wire cipher_dec_key_gen_ni;
	output wire cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output wire cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output wire cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output wire ghash_in_valid_no;
	input wire ghash_in_ready_ni;
	input wire ghash_out_valid_ni;
	output wire ghash_out_ready_no;
	output wire ghash_load_hash_subkey_no;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] key_init_sel_o;
	output wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we_no;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output wire [5:0] iv_sel_o;
	output wire [7:0] iv_we_no;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_we_o;
	output wire key_iv_data_in_clear_we_o;
	output wire data_out_clear_we_o;
	output wire prng_reseed_o;
	output wire prng_reseed_we_o;
	output wire idle_o;
	output wire idle_we_o;
	output wire stall_o;
	output wire stall_we_o;
	input wire output_lost_i;
	output wire output_lost_o;
	output wire output_lost_we_o;
	output wire output_valid_o;
	output wire output_valid_we_o;
	output wire input_ready_o;
	output wire input_ready_we_o;
	localparam signed [31:0] NumInBufBits = ((((((39 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_reg_pkg_NumRegsIv) + aes_reg_pkg_NumRegsData) + aes_reg_pkg_NumRegsData) + 1) + aes_pkg_NumSlicesCtr) + 11;
	wire [NumInBufBits - 1:0] in;
	wire [NumInBufBits - 1:0] in_buf;
	assign in = {ctrl_qe_i, ctrl_phase_i, ctrl_err_storage_i, op_i, mode_i, cipher_op_i, sideload_i, prng_reseed_rate_i, manual_operation_i, key_touch_forces_reseed_i, ctrl_gcm_qe_i, ctrl_gcm_phase_i, gcm_phase_i, start_i, key_iv_data_in_clear_i, data_out_clear_i, prng_reseed_i, mux_sel_err_i, sp_enc_err_i, lc_escalate_en_i, alert_fatal_i, key_sideload_valid_i, key_init_qe_i, iv_qe_i, data_in_qe_i, data_out_re_i, ctr_ready_ni, ctr_we_ni, cipher_in_ready_ni, cipher_out_valid_ni, cipher_crypt_ni, cipher_dec_key_gen_ni, cipher_prng_reseed_i, cipher_key_clear_i, cipher_data_out_clear_i, ghash_in_ready_ni, ghash_out_valid_ni, prng_reseed_ack_i, output_lost_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire ctrl_qe;
	wire ctrl_phase;
	wire ctrl_err_storage;
	wire [1:0] op;
	wire [5:0] mode;
	wire [1:0] cipher_op;
	wire [1:0] cipher_op_raw;
	wire sideload;
	wire [2:0] prng_reseed_rate;
	wire manual_operation;
	wire key_touch_forces_reseed;
	wire ctrl_gcm_qe;
	wire ctrl_gcm_phase;
	wire [5:0] gcm_phase;
	wire [5:0] gcm_phase_raw;
	wire start;
	wire key_iv_data_in_clear;
	wire data_out_clear;
	wire prng_reseed_in_buf;
	wire mux_sel_err;
	wire sp_enc_err;
	wire [3:0] lc_escalate_en;
	wire alert_fatal;
	wire key_sideload_valid;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe;
	wire [3:0] iv_qe;
	wire [3:0] data_in_qe;
	wire [3:0] data_out_re;
	wire ctr_ready_n;
	wire [7:0] ctr_we_n;
	wire cipher_in_ready_n;
	wire cipher_out_valid_n;
	wire cipher_crypt_in_buf_n;
	wire cipher_dec_key_gen_in_buf_n;
	wire cipher_prng_reseed_in_buf;
	wire cipher_key_clear_in_buf;
	wire cipher_data_out_clear_in_buf;
	wire ghash_in_ready_n;
	wire ghash_out_valid_n;
	wire prng_reseed_ack;
	wire output_lost_in_buf;
	assign {ctrl_qe, ctrl_phase, ctrl_err_storage, op, mode, cipher_op_raw, sideload, prng_reseed_rate, manual_operation, key_touch_forces_reseed, ctrl_gcm_qe, ctrl_gcm_phase, gcm_phase_raw, start, key_iv_data_in_clear, data_out_clear, prng_reseed_in_buf, mux_sel_err, sp_enc_err, lc_escalate_en, alert_fatal, key_sideload_valid, key_init_qe, iv_qe, data_in_qe, data_out_re, ctr_ready_n, ctr_we_n, cipher_in_ready_n, cipher_out_valid_n, cipher_crypt_in_buf_n, cipher_dec_key_gen_in_buf_n, cipher_prng_reseed_in_buf, cipher_key_clear_in_buf, cipher_data_out_clear_in_buf, ghash_in_ready_n, ghash_out_valid_n, prng_reseed_ack, output_lost_in_buf} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op = sv2v_cast_63054(cipher_op_raw);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	assign gcm_phase = sv2v_cast_92B33(gcm_phase_raw);
	wire ctrl_we;
	wire ctrl_gcm_we;
	wire gcm_init_done;
	wire alert;
	wire data_in_we;
	wire [2:0] data_out_sel;
	wire data_out_we;
	wire [2:0] data_in_prev_sel;
	wire data_in_prev_we;
	wire [2:0] state_in_sel;
	wire [2:0] add_state_in_sel;
	wire [4:0] add_state_out_sel;
	wire ctr_inc32;
	wire ctr_incr;
	wire cipher_in_valid;
	wire cipher_out_ready;
	wire cipher_crypt_out_buf;
	wire cipher_dec_key_gen_out_buf;
	wire cipher_prng_reseed_out_buf;
	wire cipher_key_clear_out_buf;
	wire cipher_data_out_clear_out_buf;
	wire ghash_in_valid;
	wire ghash_out_ready;
	wire ghash_load_hash_subkey;
	wire [4:0] key_init_sel;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we;
	wire [5:0] iv_sel;
	wire [7:0] iv_we;
	wire prng_update;
	wire prng_reseed_req;
	wire start_we;
	wire key_iv_data_in_clear_we;
	wire data_out_clear_we;
	wire prng_reseed_out_buf;
	wire prng_reseed_we;
	wire idle;
	wire idle_we;
	wire stall;
	wire stall_we;
	wire output_lost_out_buf;
	wire output_lost_we;
	wire output_valid;
	wire output_valid_we;
	wire input_ready;
	wire input_ready_we;
	aes_control_fsm #(
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking)
	) u_aes_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_qe_i(ctrl_qe),
		.ctrl_we_o(ctrl_we),
		.ctrl_phase_i(ctrl_phase),
		.ctrl_err_storage_i(ctrl_err_storage),
		.op_i(op),
		.mode_i(mode),
		.cipher_op_i(cipher_op),
		.sideload_i(sideload),
		.prng_reseed_rate_i(prng_reseed_rate),
		.manual_operation_i(manual_operation),
		.key_touch_forces_reseed_i(key_touch_forces_reseed),
		.ctrl_gcm_qe_i(ctrl_gcm_qe),
		.ctrl_gcm_we_o(ctrl_gcm_we),
		.ctrl_gcm_phase_i(ctrl_gcm_phase),
		.gcm_init_done_o(gcm_init_done),
		.gcm_phase_i(gcm_phase),
		.start_i(start),
		.key_iv_data_in_clear_i(key_iv_data_in_clear),
		.data_out_clear_i(data_out_clear),
		.prng_reseed_i(prng_reseed_in_buf),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.lc_escalate_en_i(lc_escalate_en),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.key_sideload_valid_i(key_sideload_valid),
		.key_init_qe_i(key_init_qe),
		.iv_qe_i(iv_qe),
		.data_in_qe_i(data_in_qe),
		.data_out_re_i(data_out_re),
		.data_in_we_o(data_in_we),
		.data_out_sel_o(data_out_sel),
		.data_out_we_o(data_out_we),
		.data_in_prev_sel_o(data_in_prev_sel),
		.data_in_prev_we_o(data_in_prev_we),
		.state_in_sel_o(state_in_sel),
		.add_state_in_sel_o(add_state_in_sel),
		.add_state_out_sel_o(add_state_out_sel),
		.ctr_inc32_o(ctr_inc32),
		.ctr_incr_o(ctr_incr),
		.ctr_ready_i(~ctr_ready_n),
		.ctr_we_i(~ctr_we_n),
		.cipher_in_valid_o(cipher_in_valid),
		.cipher_in_ready_i(~cipher_in_ready_n),
		.cipher_out_valid_i(~cipher_out_valid_n),
		.cipher_out_ready_o(cipher_out_ready),
		.cipher_crypt_o(cipher_crypt_out_buf),
		.cipher_crypt_i(~cipher_crypt_in_buf_n),
		.cipher_dec_key_gen_o(cipher_dec_key_gen_out_buf),
		.cipher_dec_key_gen_i(~cipher_dec_key_gen_in_buf_n),
		.cipher_prng_reseed_o(cipher_prng_reseed_out_buf),
		.cipher_prng_reseed_i(cipher_prng_reseed_in_buf),
		.cipher_key_clear_o(cipher_key_clear_out_buf),
		.cipher_key_clear_i(cipher_key_clear_in_buf),
		.cipher_data_out_clear_o(cipher_data_out_clear_out_buf),
		.cipher_data_out_clear_i(cipher_data_out_clear_in_buf),
		.ghash_in_valid_o(ghash_in_valid),
		.ghash_in_ready_i(~ghash_in_ready_n),
		.ghash_out_valid_i(~ghash_out_valid_n),
		.ghash_out_ready_o(ghash_out_ready),
		.ghash_load_hash_subkey_o(ghash_load_hash_subkey),
		.key_init_sel_o(key_init_sel),
		.key_init_we_o(key_init_we),
		.iv_sel_o(iv_sel),
		.iv_we_o(iv_we),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.start_we_o(start_we),
		.key_iv_data_in_clear_we_o(key_iv_data_in_clear_we),
		.data_out_clear_we_o(data_out_clear_we),
		.prng_reseed_o(prng_reseed_out_buf),
		.prng_reseed_we_o(prng_reseed_we),
		.idle_o(idle),
		.idle_we_o(idle_we),
		.stall_o(stall),
		.stall_we_o(stall_we),
		.output_lost_i(output_lost_in_buf),
		.output_lost_o(output_lost_out_buf),
		.output_lost_we_o(output_lost_we),
		.output_valid_o(output_valid),
		.output_valid_we_o(output_valid_we),
		.input_ready_o(input_ready),
		.input_ready_we_o(input_ready_we)
	);
	localparam signed [31:0] NumOutBufBits = (((41 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_pkg_IVSelWidth) + aes_pkg_NumSlicesCtr) + 17;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {ctrl_we, ctrl_gcm_we, gcm_init_done, alert, data_in_we, data_out_sel, ~data_out_we, data_in_prev_sel, ~data_in_prev_we, state_in_sel, add_state_in_sel, add_state_out_sel, ~ctr_inc32, ~ctr_incr, ~cipher_in_valid, ~cipher_out_ready, ~cipher_crypt_out_buf, ~cipher_dec_key_gen_out_buf, cipher_prng_reseed_out_buf, cipher_key_clear_out_buf, cipher_data_out_clear_out_buf, ~ghash_in_valid, ~ghash_out_ready, ~ghash_load_hash_subkey, key_init_sel, ~key_init_we, iv_sel, ~iv_we, prng_update, prng_reseed_req, start_we, key_iv_data_in_clear_we, data_out_clear_we, prng_reseed_out_buf, prng_reseed_we, idle, idle_we, stall, stall_we, output_lost_out_buf, output_lost_we, output_valid, output_valid_we, input_ready, input_ready_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ctrl_we_o, ctrl_gcm_we_o, gcm_init_done_o, alert_o, data_in_we_o, data_out_sel_o, data_out_we_no, data_in_prev_sel_o, data_in_prev_we_no, state_in_sel_o, add_state_in_sel_o, add_state_out_sel_o, ctr_inc32_no, ctr_incr_no, cipher_in_valid_no, cipher_out_ready_no, cipher_crypt_no, cipher_dec_key_gen_no, cipher_prng_reseed_o, cipher_key_clear_o, cipher_data_out_clear_o, ghash_in_valid_no, ghash_out_ready_no, ghash_load_hash_subkey_no, key_init_sel_o, key_init_we_no, iv_sel_o, iv_we_no, prng_update_o, prng_reseed_req_o, start_we_o, key_iv_data_in_clear_we_o, data_out_clear_we_o, prng_reseed_o, prng_reseed_we_o, idle_o, idle_we_o, stall_o, stall_we_o, output_lost_o, output_lost_we_o, output_valid_o, output_valid_we_o, input_ready_o, input_ready_we_o} = out_buf;
endmodule
module aes_control_fsm_p (
	clk_i,
	rst_ni,
	ctrl_qe_i,
	ctrl_we_o,
	ctrl_phase_i,
	ctrl_err_storage_i,
	op_i,
	mode_i,
	cipher_op_i,
	sideload_i,
	prng_reseed_rate_i,
	manual_operation_i,
	key_touch_forces_reseed_i,
	ctrl_gcm_qe_i,
	ctrl_gcm_we_o,
	ctrl_gcm_phase_i,
	gcm_init_done_o,
	gcm_phase_i,
	start_i,
	key_iv_data_in_clear_i,
	data_out_clear_i,
	prng_reseed_i,
	mux_sel_err_i,
	sp_enc_err_i,
	lc_escalate_en_i,
	alert_fatal_i,
	alert_o,
	key_sideload_valid_i,
	key_init_qe_i,
	iv_qe_i,
	data_in_qe_i,
	data_out_re_i,
	data_in_we_o,
	data_out_sel_o,
	data_out_we_o,
	data_in_prev_sel_o,
	data_in_prev_we_o,
	state_in_sel_o,
	add_state_in_sel_o,
	add_state_out_sel_o,
	ctr_inc32_o,
	ctr_incr_o,
	ctr_ready_i,
	ctr_we_i,
	cipher_in_valid_o,
	cipher_in_ready_i,
	cipher_out_valid_i,
	cipher_out_ready_o,
	cipher_crypt_o,
	cipher_crypt_i,
	cipher_dec_key_gen_o,
	cipher_dec_key_gen_i,
	cipher_prng_reseed_o,
	cipher_prng_reseed_i,
	cipher_key_clear_o,
	cipher_key_clear_i,
	cipher_data_out_clear_o,
	cipher_data_out_clear_i,
	ghash_in_valid_o,
	ghash_in_ready_i,
	ghash_out_valid_i,
	ghash_out_ready_o,
	ghash_load_hash_subkey_o,
	key_init_sel_o,
	key_init_we_o,
	iv_sel_o,
	iv_we_o,
	prng_update_o,
	prng_reseed_req_o,
	prng_reseed_ack_i,
	start_we_o,
	key_iv_data_in_clear_we_o,
	data_out_clear_we_o,
	prng_reseed_o,
	prng_reseed_we_o,
	idle_o,
	idle_we_o,
	stall_o,
	stall_we_o,
	output_lost_i,
	output_lost_o,
	output_lost_we_o,
	output_valid_o,
	output_valid_we_o,
	input_ready_o,
	input_ready_we_o
);
	parameter [0:0] AESGCMEnable = 0;
	parameter [0:0] SecMasking = 0;
	input wire clk_i;
	input wire rst_ni;
	input wire ctrl_qe_i;
	output wire ctrl_we_o;
	input wire ctrl_phase_i;
	input wire ctrl_err_storage_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	input wire [5:0] mode_i;
	input wire [1:0] cipher_op_i;
	input wire sideload_i;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	input wire [2:0] prng_reseed_rate_i;
	input wire manual_operation_i;
	input wire key_touch_forces_reseed_i;
	input wire ctrl_gcm_qe_i;
	output wire ctrl_gcm_we_o;
	input wire ctrl_gcm_phase_i;
	output wire gcm_init_done_o;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire start_i;
	input wire key_iv_data_in_clear_i;
	input wire data_out_clear_i;
	input wire prng_reseed_i;
	input wire mux_sel_err_i;
	input wire sp_enc_err_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire key_sideload_valid_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	input wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	input wire [3:0] iv_qe_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [3:0] data_in_qe_i;
	input wire [3:0] data_out_re_i;
	output wire data_in_we_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_out_sel_o;
	output wire data_out_we_o;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] data_in_prev_sel_o;
	output wire data_in_prev_we_o;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] state_in_sel_o;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	output wire [2:0] add_state_in_sel_o;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] add_state_out_sel_o;
	output wire ctr_inc32_o;
	output wire ctr_incr_o;
	input wire ctr_ready_i;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [7:0] ctr_we_i;
	output wire cipher_in_valid_o;
	input wire cipher_in_ready_i;
	input wire cipher_out_valid_i;
	output wire cipher_out_ready_o;
	output wire cipher_crypt_o;
	input wire cipher_crypt_i;
	output wire cipher_dec_key_gen_o;
	input wire cipher_dec_key_gen_i;
	output wire cipher_prng_reseed_o;
	input wire cipher_prng_reseed_i;
	output wire cipher_key_clear_o;
	input wire cipher_key_clear_i;
	output wire cipher_data_out_clear_o;
	input wire cipher_data_out_clear_i;
	output wire ghash_in_valid_o;
	input wire ghash_in_ready_i;
	input wire ghash_out_valid_i;
	output wire ghash_out_ready_o;
	output wire ghash_load_hash_subkey_o;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	output wire [4:0] key_init_sel_o;
	output wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we_o;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	output wire [5:0] iv_sel_o;
	output wire [7:0] iv_we_o;
	output wire prng_update_o;
	output wire prng_reseed_req_o;
	input wire prng_reseed_ack_i;
	output wire start_we_o;
	output wire key_iv_data_in_clear_we_o;
	output wire data_out_clear_we_o;
	output wire prng_reseed_o;
	output wire prng_reseed_we_o;
	output wire idle_o;
	output wire idle_we_o;
	output wire stall_o;
	output wire stall_we_o;
	input wire output_lost_i;
	output wire output_lost_o;
	output wire output_lost_we_o;
	output wire output_valid_o;
	output wire output_valid_we_o;
	output wire input_ready_o;
	output wire input_ready_we_o;
	localparam signed [31:0] NumInBufBits = ((((((39 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_reg_pkg_NumRegsIv) + aes_reg_pkg_NumRegsData) + aes_reg_pkg_NumRegsData) + 1) + aes_pkg_NumSlicesCtr) + 11;
	wire [NumInBufBits - 1:0] in;
	wire [NumInBufBits - 1:0] in_buf;
	assign in = {ctrl_qe_i, ctrl_phase_i, ctrl_err_storage_i, op_i, mode_i, cipher_op_i, sideload_i, prng_reseed_rate_i, manual_operation_i, key_touch_forces_reseed_i, ctrl_gcm_qe_i, ctrl_gcm_phase_i, gcm_phase_i, start_i, key_iv_data_in_clear_i, data_out_clear_i, prng_reseed_i, mux_sel_err_i, sp_enc_err_i, lc_escalate_en_i, alert_fatal_i, key_sideload_valid_i, key_init_qe_i, iv_qe_i, data_in_qe_i, data_out_re_i, ctr_ready_i, ctr_we_i, cipher_in_ready_i, cipher_out_valid_i, cipher_crypt_i, cipher_dec_key_gen_i, cipher_prng_reseed_i, cipher_key_clear_i, cipher_data_out_clear_i, ghash_in_ready_i, ghash_out_valid_i, prng_reseed_ack_i, output_lost_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire ctrl_qe;
	wire ctrl_phase;
	wire ctrl_err_storage;
	wire [1:0] op;
	wire [5:0] mode;
	wire [1:0] cipher_op;
	wire [1:0] cipher_op_raw;
	wire sideload;
	wire [2:0] prng_reseed_rate;
	wire manual_operation;
	wire key_touch_forces_reseed;
	wire ctrl_gcm_qe;
	wire ctrl_gcm_phase;
	wire [5:0] gcm_phase;
	wire [5:0] gcm_phase_raw;
	wire start;
	wire key_iv_data_in_clear;
	wire data_out_clear;
	wire prng_reseed_in_buf;
	wire mux_sel_err;
	wire sp_enc_err;
	wire [3:0] lc_escalate_en;
	wire alert_fatal;
	wire key_sideload_valid;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe;
	wire [3:0] iv_qe;
	wire [3:0] data_in_qe;
	wire [3:0] data_out_re;
	wire ctr_ready;
	wire [7:0] ctr_we;
	wire cipher_in_ready;
	wire cipher_out_valid;
	wire cipher_crypt_in_buf;
	wire cipher_dec_key_gen_in_buf;
	wire cipher_prng_reseed_in_buf;
	wire cipher_key_clear_in_buf;
	wire cipher_data_out_clear_in_buf;
	wire ghash_in_ready;
	wire ghash_out_valid;
	wire prng_reseed_ack;
	wire output_lost_in_buf;
	assign {ctrl_qe, ctrl_phase, ctrl_err_storage, op, mode, cipher_op_raw, sideload, prng_reseed_rate, manual_operation, key_touch_forces_reseed, ctrl_gcm_qe, ctrl_gcm_phase, gcm_phase_raw, start, key_iv_data_in_clear, data_out_clear, prng_reseed_in_buf, mux_sel_err, sp_enc_err, lc_escalate_en, alert_fatal, key_sideload_valid, key_init_qe, iv_qe, data_in_qe, data_out_re, ctr_ready, ctr_we, cipher_in_ready, cipher_out_valid, cipher_crypt_in_buf, cipher_dec_key_gen_in_buf, cipher_prng_reseed_in_buf, cipher_key_clear_in_buf, cipher_data_out_clear_in_buf, ghash_in_ready, ghash_out_valid, prng_reseed_ack, output_lost_in_buf} = in_buf;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op = sv2v_cast_63054(cipher_op_raw);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	assign gcm_phase = sv2v_cast_92B33(gcm_phase_raw);
	wire ctrl_we;
	wire ctrl_gcm_we;
	wire gcm_init_done;
	wire alert;
	wire data_in_we;
	wire [2:0] data_out_sel;
	wire data_out_we;
	wire [2:0] data_in_prev_sel;
	wire data_in_prev_we;
	wire [2:0] state_in_sel;
	wire [2:0] add_state_in_sel;
	wire [4:0] add_state_out_sel;
	wire ctr_inc32;
	wire ctr_incr;
	wire cipher_in_valid;
	wire cipher_out_ready;
	wire cipher_crypt_out_buf;
	wire cipher_dec_key_gen_out_buf;
	wire cipher_prng_reseed_out_buf;
	wire cipher_key_clear_out_buf;
	wire cipher_data_out_clear_out_buf;
	wire ghash_in_valid;
	wire ghash_out_ready;
	wire ghash_load_hash_subkey;
	wire [4:0] key_init_sel;
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_we;
	wire [5:0] iv_sel;
	wire [7:0] iv_we;
	wire prng_update;
	wire prng_reseed_req;
	wire start_we;
	wire key_iv_data_in_clear_we;
	wire data_out_clear_we;
	wire prng_reseed_out_buf;
	wire prng_reseed_we;
	wire idle;
	wire idle_we;
	wire stall;
	wire stall_we;
	wire output_lost_out_buf;
	wire output_lost_we;
	wire output_valid;
	wire output_valid_we;
	wire input_ready;
	wire input_ready_we;
	aes_control_fsm #(
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking)
	) u_aes_control_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_qe_i(ctrl_qe),
		.ctrl_we_o(ctrl_we),
		.ctrl_phase_i(ctrl_phase),
		.ctrl_err_storage_i(ctrl_err_storage),
		.op_i(op),
		.mode_i(mode),
		.cipher_op_i(cipher_op),
		.sideload_i(sideload),
		.prng_reseed_rate_i(prng_reseed_rate),
		.manual_operation_i(manual_operation),
		.key_touch_forces_reseed_i(key_touch_forces_reseed),
		.ctrl_gcm_qe_i(ctrl_gcm_qe),
		.ctrl_gcm_we_o(ctrl_gcm_we),
		.ctrl_gcm_phase_i(ctrl_gcm_phase),
		.gcm_init_done_o(gcm_init_done),
		.gcm_phase_i(gcm_phase),
		.start_i(start),
		.key_iv_data_in_clear_i(key_iv_data_in_clear),
		.data_out_clear_i(data_out_clear),
		.prng_reseed_i(prng_reseed_in_buf),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err),
		.lc_escalate_en_i(lc_escalate_en),
		.alert_fatal_i(alert_fatal),
		.alert_o(alert),
		.key_sideload_valid_i(key_sideload_valid),
		.key_init_qe_i(key_init_qe),
		.iv_qe_i(iv_qe),
		.data_in_qe_i(data_in_qe),
		.data_out_re_i(data_out_re),
		.data_in_we_o(data_in_we),
		.data_out_sel_o(data_out_sel),
		.data_out_we_o(data_out_we),
		.data_in_prev_sel_o(data_in_prev_sel),
		.data_in_prev_we_o(data_in_prev_we),
		.state_in_sel_o(state_in_sel),
		.add_state_in_sel_o(add_state_in_sel),
		.add_state_out_sel_o(add_state_out_sel),
		.ctr_inc32_o(ctr_inc32),
		.ctr_incr_o(ctr_incr),
		.ctr_ready_i(ctr_ready),
		.ctr_we_i(ctr_we),
		.cipher_in_valid_o(cipher_in_valid),
		.cipher_in_ready_i(cipher_in_ready),
		.cipher_out_valid_i(cipher_out_valid),
		.cipher_out_ready_o(cipher_out_ready),
		.cipher_crypt_o(cipher_crypt_out_buf),
		.cipher_crypt_i(cipher_crypt_in_buf),
		.cipher_dec_key_gen_o(cipher_dec_key_gen_out_buf),
		.cipher_dec_key_gen_i(cipher_dec_key_gen_in_buf),
		.cipher_prng_reseed_o(cipher_prng_reseed_out_buf),
		.cipher_prng_reseed_i(cipher_prng_reseed_in_buf),
		.cipher_key_clear_o(cipher_key_clear_out_buf),
		.cipher_key_clear_i(cipher_key_clear_in_buf),
		.cipher_data_out_clear_o(cipher_data_out_clear_out_buf),
		.cipher_data_out_clear_i(cipher_data_out_clear_in_buf),
		.ghash_in_valid_o(ghash_in_valid),
		.ghash_in_ready_i(ghash_in_ready),
		.ghash_out_valid_i(ghash_out_valid),
		.ghash_out_ready_o(ghash_out_ready),
		.ghash_load_hash_subkey_o(ghash_load_hash_subkey),
		.key_init_sel_o(key_init_sel),
		.key_init_we_o(key_init_we),
		.iv_sel_o(iv_sel),
		.iv_we_o(iv_we),
		.prng_update_o(prng_update),
		.prng_reseed_req_o(prng_reseed_req),
		.prng_reseed_ack_i(prng_reseed_ack),
		.start_we_o(start_we),
		.key_iv_data_in_clear_we_o(key_iv_data_in_clear_we),
		.data_out_clear_we_o(data_out_clear_we),
		.prng_reseed_o(prng_reseed_out_buf),
		.prng_reseed_we_o(prng_reseed_we),
		.idle_o(idle),
		.idle_we_o(idle_we),
		.stall_o(stall),
		.stall_we_o(stall_we),
		.output_lost_i(output_lost_in_buf),
		.output_lost_o(output_lost_out_buf),
		.output_lost_we_o(output_lost_we),
		.output_valid_o(output_valid),
		.output_valid_we_o(output_valid_we),
		.input_ready_o(input_ready),
		.input_ready_we_o(input_ready_we)
	);
	localparam signed [31:0] NumOutBufBits = (((41 + (aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) + aes_pkg_IVSelWidth) + aes_pkg_NumSlicesCtr) + 17;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {ctrl_we, ctrl_gcm_we, gcm_init_done, alert, data_in_we, data_out_sel, data_out_we, data_in_prev_sel, data_in_prev_we, state_in_sel, add_state_in_sel, add_state_out_sel, ctr_inc32, ctr_incr, cipher_in_valid, cipher_out_ready, cipher_crypt_out_buf, cipher_dec_key_gen_out_buf, cipher_prng_reseed_out_buf, cipher_key_clear_out_buf, cipher_data_out_clear_out_buf, ghash_in_valid, ghash_out_ready, ghash_load_hash_subkey, key_init_sel, key_init_we, iv_sel, iv_we, prng_update, prng_reseed_req, start_we, key_iv_data_in_clear_we, data_out_clear_we, prng_reseed_out_buf, prng_reseed_we, idle, idle_we, stall, stall_we, output_lost_out_buf, output_lost_we, output_valid, output_valid_we, input_ready, input_ready_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ctrl_we_o, ctrl_gcm_we_o, gcm_init_done_o, alert_o, data_in_we_o, data_out_sel_o, data_out_we_o, data_in_prev_sel_o, data_in_prev_we_o, state_in_sel_o, add_state_in_sel_o, add_state_out_sel_o, ctr_inc32_o, ctr_incr_o, cipher_in_valid_o, cipher_out_ready_o, cipher_crypt_o, cipher_dec_key_gen_o, cipher_prng_reseed_o, cipher_key_clear_o, cipher_data_out_clear_o, ghash_in_valid_o, ghash_out_ready_o, ghash_load_hash_subkey_o, key_init_sel_o, key_init_we_o, iv_sel_o, iv_we_o, prng_update_o, prng_reseed_req_o, start_we_o, key_iv_data_in_clear_we_o, data_out_clear_we_o, prng_reseed_o, prng_reseed_we_o, idle_o, idle_we_o, stall_o, stall_we_o, output_lost_o, output_lost_we_o, output_valid_o, output_valid_we_o, input_ready_o, input_ready_we_o} = out_buf;
endmodule
module aes_core (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	entropy_clearing_req_o,
	entropy_clearing_ack_i,
	entropy_clearing_i,
	entropy_masking_req_o,
	entropy_masking_ack_i,
	entropy_masking_i,
	keymgr_key_i,
	lc_escalate_en_i,
	shadowed_storage_err_i,
	shadowed_update_err_i,
	intg_err_alert_i,
	alert_recov_o,
	alert_fatal_o,
	reg2hw,
	hw2reg
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] AESGCMEnable = 1;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	parameter [31:0] SecStartTriggerDelay = 0;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	localparam signed [31:0] aes_pkg_ClearingLfsrWidth = 64;
	localparam [63:0] aes_pkg_RndCnstClearingLfsrSeedDefault = 64'hc32d580f74f1713a;
	parameter [63:0] RndCnstClearingLfsrSeed = aes_pkg_RndCnstClearingLfsrSeedDefault;
	localparam [383:0] aes_pkg_RndCnstClearingLfsrPermDefault = 384'hb33fdfc81deb6292c21f8a31025850679c2f4be1bbe937b4b7c9d7f4e57568d99c8ae291a899143e0d8459d31b143223;
	parameter [383:0] RndCnstClearingLfsrPerm = aes_pkg_RndCnstClearingLfsrPermDefault;
	localparam [383:0] aes_pkg_RndCnstClearingSharePermDefault = 384'hf66fd61b27847edc2286706fb3a2e9009736b95ac3f3b5205caf8dc536aad73605d393c8dd94476e830e97891d4828d0;
	parameter [383:0] RndCnstClearingSharePerm = aes_pkg_RndCnstClearingSharePermDefault;
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstMaskingLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstMaskingLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	output wire entropy_clearing_req_o;
	input wire entropy_clearing_ack_i;
	input wire [EntropyWidth - 1:0] entropy_clearing_i;
	output wire entropy_masking_req_o;
	input wire entropy_masking_ack_i;
	input wire [EntropyWidth - 1:0] entropy_masking_i;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	input wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key_i;
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	input wire [3:0] lc_escalate_en_i;
	input wire shadowed_storage_err_i;
	input wire shadowed_update_err_i;
	input wire intg_err_alert_i;
	output wire alert_recov_o;
	output wire alert_fatal_o;
	input wire [978:0] reg2hw;
	output reg [948:0] hw2reg;
	wire ctrl_qe;
	wire ctrl_we;
	wire ctrl_phase;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	wire [1:0] aes_op_q;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	wire [5:0] aes_mode_q;
	wire [1:0] cipher_op;
	wire [1:0] cipher_op_buf;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	wire [2:0] key_len_q;
	wire sideload_q;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	wire [2:0] prng_reseed_rate_q;
	wire manual_operation_q;
	wire ctrl_reg_err_update;
	wire ctrl_reg_err_storage;
	wire ctrl_gcm_qe;
	wire ctrl_gcm_we;
	wire ctrl_gcm_phase;
	wire gcm_init_done;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	wire [5:0] gcm_phase_q;
	wire [4:0] num_valid_bytes_q;
	wire ctrl_gcm_reg_err_update;
	wire ctrl_gcm_reg_err_storage;
	wire ctrl_err_update;
	wire ctrl_err_storage;
	wire ctrl_err_storage_d;
	reg ctrl_err_storage_q;
	wire ctrl_alert;
	wire key_touch_forces_reseed;
	wire force_masks;
	wire mux_sel_err;
	wire sp_enc_err_d;
	reg sp_enc_err_q;
	wire clear_on_fatal;
	reg [127:0] state_in;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_SISelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] state_in_sel_raw;
	wire [2:0] state_in_sel_ctrl;
	wire [2:0] state_in_sel;
	wire state_in_sel_err;
	reg [127:0] add_state_in;
	localparam signed [31:0] aes_pkg_AddSISelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] add_state_in_sel_raw;
	wire [2:0] add_state_in_sel_ctrl;
	wire [2:0] add_state_in_sel;
	wire add_state_in_sel_err;
	wire [127:0] state_mask;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] state_init;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] state_done;
	wire [127:0] state_out;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	localparam signed [31:0] aes_reg_pkg_NumRegsKey = 8;
	reg [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 32) - 1:0] key_init;
	reg [7:0] key_init_qe [0:1];
	wire [(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) - 1:0] key_init_qe_buf;
	reg [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 32) - 1:0] key_init_d;
	reg [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 32) - 1:0] key_init_q;
	wire [((NumShares * aes_reg_pkg_NumRegsKey) * 32) - 1:0] key_init_cipher;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	wire [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 3) - 1:0] key_init_we_ctrl;
	wire [(aes_reg_pkg_NumRegsKey * aes_pkg_Sp2VWidth) - 1:0] key_init_we [0:1];
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_KeyInitSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] key_init_sel_raw;
	wire [4:0] key_init_sel_ctrl;
	wire [4:0] key_init_sel;
	wire key_init_sel_err;
	reg [((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) * 32) - 1:0] key_sideload;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	reg [127:0] iv;
	reg [3:0] iv_qe;
	wire [3:0] iv_qe_buf;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	reg [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] iv_d;
	reg [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] iv_q;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] iv_we_ctrl;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] iv_we;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	localparam signed [31:0] aes_pkg_IVSelWidth = aes_pkg_Mux6SelWidth;
	wire [5:0] iv_sel_raw;
	wire [5:0] iv_sel_ctrl;
	wire [5:0] iv_sel;
	wire iv_sel_err;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] ctr;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we;
	wire [2:0] ctr_inc32;
	wire [2:0] ctr_incr;
	wire [2:0] ctr_ready;
	wire ctr_alert;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	reg [127:0] data_in_prev_d;
	reg [127:0] data_in_prev_q;
	wire [2:0] data_in_prev_we_ctrl;
	wire [2:0] data_in_prev_we;
	localparam signed [31:0] aes_pkg_DIPSelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] data_in_prev_sel_raw;
	wire [2:0] data_in_prev_sel_ctrl;
	wire [2:0] data_in_prev_sel;
	wire data_in_prev_sel_err;
	reg [127:0] data_in;
	reg [3:0] data_in_qe;
	wire [3:0] data_in_qe_buf;
	wire data_in_we;
	reg [127:0] add_state_out;
	localparam signed [31:0] aes_pkg_AddSOSelWidth = aes_pkg_Mux3SelWidth;
	wire [4:0] add_state_out_sel_raw;
	wire [4:0] add_state_out_sel_ctrl;
	wire [4:0] add_state_out_sel;
	wire add_state_out_sel_err;
	wire [127:0] data_out;
	reg [127:0] data_out_d;
	reg [127:0] data_out_q;
	wire [2:0] data_out_we_ctrl;
	wire [2:0] data_out_we;
	reg [3:0] data_out_re;
	wire [3:0] data_out_re_buf;
	localparam signed [31:0] aes_pkg_DataOutSelWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] data_out_sel_raw;
	wire [2:0] data_out_sel_ctrl;
	wire [2:0] data_out_sel;
	wire data_out_sel_err;
	wire [2:0] cipher_in_valid;
	wire [2:0] cipher_in_ready;
	wire [2:0] cipher_out_valid;
	wire [2:0] cipher_out_ready;
	wire [2:0] cipher_crypt;
	wire [2:0] cipher_crypt_busy;
	wire [2:0] cipher_dec_key_gen;
	wire [2:0] cipher_dec_key_gen_busy;
	wire cipher_prng_reseed;
	wire cipher_prng_reseed_busy;
	wire cipher_key_clear;
	wire cipher_key_clear_busy;
	wire cipher_data_out_clear;
	wire cipher_data_out_clear_busy;
	wire cipher_alert;
	wire [2:0] ghash_in_valid;
	wire [2:0] ghash_in_ready;
	wire [2:0] ghash_out_valid;
	wire [2:0] ghash_out_ready;
	wire [2:0] ghash_load_hash_subkey;
	wire ghash_first_block;
	wire ghash_alert;
	localparam [31:0] aes_pkg_WidthPRDClearing = 64;
	wire [(aes_pkg_NumSharesKey * aes_pkg_WidthPRDClearing) - 1:0] prd_clearing;
	wire prd_clearing_update;
	wire prd_clearing_rsd_req;
	wire prd_clearing_rsd_ack;
	wire [(NumShares * 128) - 1:0] prd_clearing_128;
	wire [(NumShares * 256) - 1:0] prd_clearing_256;
	wire [127:0] prd_clearing_data;
	wire [511:0] prd_clearing_key_init;
	wire [(((NumShares * 4) * 4) * 8) - 1:0] prd_clearing_state;
	wire [((NumShares * 8) * 32) - 1:0] prd_clearing_key;
	reg [127:0] unused_data_out_q;
	aes_prng_clearing #(
		.Width(aes_pkg_WidthPRDClearing),
		.EntropyWidth(EntropyWidth),
		.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
		.RndCnstLfsrSeed(RndCnstClearingLfsrSeed),
		.RndCnstLfsrPerm(RndCnstClearingLfsrPerm),
		.RndCnstSharePerm(RndCnstClearingSharePerm)
	) u_aes_prng_clearing(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.data_update_i(prd_clearing_update),
		.data_o(prd_clearing),
		.reseed_req_i(prd_clearing_rsd_req),
		.reseed_ack_o(prd_clearing_rsd_ack),
		.entropy_req_o(entropy_clearing_req_o),
		.entropy_ack_i(entropy_clearing_ack_i),
		.entropy_i(entropy_clearing_i)
	);
	genvar _gv_s_6;
	localparam [31:0] aes_pkg_NumChunksPRDClearing128 = 2;
	localparam [31:0] aes_pkg_NumChunksPRDClearing256 = 4;
	generate
		for (_gv_s_6 = 0; _gv_s_6 < NumShares; _gv_s_6 = _gv_s_6 + 1) begin : gen_prd_clearing_shares
			localparam s = _gv_s_6;
			genvar _gv_c_1;
			for (_gv_c_1 = 0; _gv_c_1 < aes_pkg_NumChunksPRDClearing128; _gv_c_1 = _gv_c_1 + 1) begin : gen_prd_clearing_128
				localparam c = _gv_c_1;
				assign prd_clearing_128[(((NumShares - 1) - s) * 128) + (c * aes_pkg_WidthPRDClearing)+:aes_pkg_WidthPRDClearing] = prd_clearing[(1 - s) * aes_pkg_WidthPRDClearing+:aes_pkg_WidthPRDClearing];
			end
			genvar _gv_c_2;
			for (_gv_c_2 = 0; _gv_c_2 < aes_pkg_NumChunksPRDClearing256; _gv_c_2 = _gv_c_2 + 1) begin : gen_prd_clearing_256
				localparam c = _gv_c_2;
				assign prd_clearing_256[(((NumShares - 1) - s) * 256) + (c * aes_pkg_WidthPRDClearing)+:aes_pkg_WidthPRDClearing] = prd_clearing[(1 - s) * aes_pkg_WidthPRDClearing+:aes_pkg_WidthPRDClearing];
			end
		end
	endgenerate
	assign prd_clearing_data = prd_clearing_128[(NumShares - 1) * 128+:128];
	genvar _gv_s_7;
	generate
		for (_gv_s_7 = 0; _gv_s_7 < aes_pkg_NumSharesKey; _gv_s_7 = _gv_s_7 + 1) begin : gen_prd_clearing_key_init_shares
			localparam s = _gv_s_7;
			genvar _gv_c_3;
			for (_gv_c_3 = 0; _gv_c_3 < aes_pkg_NumChunksPRDClearing256; _gv_c_3 = _gv_c_3 + 1) begin : gen_prd_clearing_key_init
				localparam c = _gv_c_3;
				assign prd_clearing_key_init[((1 - s) * 256) + (c * aes_pkg_WidthPRDClearing)+:aes_pkg_WidthPRDClearing] = prd_clearing[(1 - s) * aes_pkg_WidthPRDClearing+:aes_pkg_WidthPRDClearing];
			end
		end
	endgenerate
	assign prd_clearing_state = prd_clearing_128;
	assign prd_clearing_key = prd_clearing_256;
	always @(*) begin : key_init_get
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_1
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsKey; i = i + 1)
				begin
					key_init[(8 + i) * 32+:32] = reg2hw[711 + ((i * 33) + 32)-:32];
					key_init_qe[0][i] = reg2hw[711 + (i * 33)];
					key_init[(0 + i) * 32+:32] = reg2hw[447 + ((i * 33) + 32)-:32];
					key_init_qe[1][i] = reg2hw[447 + (i * 33)];
				end
		end
	end
	prim_sec_anchor_buf #(.Width(aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey)) u_prim_buf_key_init_qe(
		.in_i({key_init_qe[1], key_init_qe[0]}),
		.out_o({key_init_qe_buf[0+:aes_reg_pkg_NumRegsKey], key_init_qe_buf[8+:aes_reg_pkg_NumRegsKey]})
	);
	always @(*) begin : key_sideload_get
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_2
			reg signed [31:0] s;
			for (s = 0; s < aes_pkg_NumSharesKey; s = s + 1)
				begin : sv2v_autoblock_3
					reg signed [31:0] i;
					for (i = 0; i < aes_reg_pkg_NumRegsKey; i = i + 1)
						key_sideload[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 32+:32] = keymgr_key_i[((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - (((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - ((s * keymgr_pkg_KeyWidth) + (i * 32)))+:32];
				end
		end
	end
	always @(*) begin : iv_get
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_4
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsIv; i = i + 1)
				begin
					iv[i * 32+:32] = reg2hw[315 + ((i * 33) + 32)-:32];
					iv_qe[i] = reg2hw[315 + (i * 33)];
				end
		end
	end
	prim_sec_anchor_buf #(.Width(aes_reg_pkg_NumRegsIv)) u_prim_buf_iv_qe(
		.in_i(iv_qe),
		.out_o(iv_qe_buf)
	);
	always @(*) begin : data_in_get
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_5
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsData; i = i + 1)
				begin
					data_in[i * 32+:32] = reg2hw[183 + ((i * 33) + 32)-:32];
					data_in_qe[i] = reg2hw[183 + (i * 33)];
				end
		end
	end
	prim_sec_anchor_buf #(.Width(aes_reg_pkg_NumRegsData)) u_prim_buf_data_in_qe(
		.in_i(data_in_qe),
		.out_o(data_in_qe_buf)
	);
	always @(*) begin : data_out_get
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_6
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsData; i = i + 1)
				begin
					unused_data_out_q[i * 32+:32] = reg2hw[51 + ((i * 33) + 32)-:32];
					data_out_re[i] = reg2hw[51 + (i * 33)];
				end
		end
	end
	prim_sec_anchor_buf #(.Width(aes_reg_pkg_NumRegsData)) u_prim_buf_data_out_re(
		.in_i(data_out_re),
		.out_o(data_out_re_buf)
	);
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_A4E58;
		input reg [4:0] inp;
		sv2v_cast_A4E58 = inp;
	endfunction
	always @(*) begin : key_init_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_init_sel)
			sv2v_cast_A4E58(sv2v_cast_19785(5'b01110)): key_init_d = key_init;
			sv2v_cast_A4E58(sv2v_cast_19785(5'b11000)): key_init_d = key_sideload;
			sv2v_cast_A4E58(sv2v_cast_19785(5'b00001)): key_init_d = prd_clearing_key_init;
			default: key_init_d = prd_clearing_key_init;
		endcase
	end
	function automatic [255:0] sv2v_cast_57961;
		input reg [255:0] inp;
		sv2v_cast_57961 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni) begin : key_init_reg
		if (!rst_ni)
			key_init_q <= {aes_pkg_NumSharesKey {sv2v_cast_57961(1'sb0)}};
		else begin : sv2v_autoblock_7
			reg signed [31:0] s;
			for (s = 0; s < aes_pkg_NumSharesKey; s = s + 1)
				begin : sv2v_autoblock_8
					reg signed [31:0] i;
					for (i = 0; i < aes_reg_pkg_NumRegsKey; i = i + 1)
						if (key_init_we[s][i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
							key_init_q[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 32+:32] <= key_init_d[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 32+:32];
				end
		end
	end
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_9
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_10
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	function automatic [5:0] sv2v_cast_91DD0;
		input reg [5:0] inp;
		sv2v_cast_91DD0 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_CDC2F;
		input reg [5:0] inp;
		sv2v_cast_CDC2F = inp;
	endfunction
	always @(*) begin : iv_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (iv_sel)
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b011101)): iv_d = iv;
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b110000)): iv_d = data_out_d;
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b001000)): iv_d = aes_pkg_aes_transpose(state_out);
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b000011)): iv_d = data_in_prev_q;
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b111110)): iv_d = ctr;
			sv2v_cast_CDC2F(sv2v_cast_91DD0(6'b100101)): iv_d = prd_clearing_data;
			default: iv_d = prd_clearing_data;
		endcase
	end
	always @(posedge clk_i or negedge rst_ni) begin : iv_reg
		if (!rst_ni)
			iv_q <= 1'sb0;
		else begin : sv2v_autoblock_11
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_NumSlicesCtr; i = i + 1)
				if (iv_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					iv_q[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr] <= iv_d[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr];
		end
	end
	function automatic [2:0] sv2v_cast_DB8EC;
		input reg [2:0] inp;
		sv2v_cast_DB8EC = inp;
	endfunction
	always @(*) begin : data_in_prev_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (data_in_prev_sel)
			sv2v_cast_DB8EC(sv2v_cast_14B94(3'b011)): data_in_prev_d = data_in;
			sv2v_cast_DB8EC(sv2v_cast_14B94(3'b100)): data_in_prev_d = prd_clearing_data;
			default: data_in_prev_d = prd_clearing_data;
		endcase
	end
	always @(posedge clk_i or negedge rst_ni) begin : data_in_prev_reg
		if (!rst_ni)
			data_in_prev_q <= 1'sb0;
		else if (data_in_prev_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			data_in_prev_q <= data_in_prev_d;
	end
	aes_ctr u_aes_ctr(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.inc32_i(ctr_inc32),
		.incr_i(ctr_incr),
		.ready_o(ctr_ready),
		.alert_o(ctr_alert),
		.ctr_i(iv_q),
		.ctr_o(ctr),
		.ctr_we_o(ctr_we)
	);
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign cipher_op = ((aes_mode_q == sv2v_cast_86B6A(6'b000001)) && (aes_op_q == sv2v_cast_63054(2'b01)) ? sv2v_cast_63054(2'b01) : ((aes_mode_q == sv2v_cast_86B6A(6'b000001)) && (aes_op_q == sv2v_cast_63054(2'b10)) ? sv2v_cast_63054(2'b10) : ((aes_mode_q == sv2v_cast_86B6A(6'b000010)) && (aes_op_q == sv2v_cast_63054(2'b01)) ? sv2v_cast_63054(2'b01) : ((aes_mode_q == sv2v_cast_86B6A(6'b000010)) && (aes_op_q == sv2v_cast_63054(2'b10)) ? sv2v_cast_63054(2'b10) : (aes_mode_q == sv2v_cast_86B6A(6'b000100) ? sv2v_cast_63054(2'b01) : (aes_mode_q == sv2v_cast_86B6A(6'b001000) ? sv2v_cast_63054(2'b01) : (aes_mode_q == sv2v_cast_86B6A(6'b010000) ? sv2v_cast_63054(2'b01) : (aes_mode_q == sv2v_cast_86B6A(6'b100000) ? sv2v_cast_63054(2'b01) : sv2v_cast_63054(2'b01)))))))));
	wire [1:0] cipher_op_raw;
	prim_buf #(.Width(aes_pkg_AES_OP_WIDTH)) u_prim_buf_op(
		.in_i(cipher_op),
		.out_o(cipher_op_raw)
	);
	assign cipher_op_buf = sv2v_cast_63054(cipher_op_raw);
	function automatic [2:0] sv2v_cast_5FB3A;
		input reg [2:0] inp;
		sv2v_cast_5FB3A = inp;
	endfunction
	always @(*) begin : state_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (state_in_sel)
			sv2v_cast_5FB3A(sv2v_cast_14B94(3'b011)): state_in = 1'sb0;
			sv2v_cast_5FB3A(sv2v_cast_14B94(3'b100)): state_in = aes_pkg_aes_transpose(data_in);
			default: state_in = 1'sb0;
		endcase
	end
	function automatic [2:0] sv2v_cast_06ECC;
		input reg [2:0] inp;
		sv2v_cast_06ECC = inp;
	endfunction
	always @(*) begin : add_state_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (add_state_in_sel)
			sv2v_cast_06ECC(sv2v_cast_14B94(3'b011)): add_state_in = 1'sb0;
			sv2v_cast_06ECC(sv2v_cast_14B94(3'b100)): add_state_in = aes_pkg_aes_transpose(iv_q);
			default: add_state_in = 1'sb0;
		endcase
	end
	generate
		if (!SecMasking) begin : gen_state_init_unmasked
			assign state_init[8 * (4 * ((NumShares - 1) * 4))+:128] = state_in ^ add_state_in;
			wire [127:0] unused_state_mask;
			assign unused_state_mask = state_mask;
		end
		else begin : gen_state_init_masked
			assign state_init[8 * (4 * ((NumShares - 1) * 4))+:128] = (state_in ^ add_state_in) ^ state_mask;
			assign state_init[8 * (4 * ((NumShares - 2) * 4))+:128] = state_mask;
		end
		if (!SecMasking) begin : gen_key_init_unmasked
			assign key_init_cipher[32 * ((NumShares - 1) * aes_reg_pkg_NumRegsKey)+:256] = key_init_q[256+:256] ^ key_init_q[0+:256];
		end
		else begin : gen_key_init_masked
			assign key_init_cipher = key_init_q;
		end
	endgenerate
	aes_cipher_core #(
		.AES192Enable(AES192Enable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl),
		.SecAllowForcingMasks(SecAllowForcingMasks),
		.SecSkipPRNGReseeding(SecSkipPRNGReseeding),
		.RndCnstMaskingLfsrSeed(RndCnstMaskingLfsrSeed),
		.RndCnstMaskingLfsrPerm(RndCnstMaskingLfsrPerm)
	) u_aes_cipher_core(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(cipher_in_valid),
		.in_ready_o(cipher_in_ready),
		.out_valid_o(cipher_out_valid),
		.out_ready_i(cipher_out_ready),
		.cfg_valid_i(~ctrl_err_storage),
		.op_i(cipher_op_buf),
		.key_len_i(key_len_q),
		.crypt_i(cipher_crypt),
		.crypt_o(cipher_crypt_busy),
		.dec_key_gen_i(cipher_dec_key_gen),
		.dec_key_gen_o(cipher_dec_key_gen_busy),
		.prng_reseed_i(cipher_prng_reseed),
		.prng_reseed_o(cipher_prng_reseed_busy),
		.key_clear_i(cipher_key_clear),
		.key_clear_o(cipher_key_clear_busy),
		.data_out_clear_i(cipher_data_out_clear),
		.data_out_clear_o(cipher_data_out_clear_busy),
		.alert_fatal_i(alert_fatal_o),
		.alert_o(cipher_alert),
		.prd_clearing_state_i(prd_clearing_state),
		.prd_clearing_key_i(prd_clearing_key),
		.force_masks_i(force_masks),
		.data_in_mask_o(state_mask),
		.entropy_req_o(entropy_masking_req_o),
		.entropy_ack_i(entropy_masking_ack_i),
		.entropy_i(entropy_masking_i),
		.state_init_i(state_init),
		.key_init_i(key_init_cipher),
		.state_o(state_done)
	);
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	generate
		if (!SecMasking) begin : gen_state_out_unmasked
			assign state_out = state_done[8 * (4 * ((NumShares - 1) * 4))+:128];
		end
		else begin : gen_state_out_masked
			wire [127:0] state_done_muxed [0:NumShares - 1];
			genvar _gv_s_8;
			for (_gv_s_8 = 0; _gv_s_8 < NumShares; _gv_s_8 = _gv_s_8 + 1) begin : gen_state_done_muxed
				localparam s = _gv_s_8;
				assign state_done_muxed[s] = ((cipher_out_valid == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) && !((aes_mode_q == sv2v_cast_86B6A(6'b100000)) && (gcm_phase_q == sv2v_cast_92B33(6'b000001))) ? state_done[8 * (4 * (((NumShares - 1) - s) * 4))+:128] : prd_clearing_state[8 * (4 * (((NumShares - 1) - s) * 4))+:128]);
			end
			wire [127:0] state_done_buf [0:NumShares - 1];
			prim_buf #(.Width(128 * NumShares)) u_prim_state_done_muxed(
				.in_i({state_done_muxed[1], state_done_muxed[0]}),
				.out_o({state_done_buf[1], state_done_buf[0]})
			);
			assign state_out = state_done_buf[0] ^ state_done_buf[1];
		end
	endgenerate
	function automatic [4:0] sv2v_cast_32B2A;
		input reg [4:0] inp;
		sv2v_cast_32B2A = inp;
	endfunction
	always @(*) begin : add_state_out_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (add_state_out_sel)
			sv2v_cast_32B2A(sv2v_cast_19785(5'b01110)): add_state_out = 1'sb0;
			sv2v_cast_32B2A(sv2v_cast_19785(5'b11000)): add_state_out = aes_pkg_aes_transpose(iv_q);
			sv2v_cast_32B2A(sv2v_cast_19785(5'b00001)): add_state_out = aes_pkg_aes_transpose(data_in_prev_q);
			default: add_state_out = 1'sb0;
		endcase
	end
	assign data_out = aes_pkg_aes_transpose(state_out ^ add_state_out);
	function automatic [2:0] sv2v_cast_D1B5B;
		input reg [2:0] inp;
		sv2v_cast_D1B5B = inp;
	endfunction
	generate
		if (AESGCMEnable) begin : gen_ghash
			wire [127:0] ghash_state_out;
			wire ghash_clear;
			assign ghash_clear = cipher_key_clear | cipher_key_clear_busy;
			localparam [31:0] GhashGFMultCycles = (SecSBoxImpl == 32'sd4 ? 32 : 8);
			aes_ghash #(
				.SecMasking(SecMasking),
				.GFMultCycles(GhashGFMultCycles)
			) u_aes_ghash(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.in_valid_i(ghash_in_valid),
				.in_ready_o(ghash_in_ready),
				.out_valid_o(ghash_out_valid),
				.out_ready_i(ghash_out_ready),
				.op_i(aes_op_q),
				.gcm_phase_i(gcm_phase_q),
				.num_valid_bytes_i(num_valid_bytes_q),
				.load_hash_subkey_i(ghash_load_hash_subkey),
				.clear_i(ghash_clear),
				.first_block_o(ghash_first_block),
				.alert_fatal_i(alert_fatal_o),
				.alert_o(ghash_alert),
				.data_in_prev_i(data_in_prev_q),
				.data_out_i(data_out),
				.cipher_state_done_i(state_done),
				.ghash_state_done_o(ghash_state_out)
			);
			always @(*) begin : data_out_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (data_out_sel)
					sv2v_cast_D1B5B(sv2v_cast_14B94(3'b011)): data_out_d = data_out;
					sv2v_cast_D1B5B(sv2v_cast_14B94(3'b100)): data_out_d = ghash_state_out;
					default: data_out_d = ghash_state_out;
				endcase
			end
		end
		else begin : gen_no_ghash
			assign ghash_in_ready = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
			assign ghash_out_valid = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
			assign ghash_first_block = 1'b0;
			assign ghash_alert = 1'b0;
			wire [128:1] sv2v_tmp_59206;
			assign sv2v_tmp_59206 = data_out;
			always @(*) data_out_d = sv2v_tmp_59206;
			wire [2:0] unused_ghash_in_valid;
			wire [2:0] unused_ghash_out_ready;
			wire [2:0] unused_ghash_load_hash_subkey;
			wire [4:0] unused_num_valid_bytes;
			wire [2:0] unused_data_out_sel;
			assign unused_ghash_in_valid = ghash_in_valid;
			assign unused_ghash_out_ready = ghash_out_ready;
			assign unused_ghash_load_hash_subkey = ghash_load_hash_subkey;
			assign unused_num_valid_bytes = num_valid_bytes_q;
			assign unused_data_out_sel = data_out_sel;
		end
	endgenerate
	wire [16:1] sv2v_tmp_u_ctrl_reg_shadowed_hw2reg_ctrl_o;
	always @(*) hw2reg[48-:16] = sv2v_tmp_u_ctrl_reg_shadowed_hw2reg_ctrl_o;
	aes_ctrl_reg_shadowed #(
		.AES192Enable(AES192Enable),
		.AESGCMEnable(AESGCMEnable)
	) u_ctrl_reg_shadowed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.qe_o(ctrl_qe),
		.we_i(ctrl_we),
		.phase_o(ctrl_phase),
		.operation_o(aes_op_q),
		.mode_o(aes_mode_q),
		.key_len_o(key_len_q),
		.sideload_o(sideload_q),
		.prng_reseed_rate_o(prng_reseed_rate_q),
		.manual_operation_o(manual_operation_q),
		.err_update_o(ctrl_reg_err_update),
		.err_storage_o(ctrl_reg_err_storage),
		.reg2hw_ctrl_i(reg2hw[50-:28]),
		.hw2reg_ctrl_o(sv2v_tmp_u_ctrl_reg_shadowed_hw2reg_ctrl_o)
	);
	assign key_touch_forces_reseed = reg2hw[21];
	assign force_masks = reg2hw[22];
	wire [11:1] sv2v_tmp_u_ctrl_gcm_reg_shadowed_hw2reg_ctrl_gcm_o;
	always @(*) hw2reg[10-:11] = sv2v_tmp_u_ctrl_gcm_reg_shadowed_hw2reg_ctrl_gcm_o;
	aes_ctrl_gcm_reg_shadowed #(.AESGCMEnable(AESGCMEnable)) u_ctrl_gcm_reg_shadowed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.qe_o(ctrl_gcm_qe),
		.we_i(ctrl_gcm_we),
		.phase_o(ctrl_gcm_phase),
		.init_done_i(gcm_init_done),
		.first_block_i(ghash_first_block),
		.gcm_phase_o(gcm_phase_q),
		.num_valid_bytes_o(num_valid_bytes_q),
		.err_update_o(ctrl_gcm_reg_err_update),
		.err_storage_o(ctrl_gcm_reg_err_storage),
		.reg2hw_ctrl_gcm_i(reg2hw[14-:15]),
		.hw2reg_ctrl_gcm_o(sv2v_tmp_u_ctrl_gcm_reg_shadowed_hw2reg_ctrl_gcm_o)
	);
	wire [1:1] sv2v_tmp_u_aes_control_start_o;
	always @(*) hw2reg[26] = sv2v_tmp_u_aes_control_start_o;
	wire [1:1] sv2v_tmp_u_aes_control_start_we_o;
	always @(*) hw2reg[25] = sv2v_tmp_u_aes_control_start_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_key_iv_data_in_clear_o;
	always @(*) hw2reg[28] = sv2v_tmp_u_aes_control_key_iv_data_in_clear_o;
	wire [1:1] sv2v_tmp_u_aes_control_key_iv_data_in_clear_we_o;
	always @(*) hw2reg[27] = sv2v_tmp_u_aes_control_key_iv_data_in_clear_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_data_out_clear_o;
	always @(*) hw2reg[30] = sv2v_tmp_u_aes_control_data_out_clear_o;
	wire [1:1] sv2v_tmp_u_aes_control_data_out_clear_we_o;
	always @(*) hw2reg[29] = sv2v_tmp_u_aes_control_data_out_clear_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_prng_reseed_o;
	always @(*) hw2reg[32] = sv2v_tmp_u_aes_control_prng_reseed_o;
	wire [1:1] sv2v_tmp_u_aes_control_prng_reseed_we_o;
	always @(*) hw2reg[31] = sv2v_tmp_u_aes_control_prng_reseed_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_idle_o;
	always @(*) hw2reg[12] = sv2v_tmp_u_aes_control_idle_o;
	wire [1:1] sv2v_tmp_u_aes_control_idle_we_o;
	always @(*) hw2reg[11] = sv2v_tmp_u_aes_control_idle_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_stall_o;
	always @(*) hw2reg[14] = sv2v_tmp_u_aes_control_stall_o;
	wire [1:1] sv2v_tmp_u_aes_control_stall_we_o;
	always @(*) hw2reg[13] = sv2v_tmp_u_aes_control_stall_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_output_lost_o;
	always @(*) hw2reg[16] = sv2v_tmp_u_aes_control_output_lost_o;
	wire [1:1] sv2v_tmp_u_aes_control_output_lost_we_o;
	always @(*) hw2reg[15] = sv2v_tmp_u_aes_control_output_lost_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_output_valid_o;
	always @(*) hw2reg[18] = sv2v_tmp_u_aes_control_output_valid_o;
	wire [1:1] sv2v_tmp_u_aes_control_output_valid_we_o;
	always @(*) hw2reg[17] = sv2v_tmp_u_aes_control_output_valid_we_o;
	wire [1:1] sv2v_tmp_u_aes_control_input_ready_o;
	always @(*) hw2reg[20] = sv2v_tmp_u_aes_control_input_ready_o;
	wire [1:1] sv2v_tmp_u_aes_control_input_ready_we_o;
	always @(*) hw2reg[19] = sv2v_tmp_u_aes_control_input_ready_we_o;
	aes_control #(
		.AESGCMEnable(AESGCMEnable),
		.SecMasking(SecMasking),
		.SecStartTriggerDelay(SecStartTriggerDelay)
	) u_aes_control(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.ctrl_qe_i(ctrl_qe),
		.ctrl_we_o(ctrl_we),
		.ctrl_phase_i(ctrl_phase),
		.ctrl_err_storage_i(ctrl_err_storage),
		.op_i(aes_op_q),
		.mode_i(aes_mode_q),
		.cipher_op_i(cipher_op_buf),
		.sideload_i(sideload_q),
		.prng_reseed_rate_i(prng_reseed_rate_q),
		.manual_operation_i(manual_operation_q),
		.key_touch_forces_reseed_i(key_touch_forces_reseed),
		.ctrl_gcm_qe_i(ctrl_gcm_qe),
		.ctrl_gcm_we_o(ctrl_gcm_we),
		.ctrl_gcm_phase_i(ctrl_gcm_phase),
		.gcm_init_done_o(gcm_init_done),
		.gcm_phase_i(gcm_phase_q),
		.start_i(reg2hw[17]),
		.key_iv_data_in_clear_i(reg2hw[18]),
		.data_out_clear_i(reg2hw[19]),
		.prng_reseed_i(reg2hw[20]),
		.mux_sel_err_i(mux_sel_err),
		.sp_enc_err_i(sp_enc_err_q),
		.lc_escalate_en_i(lc_escalate_en_i),
		.alert_fatal_i(alert_fatal_o),
		.alert_o(ctrl_alert),
		.key_sideload_valid_i(keymgr_key_i[(keymgr_pkg_Shares * keymgr_pkg_KeyWidth) + 0]),
		.key_init_qe_i(key_init_qe_buf),
		.iv_qe_i(iv_qe_buf),
		.data_in_qe_i(data_in_qe_buf),
		.data_out_re_i(data_out_re_buf),
		.data_in_we_o(data_in_we),
		.data_out_sel_o(data_out_sel_ctrl),
		.data_out_we_o(data_out_we_ctrl),
		.data_in_prev_sel_o(data_in_prev_sel_ctrl),
		.data_in_prev_we_o(data_in_prev_we_ctrl),
		.state_in_sel_o(state_in_sel_ctrl),
		.add_state_in_sel_o(add_state_in_sel_ctrl),
		.add_state_out_sel_o(add_state_out_sel_ctrl),
		.ctr_inc32_o(ctr_inc32),
		.ctr_incr_o(ctr_incr),
		.ctr_ready_i(ctr_ready),
		.ctr_we_i(ctr_we),
		.cipher_in_valid_o(cipher_in_valid),
		.cipher_in_ready_i(cipher_in_ready),
		.cipher_out_valid_i(cipher_out_valid),
		.cipher_out_ready_o(cipher_out_ready),
		.cipher_crypt_o(cipher_crypt),
		.cipher_crypt_i(cipher_crypt_busy),
		.cipher_dec_key_gen_o(cipher_dec_key_gen),
		.cipher_dec_key_gen_i(cipher_dec_key_gen_busy),
		.cipher_prng_reseed_o(cipher_prng_reseed),
		.cipher_prng_reseed_i(cipher_prng_reseed_busy),
		.cipher_key_clear_o(cipher_key_clear),
		.cipher_key_clear_i(cipher_key_clear_busy),
		.cipher_data_out_clear_o(cipher_data_out_clear),
		.cipher_data_out_clear_i(cipher_data_out_clear_busy),
		.ghash_in_valid_o(ghash_in_valid),
		.ghash_in_ready_i(ghash_in_ready),
		.ghash_out_valid_i(ghash_out_valid),
		.ghash_out_ready_o(ghash_out_ready),
		.ghash_load_hash_subkey_o(ghash_load_hash_subkey),
		.key_init_sel_o(key_init_sel_ctrl),
		.key_init_we_o(key_init_we_ctrl),
		.iv_sel_o(iv_sel_ctrl),
		.iv_we_o(iv_we_ctrl),
		.prng_update_o(prd_clearing_update),
		.prng_reseed_req_o(prd_clearing_rsd_req),
		.prng_reseed_ack_i(prd_clearing_rsd_ack),
		.start_o(sv2v_tmp_u_aes_control_start_o),
		.start_we_o(sv2v_tmp_u_aes_control_start_we_o),
		.key_iv_data_in_clear_o(sv2v_tmp_u_aes_control_key_iv_data_in_clear_o),
		.key_iv_data_in_clear_we_o(sv2v_tmp_u_aes_control_key_iv_data_in_clear_we_o),
		.data_out_clear_o(sv2v_tmp_u_aes_control_data_out_clear_o),
		.data_out_clear_we_o(sv2v_tmp_u_aes_control_data_out_clear_we_o),
		.prng_reseed_o(sv2v_tmp_u_aes_control_prng_reseed_o),
		.prng_reseed_we_o(sv2v_tmp_u_aes_control_prng_reseed_we_o),
		.idle_o(sv2v_tmp_u_aes_control_idle_o),
		.idle_we_o(sv2v_tmp_u_aes_control_idle_we_o),
		.stall_o(sv2v_tmp_u_aes_control_stall_o),
		.stall_we_o(sv2v_tmp_u_aes_control_stall_we_o),
		.output_lost_i(reg2hw[16]),
		.output_lost_o(sv2v_tmp_u_aes_control_output_lost_o),
		.output_lost_we_o(sv2v_tmp_u_aes_control_output_lost_we_o),
		.output_valid_o(sv2v_tmp_u_aes_control_output_valid_o),
		.output_valid_we_o(sv2v_tmp_u_aes_control_output_valid_we_o),
		.input_ready_o(sv2v_tmp_u_aes_control_input_ready_o),
		.input_ready_we_o(sv2v_tmp_u_aes_control_input_ready_we_o)
	);
	always @(*) begin : data_in_reg_clear
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_12
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsData; i = i + 1)
				begin
					hw2reg[177 + ((i * 33) + 32)-:32] = prd_clearing_data[i * 32+:32];
					hw2reg[177 + (i * 33)] = data_in_we;
				end
		end
	end
	localparam signed [31:0] aes_pkg_DIPSelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_DIPSelNum),
		.Width(aes_pkg_DIPSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_data_in_prev_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(data_in_prev_sel_ctrl),
		.sel_o(data_in_prev_sel_raw),
		.err_o(data_in_prev_sel_err)
	);
	assign data_in_prev_sel = sv2v_cast_DB8EC(data_in_prev_sel_raw);
	localparam signed [31:0] aes_pkg_SISelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_SISelNum),
		.Width(aes_pkg_SISelWidth),
		.EnSecBuf(1'b1)
	) u_aes_state_in_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(state_in_sel_ctrl),
		.sel_o(state_in_sel_raw),
		.err_o(state_in_sel_err)
	);
	assign state_in_sel = sv2v_cast_5FB3A(state_in_sel_raw);
	localparam signed [31:0] aes_pkg_AddSISelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_AddSISelNum),
		.Width(aes_pkg_AddSISelWidth),
		.EnSecBuf(1'b1)
	) u_aes_add_state_in_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(add_state_in_sel_ctrl),
		.sel_o(add_state_in_sel_raw),
		.err_o(add_state_in_sel_err)
	);
	assign add_state_in_sel = sv2v_cast_06ECC(add_state_in_sel_raw);
	localparam signed [31:0] aes_pkg_AddSOSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_AddSOSelNum),
		.Width(aes_pkg_AddSOSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_add_state_out_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(add_state_out_sel_ctrl),
		.sel_o(add_state_out_sel_raw),
		.err_o(add_state_out_sel_err)
	);
	assign add_state_out_sel = sv2v_cast_32B2A(add_state_out_sel_raw);
	localparam signed [31:0] aes_pkg_KeyInitSelNum = 3;
	aes_sel_buf_chk #(
		.Num(aes_pkg_KeyInitSelNum),
		.Width(aes_pkg_KeyInitSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_init_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(key_init_sel_ctrl),
		.sel_o(key_init_sel_raw),
		.err_o(key_init_sel_err)
	);
	assign key_init_sel = sv2v_cast_A4E58(key_init_sel_raw);
	localparam signed [31:0] aes_pkg_IVSelNum = 6;
	aes_sel_buf_chk #(
		.Num(aes_pkg_IVSelNum),
		.Width(aes_pkg_IVSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_iv_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(iv_sel_ctrl),
		.sel_o(iv_sel_raw),
		.err_o(iv_sel_err)
	);
	assign iv_sel = sv2v_cast_CDC2F(iv_sel_raw);
	localparam signed [31:0] aes_pkg_DataOutSelNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_DataOutSelNum),
		.Width(aes_pkg_DataOutSelWidth),
		.EnSecBuf(1'b1)
	) u_aes_data_out_sel_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(data_out_sel_ctrl),
		.sel_o(data_out_sel_raw),
		.err_o(data_out_sel_err)
	);
	assign data_out_sel = sv2v_cast_D1B5B(data_out_sel_raw);
	assign mux_sel_err = (((((data_in_prev_sel_err | state_in_sel_err) | add_state_in_sel_err) | add_state_out_sel_err) | key_init_sel_err) | iv_sel_err) | data_out_sel_err;
	localparam [31:0] NumSp2VSig = ((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + aes_pkg_NumSlicesCtr) + 2;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk;
	wire [(NumSp2VSig * aes_pkg_Sp2VWidth) - 1:0] sp2v_sig_chk_raw;
	wire [NumSp2VSig - 1:0] sp2v_sig_err;
	genvar _gv_s_9;
	generate
		for (_gv_s_9 = 0; _gv_s_9 < aes_pkg_NumSharesKey; _gv_s_9 = _gv_s_9 + 1) begin : gen_use_key_init_we_ctrl_shares
			localparam s = _gv_s_9;
			genvar _gv_i_16;
			for (_gv_i_16 = 0; _gv_i_16 < aes_reg_pkg_NumRegsKey; _gv_i_16 = _gv_i_16 + 1) begin : gen_use_key_init_we_ctrl
				localparam i = _gv_i_16;
				assign sp2v_sig[((s * aes_reg_pkg_NumRegsKey) + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = key_init_we_ctrl[(((1 - s) * aes_reg_pkg_NumRegsKey) + i) * 3+:3];
			end
		end
	endgenerate
	genvar _gv_i_17;
	generate
		for (_gv_i_17 = 0; _gv_i_17 < aes_pkg_NumSlicesCtr; _gv_i_17 = _gv_i_17 + 1) begin : gen_use_iv_we_ctrl
			localparam i = _gv_i_17;
			assign sp2v_sig[((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = iv_we_ctrl[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	assign sp2v_sig[(((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + aes_pkg_NumSlicesCtr) + 0) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = data_in_prev_we_ctrl;
	assign sp2v_sig[(((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + aes_pkg_NumSlicesCtr) + 1) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = data_out_we_ctrl;
	localparam [NumSp2VSig - 1:0] Sp2VEnSecBuf = {NumSp2VSig {1'b1}};
	genvar _gv_i_18;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	generate
		for (_gv_i_18 = 0; _gv_i_18 < NumSp2VSig; _gv_i_18 = _gv_i_18 + 1) begin : gen_sel_buf_chk
			localparam i = _gv_i_18;
			aes_sel_buf_chk #(
				.Num(aes_pkg_Sp2VNum),
				.Width(aes_pkg_Sp2VWidth),
				.EnSecBuf(Sp2VEnSecBuf[i])
			) u_aes_sp2v_sig_buf_chk_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.sel_i(sp2v_sig[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.sel_o(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]),
				.err_o(sp2v_sig_err[i])
			);
			assign sp2v_sig_chk[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sv2v_cast_39E4E(sp2v_sig_chk_raw[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth]);
		end
	endgenerate
	genvar _gv_s_10;
	generate
		for (_gv_s_10 = 0; _gv_s_10 < aes_pkg_NumSharesKey; _gv_s_10 = _gv_s_10 + 1) begin : gen_key_init_we_shares
			localparam s = _gv_s_10;
			genvar _gv_i_19;
			for (_gv_i_19 = 0; _gv_i_19 < aes_reg_pkg_NumRegsKey; _gv_i_19 = _gv_i_19 + 1) begin : gen_key_init_we
				localparam i = _gv_i_19;
				assign key_init_we[s][i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sp2v_sig_chk[((s * aes_reg_pkg_NumRegsKey) + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
			end
		end
	endgenerate
	genvar _gv_i_20;
	generate
		for (_gv_i_20 = 0; _gv_i_20 < aes_pkg_NumSlicesCtr; _gv_i_20 = _gv_i_20 + 1) begin : gen_iv_we
			localparam i = _gv_i_20;
			assign iv_we[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = sp2v_sig_chk[((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
		end
	endgenerate
	assign data_in_prev_we = sp2v_sig_chk[(((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + aes_pkg_NumSlicesCtr) + 0) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign data_out_we = sp2v_sig_chk[(((aes_pkg_NumSharesKey * aes_reg_pkg_NumRegsKey) + aes_pkg_NumSlicesCtr) + 1) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
	assign sp_enc_err_d = |sp2v_sig_err;
	always @(posedge clk_i or negedge rst_ni) begin : reg_sp_enc_err
		if (!rst_ni)
			sp_enc_err_q <= 1'b0;
		else if (sp_enc_err_d)
			sp_enc_err_q <= 1'b1;
	end
	always @(posedge clk_i or negedge rst_ni) begin : data_out_reg
		if (!rst_ni)
			data_out_q <= 1'sb0;
		else if (data_out_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			data_out_q <= data_out_d;
	end
	always @(*) begin : key_reg_put
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_13
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsKey; i = i + 1)
				begin
					hw2reg[693 + ((i * 32) + 31)-:32] = key_init_q[(8 + i) * 32+:32];
					hw2reg[437 + ((i * 32) + 31)-:32] = key_init_q[(0 + i) * 32+:32];
				end
		end
	end
	always @(*) begin : iv_reg_put
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_14
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsIv; i = i + 1)
				hw2reg[309 + ((i * 32) + 31)-:32] = {iv_q[((2 * i) + 1) * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr], iv_q[(2 * i) * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr]};
		end
	end
	always @(*) begin : data_out_put
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_15
			reg signed [31:0] i;
			for (i = 0; i < aes_reg_pkg_NumRegsData; i = i + 1)
				hw2reg[49 + ((i * 32) + 31)-:32] = data_out_q[i * 32+:32];
		end
	end
	localparam [0:0] aes_pkg_ClearStatusOnFatalAlert = 1'b0;
	assign clear_on_fatal = (aes_pkg_ClearStatusOnFatalAlert ? alert_fatal_o : 1'b0);
	assign ctrl_err_update = (ctrl_reg_err_update | shadowed_update_err_i) | ctrl_gcm_reg_err_update;
	assign alert_recov_o = ctrl_err_update;
	wire [1:1] sv2v_tmp_CC53E;
	assign sv2v_tmp_CC53E = ctrl_err_update & ~clear_on_fatal;
	always @(*) hw2reg[22] = sv2v_tmp_CC53E;
	wire [1:1] sv2v_tmp_E9C37;
	assign sv2v_tmp_E9C37 = (ctrl_err_update | ctrl_we) | clear_on_fatal;
	always @(*) hw2reg[21] = sv2v_tmp_E9C37;
	assign ctrl_err_storage_d = (ctrl_reg_err_storage | shadowed_storage_err_i) | ctrl_gcm_reg_err_storage;
	always @(posedge clk_i or negedge rst_ni) begin : ctrl_err_storage_reg
		if (!rst_ni)
			ctrl_err_storage_q <= 1'b0;
		else if (ctrl_err_storage_d)
			ctrl_err_storage_q <= 1'b1;
	end
	assign ctrl_err_storage = ctrl_err_storage_d | ctrl_err_storage_q;
	assign alert_fatal_o = ((((ctrl_err_storage | ctr_alert) | cipher_alert) | ghash_alert) | ctrl_alert) | intg_err_alert_i;
	wire [1:1] sv2v_tmp_DBAB0;
	assign sv2v_tmp_DBAB0 = alert_fatal_o;
	always @(*) hw2reg[24] = sv2v_tmp_DBAB0;
	wire [1:1] sv2v_tmp_780E7;
	assign sv2v_tmp_780E7 = alert_fatal_o;
	always @(*) hw2reg[23] = sv2v_tmp_780E7;
	wire unused_alert_signals;
	assign unused_alert_signals = ^reg2hw[978-:4];
	wire unused_idle;
	assign unused_idle = reg2hw[15];
	localparam signed [31:0] AesCoreSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesCoreSecMaskingNonDefault - 1:0] sv2v_cast_85B27;
		input reg [AesCoreSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_85B27 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_16
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_85B27(1'b1);
	end
	wire [127:0] state_done_transposed;
	wire [127:0] unused_state_done_transposed;
	generate
		if (!SecMasking) begin : gen_state_done_transposed_unmasked
			assign state_done_transposed = aes_pkg_aes_transpose(state_done[8 * (4 * ((NumShares - 1) * 4))+:128]);
		end
		else begin : gen_state_done_transposed_masked
			assign state_done_transposed = aes_pkg_aes_transpose(state_done[8 * (4 * ((NumShares - 1) * 4))+:128] ^ state_done[8 * (4 * ((NumShares - 2) * 4))+:128]);
		end
	endgenerate
	assign unused_state_done_transposed = state_done_transposed;
	initial _sv2v_0 = 0;
endmodule
module aes_ctr (
	clk_i,
	rst_ni,
	inc32_i,
	incr_i,
	ready_o,
	alert_o,
	ctr_i,
	ctr_o,
	ctr_we_o
);
	reg _sv2v_0;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] inc32_i;
	input wire [2:0] incr_i;
	output wire [2:0] ready_o;
	output wire alert_o;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	input wire [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] ctr_i;
	output wire [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] ctr_o;
	output wire [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we_o;
	function automatic [127:0] aes_rev_order_byte;
		input reg [127:0] in;
		reg [127:0] out;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 16; i = i + 1)
					out[i * 8+:8] = in[(15 - i) * 8+:8];
			end
			aes_rev_order_byte = out;
		end
	endfunction
	function automatic [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] aes_rev_order_sp2v;
		input reg [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] in;
		reg [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] out;
		begin
			begin : sv2v_autoblock_2
				reg signed [31:0] i;
				for (i = 0; i < aes_pkg_NumSlicesCtr; i = i + 1)
					out[i * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = in[(7 - i) * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth];
			end
			aes_rev_order_sp2v = out;
		end
	endfunction
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] aes_pkg_SliceIdxWidth = prim_util_pkg_vbits(aes_pkg_NumSlicesCtr);
	reg [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx;
	wire [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] ctr_i_rev;
	reg [(aes_pkg_NumSlicesCtr * aes_pkg_SliceSizeCtr) - 1:0] ctr_o_rev;
	reg [(aes_pkg_NumSlicesCtr * aes_pkg_Sp2VWidth) - 1:0] ctr_we_o_rev;
	wire [2:0] ctr_we;
	wire [15:0] ctr_i_slice;
	reg [15:0] ctr_o_slice;
	wire [2:0] inc32;
	wire inc32_err;
	wire [2:0] incr;
	wire incr_err;
	wire sp_enc_err;
	reg mr_err;
	wire [2:0] sp_inc32;
	wire [2:0] sp_incr;
	wire [2:0] sp_ready;
	wire [2:0] sp_ctr_we;
	wire [2:0] mr_alert;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_SliceIdxWidth) - 1:0] mr_ctr_slice_idx;
	wire [(aes_pkg_Sp2VWidth * aes_pkg_SliceSizeCtr) - 1:0] mr_ctr_o_slice;
	assign ctr_i_rev = aes_rev_order_byte(ctr_i);
	wire [2:0] inc32_raw;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b0)
	) u_aes_inc32_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(inc32_i),
		.sel_o(inc32_raw),
		.err_o(inc32_err)
	);
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign inc32 = sv2v_cast_39E4E(inc32_raw);
	wire [2:0] incr_raw;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b0)
	) u_aes_incr_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(incr_i),
		.sel_o(incr_raw),
		.err_o(incr_err)
	);
	assign incr = sv2v_cast_39E4E(incr_raw);
	assign sp_enc_err = inc32_err | incr_err;
	assign ctr_i_slice = ctr_i_rev[ctr_slice_idx * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr];
	assign sp_inc32 = {inc32};
	assign sp_incr = {incr};
	genvar _gv_i_21;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	localparam [2:0] aes_pkg_SP2V_LOGIC_HIGH = {sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))};
	generate
		for (_gv_i_21 = 0; _gv_i_21 < aes_pkg_Sp2VWidth; _gv_i_21 = _gv_i_21 + 1) begin : gen_fsm
			localparam i = _gv_i_21;
			if (aes_pkg_SP2V_LOGIC_HIGH[i] == 1'b1) begin : gen_fsm_p
				aes_ctr_fsm_p u_aes_ctr_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.inc32_i(sp_inc32[i]),
					.incr_i(sp_incr[i]),
					.ready_o(sp_ready[i]),
					.sp_enc_err_i(sp_enc_err),
					.mr_err_i(mr_err),
					.alert_o(mr_alert[i]),
					.ctr_slice_idx_o(mr_ctr_slice_idx[i * aes_pkg_SliceIdxWidth+:aes_pkg_SliceIdxWidth]),
					.ctr_slice_i(ctr_i_slice),
					.ctr_slice_o(mr_ctr_o_slice[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr]),
					.ctr_we_o(sp_ctr_we[i])
				);
			end
			else begin : gen_fsm_n
				aes_ctr_fsm_n u_aes_ctr_fsm_i(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.inc32_ni(sp_inc32[i]),
					.incr_ni(sp_incr[i]),
					.ready_no(sp_ready[i]),
					.sp_enc_err_i(sp_enc_err),
					.mr_err_i(mr_err),
					.alert_o(mr_alert[i]),
					.ctr_slice_idx_o(mr_ctr_slice_idx[i * aes_pkg_SliceIdxWidth+:aes_pkg_SliceIdxWidth]),
					.ctr_slice_i(ctr_i_slice),
					.ctr_slice_o(mr_ctr_o_slice[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr]),
					.ctr_we_no(sp_ctr_we[i])
				);
			end
		end
	endgenerate
	assign ready_o = sv2v_cast_39E4E(sp_ready);
	assign ctr_we = sv2v_cast_39E4E(sp_ctr_we);
	assign alert_o = |mr_alert;
	always @(*) begin : combine_sparse_signals
		if (_sv2v_0)
			;
		ctr_slice_idx = 1'sb0;
		ctr_o_slice = 1'sb0;
		mr_err = 1'b0;
		begin : sv2v_autoblock_3
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				begin
					ctr_slice_idx = ctr_slice_idx | mr_ctr_slice_idx[i * aes_pkg_SliceIdxWidth+:aes_pkg_SliceIdxWidth];
					ctr_o_slice = ctr_o_slice | mr_ctr_o_slice[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr];
				end
		end
		begin : sv2v_autoblock_4
			reg signed [31:0] i;
			for (i = 0; i < aes_pkg_Sp2VWidth; i = i + 1)
				if ((ctr_slice_idx != mr_ctr_slice_idx[i * aes_pkg_SliceIdxWidth+:aes_pkg_SliceIdxWidth]) || (ctr_o_slice != mr_ctr_o_slice[i * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr]))
					mr_err = 1'b1;
		end
	end
	always @(*) begin
		if (_sv2v_0)
			;
		ctr_o_rev = ctr_i_rev;
		ctr_o_rev[ctr_slice_idx * aes_pkg_SliceSizeCtr+:aes_pkg_SliceSizeCtr] = ctr_o_slice;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		ctr_we_o_rev = {aes_pkg_NumSlicesCtr {sv2v_cast_39E4E(sv2v_cast_14B94(3'b100))}};
		ctr_we_o_rev[ctr_slice_idx * aes_pkg_Sp2VWidth+:aes_pkg_Sp2VWidth] = ctr_we;
	end
	assign ctr_o = aes_rev_order_byte(ctr_o_rev);
	assign ctr_we_o = aes_rev_order_sp2v(ctr_we_o_rev);
	initial _sv2v_0 = 0;
endmodule
module aes_ctr_fsm (
	clk_i,
	rst_ni,
	inc32_i,
	incr_i,
	ready_o,
	sp_enc_err_i,
	mr_err_i,
	alert_o,
	ctr_slice_idx_o,
	ctr_slice_i,
	ctr_slice_o,
	ctr_we_o
);
	reg _sv2v_0;
	input wire clk_i;
	input wire rst_ni;
	input wire inc32_i;
	input wire incr_i;
	output reg ready_o;
	input wire sp_enc_err_i;
	input wire mr_err_i;
	output reg alert_o;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] aes_pkg_SliceIdxWidth = prim_util_pkg_vbits(aes_pkg_NumSlicesCtr);
	output wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_o;
	input wire [15:0] ctr_slice_i;
	output wire [15:0] ctr_slice_o;
	output reg ctr_we_o;
	localparam signed [31:0] aes_pkg_CtrStateWidth = 5;
	reg [4:0] aes_ctr_ns;
	wire [4:0] aes_ctr_cs;
	reg [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_d;
	reg [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_q;
	wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_max;
	reg ctr_carry_d;
	reg ctr_carry_q;
	wire [aes_pkg_SliceSizeCtr:0] ctr_value;
	assign ctr_value = ctr_slice_i + {{15 {1'b0}}, ctr_carry_q};
	assign ctr_slice_o = ctr_value[15:0];
	localparam [31:0] aes_pkg_SliceIdxMaxInc32 = 1;
	function automatic [aes_pkg_SliceIdxWidth - 1:0] sv2v_cast_D0FE8;
		input reg [aes_pkg_SliceIdxWidth - 1:0] inp;
		sv2v_cast_D0FE8 = inp;
	endfunction
	assign ctr_slice_idx_max = (inc32_i ? sv2v_cast_D0FE8(aes_pkg_SliceIdxMaxInc32) : {aes_pkg_SliceIdxWidth {1'b1}});
	function automatic [4:0] sv2v_cast_4673F;
		input reg [4:0] inp;
		sv2v_cast_4673F = inp;
	endfunction
	function automatic signed [aes_pkg_SliceIdxWidth - 1:0] sv2v_cast_D0FE8_signed;
		input reg signed [aes_pkg_SliceIdxWidth - 1:0] inp;
		sv2v_cast_D0FE8_signed = inp;
	endfunction
	always @(*) begin : aes_ctr_fsm_comb
		if (_sv2v_0)
			;
		ready_o = 1'b0;
		ctr_we_o = 1'b0;
		alert_o = 1'b0;
		aes_ctr_ns = aes_ctr_cs;
		ctr_slice_idx_d = ctr_slice_idx_q;
		ctr_carry_d = ctr_carry_q;
		(* full_case, parallel_case *)
		case (aes_ctr_cs)
			sv2v_cast_4673F(5'b01110): begin
				ready_o = 1'b1;
				if (incr_i == 1'b1) begin
					ctr_slice_idx_d = 1'sb0;
					ctr_carry_d = 1'b1;
					aes_ctr_ns = sv2v_cast_4673F(5'b11000);
				end
			end
			sv2v_cast_4673F(5'b11000): begin
				ctr_slice_idx_d = ctr_slice_idx_q + sv2v_cast_D0FE8_signed(1);
				ctr_carry_d = (ctr_slice_idx_q >= ctr_slice_idx_max ? 1'b0 : ctr_value[aes_pkg_SliceSizeCtr]);
				ctr_we_o = 1'b1;
				if (ctr_slice_idx_q == {aes_pkg_SliceIdxWidth {1'b1}})
					aes_ctr_ns = sv2v_cast_4673F(5'b01110);
			end
			sv2v_cast_4673F(5'b00001): alert_o = 1'b1;
			default: begin
				aes_ctr_ns = sv2v_cast_4673F(5'b00001);
				alert_o = 1'b1;
			end
		endcase
		if (sp_enc_err_i || mr_err_i)
			aes_ctr_ns = sv2v_cast_4673F(5'b00001);
	end
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni) begin
			ctr_slice_idx_q <= 1'sb0;
			ctr_carry_q <= 1'sb0;
		end
		else begin
			ctr_slice_idx_q <= ctr_slice_idx_d;
			ctr_carry_q <= ctr_carry_d;
		end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_CtrStateWidth),
		.ResetValue(sv2v_cast_4673F(5'b01110)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_ctr_ns),
		.state_o(aes_ctr_cs)
	);
	assign ctr_slice_idx_o = ctr_slice_idx_q;
	initial _sv2v_0 = 0;
endmodule
module aes_ctr_fsm_n (
	clk_i,
	rst_ni,
	inc32_ni,
	incr_ni,
	ready_no,
	sp_enc_err_i,
	mr_err_i,
	alert_o,
	ctr_slice_idx_o,
	ctr_slice_i,
	ctr_slice_o,
	ctr_we_no
);
	input wire clk_i;
	input wire rst_ni;
	input wire inc32_ni;
	input wire incr_ni;
	output wire ready_no;
	input wire sp_enc_err_i;
	input wire mr_err_i;
	output wire alert_o;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] aes_pkg_SliceIdxWidth = prim_util_pkg_vbits(aes_pkg_NumSlicesCtr);
	output wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_o;
	input wire [15:0] ctr_slice_i;
	output wire [15:0] ctr_slice_o;
	output wire ctr_we_no;
	localparam signed [31:0] NumInBufBits = 20;
	wire [19:0] in;
	wire [19:0] in_buf;
	assign in = {inc32_ni, incr_ni, sp_enc_err_i, mr_err_i, ctr_slice_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire inc32_n;
	wire incr_n;
	wire sp_enc_err;
	wire mr_err;
	wire [15:0] ctr_i_slice;
	assign {inc32_n, incr_n, sp_enc_err, mr_err, ctr_i_slice} = in_buf;
	wire ready;
	wire alert;
	wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx;
	wire [15:0] ctr_o_slice;
	wire ctr_we;
	aes_ctr_fsm u_aes_ctr_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.inc32_i(~inc32_n),
		.incr_i(~incr_n),
		.ready_o(ready),
		.sp_enc_err_i(sp_enc_err),
		.mr_err_i(mr_err),
		.alert_o(alert),
		.ctr_slice_idx_o(ctr_slice_idx),
		.ctr_slice_i(ctr_i_slice),
		.ctr_slice_o(ctr_o_slice),
		.ctr_we_o(ctr_we)
	);
	localparam signed [31:0] NumOutBufBits = ((2 + aes_pkg_SliceIdxWidth) + aes_pkg_SliceSizeCtr) + 1;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {~ready, alert, ctr_slice_idx, ctr_o_slice, ~ctr_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ready_no, alert_o, ctr_slice_idx_o, ctr_slice_o, ctr_we_no} = out_buf;
endmodule
module aes_ctr_fsm_p (
	clk_i,
	rst_ni,
	inc32_i,
	incr_i,
	ready_o,
	sp_enc_err_i,
	mr_err_i,
	alert_o,
	ctr_slice_idx_o,
	ctr_slice_i,
	ctr_slice_o,
	ctr_we_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire inc32_i;
	input wire incr_i;
	output wire ready_o;
	input wire sp_enc_err_i;
	input wire mr_err_i;
	output wire alert_o;
	localparam [31:0] aes_pkg_SliceSizeCtr = 16;
	localparam signed [31:0] aes_reg_pkg_NumRegsIv = 4;
	localparam [31:0] aes_pkg_NumSlicesCtr = 8;
	function automatic integer prim_util_pkg_vbits;
		input integer value;
		prim_util_pkg_vbits = (value == 1 ? 1 : $clog2(value));
	endfunction
	localparam [31:0] aes_pkg_SliceIdxWidth = prim_util_pkg_vbits(aes_pkg_NumSlicesCtr);
	output wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx_o;
	input wire [15:0] ctr_slice_i;
	output wire [15:0] ctr_slice_o;
	output wire ctr_we_o;
	localparam signed [31:0] NumInBufBits = 20;
	wire [19:0] in;
	wire [19:0] in_buf;
	assign in = {inc32_i, incr_i, sp_enc_err_i, mr_err_i, ctr_slice_i};
	prim_buf #(.Width(NumInBufBits)) u_prim_buf_in(
		.in_i(in),
		.out_o(in_buf)
	);
	wire inc32;
	wire incr;
	wire sp_enc_err;
	wire mr_err;
	wire [15:0] ctr_i_slice;
	assign {inc32, incr, sp_enc_err, mr_err, ctr_i_slice} = in_buf;
	wire ready;
	wire alert;
	wire [aes_pkg_SliceIdxWidth - 1:0] ctr_slice_idx;
	wire [15:0] ctr_o_slice;
	wire ctr_we;
	aes_ctr_fsm u_aes_ctr_fsm(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.inc32_i(inc32),
		.incr_i(incr),
		.ready_o(ready),
		.sp_enc_err_i(sp_enc_err),
		.mr_err_i(mr_err),
		.alert_o(alert),
		.ctr_slice_idx_o(ctr_slice_idx),
		.ctr_slice_i(ctr_i_slice),
		.ctr_slice_o(ctr_o_slice),
		.ctr_we_o(ctr_we)
	);
	localparam signed [31:0] NumOutBufBits = ((2 + aes_pkg_SliceIdxWidth) + aes_pkg_SliceSizeCtr) + 1;
	wire [NumOutBufBits - 1:0] out;
	wire [NumOutBufBits - 1:0] out_buf;
	assign out = {ready, alert, ctr_slice_idx, ctr_o_slice, ctr_we};
	prim_buf #(.Width(NumOutBufBits)) u_prim_buf_out(
		.in_i(out),
		.out_o(out_buf)
	);
	assign {ready_o, alert_o, ctr_slice_idx_o, ctr_slice_o, ctr_we_o} = out_buf;
endmodule
module aes_ctrl_gcm_reg_shadowed (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	qe_o,
	we_i,
	phase_o,
	init_done_i,
	first_block_i,
	gcm_phase_o,
	num_valid_bytes_o,
	err_update_o,
	err_storage_o,
	reg2hw_ctrl_gcm_i,
	hw2reg_ctrl_gcm_o
);
	reg _sv2v_0;
	parameter [0:0] AESGCMEnable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	output wire qe_o;
	input wire we_i;
	output wire phase_o;
	input wire init_done_i;
	input wire first_block_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	output wire [5:0] gcm_phase_o;
	output wire [4:0] num_valid_bytes_o;
	output wire err_update_o;
	output wire err_storage_o;
	input wire [14:0] reg2hw_ctrl_gcm_i;
	output wire [10:0] hw2reg_ctrl_gcm_o;
	wire phase_gcm_phase;
	wire phase_num_valid_bytes;
	wire err_update_gcm_phase;
	wire err_update_num_valid_bytes;
	wire err_storage_gcm_phase;
	wire err_storage_num_valid_bytes;
	assign qe_o = reg2hw_ctrl_gcm_i[1] & reg2hw_ctrl_gcm_i[9];
	localparam [4:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_NUM_VALID_BYTES_RESVAL = 5'h10;
	localparam [5:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_PHASE_RESVAL = 6'h01;
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	generate
		if (AESGCMEnable) begin : gen_ctrl_gcm_reg_shadowed
			wire [10:0] ctrl_gcm_wd;
			wire [5:0] gcm_phase_reg_if;
			reg [5:0] gcm_phase;
			wire [4:0] num_valid_bytes;
			assign gcm_phase_reg_if = sv2v_cast_92B33(reg2hw_ctrl_gcm_i[7-:6]);
			always @(*) begin : gcm_phase_get
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (gcm_phase_reg_if)
					sv2v_cast_92B33(6'b000001): gcm_phase = sv2v_cast_92B33(6'b000001);
					sv2v_cast_92B33(6'b000010): gcm_phase = sv2v_cast_92B33(6'b000010);
					sv2v_cast_92B33(6'b000100): gcm_phase = sv2v_cast_92B33(6'b000100);
					sv2v_cast_92B33(6'b001000): gcm_phase = sv2v_cast_92B33(6'b001000);
					sv2v_cast_92B33(6'b010000): gcm_phase = sv2v_cast_92B33(6'b010000);
					sv2v_cast_92B33(6'b100000): gcm_phase = sv2v_cast_92B33(6'b100000);
					default: gcm_phase = sv2v_cast_92B33(6'b000001);
				endcase
				(* full_case, parallel_case *)
				case (gcm_phase_o)
					sv2v_cast_92B33(6'b000001): gcm_phase = (init_done_i && ((((gcm_phase == sv2v_cast_92B33(6'b000010)) || (gcm_phase == sv2v_cast_92B33(6'b000100))) || (gcm_phase == sv2v_cast_92B33(6'b001000))) || (gcm_phase == sv2v_cast_92B33(6'b100000))) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b000010): gcm_phase = (((gcm_phase == sv2v_cast_92B33(6'b000001)) || (gcm_phase == sv2v_cast_92B33(6'b000100))) || (gcm_phase == sv2v_cast_92B33(6'b001000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b000100): gcm_phase = ((((gcm_phase == sv2v_cast_92B33(6'b000001)) || (gcm_phase == sv2v_cast_92B33(6'b001000))) || ((gcm_phase == sv2v_cast_92B33(6'b010000)) && !first_block_i)) || (gcm_phase == sv2v_cast_92B33(6'b100000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b001000): gcm_phase = (((gcm_phase == sv2v_cast_92B33(6'b000001)) || ((gcm_phase == sv2v_cast_92B33(6'b010000)) && !first_block_i)) || (gcm_phase == sv2v_cast_92B33(6'b100000)) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b010000): gcm_phase = (gcm_phase == sv2v_cast_92B33(6'b000001) ? gcm_phase : gcm_phase_o);
					sv2v_cast_92B33(6'b100000): gcm_phase = (gcm_phase == sv2v_cast_92B33(6'b000001) ? gcm_phase : gcm_phase_o);
					default: gcm_phase = gcm_phase_o;
				endcase
			end
			assign ctrl_gcm_wd[5-:aes_pkg_AES_GCMPHASE_WIDTH] = gcm_phase;
			assign num_valid_bytes = reg2hw_ctrl_gcm_i[14-:5];
			assign ctrl_gcm_wd[10-:5] = ((num_valid_bytes == 5'd0) || (num_valid_bytes > 5'd16) ? 5'd16 : num_valid_bytes);
			localparam signed [31:0] sv2v_uu_u_ctrl_gcm_reg_shadowed_phase_DW = aes_pkg_AES_GCMPHASE_WIDTH;
			localparam [5:0] sv2v_uu_u_ctrl_gcm_reg_shadowed_phase_ext_d_0 = 1'sb0;
			prim_subreg_shadow #(
				.DW(aes_pkg_AES_GCMPHASE_WIDTH),
				.SwAccess(3'd2),
				.RESVAL(aes_reg_pkg_AES_CTRL_GCM_SHADOWED_PHASE_RESVAL)
			) u_ctrl_gcm_reg_shadowed_phase(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.rst_shadowed_ni(rst_shadowed_ni),
				.re(reg2hw_ctrl_gcm_i[0]),
				.we(we_i),
				.wd({ctrl_gcm_wd[5-:aes_pkg_AES_GCMPHASE_WIDTH]}),
				.de(1'b0),
				.d(sv2v_uu_u_ctrl_gcm_reg_shadowed_phase_ext_d_0),
				.qe(),
				.q(hw2reg_ctrl_gcm_o[5-:6]),
				.qs(),
				.ds(),
				.phase(phase_gcm_phase),
				.err_update(err_update_gcm_phase),
				.err_storage(err_storage_gcm_phase)
			);
			localparam signed [31:0] sv2v_uu_u_ctrl_gcm_reg_shadowed_num_valid_bytes_DW = 5;
			localparam [4:0] sv2v_uu_u_ctrl_gcm_reg_shadowed_num_valid_bytes_ext_d_0 = 1'sb0;
			prim_subreg_shadow #(
				.DW(5),
				.SwAccess(3'd2),
				.RESVAL(aes_reg_pkg_AES_CTRL_GCM_SHADOWED_NUM_VALID_BYTES_RESVAL)
			) u_ctrl_gcm_reg_shadowed_num_valid_bytes(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.rst_shadowed_ni(rst_shadowed_ni),
				.re(reg2hw_ctrl_gcm_i[8]),
				.we(we_i),
				.wd({ctrl_gcm_wd[10-:5]}),
				.de(1'b0),
				.d(sv2v_uu_u_ctrl_gcm_reg_shadowed_num_valid_bytes_ext_d_0),
				.qe(),
				.q(hw2reg_ctrl_gcm_o[10-:5]),
				.qs(),
				.ds(),
				.phase(phase_num_valid_bytes),
				.err_update(err_update_num_valid_bytes),
				.err_storage(err_storage_num_valid_bytes)
			);
		end
		else begin : gen_no_ctrl_gcm_reg_shadowed
			wire unused_ctrl_gcm;
			assign unused_ctrl_gcm = ^{reg2hw_ctrl_gcm_i[0], reg2hw_ctrl_gcm_i[7-:6], reg2hw_ctrl_gcm_i[8], reg2hw_ctrl_gcm_i[14-:5]};
			wire unused_we;
			wire unused_init_done;
			wire unused_first_block;
			assign unused_we = we_i;
			assign unused_init_done = init_done_i;
			assign unused_first_block = first_block_i;
			wire unused_clk;
			wire unused_rst;
			wire unused_rst_shadowed;
			assign unused_clk = clk_i;
			assign unused_rst = rst_ni;
			assign unused_rst_shadowed = rst_shadowed_ni;
			assign hw2reg_ctrl_gcm_o[5-:6] = {sv2v_cast_92B33(6'b000001)};
			assign hw2reg_ctrl_gcm_o[10-:5] = 5'd16;
			assign phase_gcm_phase = 1'b1;
			assign phase_num_valid_bytes = 1'b1;
			assign err_update_gcm_phase = 1'b0;
			assign err_update_num_valid_bytes = 1'b0;
			assign err_storage_gcm_phase = 1'b0;
			assign err_storage_num_valid_bytes = 1'b0;
		end
	endgenerate
	assign phase_o = phase_gcm_phase | phase_num_valid_bytes;
	assign err_update_o = err_update_gcm_phase | err_update_num_valid_bytes;
	assign err_storage_o = err_storage_gcm_phase | err_storage_num_valid_bytes;
	assign gcm_phase_o = sv2v_cast_92B33(hw2reg_ctrl_gcm_o[5-:6]);
	assign num_valid_bytes_o = hw2reg_ctrl_gcm_o[10-:5];
	initial _sv2v_0 = 0;
endmodule
module aes_ctrl_reg_shadowed (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	qe_o,
	we_i,
	phase_o,
	operation_o,
	mode_o,
	key_len_o,
	sideload_o,
	prng_reseed_rate_o,
	manual_operation_o,
	err_update_o,
	err_storage_o,
	reg2hw_ctrl_i,
	hw2reg_ctrl_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] AESGCMEnable = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire rst_shadowed_ni;
	output wire qe_o;
	input wire we_i;
	output wire phase_o;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	output wire [1:0] operation_o;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	output wire [5:0] mode_o;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	output wire [2:0] key_len_o;
	output wire sideload_o;
	localparam signed [31:0] aes_pkg_AES_PRNGRESEEDRATE_WIDTH = 3;
	output wire [2:0] prng_reseed_rate_o;
	output wire manual_operation_o;
	output wire err_update_o;
	output wire err_storage_o;
	input wire [27:0] reg2hw_ctrl_i;
	output wire [15:0] hw2reg_ctrl_o;
	reg [15:0] ctrl_wd;
	wire [1:0] op;
	wire [5:0] mode;
	wire [2:0] key_len;
	wire [2:0] prng_reseed_rate;
	wire phase_operation;
	wire phase_mode;
	wire phase_key_len;
	wire phase_key_sideload;
	wire phase_prng_reseed_rate;
	wire phase_manual_operation;
	wire err_update_operation;
	wire err_update_mode;
	wire err_update_key_len;
	wire err_update_sideload;
	wire err_update_prng_reseed_rate;
	wire err_update_manual_operation;
	wire err_storage_operation;
	wire err_storage_mode;
	wire err_storage_key_len;
	wire err_storage_sideload;
	wire err_storage_prng_reseed_rate;
	wire err_storage_manual_operation;
	assign qe_o = ((((reg2hw_ctrl_i[1] & reg2hw_ctrl_i[5]) & reg2hw_ctrl_i[13]) & reg2hw_ctrl_i[18]) & reg2hw_ctrl_i[21]) & reg2hw_ctrl_i[26];
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign op = sv2v_cast_63054(reg2hw_ctrl_i[3-:2]);
	always @(*) begin : operation_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (op)
			sv2v_cast_63054(2'b01): ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b01);
			sv2v_cast_63054(2'b10): ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b10);
			default: ctrl_wd[1-:aes_pkg_AES_OP_WIDTH] = sv2v_cast_63054(2'b01);
		endcase
	end
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	assign mode = sv2v_cast_86B6A(reg2hw_ctrl_i[11-:6]);
	always @(*) begin : mode_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (mode)
			sv2v_cast_86B6A(6'b000001): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000001);
			sv2v_cast_86B6A(6'b000010): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000010);
			sv2v_cast_86B6A(6'b000100): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b000100);
			sv2v_cast_86B6A(6'b001000): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b001000);
			sv2v_cast_86B6A(6'b010000): ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b010000);
			sv2v_cast_86B6A(6'b100000): ctrl_wd[7-:6] = (AESGCMEnable ? sv2v_cast_86B6A(6'b100000) : sv2v_cast_86B6A(6'b111111));
			default: ctrl_wd[7-:6] = sv2v_cast_86B6A(6'b111111);
		endcase
	end
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	assign key_len = sv2v_cast_2BC67(reg2hw_ctrl_i[16-:3]);
	always @(*) begin : key_len_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (key_len)
			sv2v_cast_2BC67(3'b001): ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b001);
			sv2v_cast_2BC67(3'b100): ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b100);
			sv2v_cast_2BC67(3'b010): ctrl_wd[10-:3] = (AES192Enable ? sv2v_cast_2BC67(3'b010) : sv2v_cast_2BC67(3'b100));
			default: ctrl_wd[10-:3] = sv2v_cast_2BC67(3'b100);
		endcase
	end
	wire [1:1] sv2v_tmp_8C8FB;
	assign sv2v_tmp_8C8FB = reg2hw_ctrl_i[19];
	always @(*) ctrl_wd[11] = sv2v_tmp_8C8FB;
	function automatic [2:0] sv2v_cast_421A6;
		input reg [2:0] inp;
		sv2v_cast_421A6 = inp;
	endfunction
	assign prng_reseed_rate = sv2v_cast_421A6(reg2hw_ctrl_i[24-:3]);
	always @(*) begin : prng_reseed_rate_get
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (prng_reseed_rate)
			sv2v_cast_421A6(3'b001): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b001);
			sv2v_cast_421A6(3'b010): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b010);
			sv2v_cast_421A6(3'b100): ctrl_wd[14-:3] = sv2v_cast_421A6(3'b100);
			default: ctrl_wd[14-:3] = sv2v_cast_421A6(3'b001);
		endcase
	end
	wire [1:1] sv2v_tmp_958A1;
	assign sv2v_tmp_958A1 = reg2hw_ctrl_i[27];
	always @(*) ctrl_wd[15] = sv2v_tmp_958A1;
	localparam [1:0] aes_reg_pkg_AES_CTRL_SHADOWED_OPERATION_RESVAL = 2'h1;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_operation_DW = aes_pkg_AES_OP_WIDTH;
	localparam [1:0] sv2v_uu_u_ctrl_reg_shadowed_operation_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_OP_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_OPERATION_RESVAL)
	) u_ctrl_reg_shadowed_operation(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[0]),
		.we(we_i),
		.wd({ctrl_wd[1-:aes_pkg_AES_OP_WIDTH]}),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_operation_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[1-:2]),
		.qs(),
		.ds(),
		.phase(phase_operation),
		.err_update(err_update_operation),
		.err_storage(err_storage_operation)
	);
	localparam [5:0] aes_reg_pkg_AES_CTRL_SHADOWED_MODE_RESVAL = 6'h3f;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_mode_DW = aes_pkg_AES_MODE_WIDTH;
	localparam [5:0] sv2v_uu_u_ctrl_reg_shadowed_mode_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_MODE_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_MODE_RESVAL)
	) u_ctrl_reg_shadowed_mode(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[4]),
		.we(we_i),
		.wd({ctrl_wd[7-:6]}),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_mode_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[7-:6]),
		.qs(),
		.ds(),
		.phase(phase_mode),
		.err_update(err_update_mode),
		.err_storage(err_storage_mode)
	);
	localparam [2:0] aes_reg_pkg_AES_CTRL_SHADOWED_KEY_LEN_RESVAL = 3'h1;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_key_len_DW = aes_pkg_AES_KEYLEN_WIDTH;
	localparam [2:0] sv2v_uu_u_ctrl_reg_shadowed_key_len_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_KEYLEN_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_KEY_LEN_RESVAL)
	) u_ctrl_reg_shadowed_key_len(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[12]),
		.we(we_i),
		.wd({ctrl_wd[10-:3]}),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_key_len_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[10-:3]),
		.qs(),
		.ds(),
		.phase(phase_key_len),
		.err_update(err_update_key_len),
		.err_storage(err_storage_key_len)
	);
	localparam [0:0] aes_reg_pkg_AES_CTRL_SHADOWED_SIDELOAD_RESVAL = 1'h0;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_sideload_DW = 1;
	localparam [0:0] sv2v_uu_u_ctrl_reg_shadowed_sideload_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_SIDELOAD_RESVAL)
	) u_ctrl_reg_shadowed_sideload(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[17]),
		.we(we_i),
		.wd(ctrl_wd[11]),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_sideload_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[11]),
		.qs(),
		.ds(),
		.phase(phase_key_sideload),
		.err_update(err_update_sideload),
		.err_storage(err_storage_sideload)
	);
	localparam [2:0] aes_reg_pkg_AES_CTRL_SHADOWED_PRNG_RESEED_RATE_RESVAL = 3'h1;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_prng_reseed_rate_DW = aes_pkg_AES_PRNGRESEEDRATE_WIDTH;
	localparam [2:0] sv2v_uu_u_ctrl_reg_shadowed_prng_reseed_rate_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(aes_pkg_AES_PRNGRESEEDRATE_WIDTH),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_PRNG_RESEED_RATE_RESVAL)
	) u_ctrl_reg_shadowed_prng_reseed_rate(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[20]),
		.we(we_i),
		.wd({ctrl_wd[14-:3]}),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_prng_reseed_rate_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[14-:3]),
		.qs(),
		.ds(),
		.phase(phase_prng_reseed_rate),
		.err_update(err_update_prng_reseed_rate),
		.err_storage(err_storage_prng_reseed_rate)
	);
	localparam [0:0] aes_reg_pkg_AES_CTRL_SHADOWED_MANUAL_OPERATION_RESVAL = 1'h0;
	localparam signed [31:0] sv2v_uu_u_ctrl_reg_shadowed_manual_operation_DW = 1;
	localparam [0:0] sv2v_uu_u_ctrl_reg_shadowed_manual_operation_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(aes_reg_pkg_AES_CTRL_SHADOWED_MANUAL_OPERATION_RESVAL)
	) u_ctrl_reg_shadowed_manual_operation(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(reg2hw_ctrl_i[25]),
		.we(we_i),
		.wd(ctrl_wd[15]),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_reg_shadowed_manual_operation_ext_d_0),
		.qe(),
		.q(hw2reg_ctrl_o[15]),
		.qs(),
		.ds(),
		.phase(phase_manual_operation),
		.err_update(err_update_manual_operation),
		.err_storage(err_storage_manual_operation)
	);
	assign phase_o = ((((phase_operation | phase_mode) | phase_key_len) | phase_key_sideload) | phase_prng_reseed_rate) | phase_manual_operation;
	assign err_update_o = ((((err_update_operation | err_update_mode) | err_update_key_len) | err_update_sideload) | err_update_prng_reseed_rate) | err_update_manual_operation;
	assign err_storage_o = ((((err_storage_operation | err_storage_mode) | err_storage_key_len) | err_storage_sideload) | err_storage_prng_reseed_rate) | err_storage_manual_operation;
	assign operation_o = sv2v_cast_63054(hw2reg_ctrl_o[1-:2]);
	assign mode_o = sv2v_cast_86B6A(hw2reg_ctrl_o[7-:6]);
	assign key_len_o = sv2v_cast_2BC67(hw2reg_ctrl_o[10-:3]);
	assign sideload_o = hw2reg_ctrl_o[11];
	assign prng_reseed_rate_o = sv2v_cast_421A6(hw2reg_ctrl_o[14-:3]);
	assign manual_operation_o = hw2reg_ctrl_o[15];
	initial _sv2v_0 = 0;
endmodule
module aes_ghash (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	op_i,
	gcm_phase_i,
	num_valid_bytes_i,
	load_hash_subkey_i,
	clear_i,
	first_block_o,
	alert_fatal_i,
	alert_o,
	data_in_prev_i,
	data_out_i,
	cipher_state_done_i,
	ghash_state_done_o
);
	reg _sv2v_0;
	parameter [0:0] SecMasking = 1;
	parameter [31:0] GFMultCycles = 32;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] in_valid_i;
	output reg [2:0] in_ready_o;
	output reg [2:0] out_valid_o;
	input wire [2:0] out_ready_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire [4:0] num_valid_bytes_i;
	input wire [2:0] load_hash_subkey_i;
	input wire clear_i;
	output wire first_block_o;
	input wire alert_fatal_i;
	output reg alert_o;
	localparam [31:0] aes_pkg_GCMDegree = 128;
	input wire [127:0] data_in_prev_i;
	localparam signed [31:0] aes_reg_pkg_NumRegsData = 4;
	input wire [127:0] data_out_i;
	input wire [(((NumShares * 4) * 4) * 8) - 1:0] cipher_state_done_i;
	output reg [127:0] ghash_state_done_o;
	localparam signed [31:0] GFMultStagesPerCycle = aes_pkg_GCMDegree / GFMultCycles;
	wire [127:0] s_d;
	reg [127:0] s_q;
	reg [2:0] s_we;
	wire [255:0] corr_d;
	reg [255:0] corr_q;
	reg [2:0] corr_we;
	reg corr0_en_d;
	wire corr0_en_q;
	reg [127:0] ghash_in;
	reg [127:0] ghash_in_valid;
	localparam signed [31:0] aes_pkg_GHashInSelWidth = aes_pkg_Mux2SelWidth;
	reg [2:0] ghash_in_sel;
	localparam signed [31:0] aes_pkg_GHashAddInSelWidth = 3;
	reg [5:0] ghash_add_in_sel_d;
	wire [5:0] ghash_add_in_sel_q;
	wire [1:0] ghash_add_in_sel_err;
	reg [127:0] ghash_state_d [0:NumShares - 1];
	reg [127:0] ghash_state_q [0:NumShares - 1];
	wire [127:0] add_s_in;
	reg add_s_en_d;
	wire add_s_en_q;
	wire [127:0] ghash_state_done;
	wire [127:0] ghash_state_add [0:NumShares - 1];
	reg [2:0] ghash_state_we [0:1];
	localparam signed [31:0] aes_pkg_Mux5SelWidth = 6;
	localparam signed [31:0] aes_pkg_GHashStateSelWidth = aes_pkg_Mux5SelWidth;
	reg [5:0] ghash_state_sel;
	wire [127:0] ghash_state_mult [0:NumShares - 1];
	wire [(NumShares * aes_pkg_GCMDegree) - 1:0] hash_subkey_d;
	reg [(NumShares * aes_pkg_GCMDegree) - 1:0] hash_subkey_q;
	reg [2:0] hash_subkey_we;
	reg gf_mult0_en_d;
	wire gf_mult0_en_q;
	localparam signed [31:0] aes_pkg_GFMultInSelWidth = 3;
	reg [2:0] gf_mult1_in_sel_d;
	wire [2:0] gf_mult1_in_sel_q;
	wire gf_mult1_in_sel_err;
	reg [1:0] gf_mult_req;
	wire [1:0] gf_mult_ack;
	wire [1:0] gf_mult_ack_pre;
	localparam signed [31:0] aes_pkg_GhashStateWidth = 7;
	reg [6:0] aes_ghash_ns;
	wire [6:0] aes_ghash_cs;
	reg first_block_d;
	reg first_block_q;
	reg final_add_d;
	reg final_add_q;
	reg advance;
	reg [(NumShares * aes_pkg_GCMDegree) - 1:0] cipher_state_done;
	reg [127:0] data_in_prev;
	reg [127:0] data_out;
	function automatic [127:0] aes_pkg_aes_state_to_ghash_vec;
		input reg [127:0] in;
		reg [127:0] out;
		reg [127:0] byte_vec;
		begin
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 4; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 4; j = j + 1)
							byte_vec[((15 - (4 * i)) - j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			out = byte_vec;
			aes_pkg_aes_state_to_ghash_vec = out;
		end
	endfunction
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_3
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_4
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	always @(*) begin : data_in_conversion
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_5
			reg signed [31:0] s;
			for (s = 0; s < NumShares; s = s + 1)
				cipher_state_done[((NumShares - 1) - s) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree] = aes_pkg_aes_state_to_ghash_vec(cipher_state_done_i[8 * (4 * (((NumShares - 1) - s) * 4))+:128]);
		end
		data_in_prev = aes_pkg_aes_state_to_ghash_vec(aes_pkg_aes_transpose(data_in_prev_i));
		data_out = aes_pkg_aes_state_to_ghash_vec(aes_pkg_aes_transpose(data_out_i));
	end
	generate
		if (SecMasking) begin : gen_s1
			assign s_d = cipher_state_done[(NumShares - 2) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
		end
		else begin : gen_s0
			assign s_d = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
		end
	endgenerate
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	always @(posedge clk_i or negedge rst_ni) begin : s_reg
		if (!rst_ni)
			s_q <= 1'sb0;
		else if (s_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			s_q <= s_d;
	end
	function automatic [127:0] sv2v_cast_C5D8B;
		input reg [127:0] inp;
		sv2v_cast_C5D8B = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_corr_terms
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_corr0_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(corr0_en_d),
				.q_o(corr0_en_q)
			);
			wire [127:0] ghash_state0_blanked;
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_corr0(
				.in_i(ghash_state_q[0]),
				.en_i(corr0_en_q),
				.out_o(ghash_state0_blanked)
			);
			assign corr_d[aes_pkg_GCMDegree+:aes_pkg_GCMDegree] = ghash_state_mult[0] ^ ghash_state0_blanked;
			assign corr_d[0+:aes_pkg_GCMDegree] = ghash_state_mult[1];
			always @(posedge clk_i or negedge rst_ni) begin : corr_reg
				if (!rst_ni)
					corr_q <= {2 {sv2v_cast_C5D8B(1'sb0)}};
				else if (corr_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					corr_q <= corr_d;
			end
		end
	endgenerate
	function automatic [2:0] sv2v_cast_8D447;
		input reg [2:0] inp;
		sv2v_cast_8D447 = inp;
	endfunction
	always @(*) begin : ghash_in_mux
		if (_sv2v_0)
			;
		(* full_case, parallel_case *)
		case (ghash_in_sel)
			sv2v_cast_8D447(sv2v_cast_14B94(3'b011)): ghash_in = data_in_prev;
			sv2v_cast_8D447(sv2v_cast_14B94(3'b100)): ghash_in = data_out;
			default: ghash_in = data_out;
		endcase
	end
	always @(*) begin
		if (_sv2v_0)
			;
		begin : sv2v_autoblock_6
			reg [31:0] i;
			for (i = 0; i < 16; i = i + 1)
				ghash_in_valid[(15 - i) * 8+:8] = (num_valid_bytes_i > i[4:0] ? ghash_in[(15 - i) * 8+:8] : 8'b00000000);
		end
	end
	function automatic [2:0] sv2v_cast_4E16B;
		input reg [2:0] inp;
		sv2v_cast_4E16B = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_masked_add
			wire [127:0] add_in [0:NumShares - 1];
			wire [2:0] ghash_add_in_sel_q_raw [0:NumShares - 1];
			wire [(aes_pkg_GHashAddInSelWidth * aes_pkg_GCMDegree) - 1:0] ghash_add_in_mux_in [0:NumShares - 1];
			assign ghash_add_in_mux_in[0][256+:aes_pkg_GCMDegree] = ghash_in_valid;
			assign ghash_add_in_mux_in[0][128+:aes_pkg_GCMDegree] = corr_q[aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
			assign ghash_add_in_mux_in[0][0+:aes_pkg_GCMDegree] = ghash_state_q[1];
			assign ghash_add_in_mux_in[1][256+:aes_pkg_GCMDegree] = ghash_in_valid;
			assign ghash_add_in_mux_in[1][128+:aes_pkg_GCMDegree] = corr_q[0+:aes_pkg_GCMDegree];
			assign ghash_add_in_mux_in[1][0+:aes_pkg_GCMDegree] = ghash_state_mult[1];
			genvar _gv_s_11;
			for (_gv_s_11 = 0; _gv_s_11 < NumShares; _gv_s_11 = _gv_s_11 + 1) begin : gen_add_in_muxes
				localparam s = _gv_s_11;
				prim_flop #(
					.Width(aes_pkg_GHashAddInSelWidth),
					.ResetValue({sv2v_cast_4E16B(3'b001)})
				) u_prim_flop_add_in_sel(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.d_i({ghash_add_in_sel_d[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]}),
					.q_o(ghash_add_in_sel_q_raw[s])
				);
				assign ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(ghash_add_in_sel_q_raw[s]);
				localparam [31:0] sv2v_uu_u_prim_onehot_check_add_in_sel_AddrWidth = 5;
				localparam [4:0] sv2v_uu_u_prim_onehot_check_add_in_sel_ext_addr_i_0 = 1'sb0;
				prim_onehot_check #(
					.OneHotWidth(aes_pkg_GHashAddInSelWidth),
					.AddrCheck(1'b0),
					.StrictCheck(1'b0)
				) u_prim_onehot_check_add_in_sel(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.oh_i({ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]}),
					.addr_i(sv2v_uu_u_prim_onehot_check_add_in_sel_ext_addr_i_0),
					.en_i(1'b1),
					.err_o(ghash_add_in_sel_err[s])
				);
				prim_onehot_mux #(
					.Width(aes_pkg_GCMDegree),
					.Inputs(aes_pkg_GHashAddInSelWidth)
				) u_prim_onehot_mux_add_in(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.in_i(ghash_add_in_mux_in[s]),
					.sel_i(ghash_add_in_sel_q[(1 - s) * aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth]),
					.out_o(add_in[s])
				);
			end
			genvar _gv_s_12;
			for (_gv_s_12 = 0; _gv_s_12 < NumShares; _gv_s_12 = _gv_s_12 + 1) begin : gen_state_add
				localparam s = _gv_s_12;
				assign ghash_state_add[s] = ghash_state_q[s] ^ add_in[s];
			end
		end
		else begin : gen_unmasked_add
			assign ghash_state_add[0] = ghash_state_q[0] ^ ghash_in_valid;
		end
	endgenerate
	function automatic [5:0] sv2v_cast_D15E3;
		input reg [5:0] inp;
		sv2v_cast_D15E3 = inp;
	endfunction
	function automatic [5:0] sv2v_cast_E839A;
		input reg [5:0] inp;
		sv2v_cast_E839A = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_ghash_state_mux_masked
			always @(*) begin : ghash_state0_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[0] = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000)): ghash_state_d[0] = data_in_prev;
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[0] = ghash_state_mult[0];
					default: ghash_state_d[0] = ghash_state_add[0];
				endcase
			end
			always @(*) begin : ghash_state1_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[1] = cipher_state_done[(NumShares - 2) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[1] = ghash_state_add[1];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[1] = ghash_state_mult[1];
					default: ghash_state_d[1] = ghash_state_add[1];
				endcase
			end
		end
		else begin : gen_ghash_state_mux_unmasked
			always @(*) begin : ghash_state_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (ghash_state_sel)
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000)): ghash_state_d[0] = cipher_state_done[(NumShares - 1) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011)): ghash_state_d[0] = ghash_state_add[0];
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b011101)): ghash_state_d[0] = ghash_state_done;
					sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110)): ghash_state_d[0] = ghash_state_mult[0];
					default: ghash_state_d[0] = ghash_state_add[0];
				endcase
			end
		end
	endgenerate
	genvar _gv_s_13;
	generate
		for (_gv_s_13 = 0; _gv_s_13 < NumShares; _gv_s_13 = _gv_s_13 + 1) begin : gen_ghash_state_reg_shares
			localparam s = _gv_s_13;
			always @(posedge clk_i or negedge rst_ni) begin : ghash_state_reg
				if (!rst_ni)
					ghash_state_q[s] <= 1'sb0;
				else if (ghash_state_we[s] == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
					ghash_state_q[s] <= ghash_state_d[s];
			end
		end
	endgenerate
	assign hash_subkey_d = cipher_state_done;
	always @(posedge clk_i or negedge rst_ni) begin : hash_subkey_reg
		if (!rst_ni)
			hash_subkey_q <= {NumShares {sv2v_cast_C5D8B(1'sb0)}};
		else if (hash_subkey_we == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
			hash_subkey_q <= hash_subkey_d;
	end
	wire [127:0] gf_mult_op_b [0:NumShares - 1];
	wire [127:0] gf_mult_op_b_rev [0:NumShares - 1];
	wire [127:0] gf_mult_prod [0:NumShares - 1];
	generate
		if (SecMasking) begin : gen_gf_mult0_blanker
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_gf_mult0_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(gf_mult0_en_d),
				.q_o(gf_mult0_en_q)
			);
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_gf_mult0(
				.in_i(ghash_state_q[0]),
				.en_i(gf_mult0_en_q),
				.out_o(gf_mult_op_b[0])
			);
		end
		else begin : gen_no_gf_mult0_blanker
			assign gf_mult_op_b[0] = ghash_state_q[0];
		end
	endgenerate
	function automatic [127:0] aes_pkg_aes_ghash_reverse_bit_order;
		input reg [127:0] in;
		reg [127:0] out;
		begin
			begin : sv2v_autoblock_7
				reg signed [31:0] i;
				for (i = 0; i < 128; i = i + 1)
					out[i] = in[127 - i];
			end
			aes_pkg_aes_ghash_reverse_bit_order = out;
		end
	endfunction
	assign gf_mult_op_b_rev[0] = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_op_b[0]);
	function automatic [2:0] sv2v_cast_32E0C;
		input reg [2:0] inp;
		sv2v_cast_32E0C = inp;
	endfunction
	generate
		if (SecMasking) begin : gen_gf_mult1_mux
			wire [2:0] gf_mult1_in_sel_q_raw;
			wire [(aes_pkg_GFMultInSelWidth * aes_pkg_GCMDegree) - 1:0] gf_mult1_op_b_mux_in;
			prim_flop #(
				.Width(aes_pkg_GFMultInSelWidth),
				.ResetValue({sv2v_cast_32E0C(3'b000)})
			) u_prim_flop_gf_mult1_in_sel(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i({gf_mult1_in_sel_d}),
				.q_o(gf_mult1_in_sel_q_raw)
			);
			assign gf_mult1_in_sel_q = sv2v_cast_32E0C(gf_mult1_in_sel_q_raw);
			localparam [31:0] sv2v_uu_u_prim_onehot_check_gf_mult1_in_sel_AddrWidth = 5;
			localparam [4:0] sv2v_uu_u_prim_onehot_check_gf_mult1_in_sel_ext_addr_i_0 = 1'sb0;
			prim_onehot_check #(
				.OneHotWidth(aes_pkg_GFMultInSelWidth),
				.AddrCheck(1'b0),
				.StrictCheck(1'b0)
			) u_prim_onehot_check_gf_mult1_in_sel(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.oh_i({gf_mult1_in_sel_q}),
				.addr_i(sv2v_uu_u_prim_onehot_check_gf_mult1_in_sel_ext_addr_i_0),
				.en_i(1'b1),
				.err_o(gf_mult1_in_sel_err)
			);
			assign gf_mult1_op_b_mux_in[256+:aes_pkg_GCMDegree] = ghash_state_q[0];
			assign gf_mult1_op_b_mux_in[128+:aes_pkg_GCMDegree] = ghash_state_q[1];
			assign gf_mult1_op_b_mux_in[0+:aes_pkg_GCMDegree] = s_q;
			prim_onehot_mux #(
				.Width(aes_pkg_GCMDegree),
				.Inputs(aes_pkg_GFMultInSelWidth)
			) u_prim_onehot_mux_gf_mult1_op_b(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.in_i(gf_mult1_op_b_mux_in),
				.sel_i(gf_mult1_in_sel_q),
				.out_o(gf_mult_op_b[1])
			);
			wire [127:0] gf_mult1_op_b_rev;
			assign gf_mult1_op_b_rev = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_op_b[1]);
			wire [GFMultStagesPerCycle - 1:0] gf_mult1_op_b_rev_slice_d;
			reg [GFMultStagesPerCycle - 1:0] gf_mult1_op_b_rev_slice_q;
			assign gf_mult1_op_b_rev_slice_d = gf_mult1_op_b_rev[127-:GFMultStagesPerCycle];
			always @(posedge clk_i or negedge rst_ni) begin : gf_mult1_op_b_slice_reg
				if (!rst_ni)
					gf_mult1_op_b_rev_slice_q <= 1'sb0;
				else
					gf_mult1_op_b_rev_slice_q <= gf_mult1_op_b_rev_slice_d;
			end
			assign gf_mult_op_b_rev[1] = {gf_mult1_op_b_rev_slice_q, gf_mult1_op_b_rev[(aes_pkg_GCMDegree - GFMultStagesPerCycle) - 1:0]};
		end
	endgenerate
	genvar _gv_s_14;
	function automatic [127:0] sv2v_cast_D3020;
		input reg [127:0] inp;
		sv2v_cast_D3020 = inp;
	endfunction
	localparam [127:0] aes_pkg_GCMIPoly = (((sv2v_cast_D3020(1'b1) << 7) | (sv2v_cast_D3020(1'b1) << 2)) | (sv2v_cast_D3020(1'b1) << 1)) | (sv2v_cast_D3020(1'b1) << 0);
	generate
		for (_gv_s_14 = 0; _gv_s_14 < NumShares; _gv_s_14 = _gv_s_14 + 1) begin : gen_gf_mult
			localparam s = _gv_s_14;
			prim_gf_mult #(
				.Width(aes_pkg_GCMDegree),
				.StagesPerCycle(GFMultStagesPerCycle),
				.IPoly(aes_pkg_GCMIPoly),
				.OutputZeroUntilAck(1'b1)
			) u_gf_mult(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.req_i(gf_mult_req[s]),
				.ack_o(gf_mult_ack[s]),
				.ack_pre_o(gf_mult_ack_pre[s]),
				.operand_a_i(aes_pkg_aes_ghash_reverse_bit_order(hash_subkey_q[((NumShares - 1) - s) * aes_pkg_GCMDegree+:aes_pkg_GCMDegree])),
				.operand_b_i(gf_mult_op_b_rev[s]),
				.prod_o(gf_mult_prod[s])
			);
			assign ghash_state_mult[s] = aes_pkg_aes_ghash_reverse_bit_order(gf_mult_prod[s]);
		end
		if (!SecMasking) begin : gen_tie_offs
			wire [255:0] unused_corr_q;
			wire [2:0] unused_corr_we;
			assign corr_d = {2 {sv2v_cast_C5D8B(1'sb0)}};
			wire [256:1] sv2v_tmp_AF6E2;
			assign sv2v_tmp_AF6E2 = corr_d;
			always @(*) corr_q = sv2v_tmp_AF6E2;
			assign unused_corr_q = corr_q;
			assign unused_corr_we = corr_we;
			wire unused_corr0_en_q;
			assign corr0_en_q = corr0_en_d;
			assign unused_corr0_en_q = corr0_en_q;
			wire unused_ghash_add_in_sel_d;
			assign unused_ghash_add_in_sel_d = ^{ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth], ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth]};
			assign ghash_add_in_sel_q = {2 {sv2v_cast_4E16B(3'b001)}};
			assign ghash_add_in_sel_err = 2'b00;
			assign gf_mult1_in_sel_err = 1'b0;
			wire [2:0] unused_ghash_state_we;
			assign unused_ghash_state_we = ghash_state_we[1];
			wire unused_gf_mult_req;
			assign unused_gf_mult_req = gf_mult_req[1];
			assign gf_mult_ack[1] = 1'b1;
			assign gf_mult_ack_pre[1] = 1'b1;
			wire unused_add_s_en_q;
			assign add_s_en_q = add_s_en_d;
			assign unused_add_s_en_q = add_s_en_q;
		end
	endgenerate
	function automatic [6:0] sv2v_cast_F0BFD;
		input reg [6:0] inp;
		sv2v_cast_F0BFD = inp;
	endfunction
	function automatic [5:0] sv2v_cast_92B33;
		input reg [5:0] inp;
		sv2v_cast_92B33 = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	always @(*) begin : aes_ghash_fsm
		if (_sv2v_0)
			;
		in_ready_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		out_valid_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		corr_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		corr0_en_d = 1'b0;
		ghash_in_sel = sv2v_cast_8D447(sv2v_cast_14B94(3'b100));
		ghash_add_in_sel_d = ghash_add_in_sel_q;
		ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
		ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b100));
		gf_mult_req = 1'sb0;
		gf_mult0_en_d = gf_mult0_en_q;
		gf_mult1_in_sel_d = gf_mult1_in_sel_q;
		add_s_en_d = 1'b0;
		aes_ghash_ns = aes_ghash_cs;
		first_block_d = first_block_q;
		final_add_d = final_add_q;
		advance = 1'b0;
		alert_o = 1'b0;
		(* full_case, parallel_case *)
		case (aes_ghash_cs)
			sv2v_cast_F0BFD(7'b1100001): begin
				in_ready_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				if (in_valid_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) begin
					if (clear_i) begin
						s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b1;
						final_add_d = 1'b0;
						if (SecMasking) begin
							gf_mult0_en_d = 1'b1;
							gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b000001)) begin
						if (load_hash_subkey_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))
							hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						else begin
							s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b001000));
							ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
							first_block_d = 1'b1;
							if (SecMasking) begin
								gf_mult0_en_d = 1'b1;
								gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b001);
								aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
							end
							else
								aes_ghash_ns = sv2v_cast_F0BFD(7'b0000110);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b000010)) begin
						ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b110000));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b0;
						ghash_in_sel = (!SecMasking ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : sv2v_cast_8D447(sv2v_cast_14B94(3'b100)));
						aes_ghash_ns = (!SecMasking ? sv2v_cast_F0BFD(7'b0000110) : sv2v_cast_F0BFD(7'b1100001));
					end
					else if (((gcm_phase_i == sv2v_cast_92B33(6'b000100)) || (gcm_phase_i == sv2v_cast_92B33(6'b001000))) || (gcm_phase_i == sv2v_cast_92B33(6'b100000))) begin
						ghash_in_sel = (gcm_phase_i == sv2v_cast_92B33(6'b000100) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : ((gcm_phase_i == sv2v_cast_92B33(6'b001000)) && (op_i == sv2v_cast_63054(2'b10)) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : ((gcm_phase_i == sv2v_cast_92B33(6'b001000)) && (op_i == sv2v_cast_63054(2'b01)) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b100)) : (gcm_phase_i == sv2v_cast_92B33(6'b100000) ? sv2v_cast_8D447(sv2v_cast_14B94(3'b011)) : sv2v_cast_8D447(sv2v_cast_14B94(3'b100))))));
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = (first_block_q ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
						if (SecMasking && !first_block_q) begin
							ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
						end
						else begin
							gf_mult0_en_d = 1'b1;
							gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0010001);
						end
					end
					else if (gcm_phase_i == sv2v_cast_92B33(6'b010000)) begin
						final_add_d = 1'b1;
						if (SecMasking) begin
							ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
						end
						else begin
							add_s_en_d = 1'b1;
							aes_ghash_ns = sv2v_cast_F0BFD(7'b0110111);
						end
					end
					else
						aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
				end
			end
			sv2v_cast_F0BFD(7'b1111100): begin
				gf_mult_req = 2'b11;
				if (gf_mult_ack_pre[0])
					corr0_en_d = 1'b1;
				if (gf_mult_ack_pre[1])
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
				if (&gf_mult_ack) begin
					gf_mult0_en_d = 1'b0;
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
					corr_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
				end
			end
			sv2v_cast_F0BFD(7'b0101101): begin
				ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
				ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				final_add_d = 1'b0;
				ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				if ((gcm_phase_i == sv2v_cast_92B33(6'b010000)) || ((gcm_phase_i == sv2v_cast_92B33(6'b100000)) && final_add_q)) begin
					add_s_en_d = 1'b1;
					aes_ghash_ns = sv2v_cast_F0BFD(7'b0110111);
				end
				else begin
					gf_mult0_en_d = 1'b1;
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b001);
					aes_ghash_ns = sv2v_cast_F0BFD(7'b0010001);
				end
			end
			sv2v_cast_F0BFD(7'b0010001): begin
				gf_mult_req = 2'b11;
				if (gf_mult_ack_pre[1])
					gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
				if (&gf_mult_ack) begin
					gf_mult0_en_d = 1'b0;
					gf_mult1_in_sel_d = (SecMasking && first_block_q ? sv2v_cast_32E0C(3'b100) : sv2v_cast_32E0C(3'b000));
					ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b111110));
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					if (SecMasking) begin
						ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b010);
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = (first_block_q ? sv2v_cast_4E16B(3'b001) : sv2v_cast_4E16B(3'b010));
						aes_ghash_ns = sv2v_cast_F0BFD(7'b0001000);
					end
					else begin
						first_block_d = 1'b0;
						aes_ghash_ns = (gcm_phase_i == sv2v_cast_92B33(6'b100000) ? sv2v_cast_F0BFD(7'b0110111) : sv2v_cast_F0BFD(7'b1100001));
					end
				end
			end
			sv2v_cast_F0BFD(7'b0001000): begin
				if (first_block_q) begin
					gf_mult_req = 2'b10;
					if (gf_mult_ack_pre[1]) begin
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
					end
					if (gf_mult_ack[1]) begin
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b000);
						ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
						first_block_d = 1'b0;
						advance = 1'b1;
					end
				end
				else begin
					advance = 1'b1;
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				end
				if (advance) begin
					if (gcm_phase_i == sv2v_cast_92B33(6'b100000))
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1001111);
					else begin
						ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
						ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
					end
				end
			end
			sv2v_cast_F0BFD(7'b1001111): begin
				final_add_d = 1'b1;
				ghash_add_in_sel_d[aes_pkg_GHashAddInSelWidth+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b100);
				ghash_add_in_sel_d[0+:aes_pkg_GHashAddInSelWidth] = sv2v_cast_4E16B(3'b001);
				aes_ghash_ns = sv2v_cast_F0BFD(7'b0101101);
			end
			sv2v_cast_F0BFD(7'b0000110): begin
				ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b011101));
				ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
			end
			sv2v_cast_F0BFD(7'b0110111): begin
				add_s_en_d = 1'b1;
				out_valid_o = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
				if (out_ready_i == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))) begin
					add_s_en_d = 1'b0;
					s_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_sel = sv2v_cast_E839A(sv2v_cast_D15E3(6'b000011));
					ghash_state_we[0] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					ghash_state_we[1] = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					hash_subkey_we = sv2v_cast_39E4E(sv2v_cast_14B94(3'b011));
					if (SecMasking) begin
						gf_mult0_en_d = 1'b1;
						gf_mult1_in_sel_d = sv2v_cast_32E0C(3'b010);
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1111100);
					end
					else
						aes_ghash_ns = sv2v_cast_F0BFD(7'b1100001);
				end
			end
			sv2v_cast_F0BFD(7'b0111010): alert_o = 1'b1;
			default: begin
				aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
				alert_o = 1'b1;
			end
		endcase
		if ((|ghash_add_in_sel_err || gf_mult1_in_sel_err) || alert_fatal_i)
			aes_ghash_ns = sv2v_cast_F0BFD(7'b0111010);
	end
	prim_sparse_fsm_flop #(
		.Width(aes_pkg_GhashStateWidth),
		.ResetValue(sv2v_cast_F0BFD(7'b1100001)),
		.EnableAlertTriggerSVA(1)
	) u_state_regs(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.state_i(aes_ghash_ns),
		.state_o(aes_ghash_cs)
	);
	always @(posedge clk_i or negedge rst_ni) begin : fsm_reg
		if (!rst_ni)
			first_block_q <= 1'b0;
		else
			first_block_q <= first_block_d;
	end
	generate
		if (SecMasking) begin : gen_fsm_reg_masked
			always @(posedge clk_i or negedge rst_ni) begin : fsm_reg_masked
				if (!rst_ni)
					final_add_q <= 1'b0;
				else
					final_add_q <= final_add_d;
			end
		end
		else begin : gen_no_fsm_reg
			wire unused_final_add_d;
			wire [1:1] sv2v_tmp_A0552;
			assign sv2v_tmp_A0552 = 1'b0;
			always @(*) final_add_q = sv2v_tmp_A0552;
			assign unused_final_add_d = final_add_d;
			wire unused_gf_mult0_en_d;
			assign gf_mult0_en_q = 1'b0;
			assign unused_gf_mult0_en_d = gf_mult0_en_d;
			wire [2:0] unused_gf_mult1_in_sel_d;
			assign gf_mult1_in_sel_q = sv2v_cast_32E0C(3'b000);
			assign unused_gf_mult1_in_sel_d = gf_mult1_in_sel_d;
			wire unused_advance;
			assign unused_advance = advance;
		end
	endgenerate
	assign first_block_o = first_block_q;
	generate
		if (SecMasking) begin : gen_add_s_in_masked
			prim_flop #(
				.Width(1),
				.ResetValue(1'b0)
			) u_prim_flop_add_s_en(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.d_i(add_s_en_d),
				.q_o(add_s_en_q)
			);
			prim_blanker #(.Width(aes_pkg_GCMDegree)) u_prim_blanker_add_s_in(
				.in_i(ghash_state_q[0]),
				.en_i(add_s_en_q),
				.out_o(add_s_in)
			);
		end
		else begin : gen_add_s_in_unmasked
			assign add_s_in = ghash_state_q[0];
		end
	endgenerate
	assign ghash_state_done = s_q ^ add_s_in;
	always @(*) begin : data_out_conversion
		if (_sv2v_0)
			;
		ghash_state_done_o = aes_pkg_aes_transpose(aes_pkg_aes_state_to_ghash_vec(ghash_state_done));
	end
	initial _sv2v_0 = 0;
endmodule
module aes_ghash_wrap (
	clk_i,
	rst_ni,
	in_valid_i,
	in_ready_o,
	out_valid_o,
	out_ready_i,
	op_i,
	gcm_phase_i,
	num_valid_bytes_i,
	load_hash_subkey_i,
	clear_i,
	first_block_o,
	alert_fatal_i,
	alert_o,
	hash_subkey_i,
	s_i,
	prd_i,
	data_in_prev_i,
	data_out_i,
	ghash_state_done_o,
	cyc_ctr_o
);
	input wire clk_i;
	input wire rst_ni;
	input wire in_valid_i;
	output wire in_ready_o;
	output wire out_valid_o;
	input wire out_ready_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_AES_GCMPHASE_WIDTH = 6;
	input wire [5:0] gcm_phase_i;
	input wire [4:0] num_valid_bytes_i;
	input wire load_hash_subkey_i;
	input wire clear_i;
	output wire first_block_o;
	input wire alert_fatal_i;
	output wire alert_o;
	input wire [255:0] hash_subkey_i;
	input wire [255:0] s_i;
	input wire [255:0] prd_i;
	input wire [127:0] data_in_prev_i;
	input wire [127:0] data_out_i;
	output wire [127:0] ghash_state_done_o;
	output wire [7:0] cyc_ctr_o;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	wire [2:0] in_valid;
	wire [2:0] in_ready;
	wire [2:0] out_valid;
	wire [2:0] out_ready;
	wire [2:0] load_hash_subkey;
	wire [255:0] cipher_state_done;
	wire [255:0] cipher_state_done_buf;
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign in_valid = (in_valid_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign out_ready = (out_ready_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign load_hash_subkey = (load_hash_subkey_i ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign in_ready_o = (in_ready == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	assign out_valid_o = (out_valid == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) ? 1'b1 : 1'b0);
	assign cipher_state_done = (in_valid_i && clear_i ? prd_i : (in_valid_i && load_hash_subkey_i ? hash_subkey_i : (in_valid_i && !load_hash_subkey_i ? s_i : prd_i)));
	prim_buf #(.Width(128)) u_prim_buf_0(
		.in_i(cipher_state_done[128+:128]),
		.out_o(cipher_state_done_buf[128+:128])
	);
	prim_buf #(.Width(128)) u_prim_buf_1(
		.in_i(cipher_state_done[0+:128]),
		.out_o(cipher_state_done_buf[0+:128])
	);
	aes_ghash #(
		.SecMasking(1),
		.GFMultCycles(4)
	) u_aes_ghash(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.in_valid_i(in_valid),
		.in_ready_o(in_ready),
		.out_valid_o(out_valid),
		.out_ready_i(out_ready),
		.op_i(op_i),
		.gcm_phase_i(gcm_phase_i),
		.num_valid_bytes_i(num_valid_bytes_i),
		.load_hash_subkey_i(load_hash_subkey),
		.clear_i(clear_i),
		.first_block_o(first_block_o),
		.alert_fatal_i(alert_fatal_i),
		.alert_o(alert_o),
		.data_in_prev_i(data_in_prev_i),
		.data_out_i(data_out_i),
		.cipher_state_done_i(cipher_state_done_buf),
		.ghash_state_done_o(ghash_state_done_o)
	);
	wire [7:0] cyc_ctr_d;
	reg [7:0] cyc_ctr_q;
	assign cyc_ctr_d = cyc_ctr_q + 8'd1;
	always @(posedge clk_i or negedge rst_ni) begin : cyc_ctr_reg
		if (!rst_ni)
			cyc_ctr_q <= 1'sb0;
		else
			cyc_ctr_q <= cyc_ctr_d;
	end
	assign cyc_ctr_o = cyc_ctr_q;
endmodule
module aes_key_expand (
	clk_i,
	rst_ni,
	cfg_valid_i,
	op_i,
	en_i,
	prd_we_i,
	out_req_o,
	out_ack_i,
	clear_i,
	round_i,
	key_len_i,
	key_i,
	key_o,
	prd_i,
	err_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] SecMasking = 0;
	parameter integer SecSBoxImpl = 32'sd0;
	localparam signed [31:0] NumShares = (SecMasking ? 2 : 1);
	input wire clk_i;
	input wire rst_ni;
	input wire cfg_valid_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] en_i;
	input wire prd_we_i;
	output wire [2:0] out_req_o;
	input wire [2:0] out_ack_i;
	input wire clear_i;
	input wire [3:0] round_i;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	input wire [2:0] key_len_i;
	input wire [((NumShares * 8) * 32) - 1:0] key_i;
	output wire [((NumShares * 8) * 32) - 1:0] key_o;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	input wire [31:0] prd_i;
	output wire err_o;
	wire [2:0] en;
	wire en_err;
	wire [2:0] out_ack;
	wire out_ack_err;
	reg [7:0] rcon_d;
	reg [7:0] rcon_q;
	wire rcon_we;
	reg use_rcon;
	wire [3:0] rnd;
	reg [3:0] rnd_type;
	wire [31:0] spec_in_128 [0:NumShares - 1];
	wire [31:0] spec_in_192 [0:NumShares - 1];
	reg [31:0] rot_word_in [0:NumShares - 1];
	wire [31:0] rot_word_out [0:NumShares - 1];
	wire use_rot_word;
	wire prd_we;
	wire prd_we_force;
	wire prd_we_inhibit;
	wire [31:0] sub_word_in;
	wire [31:0] sub_word_out;
	wire [3:0] sub_word_out_req;
	wire [31:0] sw_in_mask;
	wire [31:0] sw_out_mask;
	wire [7:0] rcon_add_in;
	wire [7:0] rcon_add_out;
	wire [31:0] rcon_added;
	wire [31:0] irregular [0:NumShares - 1];
	reg [((NumShares * 8) * 32) - 1:0] regular;
	wire unused_cfg_valid;
	assign unused_cfg_valid = cfg_valid_i;
	assign rnd = round_i;
	always @(*) begin : get_rnd_type
		if (_sv2v_0)
			;
		if (AES192Enable) begin
			rnd_type[0] = rnd == 0;
			rnd_type[1] = (((rnd == 1) || (rnd == 4)) || (rnd == 7)) || (rnd == 10);
			rnd_type[2] = (((rnd == 2) || (rnd == 5)) || (rnd == 8)) || (rnd == 11);
			rnd_type[3] = (((rnd == 3) || (rnd == 6)) || (rnd == 9)) || (rnd == 12);
		end
		else
			rnd_type = 1'sb0;
	end
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	assign use_rot_word = ((key_len_i == sv2v_cast_2BC67(3'b100)) && (rnd[0] == 1'b0) ? 1'b0 : 1'b1);
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	always @(*) begin : rcon_usage
		if (_sv2v_0)
			;
		use_rcon = 1'b1;
		if (AES192Enable) begin
			if ((key_len_i == sv2v_cast_2BC67(3'b010)) && (((op_i == sv2v_cast_63054(2'b01)) && rnd_type[1]) || ((op_i == sv2v_cast_63054(2'b10)) && (rnd_type[0] || rnd_type[3]))))
				use_rcon = 1'b0;
		end
		if ((key_len_i == sv2v_cast_2BC67(3'b100)) && (rnd[0] == 1'b0))
			use_rcon = 1'b0;
	end
	function automatic [7:0] aes_pkg_aes_div2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[0];
			out[6] = in[7];
			out[5] = in[6];
			out[4] = in[5];
			out[3] = in[4] ^ in[0];
			out[2] = in[3] ^ in[0];
			out[1] = in[2];
			out[0] = in[1] ^ in[0];
			aes_pkg_aes_div2 = out;
		end
	endfunction
	function automatic [7:0] aes_pkg_aes_mul2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[6];
			out[6] = in[5];
			out[5] = in[4];
			out[4] = in[3] ^ in[7];
			out[3] = in[2] ^ in[7];
			out[2] = in[1];
			out[1] = in[0] ^ in[7];
			out[0] = in[7];
			aes_pkg_aes_mul2 = out;
		end
	endfunction
	always @(*) begin : rcon_update
		if (_sv2v_0)
			;
		rcon_d = rcon_q;
		if (clear_i)
			rcon_d = (op_i == sv2v_cast_63054(2'b01) ? 8'h01 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b001)) ? 8'h36 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b010)) ? 8'h80 : ((op_i == sv2v_cast_63054(2'b10)) && (key_len_i == sv2v_cast_2BC67(3'b100)) ? 8'h40 : 8'h01))));
		else
			rcon_d = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mul2(rcon_q) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_div2(rcon_q) : 8'h01));
	end
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign rcon_we = clear_i | (((use_rcon & (en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) & (out_req_o == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)))) & (out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))));
	always @(posedge clk_i or negedge rst_ni) begin : reg_rcon
		if (!rst_ni)
			rcon_q <= 1'sb0;
		else if (rcon_we)
			rcon_q <= rcon_d;
	end
	genvar _gv_s_15;
	function automatic [31:0] aes_pkg_aes_circ_byte_shift;
		input reg [31:0] in;
		input reg [1:0] shift;
		reg [31:0] out;
		reg [31:0] s;
		begin
			s = {30'b000000000000000000000000000000, shift};
			out = {in[8 * ((7 - s) % 4)+:8], in[8 * ((6 - s) % 4)+:8], in[8 * ((5 - s) % 4)+:8], in[8 * ((4 - s) % 4)+:8]};
			aes_pkg_aes_circ_byte_shift = out;
		end
	endfunction
	generate
		for (_gv_s_15 = 0; _gv_s_15 < NumShares; _gv_s_15 = _gv_s_15 + 1) begin : gen_shares_rot_word_out
			localparam s = _gv_s_15;
			assign spec_in_128[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 2) * 32+:32];
			assign spec_in_192[s] = (AES192Enable ? (key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32]) ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32] : {32 {1'sb0}});
			always @(*) begin : rot_word_in_mux
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_len_i)
					sv2v_cast_2BC67(3'b001):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							sv2v_cast_63054(2'b10): rot_word_in[s] = spec_in_128[s];
							default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
						endcase
					sv2v_cast_2BC67(3'b010):
						if (AES192Enable)
							(* full_case, parallel_case *)
							case (op_i)
								sv2v_cast_63054(2'b01): rot_word_in[s] = (rnd_type[0] ? key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] : (rnd_type[2] ? key_i[((((NumShares - 1) - s) * 8) + 5) * 32+:32] : (rnd_type[3] ? spec_in_192[s] : key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32])));
								sv2v_cast_63054(2'b10): rot_word_in[s] = (rnd_type[1] ? key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32] : (rnd_type[2] ? key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32] : key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32]));
								default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							endcase
						else
							rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
					sv2v_cast_2BC67(3'b100):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 7) * 32+:32];
							sv2v_cast_63054(2'b10): rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
							default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 7) * 32+:32];
						endcase
					default: rot_word_in[s] = key_i[((((NumShares - 1) - s) * 8) + 3) * 32+:32];
				endcase
			end
			assign rot_word_out[s] = aes_pkg_aes_circ_byte_shift(rot_word_in[s], 2'h3);
		end
	endgenerate
	assign sub_word_in = (use_rot_word ? rot_word_out[0] : rot_word_in[0]);
	generate
		if (!SecMasking) begin : gen_no_sw_in_mask
			assign sw_in_mask = 1'sb0;
			wire [31:0] unused_sw_out_mask;
			assign unused_sw_out_mask = sw_out_mask;
		end
		else begin : gen_sw_in_mask
			assign sw_in_mask = (use_rot_word ? rot_word_out[1] : rot_word_in[1]);
		end
	endgenerate
	assign prd_we_force = (key_len_i == sv2v_cast_2BC67(3'b100)) & (rnd == 0);
	assign prd_we_inhibit = ((key_len_i == sv2v_cast_2BC67(3'b010)) & (op_i == sv2v_cast_63054(2'b01))) & ((((rnd == 0) || (rnd == 3)) || (rnd == 6)) || (rnd == 9));
	assign prd_we = (prd_we_i & ~prd_we_inhibit) | prd_we_force;
	reg [31:0] prd_q;
	generate
		if (!SecMasking) begin : gen_no_prd_buffer
			wire [32:1] sv2v_tmp_B228D;
			assign sv2v_tmp_B228D = prd_i;
			always @(*) prd_q = sv2v_tmp_B228D;
			wire unused_prd_we;
			assign unused_prd_we = prd_we;
		end
		else begin : gen_prd_buffer
			always @(posedge clk_i or negedge rst_ni) begin : prd_reg
				if (!rst_ni)
					prd_q <= 1'sb0;
				else if (prd_we)
					prd_q <= prd_i;
			end
		end
	endgenerate
	wire [111:0] in_prd;
	wire [79:0] out_prd;
	genvar _gv_i_22;
	function automatic integer aes_pkg_aes_rot_int;
		input integer in;
		input integer num;
		integer out;
		begin
			if (in == 0)
				out = num - 1;
			else
				out = in - 1;
			aes_pkg_aes_rot_int = out;
		end
	endfunction
	generate
		for (_gv_i_22 = 0; _gv_i_22 < 4; _gv_i_22 = _gv_i_22 + 1) begin : gen_sbox
			localparam i = _gv_i_22;
			assign in_prd[0 + (i * 28)+:28] = {out_prd[aes_pkg_aes_rot_int(i, 4) * 20+:20], prd_q[aes_pkg_WidthPRDSBox * i+:aes_pkg_WidthPRDSBox]};
			aes_sbox #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sbox_i(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
				.out_req_o(sub_word_out_req[i]),
				.out_ack_i(out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
				.op_i(sv2v_cast_63054(2'b01)),
				.data_i(sub_word_in[8 * i+:8]),
				.mask_i(sw_in_mask[8 * i+:8]),
				.prd_i(in_prd[0 + (i * 28)+:28]),
				.data_o(sub_word_out[8 * i+:8]),
				.mask_o(sw_out_mask[8 * i+:8]),
				.prd_o(out_prd[i * 20+:20])
			);
		end
	endgenerate
	assign rcon_add_in = sub_word_out[7:0];
	assign rcon_add_out = rcon_add_in ^ rcon_q;
	assign rcon_added = {sub_word_out[31:8], rcon_add_out};
	genvar _gv_s_16;
	generate
		for (_gv_s_16 = 0; _gv_s_16 < NumShares; _gv_s_16 = _gv_s_16 + 1) begin : gen_shares_irregular
			localparam s = _gv_s_16;
			if (s == 0) begin : gen_irregular_rcon
				assign irregular[s] = (use_rcon ? rcon_added : sub_word_out);
			end
			else begin : gen_irregular_no_rcon
				assign irregular[s] = sw_out_mask;
			end
		end
	endgenerate
	genvar _gv_s_17;
	generate
		for (_gv_s_17 = 0; _gv_s_17 < NumShares; _gv_s_17 = _gv_s_17 + 1) begin : gen_shares_regular
			localparam s = _gv_s_17;
			always @(*) begin : drive_regular
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (key_len_i)
					sv2v_cast_2BC67(3'b001): begin
						regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
						regular[(((NumShares - 1) - s) * 8) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01): begin : sv2v_autoblock_1
								reg signed [31:0] i;
								for (i = 1; i < 4; i = i + 1)
									regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i - 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
							end
							sv2v_cast_63054(2'b10): begin : sv2v_autoblock_2
								reg signed [31:0] i;
								for (i = 1; i < 4; i = i + 1)
									regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (i - 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
							end
							default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
						endcase
					end
					sv2v_cast_2BC67(3'b010): begin
						regular[32 * ((((NumShares - 1) - s) * 8) + 6)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 2)+:64];
						if (AES192Enable)
							(* full_case, parallel_case *)
							case (op_i)
								sv2v_cast_63054(2'b01):
									if (rnd_type[0]) begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 2)+:128];
										regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
										regular[((((NumShares - 1) - s) * 8) + 5) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + 1) * 32+:32];
									end
									else begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:64];
										begin : sv2v_autoblock_3
											reg signed [31:0] i;
											for (i = 0; i < 4; i = i + 1)
												if (((i == 0) && rnd_type[2]) || ((i == 2) && rnd_type[3]))
													regular[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
												else
													regular[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
										end
									end
								sv2v_cast_63054(2'b10):
									if (rnd_type[0]) begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 2)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
										begin : sv2v_autoblock_4
											reg signed [31:0] i;
											for (i = 0; i < 2; i = i + 1)
												regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (3 + i)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + ((3 + i) + 1)) * 32+:32];
										end
									end
									else begin
										regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:64] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:64];
										begin : sv2v_autoblock_5
											reg signed [31:0] i;
											for (i = 0; i < 4; i = i + 1)
												if (((i == 2) && rnd_type[1]) || ((i == 0) && rnd_type[2]))
													regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32];
												else
													regular[((((NumShares - 1) - s) * 8) + i) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + (i + 2)) * 32+:32];
										end
									end
								default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
							endcase
						else
							regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
					end
					sv2v_cast_2BC67(3'b100):
						(* full_case, parallel_case *)
						case (op_i)
							sv2v_cast_63054(2'b01):
								if (rnd == 0)
									regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
								else begin
									regular[32 * ((((NumShares - 1) - s) * 8) + 0)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128];
									regular[((((NumShares - 1) - s) * 8) + 4) * 32+:32] = irregular[s] ^ key_i[(((NumShares - 1) - s) * 8) * 32+:32];
									begin : sv2v_autoblock_6
										reg signed [31:0] i;
										for (i = 1; i < 4; i = i + 1)
											regular[((((NumShares - 1) - s) * 8) + (i + 4)) * 32+:32] = regular[((((NumShares - 1) - s) * 8) + (i + 3)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + i) * 32+:32];
									end
								end
							sv2v_cast_63054(2'b10):
								if (rnd == 0)
									regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
								else begin
									regular[32 * ((((NumShares - 1) - s) * 8) + 4)+:128] = key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128];
									regular[(((NumShares - 1) - s) * 8) * 32+:32] = irregular[s] ^ key_i[((((NumShares - 1) - s) * 8) + 4) * 32+:32];
									begin : sv2v_autoblock_7
										reg signed [31:0] i;
										for (i = 0; i < 3; i = i + 1)
											regular[((((NumShares - 1) - s) * 8) + (i + 1)) * 32+:32] = key_i[((((NumShares - 1) - s) * 8) + (4 + i)) * 32+:32] ^ key_i[((((NumShares - 1) - s) * 8) + ((4 + i) + 1)) * 32+:32];
									end
								end
							default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
						endcase
					default: regular[32 * (((NumShares - 1) - s) * 8)+:256] = {key_i[32 * ((((NumShares - 1) - s) * 8) + 0)+:128], key_i[32 * ((((NumShares - 1) - s) * 8) + 4)+:128]};
				endcase
			end
		end
	endgenerate
	assign key_o = regular;
	assign out_req_o = (&sub_word_out_req ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	wire [2:0] en_raw;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_expand_en_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(en_i),
		.sel_o(en_raw),
		.err_o(en_err)
	);
	assign en = sv2v_cast_39E4E(en_raw);
	wire [2:0] out_ack_raw;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_key_expand_out_ack_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(out_ack_i),
		.sel_o(out_ack_raw),
		.err_o(out_ack_err)
	);
	assign out_ack = sv2v_cast_39E4E(out_ack_raw);
	assign err_o = en_err | out_ack_err;
	localparam signed [31:0] AesKeyExpandSecMaskingNonDefault = (SecMasking == 1 ? 1 : 2);
	function automatic [AesKeyExpandSecMaskingNonDefault - 1:0] sv2v_cast_17566;
		input reg [AesKeyExpandSecMaskingNonDefault - 1:0] inp;
		sv2v_cast_17566 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_8
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_17566(1'b1);
	end
	initial _sv2v_0 = 0;
endmodule
module aes_mix_columns (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	output wire [127:0] data_o;
	wire [127:0] data_i_transposed;
	wire [127:0] data_o_transposed;
	function automatic [127:0] aes_pkg_aes_transpose;
		input reg [127:0] in;
		reg [127:0] transpose;
		begin
			transpose = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] j;
				for (j = 0; j < 4; j = j + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] i;
						for (i = 0; i < 4; i = i + 1)
							transpose[((i * 4) + j) * 8+:8] = in[((j * 4) + i) * 8+:8];
					end
			end
			aes_pkg_aes_transpose = transpose;
		end
	endfunction
	assign data_i_transposed = aes_pkg_aes_transpose(data_i);
	genvar _gv_i_23;
	generate
		for (_gv_i_23 = 0; _gv_i_23 < 4; _gv_i_23 = _gv_i_23 + 1) begin : gen_mix_column
			localparam i = _gv_i_23;
			aes_mix_single_column u_aes_mix_column_i(
				.op_i(op_i),
				.data_i(data_i_transposed[8 * (i * 4)+:32]),
				.data_o(data_o_transposed[8 * (i * 4)+:32])
			);
		end
	endgenerate
	assign data_o = aes_pkg_aes_transpose(data_o_transposed);
endmodule
module aes_mix_single_column (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [31:0] data_i;
	output wire [31:0] data_o;
	wire [31:0] x;
	wire [15:0] y;
	wire [15:0] z;
	wire [31:0] x_mul2;
	wire [15:0] y_pre_mul4;
	wire [7:0] y2;
	wire [7:0] y2_pre_mul2;
	wire [15:0] z_muxed;
	assign x[0+:8] = data_i[0+:8] ^ data_i[24+:8];
	assign x[8+:8] = data_i[24+:8] ^ data_i[16+:8];
	assign x[16+:8] = data_i[16+:8] ^ data_i[8+:8];
	assign x[24+:8] = data_i[8+:8] ^ data_i[0+:8];
	genvar _gv_i_24;
	function automatic [7:0] aes_pkg_aes_mul2;
		input reg [7:0] in;
		reg [7:0] out;
		begin
			out[7] = in[6];
			out[6] = in[5];
			out[5] = in[4];
			out[4] = in[3] ^ in[7];
			out[3] = in[2] ^ in[7];
			out[2] = in[1];
			out[1] = in[0] ^ in[7];
			out[0] = in[7];
			aes_pkg_aes_mul2 = out;
		end
	endfunction
	generate
		for (_gv_i_24 = 0; _gv_i_24 < 4; _gv_i_24 = _gv_i_24 + 1) begin : gen_x_mul2
			localparam i = _gv_i_24;
			assign x_mul2[i * 8+:8] = aes_pkg_aes_mul2(x[i * 8+:8]);
		end
	endgenerate
	assign y_pre_mul4[0+:8] = data_i[24+:8] ^ data_i[8+:8];
	assign y_pre_mul4[8+:8] = data_i[16+:8] ^ data_i[0+:8];
	genvar _gv_i_25;
	function automatic [7:0] aes_pkg_aes_mul4;
		input reg [7:0] in;
		aes_pkg_aes_mul4 = aes_pkg_aes_mul2(aes_pkg_aes_mul2(in));
	endfunction
	generate
		for (_gv_i_25 = 0; _gv_i_25 < 2; _gv_i_25 = _gv_i_25 + 1) begin : gen_mul4
			localparam i = _gv_i_25;
			assign y[i * 8+:8] = aes_pkg_aes_mul4(y_pre_mul4[i * 8+:8]);
		end
	endgenerate
	assign y2_pre_mul2 = y[0+:8] ^ y[8+:8];
	assign y2 = aes_pkg_aes_mul2(y2_pre_mul2);
	assign z[0+:8] = y2 ^ y[0+:8];
	assign z[8+:8] = y2 ^ y[8+:8];
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign z_muxed[0+:8] = (op_i == sv2v_cast_63054(2'b01) ? 8'b00000000 : (op_i == sv2v_cast_63054(2'b10) ? z[0+:8] : 8'b00000000));
	assign z_muxed[8+:8] = (op_i == sv2v_cast_63054(2'b01) ? 8'b00000000 : (op_i == sv2v_cast_63054(2'b10) ? z[8+:8] : 8'b00000000));
	assign data_o[0+:8] = ((data_i[8+:8] ^ x_mul2[24+:8]) ^ x[8+:8]) ^ z_muxed[8+:8];
	assign data_o[8+:8] = ((data_i[0+:8] ^ x_mul2[16+:8]) ^ x[8+:8]) ^ z_muxed[0+:8];
	assign data_o[16+:8] = ((data_i[24+:8] ^ x_mul2[8+:8]) ^ x[24+:8]) ^ z_muxed[8+:8];
	assign data_o[24+:8] = ((data_i[16+:8] ^ x_mul2[0+:8]) ^ x[24+:8]) ^ z_muxed[0+:8];
endmodule
module aes_prng_clearing (
	clk_i,
	rst_ni,
	data_update_i,
	data_o,
	reseed_req_i,
	reseed_ack_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i
);
	reg _sv2v_0;
	parameter [31:0] Width = 64;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_pkg_ClearingLfsrWidth = 64;
	localparam [63:0] aes_pkg_RndCnstClearingLfsrSeedDefault = 64'hc32d580f74f1713a;
	parameter [63:0] RndCnstLfsrSeed = aes_pkg_RndCnstClearingLfsrSeedDefault;
	localparam [383:0] aes_pkg_RndCnstClearingLfsrPermDefault = 384'hb33fdfc81deb6292c21f8a31025850679c2f4be1bbe937b4b7c9d7f4e57568d99c8ae291a899143e0d8459d31b143223;
	parameter [383:0] RndCnstLfsrPerm = aes_pkg_RndCnstClearingLfsrPermDefault;
	localparam [383:0] aes_pkg_RndCnstClearingSharePermDefault = 384'hf66fd61b27847edc2286706fb3a2e9009736b95ac3f3b5205caf8dc536aad73605d393c8dd94476e830e97891d4828d0;
	parameter [383:0] RndCnstSharePerm = aes_pkg_RndCnstClearingSharePermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire data_update_i;
	localparam [31:0] aes_pkg_NumSharesKey = 2;
	output wire [(aes_pkg_NumSharesKey * Width) - 1:0] data_o;
	input wire reseed_req_i;
	output wire reseed_ack_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	wire seed_valid;
	wire seed_en;
	wire [Width - 1:0] seed;
	wire lfsr_en;
	wire [Width - 1:0] lfsr_state;
	localparam signed [31:0] AesSecSkipPRNGReseedingNonDefault = (SecSkipPRNGReseeding == 0 ? 1 : 2);
	function automatic [AesSecSkipPRNGReseedingNonDefault - 1:0] sv2v_cast_72EB8;
		input reg [AesSecSkipPRNGReseedingNonDefault - 1:0] inp;
		sv2v_cast_72EB8 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72EB8(1'b1);
	end
	assign lfsr_en = data_update_i;
	assign seed_en = (SecSkipPRNGReseeding ? 1'b0 : seed_valid);
	generate
		if ((Width / 2) == EntropyWidth) begin : gen_buffer
			wire [EntropyWidth - 1:0] buffer_d;
			reg [EntropyWidth - 1:0] buffer_q;
			wire buffer_valid_d;
			reg buffer_valid_q;
			assign entropy_req_o = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i);
			assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : seed_valid);
			assign buffer_valid_d = (entropy_req_o && entropy_ack_i ? ~buffer_valid_q : buffer_valid_q);
			assign buffer_d = ((entropy_req_o && entropy_ack_i) && !buffer_valid_q ? entropy_i : buffer_q);
			always @(posedge clk_i or negedge rst_ni) begin : reg_buffer
				if (!rst_ni) begin
					buffer_q <= 1'sb0;
					buffer_valid_q <= 1'b0;
				end
				else begin
					buffer_q <= buffer_d;
					buffer_valid_q <= buffer_valid_d;
				end
			end
			assign seed = {buffer_q, entropy_i};
			assign seed_valid = (buffer_valid_q & entropy_req_o) & entropy_ack_i;
		end
		else begin : gen_packer
			assign entropy_req_o = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i & ~seed_valid);
			assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : seed_valid);
			prim_packer_fifo #(
				.InW(EntropyWidth),
				.OutW(Width),
				.ClearOnRead(1'b0)
			) u_prim_packer_fifo(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.clr_i(1'b0),
				.wvalid_i(entropy_ack_i),
				.wdata_i(entropy_i),
				.wready_o(),
				.rvalid_o(seed_valid),
				.rdata_o(seed),
				.rready_i(1'b1),
				.depth_o()
			);
		end
	endgenerate
	localparam [31:0] sv2v_uu_u_lfsr_EntropyDw = 8;
	localparam [7:0] sv2v_uu_u_lfsr_ext_entropy_i_0 = 1'sb0;
	prim_lfsr #(
		.LfsrType("GAL_XOR"),
		.LfsrDw(Width),
		.StateOutDw(Width),
		.DefaultSeed(RndCnstLfsrSeed),
		.StatePermEn(1'b1),
		.StatePerm(RndCnstLfsrPerm),
		.NonLinearOut(1'b1)
	) u_lfsr(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.seed_en_i(seed_en),
		.seed_i(seed),
		.lfsr_en_i(lfsr_en),
		.entropy_i(sv2v_uu_u_lfsr_ext_entropy_i_0),
		.state_o(lfsr_state)
	);
	assign data_o[1 * Width+:Width] = lfsr_state;
	genvar _gv_i_26;
	generate
		for (_gv_i_26 = 0; _gv_i_26 < Width; _gv_i_26 = _gv_i_26 + 1) begin : gen_share_perm
			localparam i = _gv_i_26;
			assign data_o[0 + i] = lfsr_state[RndCnstSharePerm[i * 6+:6]];
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module aes_prng_masking (
	clk_i,
	rst_ni,
	force_masks_i,
	data_update_i,
	data_o,
	reseed_req_i,
	reseed_ack_o,
	entropy_req_o,
	entropy_ack_i,
	entropy_i
);
	reg _sv2v_0;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	localparam [31:0] aes_pkg_WidthPRDData = 128;
	localparam [31:0] aes_pkg_WidthPRDKey = 32;
	localparam [31:0] aes_pkg_WidthPRDMasking = aes_pkg_WidthPRDData + aes_pkg_WidthPRDKey;
	parameter [31:0] Width = aes_pkg_WidthPRDMasking;
	localparam [31:0] edn_pkg_ENDPOINT_BUS_WIDTH = 32;
	parameter [31:0] EntropyWidth = edn_pkg_ENDPOINT_BUS_WIDTH;
	parameter [0:0] SecAllowForcingMasks = 0;
	parameter [0:0] SecSkipPRNGReseeding = 0;
	localparam signed [31:0] aes_pkg_MaskingPrngStateWidth = 288;
	localparam [287:0] aes_pkg_RndCnstMaskingLfsrSeedDefault = 288'h758a442031e1c4616ea343ec153282a30c132b5723c5a4cf4743b3c7c32d580f74f1713a;
	parameter [287:0] RndCnstLfsrSeed = aes_pkg_RndCnstMaskingLfsrSeedDefault;
	localparam signed [31:0] aes_pkg_MaskingLfsrWidth = 160;
	localparam [1279:0] aes_pkg_RndCnstMaskingLfsrPermDefault = 1280'h17261943423e4c5c03872194050c7e5f8497081d96666d406f4b6064733034698e7c721c8832471f59919e0b128f067b25622768462e554d8970815d490d7f44048c867d907a239b20220f6c79071a852d76485452189f14091b1e744e3967374f785b772b352f6550613c58130a8b104a3f28019c9a380233956b00563a512c808d419d63982a16995e0e3b57826a36718a9329452492533d83115a75316e15;
	parameter [1279:0] RndCnstLfsrPerm = aes_pkg_RndCnstMaskingLfsrPermDefault;
	input wire clk_i;
	input wire rst_ni;
	input wire force_masks_i;
	input wire data_update_i;
	output wire [Width - 1:0] data_o;
	input wire reseed_req_i;
	output wire reseed_ack_o;
	output wire entropy_req_o;
	input wire entropy_ack_i;
	input wire [EntropyWidth - 1:0] entropy_i;
	wire prng_seed_en;
	wire prng_seed_done;
	wire [Width - 1:0] prng_key;
	wire prng_err;
	localparam signed [31:0] AesSecAllowForcingMasksNonDefault = (SecAllowForcingMasks == 0 ? 1 : 2);
	function automatic [AesSecAllowForcingMasksNonDefault - 1:0] sv2v_cast_72C84;
		input reg [AesSecAllowForcingMasksNonDefault - 1:0] inp;
		sv2v_cast_72C84 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72C84(1'b1);
	end
	generate
		if (SecAllowForcingMasks == 0) begin : gen_unused_force_masks
			wire unused_force_masks;
			assign unused_force_masks = force_masks_i;
		end
	endgenerate
	localparam signed [31:0] AesSecSkipPRNGReseedingNonDefault = (SecSkipPRNGReseeding == 0 ? 1 : 2);
	function automatic [AesSecSkipPRNGReseedingNonDefault - 1:0] sv2v_cast_72EB8;
		input reg [AesSecSkipPRNGReseedingNonDefault - 1:0] inp;
		sv2v_cast_72EB8 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_2
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_72EB8(1'b1);
	end
	generate
		if (SecSkipPRNGReseeding == 1) begin : gen_unused_prng_seed_done
			wire unused_prng_seed_done;
			assign unused_prng_seed_done = prng_seed_done;
		end
	endgenerate
	assign prng_seed_en = (SecSkipPRNGReseeding ? 1'b0 : reseed_req_i);
	assign reseed_ack_o = (SecSkipPRNGReseeding ? reseed_req_i : prng_seed_done);
	localparam [31:0] sv2v_uu_u_prim_bivium_prim_trivium_pkg_KeyIvWidth = 80;
	localparam [79:0] sv2v_uu_u_prim_bivium_ext_seed_key_i_0 = 1'sb0;
	localparam [79:0] sv2v_uu_u_prim_bivium_ext_seed_iv_i_0 = 1'sb0;
	localparam [0:0] sv2v_uu_u_prim_bivium_BiviumVariant = 1;
	localparam signed [31:0] sv2v_uu_u_prim_bivium_prim_trivium_pkg_BiviumStateWidth = 177;
	localparam signed [31:0] sv2v_uu_u_prim_bivium_prim_trivium_pkg_TriviumLfsrWidth = 288;
	localparam signed [31:0] sv2v_uu_u_prim_bivium_prim_trivium_pkg_TriviumStateWidth = sv2v_uu_u_prim_bivium_prim_trivium_pkg_TriviumLfsrWidth;
	localparam [31:0] sv2v_uu_u_prim_bivium_StateWidth = (sv2v_uu_u_prim_bivium_BiviumVariant ? sv2v_uu_u_prim_bivium_prim_trivium_pkg_BiviumStateWidth : sv2v_uu_u_prim_bivium_prim_trivium_pkg_TriviumStateWidth);
	localparam [sv2v_uu_u_prim_bivium_StateWidth - 1:0] sv2v_uu_u_prim_bivium_ext_seed_state_full_i_0 = 1'sb0;
	prim_trivium #(
		.BiviumVariant(1),
		.OutputWidth(Width),
		.StrictLockupProtection(!SecAllowForcingMasks),
		.SeedType(32'sd2),
		.PartialSeedWidth(EntropyWidth),
		.RndCnstTriviumLfsrSeed(RndCnstLfsrSeed)
	) u_prim_bivium(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(data_update_i),
		.allow_lockup_i(SecAllowForcingMasks & force_masks_i),
		.seed_en_i(prng_seed_en),
		.seed_done_o(prng_seed_done),
		.seed_req_o(entropy_req_o),
		.seed_ack_i(entropy_ack_i),
		.seed_key_i(sv2v_uu_u_prim_bivium_ext_seed_key_i_0),
		.seed_iv_i(sv2v_uu_u_prim_bivium_ext_seed_iv_i_0),
		.seed_state_full_i(sv2v_uu_u_prim_bivium_ext_seed_state_full_i_0),
		.seed_state_partial_i(entropy_i),
		.key_o(prng_key),
		.err_o(prng_err)
	);
	genvar _gv_b_2;
	generate
		for (_gv_b_2 = 0; _gv_b_2 < Width; _gv_b_2 = _gv_b_2 + 1) begin : gen_perm
			localparam b = _gv_b_2;
			assign data_o[b] = prng_key[RndCnstLfsrPerm[b * 8+:8]];
		end
	endgenerate
	wire unused_prng_err;
	assign unused_prng_err = prng_err;
	initial _sv2v_0 = 0;
endmodule
module aes_reduced_round (
	clk_i,
	rst_ni,
	en_i,
	out_req_o,
	out_ack_i,
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o,
	err_o
);
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] en_i;
	output wire [2:0] out_req_o;
	input wire [2:0] out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	input wire [127:0] mask_i;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	input wire [127:0] prd_i;
	output wire [127:0] data_o;
	output wire [127:0] mask_o;
	output wire err_o;
	localparam signed [31:0] NumShares = 2;
	wire [127:0] sub_bytes_out;
	wire [127:0] sb_out_mask;
	wire [127:0] shift_rows_in [0:1];
	wire [127:0] shift_rows_out [0:1];
	wire [127:0] mix_columns_out [0:1];
	aes_sub_bytes #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sub_bytes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(en_i),
		.out_req_o(out_req_o),
		.out_ack_i(out_ack_i),
		.op_i(op_i),
		.data_i(data_i),
		.mask_i(mask_i),
		.prd_i(prd_i),
		.data_o(sub_bytes_out),
		.mask_o(sb_out_mask),
		.err_o(err_o)
	);
	genvar _gv_s_18;
	generate
		for (_gv_s_18 = 0; _gv_s_18 < NumShares; _gv_s_18 = _gv_s_18 + 1) begin : gen_shares_shift_mix
			localparam s = _gv_s_18;
			if (s == 0) begin : gen_shift_in_data
				assign shift_rows_in[s] = sub_bytes_out;
			end
			else begin : gen_shift_in_mask
				assign shift_rows_in[s] = sb_out_mask;
			end
			aes_shift_rows u_aes_shift_rows(
				.op_i(op_i),
				.data_i(shift_rows_in[s]),
				.data_o(shift_rows_out[s])
			);
			aes_mix_columns u_aes_mix_columns(
				.op_i(op_i),
				.data_i(shift_rows_out[s]),
				.data_o(mix_columns_out[s])
			);
		end
	endgenerate
	assign data_o = mix_columns_out[0];
	assign mask_o = mix_columns_out[1];
endmodule
module aes_reg_status (
	clk_i,
	rst_ni,
	we_i,
	use_i,
	clear_i,
	arm_i,
	new_o,
	new_pulse_o,
	clean_o
);
	parameter signed [31:0] Width = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire [Width - 1:0] we_i;
	input wire use_i;
	input wire clear_i;
	input wire arm_i;
	output wire new_o;
	output wire new_pulse_o;
	output wire clean_o;
	wire [Width - 1:0] we_d;
	reg [Width - 1:0] we_q;
	wire armed_d;
	reg armed_q;
	wire all_written;
	wire none_written;
	wire new_d;
	reg new_q;
	wire clean_d;
	reg clean_q;
	assign we_d = (clear_i || use_i ? {Width {1'sb0}} : (armed_q && |we_i ? we_i : we_q | we_i));
	assign armed_d = (clear_i || use_i ? 1'b0 : (armed_q && |we_i ? 1'b0 : armed_q | arm_i));
	always @(posedge clk_i or negedge rst_ni) begin : reg_ops
		if (!rst_ni) begin
			we_q <= 1'sb0;
			armed_q <= 1'b0;
		end
		else begin
			we_q <= we_d;
			armed_q <= armed_d;
		end
	end
	assign all_written = &we_d;
	assign none_written = ~|we_d;
	assign new_d = (clear_i || use_i ? 1'b0 : all_written);
	assign clean_d = (clear_i ? 1'b0 : (all_written ? 1'b1 : (none_written ? clean_q : 1'b0)));
	always @(posedge clk_i or negedge rst_ni) begin : reg_status
		if (!rst_ni) begin
			new_q <= 1'b0;
			clean_q <= 1'b0;
		end
		else begin
			new_q <= new_d;
			clean_q <= clean_d;
		end
	end
	assign new_o = new_q;
	assign new_pulse_o = new_d & ~new_q;
	assign clean_o = clean_q;
endmodule
module aes_reg_top (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	tl_i,
	tl_o,
	reg2hw,
	hw2reg,
	shadowed_storage_err_o,
	shadowed_update_err_o,
	intg_err_o
);
	reg _sv2v_0;
	input clk_i;
	input rst_ni;
	input rst_shadowed_ni;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	input wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_i;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	output wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o;
	output wire [978:0] reg2hw;
	input wire [948:0] hw2reg;
	output wire shadowed_storage_err_o;
	output wire shadowed_update_err_o;
	output wire intg_err_o;
	localparam signed [31:0] AW = 8;
	localparam signed [31:0] DW = 32;
	localparam signed [31:0] DBW = 4;
	wire reg_we;
	wire reg_re;
	wire [7:0] reg_addr;
	wire [31:0] reg_wdata;
	wire [3:0] reg_be;
	wire [31:0] reg_rdata;
	wire reg_error;
	wire addrmiss;
	reg wr_err;
	reg [31:0] reg_rdata_next;
	wire reg_busy;
	wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] tl_reg_h2d;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_reg_d2h;
	wire intg_err;
	tlul_cmd_intg_chk u_chk(
		.tl_i(tl_i),
		.err_o(intg_err)
	);
	wire reg_we_err;
	reg [34:0] reg_we_check;
	prim_reg_we_check #(.OneHotWidth(35)) u_prim_reg_we_check(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.oh_i(reg_we_check),
		.en_i(reg_we && !addrmiss),
		.err_o(reg_we_err)
	);
	reg err_q;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			err_q <= 1'sb0;
		else if (intg_err || reg_we_err)
			err_q <= 1'b1;
	assign intg_err_o = (err_q | intg_err) | reg_we_err;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] tl_o_pre;
	tlul_rsp_intg_gen #(
		.EnableRspIntgGen(1),
		.EnableDataIntgGen(1)
	) u_rsp_intg_gen(
		.tl_i(tl_o_pre),
		.tl_o(tl_o)
	);
	assign tl_reg_h2d = tl_i;
	assign tl_o_pre = tl_reg_d2h;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	tlul_adapter_reg #(
		.RegAw(AW),
		.RegDw(DW),
		.EnableDataIntgGen(0)
	) u_reg_if(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_i(tl_reg_h2d),
		.tl_o(tl_reg_d2h),
		.en_ifetch_i(sv2v_cast_EECFA(4'h9)),
		.intg_error_o(),
		.we_o(reg_we),
		.re_o(reg_re),
		.addr_o(reg_addr),
		.wdata_o(reg_wdata),
		.be_o(reg_be),
		.busy_i(reg_busy),
		.rdata_i(reg_rdata),
		.error_i(reg_error)
	);
	assign reg_rdata = reg_rdata_next;
	assign reg_error = (addrmiss | wr_err) | intg_err;
	wire alert_test_we;
	wire alert_test_recov_ctrl_update_err_wd;
	wire alert_test_fatal_fault_wd;
	wire key_share0_0_we;
	wire [31:0] key_share0_0_wd;
	wire key_share0_1_we;
	wire [31:0] key_share0_1_wd;
	wire key_share0_2_we;
	wire [31:0] key_share0_2_wd;
	wire key_share0_3_we;
	wire [31:0] key_share0_3_wd;
	wire key_share0_4_we;
	wire [31:0] key_share0_4_wd;
	wire key_share0_5_we;
	wire [31:0] key_share0_5_wd;
	wire key_share0_6_we;
	wire [31:0] key_share0_6_wd;
	wire key_share0_7_we;
	wire [31:0] key_share0_7_wd;
	wire key_share1_0_we;
	wire [31:0] key_share1_0_wd;
	wire key_share1_1_we;
	wire [31:0] key_share1_1_wd;
	wire key_share1_2_we;
	wire [31:0] key_share1_2_wd;
	wire key_share1_3_we;
	wire [31:0] key_share1_3_wd;
	wire key_share1_4_we;
	wire [31:0] key_share1_4_wd;
	wire key_share1_5_we;
	wire [31:0] key_share1_5_wd;
	wire key_share1_6_we;
	wire [31:0] key_share1_6_wd;
	wire key_share1_7_we;
	wire [31:0] key_share1_7_wd;
	wire iv_0_re;
	wire iv_0_we;
	wire [31:0] iv_0_qs;
	wire [31:0] iv_0_wd;
	wire iv_1_re;
	wire iv_1_we;
	wire [31:0] iv_1_qs;
	wire [31:0] iv_1_wd;
	wire iv_2_re;
	wire iv_2_we;
	wire [31:0] iv_2_qs;
	wire [31:0] iv_2_wd;
	wire iv_3_re;
	wire iv_3_we;
	wire [31:0] iv_3_qs;
	wire [31:0] iv_3_wd;
	wire data_in_0_we;
	wire [31:0] data_in_0_wd;
	wire data_in_1_we;
	wire [31:0] data_in_1_wd;
	wire data_in_2_we;
	wire [31:0] data_in_2_wd;
	wire data_in_3_we;
	wire [31:0] data_in_3_wd;
	wire data_out_0_re;
	wire [31:0] data_out_0_qs;
	wire data_out_1_re;
	wire [31:0] data_out_1_qs;
	wire data_out_2_re;
	wire [31:0] data_out_2_qs;
	wire data_out_3_re;
	wire [31:0] data_out_3_qs;
	wire ctrl_shadowed_re;
	wire ctrl_shadowed_we;
	wire [1:0] ctrl_shadowed_operation_qs;
	wire [1:0] ctrl_shadowed_operation_wd;
	wire [5:0] ctrl_shadowed_mode_qs;
	wire [5:0] ctrl_shadowed_mode_wd;
	wire [2:0] ctrl_shadowed_key_len_qs;
	wire [2:0] ctrl_shadowed_key_len_wd;
	wire ctrl_shadowed_sideload_qs;
	wire ctrl_shadowed_sideload_wd;
	wire [2:0] ctrl_shadowed_prng_reseed_rate_qs;
	wire [2:0] ctrl_shadowed_prng_reseed_rate_wd;
	wire ctrl_shadowed_manual_operation_qs;
	wire ctrl_shadowed_manual_operation_wd;
	wire ctrl_aux_shadowed_re;
	wire ctrl_aux_shadowed_we;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_qs;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_wd;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_storage_err;
	wire ctrl_aux_shadowed_key_touch_forces_reseed_update_err;
	wire ctrl_aux_shadowed_force_masks_qs;
	wire ctrl_aux_shadowed_force_masks_wd;
	wire ctrl_aux_shadowed_force_masks_storage_err;
	wire ctrl_aux_shadowed_force_masks_update_err;
	wire ctrl_aux_regwen_we;
	wire ctrl_aux_regwen_qs;
	wire ctrl_aux_regwen_wd;
	wire trigger_we;
	wire trigger_start_wd;
	wire trigger_key_iv_data_in_clear_wd;
	wire trigger_data_out_clear_wd;
	wire trigger_prng_reseed_wd;
	wire status_idle_qs;
	wire status_stall_qs;
	wire status_output_lost_qs;
	wire status_output_valid_qs;
	wire status_input_ready_qs;
	wire status_alert_recov_ctrl_update_err_qs;
	wire status_alert_fatal_fault_qs;
	wire ctrl_gcm_shadowed_re;
	wire ctrl_gcm_shadowed_we;
	wire [5:0] ctrl_gcm_shadowed_phase_qs;
	wire [5:0] ctrl_gcm_shadowed_phase_wd;
	wire [4:0] ctrl_gcm_shadowed_num_valid_bytes_qs;
	wire [4:0] ctrl_gcm_shadowed_num_valid_bytes_wd;
	wire alert_test_qe;
	wire [1:0] alert_test_flds_we;
	assign alert_test_qe = &alert_test_flds_we;
	localparam [31:0] sv2v_uu_u_alert_test_recov_ctrl_update_err_DW = 1;
	localparam [0:0] sv2v_uu_u_alert_test_recov_ctrl_update_err_ext_d_0 = 1'sb0;
	prim_subreg_ext #(.DW(1)) u_alert_test_recov_ctrl_update_err(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_recov_ctrl_update_err_wd),
		.d(sv2v_uu_u_alert_test_recov_ctrl_update_err_ext_d_0),
		.qre(),
		.qe(alert_test_flds_we[0]),
		.q(reg2hw[976]),
		.ds(),
		.qs()
	);
	assign reg2hw[975] = alert_test_qe;
	localparam [31:0] sv2v_uu_u_alert_test_fatal_fault_DW = 1;
	localparam [0:0] sv2v_uu_u_alert_test_fatal_fault_ext_d_0 = 1'sb0;
	prim_subreg_ext #(.DW(1)) u_alert_test_fatal_fault(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_fatal_fault_wd),
		.d(sv2v_uu_u_alert_test_fatal_fault_ext_d_0),
		.qre(),
		.qe(alert_test_flds_we[1]),
		.q(reg2hw[978]),
		.ds(),
		.qs()
	);
	assign reg2hw[977] = alert_test_qe;
	wire key_share0_0_qe;
	wire [0:0] key_share0_0_flds_we;
	assign key_share0_0_qe = &key_share0_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_0(
		.re(1'b0),
		.we(key_share0_0_we),
		.wd(key_share0_0_wd),
		.d(hw2reg[724-:32]),
		.qre(),
		.qe(key_share0_0_flds_we[0]),
		.q(reg2hw[743-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[711] = key_share0_0_qe;
	wire key_share0_1_qe;
	wire [0:0] key_share0_1_flds_we;
	assign key_share0_1_qe = &key_share0_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_1(
		.re(1'b0),
		.we(key_share0_1_we),
		.wd(key_share0_1_wd),
		.d(hw2reg[756-:32]),
		.qre(),
		.qe(key_share0_1_flds_we[0]),
		.q(reg2hw[776-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[744] = key_share0_1_qe;
	wire key_share0_2_qe;
	wire [0:0] key_share0_2_flds_we;
	assign key_share0_2_qe = &key_share0_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_2(
		.re(1'b0),
		.we(key_share0_2_we),
		.wd(key_share0_2_wd),
		.d(hw2reg[788-:32]),
		.qre(),
		.qe(key_share0_2_flds_we[0]),
		.q(reg2hw[809-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[777] = key_share0_2_qe;
	wire key_share0_3_qe;
	wire [0:0] key_share0_3_flds_we;
	assign key_share0_3_qe = &key_share0_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_3(
		.re(1'b0),
		.we(key_share0_3_we),
		.wd(key_share0_3_wd),
		.d(hw2reg[820-:32]),
		.qre(),
		.qe(key_share0_3_flds_we[0]),
		.q(reg2hw[842-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[810] = key_share0_3_qe;
	wire key_share0_4_qe;
	wire [0:0] key_share0_4_flds_we;
	assign key_share0_4_qe = &key_share0_4_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_4(
		.re(1'b0),
		.we(key_share0_4_we),
		.wd(key_share0_4_wd),
		.d(hw2reg[852-:32]),
		.qre(),
		.qe(key_share0_4_flds_we[0]),
		.q(reg2hw[875-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[843] = key_share0_4_qe;
	wire key_share0_5_qe;
	wire [0:0] key_share0_5_flds_we;
	assign key_share0_5_qe = &key_share0_5_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_5(
		.re(1'b0),
		.we(key_share0_5_we),
		.wd(key_share0_5_wd),
		.d(hw2reg[884-:32]),
		.qre(),
		.qe(key_share0_5_flds_we[0]),
		.q(reg2hw[908-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[876] = key_share0_5_qe;
	wire key_share0_6_qe;
	wire [0:0] key_share0_6_flds_we;
	assign key_share0_6_qe = &key_share0_6_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_6(
		.re(1'b0),
		.we(key_share0_6_we),
		.wd(key_share0_6_wd),
		.d(hw2reg[916-:32]),
		.qre(),
		.qe(key_share0_6_flds_we[0]),
		.q(reg2hw[941-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[909] = key_share0_6_qe;
	wire key_share0_7_qe;
	wire [0:0] key_share0_7_flds_we;
	assign key_share0_7_qe = &key_share0_7_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share0_7(
		.re(1'b0),
		.we(key_share0_7_we),
		.wd(key_share0_7_wd),
		.d(hw2reg[948-:32]),
		.qre(),
		.qe(key_share0_7_flds_we[0]),
		.q(reg2hw[974-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[942] = key_share0_7_qe;
	wire key_share1_0_qe;
	wire [0:0] key_share1_0_flds_we;
	assign key_share1_0_qe = &key_share1_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_0(
		.re(1'b0),
		.we(key_share1_0_we),
		.wd(key_share1_0_wd),
		.d(hw2reg[468-:32]),
		.qre(),
		.qe(key_share1_0_flds_we[0]),
		.q(reg2hw[479-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[447] = key_share1_0_qe;
	wire key_share1_1_qe;
	wire [0:0] key_share1_1_flds_we;
	assign key_share1_1_qe = &key_share1_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_1(
		.re(1'b0),
		.we(key_share1_1_we),
		.wd(key_share1_1_wd),
		.d(hw2reg[500-:32]),
		.qre(),
		.qe(key_share1_1_flds_we[0]),
		.q(reg2hw[512-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[480] = key_share1_1_qe;
	wire key_share1_2_qe;
	wire [0:0] key_share1_2_flds_we;
	assign key_share1_2_qe = &key_share1_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_2(
		.re(1'b0),
		.we(key_share1_2_we),
		.wd(key_share1_2_wd),
		.d(hw2reg[532-:32]),
		.qre(),
		.qe(key_share1_2_flds_we[0]),
		.q(reg2hw[545-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[513] = key_share1_2_qe;
	wire key_share1_3_qe;
	wire [0:0] key_share1_3_flds_we;
	assign key_share1_3_qe = &key_share1_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_3(
		.re(1'b0),
		.we(key_share1_3_we),
		.wd(key_share1_3_wd),
		.d(hw2reg[564-:32]),
		.qre(),
		.qe(key_share1_3_flds_we[0]),
		.q(reg2hw[578-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[546] = key_share1_3_qe;
	wire key_share1_4_qe;
	wire [0:0] key_share1_4_flds_we;
	assign key_share1_4_qe = &key_share1_4_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_4(
		.re(1'b0),
		.we(key_share1_4_we),
		.wd(key_share1_4_wd),
		.d(hw2reg[596-:32]),
		.qre(),
		.qe(key_share1_4_flds_we[0]),
		.q(reg2hw[611-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[579] = key_share1_4_qe;
	wire key_share1_5_qe;
	wire [0:0] key_share1_5_flds_we;
	assign key_share1_5_qe = &key_share1_5_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_5(
		.re(1'b0),
		.we(key_share1_5_we),
		.wd(key_share1_5_wd),
		.d(hw2reg[628-:32]),
		.qre(),
		.qe(key_share1_5_flds_we[0]),
		.q(reg2hw[644-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[612] = key_share1_5_qe;
	wire key_share1_6_qe;
	wire [0:0] key_share1_6_flds_we;
	assign key_share1_6_qe = &key_share1_6_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_6(
		.re(1'b0),
		.we(key_share1_6_we),
		.wd(key_share1_6_wd),
		.d(hw2reg[660-:32]),
		.qre(),
		.qe(key_share1_6_flds_we[0]),
		.q(reg2hw[677-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[645] = key_share1_6_qe;
	wire key_share1_7_qe;
	wire [0:0] key_share1_7_flds_we;
	assign key_share1_7_qe = &key_share1_7_flds_we;
	prim_subreg_ext #(.DW(32)) u_key_share1_7(
		.re(1'b0),
		.we(key_share1_7_we),
		.wd(key_share1_7_wd),
		.d(hw2reg[692-:32]),
		.qre(),
		.qe(key_share1_7_flds_we[0]),
		.q(reg2hw[710-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[678] = key_share1_7_qe;
	wire iv_0_qe;
	wire [0:0] iv_0_flds_we;
	assign iv_0_qe = &iv_0_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_0(
		.re(iv_0_re),
		.we(iv_0_we),
		.wd(iv_0_wd),
		.d(hw2reg[340-:32]),
		.qre(),
		.qe(iv_0_flds_we[0]),
		.q(reg2hw[347-:32]),
		.ds(),
		.qs(iv_0_qs)
	);
	assign reg2hw[315] = iv_0_qe;
	wire iv_1_qe;
	wire [0:0] iv_1_flds_we;
	assign iv_1_qe = &iv_1_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_1(
		.re(iv_1_re),
		.we(iv_1_we),
		.wd(iv_1_wd),
		.d(hw2reg[372-:32]),
		.qre(),
		.qe(iv_1_flds_we[0]),
		.q(reg2hw[380-:32]),
		.ds(),
		.qs(iv_1_qs)
	);
	assign reg2hw[348] = iv_1_qe;
	wire iv_2_qe;
	wire [0:0] iv_2_flds_we;
	assign iv_2_qe = &iv_2_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_2(
		.re(iv_2_re),
		.we(iv_2_we),
		.wd(iv_2_wd),
		.d(hw2reg[404-:32]),
		.qre(),
		.qe(iv_2_flds_we[0]),
		.q(reg2hw[413-:32]),
		.ds(),
		.qs(iv_2_qs)
	);
	assign reg2hw[381] = iv_2_qe;
	wire iv_3_qe;
	wire [0:0] iv_3_flds_we;
	assign iv_3_qe = &iv_3_flds_we;
	prim_subreg_ext #(.DW(32)) u_iv_3(
		.re(iv_3_re),
		.we(iv_3_we),
		.wd(iv_3_wd),
		.d(hw2reg[436-:32]),
		.qre(),
		.qe(iv_3_flds_we[0]),
		.q(reg2hw[446-:32]),
		.ds(),
		.qs(iv_3_qs)
	);
	assign reg2hw[414] = iv_3_qe;
	wire data_in_0_qe;
	wire [0:0] data_in_0_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in0_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_0_flds_we),
		.q_o(data_in_0_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_0_we),
		.wd(data_in_0_wd),
		.de(hw2reg[177]),
		.d(hw2reg[209-:32]),
		.qe(data_in_0_flds_we[0]),
		.q(reg2hw[215-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[183] = data_in_0_qe;
	wire data_in_1_qe;
	wire [0:0] data_in_1_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in1_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_1_flds_we),
		.q_o(data_in_1_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_1_we),
		.wd(data_in_1_wd),
		.de(hw2reg[210]),
		.d(hw2reg[242-:32]),
		.qe(data_in_1_flds_we[0]),
		.q(reg2hw[248-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[216] = data_in_1_qe;
	wire data_in_2_qe;
	wire [0:0] data_in_2_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in2_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_2_flds_we),
		.q_o(data_in_2_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_2_we),
		.wd(data_in_2_wd),
		.de(hw2reg[243]),
		.d(hw2reg[275-:32]),
		.qe(data_in_2_flds_we[0]),
		.q(reg2hw[281-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[249] = data_in_2_qe;
	wire data_in_3_qe;
	wire [0:0] data_in_3_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_data_in3_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&data_in_3_flds_we),
		.q_o(data_in_3_qe)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd2),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_data_in_3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(data_in_3_we),
		.wd(data_in_3_wd),
		.de(hw2reg[276]),
		.d(hw2reg[308-:32]),
		.qe(data_in_3_flds_we[0]),
		.q(reg2hw[314-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[282] = data_in_3_qe;
	localparam [31:0] sv2v_uu_u_data_out_0_DW = 32;
	localparam [31:0] sv2v_uu_u_data_out_0_ext_wd_0 = 1'sb0;
	prim_subreg_ext #(.DW(32)) u_data_out_0(
		.re(data_out_0_re),
		.we(1'b0),
		.wd(sv2v_uu_u_data_out_0_ext_wd_0),
		.d(hw2reg[80-:32]),
		.qre(reg2hw[51]),
		.qe(),
		.q(reg2hw[83-:32]),
		.ds(),
		.qs(data_out_0_qs)
	);
	localparam [31:0] sv2v_uu_u_data_out_1_DW = 32;
	localparam [31:0] sv2v_uu_u_data_out_1_ext_wd_0 = 1'sb0;
	prim_subreg_ext #(.DW(32)) u_data_out_1(
		.re(data_out_1_re),
		.we(1'b0),
		.wd(sv2v_uu_u_data_out_1_ext_wd_0),
		.d(hw2reg[112-:32]),
		.qre(reg2hw[84]),
		.qe(),
		.q(reg2hw[116-:32]),
		.ds(),
		.qs(data_out_1_qs)
	);
	localparam [31:0] sv2v_uu_u_data_out_2_DW = 32;
	localparam [31:0] sv2v_uu_u_data_out_2_ext_wd_0 = 1'sb0;
	prim_subreg_ext #(.DW(32)) u_data_out_2(
		.re(data_out_2_re),
		.we(1'b0),
		.wd(sv2v_uu_u_data_out_2_ext_wd_0),
		.d(hw2reg[144-:32]),
		.qre(reg2hw[117]),
		.qe(),
		.q(reg2hw[149-:32]),
		.ds(),
		.qs(data_out_2_qs)
	);
	localparam [31:0] sv2v_uu_u_data_out_3_DW = 32;
	localparam [31:0] sv2v_uu_u_data_out_3_ext_wd_0 = 1'sb0;
	prim_subreg_ext #(.DW(32)) u_data_out_3(
		.re(data_out_3_re),
		.we(1'b0),
		.wd(sv2v_uu_u_data_out_3_ext_wd_0),
		.d(hw2reg[176-:32]),
		.qre(reg2hw[150]),
		.qe(),
		.q(reg2hw[182-:32]),
		.ds(),
		.qs(data_out_3_qs)
	);
	wire ctrl_shadowed_qe;
	wire [5:0] ctrl_shadowed_flds_we;
	assign ctrl_shadowed_qe = &ctrl_shadowed_flds_we;
	prim_subreg_ext #(.DW(2)) u_ctrl_shadowed_operation(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_operation_wd),
		.d(hw2reg[34-:2]),
		.qre(reg2hw[23]),
		.qe(ctrl_shadowed_flds_we[0]),
		.q(reg2hw[26-:2]),
		.ds(),
		.qs(ctrl_shadowed_operation_qs)
	);
	assign reg2hw[24] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(6)) u_ctrl_shadowed_mode(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_mode_wd),
		.d(hw2reg[40-:6]),
		.qre(reg2hw[27]),
		.qe(ctrl_shadowed_flds_we[1]),
		.q(reg2hw[34-:6]),
		.ds(),
		.qs(ctrl_shadowed_mode_qs)
	);
	assign reg2hw[28] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(3)) u_ctrl_shadowed_key_len(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_key_len_wd),
		.d(hw2reg[43-:3]),
		.qre(reg2hw[35]),
		.qe(ctrl_shadowed_flds_we[2]),
		.q(reg2hw[39-:3]),
		.ds(),
		.qs(ctrl_shadowed_key_len_qs)
	);
	assign reg2hw[36] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(1)) u_ctrl_shadowed_sideload(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_sideload_wd),
		.d(hw2reg[44]),
		.qre(reg2hw[40]),
		.qe(ctrl_shadowed_flds_we[3]),
		.q(reg2hw[42]),
		.ds(),
		.qs(ctrl_shadowed_sideload_qs)
	);
	assign reg2hw[41] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(3)) u_ctrl_shadowed_prng_reseed_rate(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_prng_reseed_rate_wd),
		.d(hw2reg[47-:3]),
		.qre(reg2hw[43]),
		.qe(ctrl_shadowed_flds_we[4]),
		.q(reg2hw[47-:3]),
		.ds(),
		.qs(ctrl_shadowed_prng_reseed_rate_qs)
	);
	assign reg2hw[44] = ctrl_shadowed_qe;
	prim_subreg_ext #(.DW(1)) u_ctrl_shadowed_manual_operation(
		.re(ctrl_shadowed_re),
		.we(ctrl_shadowed_we),
		.wd(ctrl_shadowed_manual_operation_wd),
		.d(hw2reg[48]),
		.qre(reg2hw[48]),
		.qe(ctrl_shadowed_flds_we[5]),
		.q(reg2hw[50]),
		.ds(),
		.qs(ctrl_shadowed_manual_operation_qs)
	);
	assign reg2hw[49] = ctrl_shadowed_qe;
	wire ctrl_aux_shadowed_gated_we;
	assign ctrl_aux_shadowed_gated_we = ctrl_aux_shadowed_we & ctrl_aux_regwen_qs;
	localparam signed [31:0] sv2v_uu_u_ctrl_aux_shadowed_key_touch_forces_reseed_DW = 1;
	localparam [0:0] sv2v_uu_u_ctrl_aux_shadowed_key_touch_forces_reseed_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_key_touch_forces_reseed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_key_touch_forces_reseed_wd),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_aux_shadowed_key_touch_forces_reseed_ext_d_0),
		.qe(),
		.q(reg2hw[21]),
		.ds(),
		.qs(ctrl_aux_shadowed_key_touch_forces_reseed_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_key_touch_forces_reseed_update_err),
		.err_storage(ctrl_aux_shadowed_key_touch_forces_reseed_storage_err)
	);
	localparam signed [31:0] sv2v_uu_u_ctrl_aux_shadowed_force_masks_DW = 1;
	localparam [0:0] sv2v_uu_u_ctrl_aux_shadowed_force_masks_ext_d_0 = 1'sb0;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_ctrl_aux_shadowed_force_masks(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(ctrl_aux_shadowed_re),
		.we(ctrl_aux_shadowed_gated_we),
		.wd(ctrl_aux_shadowed_force_masks_wd),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_aux_shadowed_force_masks_ext_d_0),
		.qe(),
		.q(reg2hw[22]),
		.ds(),
		.qs(ctrl_aux_shadowed_force_masks_qs),
		.phase(),
		.err_update(ctrl_aux_shadowed_force_masks_update_err),
		.err_storage(ctrl_aux_shadowed_force_masks_storage_err)
	);
	localparam signed [31:0] sv2v_uu_u_ctrl_aux_regwen_DW = 1;
	localparam [0:0] sv2v_uu_u_ctrl_aux_regwen_ext_d_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd5),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_ctrl_aux_regwen(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(ctrl_aux_regwen_we),
		.wd(ctrl_aux_regwen_wd),
		.de(1'b0),
		.d(sv2v_uu_u_ctrl_aux_regwen_ext_d_0),
		.qe(),
		.q(),
		.ds(),
		.qs(ctrl_aux_regwen_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_trigger_start(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_start_wd),
		.de(hw2reg[25]),
		.d(hw2reg[26]),
		.qe(),
		.q(reg2hw[17]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_key_iv_data_in_clear(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_key_iv_data_in_clear_wd),
		.de(hw2reg[27]),
		.d(hw2reg[28]),
		.qe(),
		.q(reg2hw[18]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_data_out_clear(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_data_out_clear_wd),
		.de(hw2reg[29]),
		.d(hw2reg[30]),
		.qe(),
		.q(reg2hw[19]),
		.ds(),
		.qs()
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd2),
		.RESVAL(1'h1),
		.Mubi(1'b0)
	) u_trigger_prng_reseed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(trigger_we),
		.wd(trigger_prng_reseed_wd),
		.de(hw2reg[31]),
		.d(hw2reg[32]),
		.qe(),
		.q(reg2hw[20]),
		.ds(),
		.qs()
	);
	localparam signed [31:0] sv2v_uu_u_status_idle_DW = 1;
	localparam [0:0] sv2v_uu_u_status_idle_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_idle(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_idle_ext_wd_0),
		.de(hw2reg[11]),
		.d(hw2reg[12]),
		.qe(),
		.q(reg2hw[15]),
		.ds(),
		.qs(status_idle_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_stall_DW = 1;
	localparam [0:0] sv2v_uu_u_status_stall_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_stall(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_stall_ext_wd_0),
		.de(hw2reg[13]),
		.d(hw2reg[14]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_stall_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_output_lost_DW = 1;
	localparam [0:0] sv2v_uu_u_status_output_lost_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_output_lost(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_output_lost_ext_wd_0),
		.de(hw2reg[15]),
		.d(hw2reg[16]),
		.qe(),
		.q(reg2hw[16]),
		.ds(),
		.qs(status_output_lost_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_output_valid_DW = 1;
	localparam [0:0] sv2v_uu_u_status_output_valid_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_output_valid(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_output_valid_ext_wd_0),
		.de(hw2reg[17]),
		.d(hw2reg[18]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_output_valid_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_input_ready_DW = 1;
	localparam [0:0] sv2v_uu_u_status_input_ready_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_input_ready(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_input_ready_ext_wd_0),
		.de(hw2reg[19]),
		.d(hw2reg[20]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_input_ready_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_alert_recov_ctrl_update_err_DW = 1;
	localparam [0:0] sv2v_uu_u_status_alert_recov_ctrl_update_err_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_alert_recov_ctrl_update_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_alert_recov_ctrl_update_err_ext_wd_0),
		.de(hw2reg[21]),
		.d(hw2reg[22]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_recov_ctrl_update_err_qs)
	);
	localparam signed [31:0] sv2v_uu_u_status_alert_fatal_fault_DW = 1;
	localparam [0:0] sv2v_uu_u_status_alert_fatal_fault_ext_wd_0 = 1'sb0;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_status_alert_fatal_fault(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(sv2v_uu_u_status_alert_fatal_fault_ext_wd_0),
		.de(hw2reg[23]),
		.d(hw2reg[24]),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_fatal_fault_qs)
	);
	wire ctrl_gcm_shadowed_qe;
	wire [1:0] ctrl_gcm_shadowed_flds_we;
	assign ctrl_gcm_shadowed_qe = &ctrl_gcm_shadowed_flds_we;
	prim_subreg_ext #(.DW(6)) u_ctrl_gcm_shadowed_phase(
		.re(ctrl_gcm_shadowed_re),
		.we(ctrl_gcm_shadowed_we),
		.wd(ctrl_gcm_shadowed_phase_wd),
		.d(hw2reg[5-:6]),
		.qre(reg2hw[0]),
		.qe(ctrl_gcm_shadowed_flds_we[0]),
		.q(reg2hw[7-:6]),
		.ds(),
		.qs(ctrl_gcm_shadowed_phase_qs)
	);
	assign reg2hw[1] = ctrl_gcm_shadowed_qe;
	prim_subreg_ext #(.DW(5)) u_ctrl_gcm_shadowed_num_valid_bytes(
		.re(ctrl_gcm_shadowed_re),
		.we(ctrl_gcm_shadowed_we),
		.wd(ctrl_gcm_shadowed_num_valid_bytes_wd),
		.d(hw2reg[10-:5]),
		.qre(reg2hw[8]),
		.qe(ctrl_gcm_shadowed_flds_we[1]),
		.q(reg2hw[14-:5]),
		.ds(),
		.qs(ctrl_gcm_shadowed_num_valid_bytes_qs)
	);
	assign reg2hw[9] = ctrl_gcm_shadowed_qe;
	reg [34:0] addr_hit;
	localparam signed [31:0] aes_reg_pkg_BlockAw = 8;
	localparam [7:0] aes_reg_pkg_AES_ALERT_TEST_OFFSET = 8'h00;
	localparam [7:0] aes_reg_pkg_AES_CTRL_AUX_REGWEN_OFFSET = 8'h7c;
	localparam [7:0] aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET = 8'h78;
	localparam [7:0] aes_reg_pkg_AES_CTRL_GCM_SHADOWED_OFFSET = 8'h88;
	localparam [7:0] aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET = 8'h74;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_0_OFFSET = 8'h54;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_1_OFFSET = 8'h58;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_2_OFFSET = 8'h5c;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_3_OFFSET = 8'h60;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_0_OFFSET = 8'h64;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_1_OFFSET = 8'h68;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_2_OFFSET = 8'h6c;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_3_OFFSET = 8'h70;
	localparam [7:0] aes_reg_pkg_AES_IV_0_OFFSET = 8'h44;
	localparam [7:0] aes_reg_pkg_AES_IV_1_OFFSET = 8'h48;
	localparam [7:0] aes_reg_pkg_AES_IV_2_OFFSET = 8'h4c;
	localparam [7:0] aes_reg_pkg_AES_IV_3_OFFSET = 8'h50;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET = 8'h04;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET = 8'h08;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET = 8'h0c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET = 8'h10;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET = 8'h14;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET = 8'h18;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET = 8'h1c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET = 8'h20;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET = 8'h24;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET = 8'h28;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET = 8'h2c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET = 8'h30;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET = 8'h34;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET = 8'h38;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET = 8'h3c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET = 8'h40;
	localparam [7:0] aes_reg_pkg_AES_STATUS_OFFSET = 8'h84;
	localparam [7:0] aes_reg_pkg_AES_TRIGGER_OFFSET = 8'h80;
	always @(*) begin
		if (_sv2v_0)
			;
		addr_hit[0] = reg_addr == aes_reg_pkg_AES_ALERT_TEST_OFFSET;
		addr_hit[1] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET;
		addr_hit[2] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET;
		addr_hit[3] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET;
		addr_hit[4] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET;
		addr_hit[5] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET;
		addr_hit[6] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET;
		addr_hit[7] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET;
		addr_hit[8] = reg_addr == aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET;
		addr_hit[9] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET;
		addr_hit[10] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET;
		addr_hit[11] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET;
		addr_hit[12] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET;
		addr_hit[13] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET;
		addr_hit[14] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET;
		addr_hit[15] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET;
		addr_hit[16] = reg_addr == aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET;
		addr_hit[17] = reg_addr == aes_reg_pkg_AES_IV_0_OFFSET;
		addr_hit[18] = reg_addr == aes_reg_pkg_AES_IV_1_OFFSET;
		addr_hit[19] = reg_addr == aes_reg_pkg_AES_IV_2_OFFSET;
		addr_hit[20] = reg_addr == aes_reg_pkg_AES_IV_3_OFFSET;
		addr_hit[21] = reg_addr == aes_reg_pkg_AES_DATA_IN_0_OFFSET;
		addr_hit[22] = reg_addr == aes_reg_pkg_AES_DATA_IN_1_OFFSET;
		addr_hit[23] = reg_addr == aes_reg_pkg_AES_DATA_IN_2_OFFSET;
		addr_hit[24] = reg_addr == aes_reg_pkg_AES_DATA_IN_3_OFFSET;
		addr_hit[25] = reg_addr == aes_reg_pkg_AES_DATA_OUT_0_OFFSET;
		addr_hit[26] = reg_addr == aes_reg_pkg_AES_DATA_OUT_1_OFFSET;
		addr_hit[27] = reg_addr == aes_reg_pkg_AES_DATA_OUT_2_OFFSET;
		addr_hit[28] = reg_addr == aes_reg_pkg_AES_DATA_OUT_3_OFFSET;
		addr_hit[29] = reg_addr == aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET;
		addr_hit[30] = reg_addr == aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET;
		addr_hit[31] = reg_addr == aes_reg_pkg_AES_CTRL_AUX_REGWEN_OFFSET;
		addr_hit[32] = reg_addr == aes_reg_pkg_AES_TRIGGER_OFFSET;
		addr_hit[33] = reg_addr == aes_reg_pkg_AES_STATUS_OFFSET;
		addr_hit[34] = reg_addr == aes_reg_pkg_AES_CTRL_GCM_SHADOWED_OFFSET;
	end
	assign addrmiss = (reg_re || reg_we ? ~|addr_hit : 1'b0);
	localparam [139:0] aes_reg_pkg_AES_PERMIT = 140'b00011111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111001100010001000100010011;
	always @(*) begin
		if (_sv2v_0)
			;
		wr_err = reg_we & (((((((((((((((((((((((((((((((((((addr_hit[0] & |(aes_reg_pkg_AES_PERMIT[136+:4] & ~reg_be)) | (addr_hit[1] & |(aes_reg_pkg_AES_PERMIT[132+:4] & ~reg_be))) | (addr_hit[2] & |(aes_reg_pkg_AES_PERMIT[128+:4] & ~reg_be))) | (addr_hit[3] & |(aes_reg_pkg_AES_PERMIT[124+:4] & ~reg_be))) | (addr_hit[4] & |(aes_reg_pkg_AES_PERMIT[120+:4] & ~reg_be))) | (addr_hit[5] & |(aes_reg_pkg_AES_PERMIT[116+:4] & ~reg_be))) | (addr_hit[6] & |(aes_reg_pkg_AES_PERMIT[112+:4] & ~reg_be))) | (addr_hit[7] & |(aes_reg_pkg_AES_PERMIT[108+:4] & ~reg_be))) | (addr_hit[8] & |(aes_reg_pkg_AES_PERMIT[104+:4] & ~reg_be))) | (addr_hit[9] & |(aes_reg_pkg_AES_PERMIT[100+:4] & ~reg_be))) | (addr_hit[10] & |(aes_reg_pkg_AES_PERMIT[96+:4] & ~reg_be))) | (addr_hit[11] & |(aes_reg_pkg_AES_PERMIT[92+:4] & ~reg_be))) | (addr_hit[12] & |(aes_reg_pkg_AES_PERMIT[88+:4] & ~reg_be))) | (addr_hit[13] & |(aes_reg_pkg_AES_PERMIT[84+:4] & ~reg_be))) | (addr_hit[14] & |(aes_reg_pkg_AES_PERMIT[80+:4] & ~reg_be))) | (addr_hit[15] & |(aes_reg_pkg_AES_PERMIT[76+:4] & ~reg_be))) | (addr_hit[16] & |(aes_reg_pkg_AES_PERMIT[72+:4] & ~reg_be))) | (addr_hit[17] & |(aes_reg_pkg_AES_PERMIT[68+:4] & ~reg_be))) | (addr_hit[18] & |(aes_reg_pkg_AES_PERMIT[64+:4] & ~reg_be))) | (addr_hit[19] & |(aes_reg_pkg_AES_PERMIT[60+:4] & ~reg_be))) | (addr_hit[20] & |(aes_reg_pkg_AES_PERMIT[56+:4] & ~reg_be))) | (addr_hit[21] & |(aes_reg_pkg_AES_PERMIT[52+:4] & ~reg_be))) | (addr_hit[22] & |(aes_reg_pkg_AES_PERMIT[48+:4] & ~reg_be))) | (addr_hit[23] & |(aes_reg_pkg_AES_PERMIT[44+:4] & ~reg_be))) | (addr_hit[24] & |(aes_reg_pkg_AES_PERMIT[40+:4] & ~reg_be))) | (addr_hit[25] & |(aes_reg_pkg_AES_PERMIT[36+:4] & ~reg_be))) | (addr_hit[26] & |(aes_reg_pkg_AES_PERMIT[32+:4] & ~reg_be))) | (addr_hit[27] & |(aes_reg_pkg_AES_PERMIT[28+:4] & ~reg_be))) | (addr_hit[28] & |(aes_reg_pkg_AES_PERMIT[24+:4] & ~reg_be))) | (addr_hit[29] & |(aes_reg_pkg_AES_PERMIT[20+:4] & ~reg_be))) | (addr_hit[30] & |(aes_reg_pkg_AES_PERMIT[16+:4] & ~reg_be))) | (addr_hit[31] & |(aes_reg_pkg_AES_PERMIT[12+:4] & ~reg_be))) | (addr_hit[32] & |(aes_reg_pkg_AES_PERMIT[8+:4] & ~reg_be))) | (addr_hit[33] & |(aes_reg_pkg_AES_PERMIT[4+:4] & ~reg_be))) | (addr_hit[34] & |(aes_reg_pkg_AES_PERMIT[0+:4] & ~reg_be)));
	end
	assign alert_test_we = (addr_hit[0] & reg_we) & !reg_error;
	assign alert_test_recov_ctrl_update_err_wd = reg_wdata[0];
	assign alert_test_fatal_fault_wd = reg_wdata[1];
	assign key_share0_0_we = (addr_hit[1] & reg_we) & !reg_error;
	assign key_share0_0_wd = reg_wdata[31:0];
	assign key_share0_1_we = (addr_hit[2] & reg_we) & !reg_error;
	assign key_share0_1_wd = reg_wdata[31:0];
	assign key_share0_2_we = (addr_hit[3] & reg_we) & !reg_error;
	assign key_share0_2_wd = reg_wdata[31:0];
	assign key_share0_3_we = (addr_hit[4] & reg_we) & !reg_error;
	assign key_share0_3_wd = reg_wdata[31:0];
	assign key_share0_4_we = (addr_hit[5] & reg_we) & !reg_error;
	assign key_share0_4_wd = reg_wdata[31:0];
	assign key_share0_5_we = (addr_hit[6] & reg_we) & !reg_error;
	assign key_share0_5_wd = reg_wdata[31:0];
	assign key_share0_6_we = (addr_hit[7] & reg_we) & !reg_error;
	assign key_share0_6_wd = reg_wdata[31:0];
	assign key_share0_7_we = (addr_hit[8] & reg_we) & !reg_error;
	assign key_share0_7_wd = reg_wdata[31:0];
	assign key_share1_0_we = (addr_hit[9] & reg_we) & !reg_error;
	assign key_share1_0_wd = reg_wdata[31:0];
	assign key_share1_1_we = (addr_hit[10] & reg_we) & !reg_error;
	assign key_share1_1_wd = reg_wdata[31:0];
	assign key_share1_2_we = (addr_hit[11] & reg_we) & !reg_error;
	assign key_share1_2_wd = reg_wdata[31:0];
	assign key_share1_3_we = (addr_hit[12] & reg_we) & !reg_error;
	assign key_share1_3_wd = reg_wdata[31:0];
	assign key_share1_4_we = (addr_hit[13] & reg_we) & !reg_error;
	assign key_share1_4_wd = reg_wdata[31:0];
	assign key_share1_5_we = (addr_hit[14] & reg_we) & !reg_error;
	assign key_share1_5_wd = reg_wdata[31:0];
	assign key_share1_6_we = (addr_hit[15] & reg_we) & !reg_error;
	assign key_share1_6_wd = reg_wdata[31:0];
	assign key_share1_7_we = (addr_hit[16] & reg_we) & !reg_error;
	assign key_share1_7_wd = reg_wdata[31:0];
	assign iv_0_re = (addr_hit[17] & reg_re) & !reg_error;
	assign iv_0_we = (addr_hit[17] & reg_we) & !reg_error;
	assign iv_0_wd = reg_wdata[31:0];
	assign iv_1_re = (addr_hit[18] & reg_re) & !reg_error;
	assign iv_1_we = (addr_hit[18] & reg_we) & !reg_error;
	assign iv_1_wd = reg_wdata[31:0];
	assign iv_2_re = (addr_hit[19] & reg_re) & !reg_error;
	assign iv_2_we = (addr_hit[19] & reg_we) & !reg_error;
	assign iv_2_wd = reg_wdata[31:0];
	assign iv_3_re = (addr_hit[20] & reg_re) & !reg_error;
	assign iv_3_we = (addr_hit[20] & reg_we) & !reg_error;
	assign iv_3_wd = reg_wdata[31:0];
	assign data_in_0_we = (addr_hit[21] & reg_we) & !reg_error;
	assign data_in_0_wd = reg_wdata[31:0];
	assign data_in_1_we = (addr_hit[22] & reg_we) & !reg_error;
	assign data_in_1_wd = reg_wdata[31:0];
	assign data_in_2_we = (addr_hit[23] & reg_we) & !reg_error;
	assign data_in_2_wd = reg_wdata[31:0];
	assign data_in_3_we = (addr_hit[24] & reg_we) & !reg_error;
	assign data_in_3_wd = reg_wdata[31:0];
	assign data_out_0_re = (addr_hit[25] & reg_re) & !reg_error;
	assign data_out_1_re = (addr_hit[26] & reg_re) & !reg_error;
	assign data_out_2_re = (addr_hit[27] & reg_re) & !reg_error;
	assign data_out_3_re = (addr_hit[28] & reg_re) & !reg_error;
	assign ctrl_shadowed_re = (addr_hit[29] & reg_re) & !reg_error;
	assign ctrl_shadowed_we = (addr_hit[29] & reg_we) & !reg_error;
	assign ctrl_shadowed_operation_wd = reg_wdata[1:0];
	assign ctrl_shadowed_mode_wd = reg_wdata[7:2];
	assign ctrl_shadowed_key_len_wd = reg_wdata[10:8];
	assign ctrl_shadowed_sideload_wd = reg_wdata[11];
	assign ctrl_shadowed_prng_reseed_rate_wd = reg_wdata[14:12];
	assign ctrl_shadowed_manual_operation_wd = reg_wdata[15];
	assign ctrl_aux_shadowed_re = (addr_hit[30] & reg_re) & !reg_error;
	assign ctrl_aux_shadowed_we = (addr_hit[30] & reg_we) & !reg_error;
	assign ctrl_aux_shadowed_key_touch_forces_reseed_wd = reg_wdata[0];
	assign ctrl_aux_shadowed_force_masks_wd = reg_wdata[1];
	assign ctrl_aux_regwen_we = (addr_hit[31] & reg_we) & !reg_error;
	assign ctrl_aux_regwen_wd = reg_wdata[0];
	assign trigger_we = (addr_hit[32] & reg_we) & !reg_error;
	assign trigger_start_wd = reg_wdata[0];
	assign trigger_key_iv_data_in_clear_wd = reg_wdata[1];
	assign trigger_data_out_clear_wd = reg_wdata[2];
	assign trigger_prng_reseed_wd = reg_wdata[3];
	assign ctrl_gcm_shadowed_re = (addr_hit[34] & reg_re) & !reg_error;
	assign ctrl_gcm_shadowed_we = (addr_hit[34] & reg_we) & !reg_error;
	assign ctrl_gcm_shadowed_phase_wd = reg_wdata[5:0];
	assign ctrl_gcm_shadowed_num_valid_bytes_wd = reg_wdata[10:6];
	always @(*) begin
		if (_sv2v_0)
			;
		reg_we_check[0] = alert_test_we;
		reg_we_check[1] = key_share0_0_we;
		reg_we_check[2] = key_share0_1_we;
		reg_we_check[3] = key_share0_2_we;
		reg_we_check[4] = key_share0_3_we;
		reg_we_check[5] = key_share0_4_we;
		reg_we_check[6] = key_share0_5_we;
		reg_we_check[7] = key_share0_6_we;
		reg_we_check[8] = key_share0_7_we;
		reg_we_check[9] = key_share1_0_we;
		reg_we_check[10] = key_share1_1_we;
		reg_we_check[11] = key_share1_2_we;
		reg_we_check[12] = key_share1_3_we;
		reg_we_check[13] = key_share1_4_we;
		reg_we_check[14] = key_share1_5_we;
		reg_we_check[15] = key_share1_6_we;
		reg_we_check[16] = key_share1_7_we;
		reg_we_check[17] = iv_0_we;
		reg_we_check[18] = iv_1_we;
		reg_we_check[19] = iv_2_we;
		reg_we_check[20] = iv_3_we;
		reg_we_check[21] = data_in_0_we;
		reg_we_check[22] = data_in_1_we;
		reg_we_check[23] = data_in_2_we;
		reg_we_check[24] = data_in_3_we;
		reg_we_check[25] = 1'b0;
		reg_we_check[26] = 1'b0;
		reg_we_check[27] = 1'b0;
		reg_we_check[28] = 1'b0;
		reg_we_check[29] = ctrl_shadowed_we;
		reg_we_check[30] = ctrl_aux_shadowed_gated_we;
		reg_we_check[31] = ctrl_aux_regwen_we;
		reg_we_check[32] = trigger_we;
		reg_we_check[33] = 1'b0;
		reg_we_check[34] = ctrl_gcm_shadowed_we;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		reg_rdata_next = 1'sb0;
		(* full_case, parallel_case *)
		case (1'b1)
			addr_hit[0]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
			end
			addr_hit[1]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[2]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[3]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[4]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[5]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[6]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[7]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[8]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[9]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[10]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[11]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[12]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[13]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[14]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[15]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[16]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[17]: reg_rdata_next[31:0] = iv_0_qs;
			addr_hit[18]: reg_rdata_next[31:0] = iv_1_qs;
			addr_hit[19]: reg_rdata_next[31:0] = iv_2_qs;
			addr_hit[20]: reg_rdata_next[31:0] = iv_3_qs;
			addr_hit[21]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[22]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[23]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[24]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[25]: reg_rdata_next[31:0] = data_out_0_qs;
			addr_hit[26]: reg_rdata_next[31:0] = data_out_1_qs;
			addr_hit[27]: reg_rdata_next[31:0] = data_out_2_qs;
			addr_hit[28]: reg_rdata_next[31:0] = data_out_3_qs;
			addr_hit[29]: begin
				reg_rdata_next[1:0] = ctrl_shadowed_operation_qs;
				reg_rdata_next[7:2] = ctrl_shadowed_mode_qs;
				reg_rdata_next[10:8] = ctrl_shadowed_key_len_qs;
				reg_rdata_next[11] = ctrl_shadowed_sideload_qs;
				reg_rdata_next[14:12] = ctrl_shadowed_prng_reseed_rate_qs;
				reg_rdata_next[15] = ctrl_shadowed_manual_operation_qs;
			end
			addr_hit[30]: begin
				reg_rdata_next[0] = ctrl_aux_shadowed_key_touch_forces_reseed_qs;
				reg_rdata_next[1] = ctrl_aux_shadowed_force_masks_qs;
			end
			addr_hit[31]: reg_rdata_next[0] = ctrl_aux_regwen_qs;
			addr_hit[32]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
				reg_rdata_next[2] = 1'sb0;
				reg_rdata_next[3] = 1'sb0;
			end
			addr_hit[33]: begin
				reg_rdata_next[0] = status_idle_qs;
				reg_rdata_next[1] = status_stall_qs;
				reg_rdata_next[2] = status_output_lost_qs;
				reg_rdata_next[3] = status_output_valid_qs;
				reg_rdata_next[4] = status_input_ready_qs;
				reg_rdata_next[5] = status_alert_recov_ctrl_update_err_qs;
				reg_rdata_next[6] = status_alert_fatal_fault_qs;
			end
			addr_hit[34]: begin
				reg_rdata_next[5:0] = ctrl_gcm_shadowed_phase_qs;
				reg_rdata_next[10:6] = ctrl_gcm_shadowed_num_valid_bytes_qs;
			end
			default: reg_rdata_next = 1'sb1;
		endcase
	end
	wire shadow_busy;
	reg rst_done;
	reg shadow_rst_done;
	always @(posedge clk_i or negedge rst_ni)
		if (!rst_ni)
			rst_done <= 1'sb0;
		else
			rst_done <= 1'b1;
	always @(posedge clk_i or negedge rst_shadowed_ni)
		if (!rst_shadowed_ni)
			shadow_rst_done <= 1'sb0;
		else
			shadow_rst_done <= 1'b1;
	assign shadow_busy = ~(rst_done & shadow_rst_done);
	assign shadowed_storage_err_o = |{ctrl_aux_shadowed_key_touch_forces_reseed_storage_err, ctrl_aux_shadowed_force_masks_storage_err};
	assign shadowed_update_err_o = |{ctrl_aux_shadowed_key_touch_forces_reseed_update_err, ctrl_aux_shadowed_force_masks_update_err};
	assign reg_busy = shadow_busy;
	wire unused_wdata;
	wire unused_be;
	assign unused_wdata = ^reg_wdata;
	assign unused_be = ^reg_be;
	initial _sv2v_0 = 0;
endmodule
module aes_sbox (
	clk_i,
	rst_ni,
	en_i,
	out_req_o,
	out_ack_i,
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o,
	prd_o
);
	reg _sv2v_0;
	parameter integer SecSBoxImpl = 32'sd0;
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	output wire out_req_o;
	input wire out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	input wire [27:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	output wire [19:0] prd_o;
	localparam signed [31:0] AesSBoxSecSBoxImplNonDefault = (SecSBoxImpl == 32'sd4 ? 1 : 2);
	function automatic [AesSBoxSecSBoxImplNonDefault - 1:0] sv2v_cast_76E97;
		input reg [AesSBoxSecSBoxImplNonDefault - 1:0] inp;
		sv2v_cast_76E97 = inp;
	endfunction
	always @(*) begin : sv2v_autoblock_1
		reg unused_assert_static_lint_error;
		if (_sv2v_0)
			;
		unused_assert_static_lint_error = sv2v_cast_76E97(1'b1);
	end
	localparam [0:0] SBoxMasked = (((SecSBoxImpl == 32'sd2) || (SecSBoxImpl == 32'sd3)) || (SecSBoxImpl == 32'sd4) ? 1'b1 : 1'b0);
	localparam [0:0] SBoxSingleCycle = (SecSBoxImpl == 32'sd4 ? 1'b0 : 1'b1);
	generate
		if (!SBoxMasked) begin : gen_sbox_unmasked
			wire unused_clk;
			wire unused_rst;
			wire [7:0] unused_mask;
			wire [27:0] unused_prd;
			assign unused_clk = clk_i;
			assign unused_rst = rst_ni;
			assign unused_mask = mask_i;
			assign unused_prd = prd_i;
			if (SecSBoxImpl == 32'sd1) begin : gen_sbox_canright
				aes_sbox_canright u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.data_o(data_o)
				);
			end
			else begin : gen_sbox_lut
				aes_sbox_lut u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.data_o(data_o)
				);
			end
			assign mask_o = 1'sb0;
			assign prd_o = 1'sb0;
		end
		else begin : gen_sbox_masked
			if (SecSBoxImpl == 32'sd4) begin : gen_sbox_dom
				aes_sbox_dom u_aes_sbox(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.en_i(en_i),
					.out_req_o(out_req_o),
					.out_ack_i(out_ack_i),
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[27:0]),
					.data_o(data_o),
					.mask_o(mask_o),
					.prd_o(prd_o)
				);
			end
			else if (SecSBoxImpl == 32'sd3) begin : gen_sbox_canright_masked_noreuse
				wire unused_clk;
				wire unused_rst;
				wire [19:0] unused_prd;
				assign unused_clk = clk_i;
				assign unused_rst = rst_ni;
				assign unused_prd = prd_i[27:aes_pkg_WidthPRDSBox];
				aes_sbox_canright_masked_noreuse u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[17:0]),
					.data_o(data_o),
					.mask_o(mask_o)
				);
				assign prd_o = 1'sb0;
			end
			else begin : gen_sbox_canright_masked
				wire unused_clk;
				wire unused_rst;
				wire [19:0] unused_prd;
				assign unused_clk = clk_i;
				assign unused_rst = rst_ni;
				assign unused_prd = prd_i[27:aes_pkg_WidthPRDSBox];
				aes_sbox_canright_masked u_aes_sbox(
					.op_i(op_i),
					.data_i(data_i),
					.mask_i(mask_i),
					.prd_i(prd_i[7:0]),
					.data_o(data_o),
					.mask_o(mask_o)
				);
				assign prd_o = 1'sb0;
			end
		end
		if (SBoxSingleCycle) begin : gen_req_singlecycle
			wire unused_out_ack;
			assign unused_out_ack = out_ack_i;
			assign out_req_o = en_i;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module aes_sbox_canright (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	output wire [7:0] data_o;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_inverse_gf2p4;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		reg [1:0] d;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], gamma[1:0]);
			c = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(a));
			d = aes_sbox_canright_pkg_aes_square_gf2p2(c ^ b);
			delta[3:2] = aes_sbox_canright_pkg_aes_mul_gf2p2(d, gamma[1:0]);
			delta[1:0] = aes_sbox_canright_pkg_aes_mul_gf2p2(d, gamma[3:2]);
			aes_inverse_gf2p4 = delta;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_square_gf2p2(gamma[1:0]);
			delta[3:2] = aes_sbox_canright_pkg_aes_square_gf2p2(a);
			delta[1:0] = aes_sbox_canright_pkg_aes_scale_omega_gf2p2(b);
			aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2 = delta;
		end
	endfunction
	function automatic [7:0] aes_inverse_gf2p8;
		input reg [7:0] gamma;
		reg [7:0] delta;
		reg [3:0] a;
		reg [3:0] b;
		reg [3:0] c;
		reg [3:0] d;
		begin
			a = gamma[7:4] ^ gamma[3:0];
			b = aes_sbox_canright_pkg_aes_mul_gf2p4(gamma[7:4], gamma[3:0]);
			c = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a);
			d = aes_inverse_gf2p4(c ^ b);
			delta[7:4] = aes_sbox_canright_pkg_aes_mul_gf2p4(d, gamma[3:0]);
			delta[3:0] = aes_sbox_canright_pkg_aes_mul_gf2p4(d, gamma[7:4]);
			aes_inverse_gf2p8 = delta;
		end
	endfunction
	wire [7:0] data_basis_x;
	wire [7:0] data_inverse;
	function automatic [7:0] aes_pkg_aes_mvm;
		input reg [7:0] vec_b;
		input reg [63:0] mat_a;
		reg [7:0] vec_c;
		begin
			vec_c = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 8; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 8; j = j + 1)
							vec_c[i] = vec_c[i] ^ (mat_a[((7 - j) * 8) + i] & vec_b[7 - j]);
					end
			end
			aes_pkg_aes_mvm = vec_c;
		end
	endfunction
	localparam [63:0] aes_sbox_canright_pkg_A2X = 64'h98f3f2480981a9ff;
	localparam [63:0] aes_sbox_canright_pkg_S2X = 64'h8c7905eb12045153;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign data_inverse = aes_inverse_gf2p8(data_basis_x);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(data_inverse, aes_sbox_canright_pkg_X2S) ^ 8'h63));
endmodule
module aes_masked_inverse_gf2p4 (
	b,
	q,
	r,
	m1,
	b_inv
);
	input wire [3:0] b;
	input wire [3:0] q;
	input wire [1:0] r;
	input wire [3:0] m1;
	output wire [3:0] b_inv;
	wire [1:0] b1;
	wire [1:0] b0;
	wire [1:0] q1;
	wire [1:0] q0;
	wire [1:0] c_inv;
	wire [1:0] r_sq;
	wire [1:0] m11;
	wire [1:0] m10;
	assign b1 = b[3:2];
	assign b0 = b[1:0];
	assign q1 = q[3:2];
	assign q0 = q[1:0];
	assign m11 = m1[3:2];
	assign m10 = m1[1:0];
	wire [1:0] mul_b0_q1;
	wire [1:0] mul_b1_q0;
	wire [1:0] mul_q1_q0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	assign mul_b0_q1 = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, q1);
	assign mul_b1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, q0);
	assign mul_q1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, q0);
	wire [1:0] mul_b0_q1_buf;
	wire [1:0] mul_b1_q0_buf;
	wire [1:0] mul_q1_q0_buf;
	prim_buf #(.Width(6)) u_prim_buf_mul_bq01(
		.in_i({mul_b0_q1, mul_b1_q0, mul_q1_q0}),
		.out_o({mul_b0_q1_buf, mul_b1_q0_buf, mul_q1_q0_buf})
	);
	wire [1:0] scale_omega2_b;
	wire [1:0] scale_omega2_q;
	wire [1:0] mul_b1_b0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	assign scale_omega2_b = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(b1 ^ b0));
	assign scale_omega2_q = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(q1 ^ q0));
	assign mul_b1_b0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, b0);
	wire [1:0] scale_omega2_b_buf;
	wire [1:0] scale_omega2_q_buf;
	prim_buf #(.Width(4)) u_prim_buf_scale_omega2_bq(
		.in_i({scale_omega2_b, scale_omega2_q}),
		.out_o({scale_omega2_b_buf, scale_omega2_q_buf})
	);
	wire [1:0] mul_b1_b0_buf;
	prim_buf #(.Width(2)) u_prim_buf_mul_b1_b0(
		.in_i(mul_b1_b0),
		.out_o(mul_b1_b0_buf)
	);
	wire [1:0] c [0:5];
	wire [1:0] c_buf [0:5];
	assign c[0] = r ^ scale_omega2_b_buf;
	assign c[1] = c_buf[0] ^ scale_omega2_q_buf;
	assign c[2] = c_buf[1] ^ mul_b1_b0_buf;
	assign c[3] = c_buf[2] ^ mul_b1_q0_buf;
	assign c[4] = c_buf[3] ^ mul_b0_q1_buf;
	assign c[5] = c_buf[4] ^ mul_q1_q0_buf;
	genvar _gv_i_27;
	generate
		for (_gv_i_27 = 0; _gv_i_27 < 6; _gv_i_27 = _gv_i_27 + 1) begin : gen_c_buf
			localparam i = _gv_i_27;
			prim_buf #(.Width(2)) u_prim_buf_c_i(
				.in_i(c[i]),
				.out_o(c_buf[i])
			);
		end
	endgenerate
	assign c_inv = aes_sbox_canright_pkg_aes_square_gf2p2(c_buf[5]);
	assign r_sq = aes_sbox_canright_pkg_aes_square_gf2p2(r);
	wire [1:0] xor_q1_r_sq;
	wire [1:0] xor_q0_q1;
	wire [1:0] c1_inv;
	wire [1:0] c2_inv;
	prim_xor2 #(.Width(2)) u_prim_xor_q1_r_sq(
		.in0_i(q1),
		.in1_i(r_sq),
		.out_o(xor_q1_r_sq)
	);
	prim_xor2 #(.Width(2)) u_prim_xor_q0_q1(
		.in0_i(q0),
		.in1_i(q1),
		.out_o(xor_q0_q1)
	);
	prim_xor2 #(.Width(2)) u_prim_c1_inv(
		.in0_i(xor_q1_r_sq),
		.in1_i(c_inv),
		.out_o(c1_inv)
	);
	prim_xor2 #(.Width(2)) u_prim_c2_inv(
		.in0_i(c1_inv),
		.in1_i(xor_q0_q1),
		.out_o(c2_inv)
	);
	wire [1:0] mul_b0_c1_inv;
	wire [1:0] mul_q0_c1_inv;
	wire [1:0] mul_b1_c2_inv;
	wire [1:0] mul_q1_c2_inv;
	assign mul_b0_c1_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, c1_inv);
	assign mul_q0_c1_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q0, c1_inv);
	assign mul_b1_c2_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, c2_inv);
	assign mul_q1_c2_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, c2_inv);
	wire [1:0] mul_b0_c1_inv_buf;
	wire [1:0] mul_q0_c1_inv_buf;
	wire [1:0] mul_b1_c2_inv_buf;
	wire [1:0] mul_q1_c2_inv_buf;
	prim_buf #(.Width(8)) u_prim_buf_mul_bq01_c12_inv(
		.in_i({mul_b0_c1_inv, mul_q0_c1_inv, mul_b1_c2_inv, mul_q1_c2_inv}),
		.out_o({mul_b0_c1_inv_buf, mul_q0_c1_inv_buf, mul_b1_c2_inv_buf, mul_q1_c2_inv_buf})
	);
	wire [1:0] b1_inv [0:3];
	wire [1:0] b1_inv_buf [0:3];
	wire [1:0] b0_inv [0:3];
	wire [1:0] b0_inv_buf [0:3];
	assign b1_inv[0] = m11 ^ mul_b0_c1_inv_buf;
	assign b1_inv[1] = b1_inv_buf[0] ^ mul_b0_q1_buf;
	assign b1_inv[2] = b1_inv_buf[1] ^ mul_q0_c1_inv_buf;
	assign b1_inv[3] = b1_inv_buf[2] ^ mul_q1_q0_buf;
	assign b0_inv[0] = m10 ^ mul_b1_c2_inv_buf;
	assign b0_inv[1] = b0_inv_buf[0] ^ mul_b1_q0_buf;
	assign b0_inv[2] = b0_inv_buf[1] ^ mul_q1_c2_inv_buf;
	assign b0_inv[3] = b0_inv_buf[2] ^ mul_q1_q0_buf;
	genvar _gv_i_28;
	generate
		for (_gv_i_28 = 0; _gv_i_28 < 4; _gv_i_28 = _gv_i_28 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_28;
			prim_buf #(.Width(2)) u_prim_buf_b1_inv_i(
				.in_i(b1_inv[i]),
				.out_o(b1_inv_buf[i])
			);
			prim_buf #(.Width(2)) u_prim_buf_b0_inv_i(
				.in_i(b0_inv[i]),
				.out_o(b0_inv_buf[i])
			);
		end
	endgenerate
	assign b_inv = {b1_inv_buf[3], b0_inv_buf[3]};
endmodule
module aes_masked_inverse_gf2p8 (
	a,
	m,
	n,
	a_inv
);
	input wire [7:0] a;
	input wire [7:0] m;
	input wire [7:0] n;
	output wire [7:0] a_inv;
	wire [3:0] a1;
	wire [3:0] a0;
	wire [3:0] m1;
	wire [3:0] m0;
	wire [3:0] q;
	wire [3:0] b_inv;
	wire [3:0] s1;
	wire [3:0] s0;
	wire [1:0] r;
	assign a1 = a[7:4];
	assign a0 = a[3:0];
	assign m1 = m[7:4];
	assign m0 = m[3:0];
	assign r = m1[3:2];
	assign q = n[7:4];
	assign s1 = n[7:4];
	assign s0 = n[3:0];
	wire [3:0] mul_a0_m1;
	wire [3:0] mul_a1_m0;
	wire [3:0] mul_m0_m1;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	assign mul_a0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, m1);
	assign mul_a1_m0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, m0);
	assign mul_m0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, m1);
	wire [3:0] mul_a0_m1_buf;
	wire [3:0] mul_a1_m0_buf;
	wire [3:0] mul_m0_m1_buf;
	prim_buf #(.Width(12)) u_prim_buf_mul_bq01(
		.in_i({mul_a0_m1, mul_a1_m0, mul_m0_m1}),
		.out_o({mul_a0_m1_buf, mul_a1_m0_buf, mul_m0_m1_buf})
	);
	wire [3:0] ss_a1_a0;
	wire [3:0] ss_m1_m0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_square_gf2p2(gamma[1:0]);
			delta[3:2] = aes_sbox_canright_pkg_aes_square_gf2p2(a);
			delta[1:0] = aes_sbox_canright_pkg_aes_scale_omega_gf2p2(b);
			aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2 = delta;
		end
	endfunction
	assign ss_a1_a0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a1 ^ a0);
	assign ss_m1_m0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(m1 ^ m0);
	wire [3:0] mul_a1_a0;
	assign mul_a1_a0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, a0);
	wire [3:0] mul_a1_a0_buf;
	prim_buf #(.Width(4)) u_prim_buf_mul_am01(
		.in_i(mul_a1_a0),
		.out_o(mul_a1_a0_buf)
	);
	wire [3:0] b [0:5];
	wire [3:0] b_buf [0:5];
	assign b[0] = q ^ ss_a1_a0;
	assign b[1] = b_buf[0] ^ ss_m1_m0;
	assign b[2] = b_buf[1] ^ mul_a1_a0_buf;
	assign b[3] = b_buf[2] ^ mul_a1_m0_buf;
	assign b[4] = b_buf[3] ^ mul_a0_m1_buf;
	assign b[5] = b_buf[4] ^ mul_m0_m1_buf;
	genvar _gv_i_29;
	generate
		for (_gv_i_29 = 0; _gv_i_29 < 6; _gv_i_29 = _gv_i_29 + 1) begin : gen_b_buf
			localparam i = _gv_i_29;
			prim_buf #(.Width(4)) u_prim_buf_b_i(
				.in_i(b[i]),
				.out_o(b_buf[i])
			);
		end
	endgenerate
	aes_masked_inverse_gf2p4 u_aes_masked_inverse_gf2p4(
		.b(b_buf[5]),
		.q(q),
		.r(r),
		.m1(m1),
		.b_inv(b_inv)
	);
	wire [3:0] b_inv_buf;
	prim_buf #(.Width(4)) u_prim_buf_b_inv(
		.in_i(b_inv),
		.out_o(b_inv_buf)
	);
	wire [3:0] xor_m1_m0;
	wire [3:0] b2_inv;
	prim_xor2 #(.Width(4)) u_prim_xor_m1_m0(
		.in0_i(m1),
		.in1_i(m0),
		.out_o(xor_m1_m0)
	);
	prim_xor2 #(.Width(4)) u_prim_xor_b2_inv(
		.in0_i(b_inv_buf),
		.in1_i(xor_m1_m0),
		.out_o(b2_inv)
	);
	wire [3:0] mul_a0_b_inv;
	wire [3:0] mul_m0_b_inv;
	wire [3:0] mul_a1_b2_inv;
	wire [3:0] mul_m1_b2_inv;
	assign mul_a0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, b_inv_buf);
	assign mul_m0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, b_inv_buf);
	assign mul_a1_b2_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, b2_inv);
	assign mul_m1_b2_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m1, b2_inv);
	wire [3:0] mul_a0_b_inv_buf;
	wire [3:0] mul_m0_b_inv_buf;
	wire [3:0] mul_a1_b2_inv_buf;
	wire [3:0] mul_m1_b2_inv_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_bq01_c12_inv(
		.in_i({mul_a0_b_inv, mul_m0_b_inv, mul_a1_b2_inv, mul_m1_b2_inv}),
		.out_o({mul_a0_b_inv_buf, mul_m0_b_inv_buf, mul_a1_b2_inv_buf, mul_m1_b2_inv_buf})
	);
	wire [3:0] a1_inv [0:3];
	wire [3:0] a1_inv_buf [0:3];
	wire [3:0] a0_inv [0:3];
	wire [3:0] a0_inv_buf [0:3];
	assign a1_inv[0] = s1 ^ mul_a0_b_inv_buf;
	assign a1_inv[1] = a1_inv_buf[0] ^ mul_a0_m1_buf;
	assign a1_inv[2] = a1_inv_buf[1] ^ mul_m0_b_inv_buf;
	assign a1_inv[3] = a1_inv_buf[2] ^ mul_m0_m1_buf;
	assign a0_inv[0] = s0 ^ mul_a1_b2_inv_buf;
	assign a0_inv[1] = a0_inv_buf[0] ^ mul_a1_m0_buf;
	assign a0_inv[2] = a0_inv_buf[1] ^ mul_m1_b2_inv_buf;
	assign a0_inv[3] = a0_inv_buf[2] ^ mul_m0_m1_buf;
	genvar _gv_i_30;
	generate
		for (_gv_i_30 = 0; _gv_i_30 < 4; _gv_i_30 = _gv_i_30 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_30;
			prim_buf #(.Width(4)) u_prim_buf_a1_inv_i(
				.in_i(a1_inv[i]),
				.out_o(a1_inv_buf[i])
			);
			prim_buf #(.Width(4)) u_prim_buf_a0_inv_i(
				.in_i(a0_inv[i]),
				.out_o(a0_inv_buf[i])
			);
		end
	endgenerate
	assign a_inv = {a1_inv_buf[3], a0_inv_buf[3]};
endmodule
module aes_sbox_canright_masked (
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	input wire [7:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	wire [7:0] in_data_basis_x;
	wire [7:0] out_data_basis_x;
	wire [7:0] in_mask_basis_x;
	wire [7:0] out_mask_basis_x;
	function automatic [7:0] aes_pkg_aes_mvm;
		input reg [7:0] vec_b;
		input reg [63:0] mat_a;
		reg [7:0] vec_c;
		begin
			vec_c = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 8; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 8; j = j + 1)
							vec_c[i] = vec_c[i] ^ (mat_a[((7 - j) * 8) + i] & vec_b[7 - j]);
					end
			end
			aes_pkg_aes_mvm = vec_c;
		end
	endfunction
	localparam [63:0] aes_sbox_canright_pkg_A2X = 64'h98f3f2480981a9ff;
	localparam [63:0] aes_sbox_canright_pkg_S2X = 64'h8c7905eb12045153;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign in_data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign mask_o = prd_i;
	assign in_mask_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X)));
	assign out_mask_basis_x = (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X)));
	aes_masked_inverse_gf2p8 u_aes_masked_inverse_gf2p8(
		.a(in_data_basis_x),
		.m(in_mask_basis_x),
		.n(out_mask_basis_x),
		.a_inv(out_data_basis_x)
	);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63));
endmodule
module aes_masked_inverse_gf2p4_noreuse (
	b,
	q,
	r,
	t,
	b_inv
);
	input wire [3:0] b;
	input wire [3:0] q;
	input wire [1:0] r;
	input wire [3:0] t;
	output wire [3:0] b_inv;
	wire [1:0] b1;
	wire [1:0] b0;
	wire [1:0] q1;
	wire [1:0] q0;
	wire [1:0] c_inv;
	wire [1:0] r_sq;
	wire [1:0] t1;
	wire [1:0] t0;
	assign b1 = b[3:2];
	assign b0 = b[1:0];
	assign q1 = q[3:2];
	assign q0 = q[1:0];
	assign t1 = t[3:2];
	assign t0 = t[1:0];
	wire [1:0] scale_omega2_b;
	wire [1:0] scale_omega2_q;
	wire [1:0] mul_b1_b0;
	wire [1:0] mul_b1_q0;
	wire [1:0] mul_b0_q1;
	wire [1:0] mul_q1_q0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	assign scale_omega2_b = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(b1 ^ b0));
	assign scale_omega2_q = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(q1 ^ q0));
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	assign mul_b1_b0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, b0);
	assign mul_b1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, q0);
	assign mul_b0_q1 = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, q1);
	assign mul_q1_q0 = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, q0);
	wire [1:0] scale_omega2_b_buf;
	wire [1:0] scale_omega2_q_buf;
	prim_buf #(.Width(4)) u_prim_buf_scale_omega2_bq(
		.in_i({scale_omega2_b, scale_omega2_q}),
		.out_o({scale_omega2_b_buf, scale_omega2_q_buf})
	);
	wire [1:0] mul_b1_b0_buf;
	wire [1:0] mul_b1_q0_buf;
	wire [1:0] mul_b0_q1_buf;
	wire [1:0] mul_q1_q0_buf;
	prim_buf #(.Width(8)) u_prim_buf_mul_bq01(
		.in_i({mul_b1_b0, mul_b1_q0, mul_b0_q1, mul_q1_q0}),
		.out_o({mul_b1_b0_buf, mul_b1_q0_buf, mul_b0_q1_buf, mul_q1_q0_buf})
	);
	wire [1:0] c [0:5];
	wire [1:0] c_buf [0:5];
	assign c[0] = r ^ scale_omega2_b_buf;
	assign c[1] = c_buf[0] ^ scale_omega2_q_buf;
	assign c[2] = c_buf[1] ^ mul_b1_b0_buf;
	assign c[3] = c_buf[2] ^ mul_b1_q0_buf;
	assign c[4] = c_buf[3] ^ mul_b0_q1_buf;
	assign c[5] = c_buf[4] ^ mul_q1_q0_buf;
	genvar _gv_i_31;
	generate
		for (_gv_i_31 = 0; _gv_i_31 < 6; _gv_i_31 = _gv_i_31 + 1) begin : gen_c_buf
			localparam i = _gv_i_31;
			prim_buf #(.Width(2)) u_prim_buf_c_i(
				.in_i(c[i]),
				.out_o(c_buf[i])
			);
		end
	endgenerate
	assign c_inv = aes_sbox_canright_pkg_aes_square_gf2p2(c_buf[5]);
	assign r_sq = aes_sbox_canright_pkg_aes_square_gf2p2(r);
	wire [1:0] mul_b0_r_sq;
	wire [1:0] mul_q0_c_inv;
	wire [1:0] mul_q0_r_sq;
	wire [1:0] mul_b1_r_sq;
	wire [1:0] mul_q1_c_inv;
	wire [1:0] mul_q1_r_sq;
	assign mul_b0_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(b0, r_sq);
	assign mul_q0_c_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q0, c_inv);
	assign mul_q0_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(q0, r_sq);
	assign mul_b1_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(b1, r_sq);
	assign mul_q1_c_inv = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, c_inv);
	assign mul_q1_r_sq = aes_sbox_canright_pkg_aes_mul_gf2p2(q1, r_sq);
	wire [1:0] mul_b0_r_sq_buf;
	wire [1:0] mul_q0_c_inv_buf;
	wire [1:0] mul_q0_r_sq_buf;
	prim_buf #(.Width(6)) u_prim_buf_mul_bq0(
		.in_i({mul_b0_r_sq, mul_q0_c_inv, mul_q0_r_sq}),
		.out_o({mul_b0_r_sq_buf, mul_q0_c_inv_buf, mul_q0_r_sq_buf})
	);
	wire [1:0] mul_b1_r_sq_buf;
	wire [1:0] mul_q1_c_inv_buf;
	wire [1:0] mul_q1_r_sq_buf;
	prim_buf #(.Width(6)) u_prim_buf_mul_bq1(
		.in_i({mul_b1_r_sq, mul_q1_c_inv, mul_q1_r_sq}),
		.out_o({mul_b1_r_sq_buf, mul_q1_c_inv_buf, mul_q1_r_sq_buf})
	);
	wire [1:0] b1_inv [0:3];
	wire [1:0] b1_inv_buf [0:3];
	wire [1:0] b0_inv [0:3];
	wire [1:0] b0_inv_buf [0:3];
	assign b1_inv[0] = t1 ^ aes_sbox_canright_pkg_aes_mul_gf2p2(b0, c_inv);
	assign b1_inv[1] = b1_inv_buf[0] ^ mul_b0_r_sq_buf;
	assign b1_inv[2] = b1_inv_buf[1] ^ mul_q0_c_inv_buf;
	assign b1_inv[3] = b1_inv_buf[2] ^ mul_q0_r_sq_buf;
	assign b0_inv[0] = t0 ^ aes_sbox_canright_pkg_aes_mul_gf2p2(b1, c_inv);
	assign b0_inv[1] = b0_inv_buf[0] ^ mul_b1_r_sq_buf;
	assign b0_inv[2] = b0_inv_buf[1] ^ mul_q1_c_inv_buf;
	assign b0_inv[3] = b0_inv_buf[2] ^ mul_q1_r_sq_buf;
	genvar _gv_i_32;
	generate
		for (_gv_i_32 = 0; _gv_i_32 < 4; _gv_i_32 = _gv_i_32 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_32;
			prim_buf #(.Width(2)) u_prim_buf_b1_inv_i(
				.in_i(b1_inv[i]),
				.out_o(b1_inv_buf[i])
			);
			prim_buf #(.Width(2)) u_prim_buf_b0_inv_i(
				.in_i(b0_inv[i]),
				.out_o(b0_inv_buf[i])
			);
		end
	endgenerate
	assign b_inv = {b1_inv_buf[3], b0_inv_buf[3]};
endmodule
module aes_masked_inverse_gf2p8_noreuse (
	a,
	m,
	n,
	prd,
	a_inv
);
	input wire [7:0] a;
	input wire [7:0] m;
	input wire [7:0] n;
	input wire [9:0] prd;
	output wire [7:0] a_inv;
	wire [3:0] a1;
	wire [3:0] a0;
	wire [3:0] m1;
	wire [3:0] m0;
	wire [3:0] q;
	wire [3:0] b_inv;
	wire [3:0] s1;
	wire [3:0] s0;
	wire [3:0] t;
	wire [1:0] r;
	assign a1 = a[7:4];
	assign a0 = a[3:0];
	assign m1 = m[7:4];
	assign m0 = m[3:0];
	assign r = prd[1:0];
	assign q = prd[5:2];
	assign t = prd[9:6];
	assign s1 = n[7:4];
	assign s0 = n[3:0];
	wire [3:0] ss_a1_a0;
	wire [3:0] ss_m1_m0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_square_gf2p2(gamma[1:0]);
			delta[3:2] = aes_sbox_canright_pkg_aes_square_gf2p2(a);
			delta[1:0] = aes_sbox_canright_pkg_aes_scale_omega_gf2p2(b);
			aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2 = delta;
		end
	endfunction
	assign ss_a1_a0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a1 ^ a0);
	assign ss_m1_m0 = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(m1 ^ m0);
	wire [3:0] mul_a1_a0;
	wire [3:0] mul_a1_m0;
	wire [3:0] mul_a0_m1;
	wire [3:0] mul_m0_m1;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	assign mul_a1_a0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, a0);
	assign mul_a1_m0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, m0);
	assign mul_a0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, m1);
	assign mul_m0_m1 = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, m1);
	wire [3:0] mul_a1_a0_buf;
	wire [3:0] mul_a1_m0_buf;
	wire [3:0] mul_a0_m1_buf;
	wire [3:0] mul_m0_m1_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am01(
		.in_i({mul_a1_a0, mul_a1_m0, mul_a0_m1, mul_m0_m1}),
		.out_o({mul_a1_a0_buf, mul_a1_m0_buf, mul_a0_m1_buf, mul_m0_m1_buf})
	);
	wire [3:0] b [0:5];
	wire [3:0] b_buf [0:5];
	assign b[0] = q ^ ss_a1_a0;
	assign b[1] = b_buf[0] ^ ss_m1_m0;
	assign b[2] = b_buf[1] ^ mul_a1_a0_buf;
	assign b[3] = b_buf[2] ^ mul_a1_m0_buf;
	assign b[4] = b_buf[3] ^ mul_a0_m1_buf;
	assign b[5] = b_buf[4] ^ mul_m0_m1_buf;
	genvar _gv_i_33;
	generate
		for (_gv_i_33 = 0; _gv_i_33 < 6; _gv_i_33 = _gv_i_33 + 1) begin : gen_b_buf
			localparam i = _gv_i_33;
			prim_buf #(.Width(4)) u_prim_buf_b_i(
				.in_i(b[i]),
				.out_o(b_buf[i])
			);
		end
	endgenerate
	aes_masked_inverse_gf2p4_noreuse u_aes_masked_inverse_gf2p4(
		.b(b_buf[5]),
		.q(q),
		.r(r),
		.t(t),
		.b_inv(b_inv)
	);
	wire [3:0] b_inv_buf;
	prim_buf #(.Width(4)) u_prim_buf_b_inv(
		.in_i(b_inv),
		.out_o(b_inv_buf)
	);
	wire [3:0] mul_a0_b_inv;
	wire [3:0] mul_a0_t;
	wire [3:0] mul_m0_b_inv;
	wire [3:0] mul_m0_t;
	wire [3:0] mul_a1_b_inv;
	wire [3:0] mul_a1_t;
	wire [3:0] mul_m1_b_inv;
	wire [3:0] mul_m1_t;
	assign mul_a0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, b_inv_buf);
	assign mul_a0_t = aes_sbox_canright_pkg_aes_mul_gf2p4(a0, t);
	assign mul_m0_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, b_inv_buf);
	assign mul_m0_t = aes_sbox_canright_pkg_aes_mul_gf2p4(m0, t);
	assign mul_a1_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, b_inv_buf);
	assign mul_a1_t = aes_sbox_canright_pkg_aes_mul_gf2p4(a1, t);
	assign mul_m1_b_inv = aes_sbox_canright_pkg_aes_mul_gf2p4(m1, b_inv_buf);
	assign mul_m1_t = aes_sbox_canright_pkg_aes_mul_gf2p4(m1, t);
	wire [3:0] mul_a0_b_inv_buf;
	wire [3:0] mul_a0_t_buf;
	wire [3:0] mul_m0_b_inv_buf;
	wire [3:0] mul_m0_t_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am0(
		.in_i({mul_a0_b_inv, mul_a0_t, mul_m0_b_inv, mul_m0_t}),
		.out_o({mul_a0_b_inv_buf, mul_a0_t_buf, mul_m0_b_inv_buf, mul_m0_t_buf})
	);
	wire [3:0] mul_a1_b_inv_buf;
	wire [3:0] mul_a1_t_buf;
	wire [3:0] mul_m1_b_inv_buf;
	wire [3:0] mul_m1_t_buf;
	prim_buf #(.Width(16)) u_prim_buf_mul_am1(
		.in_i({mul_a1_b_inv, mul_a1_t, mul_m1_b_inv, mul_m1_t}),
		.out_o({mul_a1_b_inv_buf, mul_a1_t_buf, mul_m1_b_inv_buf, mul_m1_t_buf})
	);
	wire [3:0] a1_inv [0:3];
	wire [3:0] a1_inv_buf [0:3];
	wire [3:0] a0_inv [0:3];
	wire [3:0] a0_inv_buf [0:3];
	assign a1_inv[0] = s1 ^ mul_a0_b_inv_buf;
	assign a1_inv[1] = a1_inv_buf[0] ^ mul_a0_t_buf;
	assign a1_inv[2] = a1_inv_buf[1] ^ mul_m0_b_inv_buf;
	assign a1_inv[3] = a1_inv_buf[2] ^ mul_m0_t_buf;
	assign a0_inv[0] = s0 ^ mul_a1_b_inv_buf;
	assign a0_inv[1] = a0_inv_buf[0] ^ mul_a1_t_buf;
	assign a0_inv[2] = a0_inv_buf[1] ^ mul_m1_b_inv_buf;
	assign a0_inv[3] = a0_inv_buf[2] ^ mul_m1_t_buf;
	genvar _gv_i_34;
	generate
		for (_gv_i_34 = 0; _gv_i_34 < 4; _gv_i_34 = _gv_i_34 + 1) begin : gen_a01_inv_buf
			localparam i = _gv_i_34;
			prim_buf #(.Width(4)) u_prim_buf_a1_inv_i(
				.in_i(a1_inv[i]),
				.out_o(a1_inv_buf[i])
			);
			prim_buf #(.Width(4)) u_prim_buf_a0_inv_i(
				.in_i(a0_inv[i]),
				.out_o(a0_inv_buf[i])
			);
		end
	endgenerate
	assign a_inv = {a1_inv_buf[3], a0_inv_buf[3]};
endmodule
module aes_sbox_canright_masked_noreuse (
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	input wire [17:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	wire [7:0] in_data_basis_x;
	wire [7:0] out_data_basis_x;
	wire [7:0] in_mask_basis_x;
	wire [7:0] out_mask_basis_x;
	function automatic [7:0] aes_pkg_aes_mvm;
		input reg [7:0] vec_b;
		input reg [63:0] mat_a;
		reg [7:0] vec_c;
		begin
			vec_c = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 8; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 8; j = j + 1)
							vec_c[i] = vec_c[i] ^ (mat_a[((7 - j) * 8) + i] & vec_b[7 - j]);
					end
			end
			aes_pkg_aes_mvm = vec_c;
		end
	endfunction
	localparam [63:0] aes_sbox_canright_pkg_A2X = 64'h98f3f2480981a9ff;
	localparam [63:0] aes_sbox_canright_pkg_S2X = 64'h8c7905eb12045153;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign in_data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign mask_o = prd_i[7:0];
	wire [9:0] prd_masking;
	assign prd_masking = prd_i[17:8];
	assign in_mask_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X)));
	assign out_mask_basis_x = (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_o, aes_sbox_canright_pkg_S2X)));
	aes_masked_inverse_gf2p8_noreuse u_aes_masked_inverse_gf2p8(
		.a(in_data_basis_x),
		.m(in_mask_basis_x),
		.n(out_mask_basis_x),
		.prd(prd_masking),
		.a_inv(out_data_basis_x)
	);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63));
endmodule
module aes_dom_indep_mul_gf2pn (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	z_0,
	a_q,
	b_q
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] z_0;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	wire [NPower - 1:0] mul_ax_ay_d;
	wire [NPower - 1:0] mul_bx_by_d;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	generate
		if (NPower == 4) begin : gen_inner_mul_gf2p4
			assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, a_y);
			assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x, b_y);
		end
		else begin : gen_inner_mul_gf2p2
			assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, a_y);
			assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x, b_y);
		end
	endgenerate
	wire [NPower - 1:0] mul_ax_by;
	wire [NPower - 1:0] mul_ay_bx;
	generate
		if (NPower == 4) begin : gen_cross_mul_gf2p4
			assign mul_ax_by = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, b_y);
			assign mul_ay_bx = aes_sbox_canright_pkg_aes_mul_gf2p4(a_y, b_x);
		end
		else begin : gen_cross_mul_gf2p2
			assign mul_ax_by = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, b_y);
			assign mul_ay_bx = aes_sbox_canright_pkg_aes_mul_gf2p2(a_y, b_x);
		end
	endgenerate
	wire [NPower - 1:0] aq_z0_d;
	wire [NPower - 1:0] bq_z0_d;
	wire [NPower - 1:0] aq_z0_q;
	wire [NPower - 1:0] bq_z0_q;
	assign aq_z0_d = z_0 ^ mul_ax_by;
	assign bq_z0_d = z_0 ^ mul_ay_bx;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_abq_z0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({aq_z0_d, bq_z0_d}),
		.q_o({aq_z0_q, bq_z0_q})
	);
	wire [NPower - 1:0] mul_ax_ay;
	wire [NPower - 1:0] mul_bx_by;
	generate
		if (Pipeline == 1'b1) begin : gen_pipeline
			wire [NPower - 1:0] mul_ax_ay_q;
			wire [NPower - 1:0] mul_bx_by_q;
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_mul_abx_aby(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({mul_ax_ay_d, mul_bx_by_d}),
				.q_o({mul_ax_ay_q, mul_bx_by_q})
			);
			assign mul_ax_ay = mul_ax_ay_q;
			assign mul_bx_by = mul_bx_by_q;
		end
		else begin : gen_no_pipeline
			wire [NPower - 1:0] mul_ax_ay_buf;
			wire [NPower - 1:0] mul_bx_by_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_aby(
				.in_i({mul_ax_ay_d, mul_bx_by_d}),
				.out_o({mul_ax_ay_buf, mul_bx_by_buf})
			);
			assign mul_ax_ay = mul_ax_ay_buf;
			assign mul_bx_by = mul_bx_by_buf;
		end
	endgenerate
	assign a_q = mul_ax_ay ^ aq_z0_q;
	assign b_q = mul_bx_by ^ bq_z0_q;
endmodule
module aes_dom_dep_mul_gf2pn_unopt (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	a_z,
	b_z,
	z_0,
	a_q,
	b_q
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] a_z;
	input wire [NPower - 1:0] b_z;
	input wire [NPower - 1:0] z_0;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	wire [NPower - 1:0] a_yz_d;
	wire [NPower - 1:0] b_yz_d;
	wire [NPower - 1:0] a_yz_q;
	wire [NPower - 1:0] b_yz_q;
	assign a_yz_d = a_y ^ a_z;
	assign b_yz_d = b_y ^ b_z;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_yz(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({a_yz_d, b_yz_d}),
		.q_o({a_yz_q, b_yz_q})
	);
	wire [NPower - 1:0] a_mul_x_z;
	wire [NPower - 1:0] b_mul_x_z;
	aes_dom_indep_mul_gf2pn #(
		.NPower(NPower),
		.Pipeline(Pipeline)
	) u_aes_dom_indep_mul_gf2pn(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i),
		.a_x(a_x),
		.a_y(a_z),
		.b_x(b_x),
		.b_y(b_z),
		.z_0(z_0),
		.a_q(a_mul_x_z),
		.b_q(b_mul_x_z)
	);
	wire [NPower - 1:0] a_x_calc;
	wire [NPower - 1:0] b_x_calc;
	generate
		if (Pipeline == 1'b1) begin : gen_pipeline
			wire [NPower - 1:0] a_x_q;
			wire [NPower - 1:0] b_x_q;
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_x(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({a_x, b_x}),
				.q_o({a_x_q, b_x_q})
			);
			assign a_x_calc = a_x_q;
			assign b_x_calc = b_x_q;
		end
		else begin : gen_no_pipeline
			assign a_x_calc = a_x;
			assign b_x_calc = b_x;
		end
	endgenerate
	wire [NPower - 1:0] b;
	assign b = a_yz_q ^ b_yz_q;
	wire [NPower - 1:0] a_mul_ax_b;
	wire [NPower - 1:0] b_mul_bx_b;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	generate
		if (NPower == 4) begin : gen_mul_gf2p4
			assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, b);
			assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b);
		end
		else begin : gen_mul_gf2p2
			assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, b);
			assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b);
		end
	endgenerate
	assign a_q = a_mul_x_z ^ a_mul_ax_b;
	assign b_q = b_mul_x_z ^ b_mul_bx_b;
endmodule
module aes_dom_dep_mul_gf2pn (
	clk_i,
	rst_ni,
	we_i,
	a_x,
	a_y,
	b_x,
	b_y,
	a_x_q,
	a_y_q,
	b_x_q,
	b_y_q,
	z_0,
	z_1,
	a_q,
	b_q,
	prd_o
);
	parameter [31:0] NPower = 4;
	parameter [0:0] Pipeline = 1'b0;
	parameter [0:0] PreDomIndep = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire we_i;
	input wire [NPower - 1:0] a_x;
	input wire [NPower - 1:0] a_y;
	input wire [NPower - 1:0] b_x;
	input wire [NPower - 1:0] b_y;
	input wire [NPower - 1:0] a_x_q;
	input wire [NPower - 1:0] a_y_q;
	input wire [NPower - 1:0] b_x_q;
	input wire [NPower - 1:0] b_y_q;
	input wire [NPower - 1:0] z_0;
	input wire [NPower - 1:0] z_1;
	output wire [NPower - 1:0] a_q;
	output wire [NPower - 1:0] b_q;
	output wire [(2 * NPower) - 1:0] prd_o;
	wire [NPower - 1:0] a_yz0_d;
	wire [NPower - 1:0] b_yz0_d;
	wire [NPower - 1:0] a_yz0_q;
	wire [NPower - 1:0] b_yz0_q;
	assign a_yz0_d = a_y ^ z_0;
	assign b_yz0_d = b_y ^ z_0;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_yz0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({a_yz0_d, b_yz0_d}),
		.q_o({a_yz0_q, b_yz0_q})
	);
	wire [NPower - 1:0] mul_ax_z0;
	wire [NPower - 1:0] mul_bx_z0;
	function automatic [1:0] aes_sbox_canright_pkg_aes_mul_gf2p2;
		input reg [1:0] g;
		input reg [1:0] d;
		reg [1:0] f;
		reg a;
		reg b;
		reg c;
		begin
			a = g[1] & d[1];
			b = ^g & ^d;
			c = g[0] & d[0];
			f[1] = a ^ b;
			f[0] = c ^ b;
			aes_sbox_canright_pkg_aes_mul_gf2p2 = f;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_mul_gf2p4;
		input reg [3:0] gamma;
		input reg [3:0] delta;
		reg [3:0] theta;
		reg [1:0] a;
		reg [1:0] b;
		reg [1:0] c;
		begin
			a = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2], delta[3:2]);
			b = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[3:2] ^ gamma[1:0], delta[3:2] ^ delta[1:0]);
			c = aes_sbox_canright_pkg_aes_mul_gf2p2(gamma[1:0], delta[1:0]);
			theta[3:2] = a ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			theta[1:0] = c ^ aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(b);
			aes_sbox_canright_pkg_aes_mul_gf2p4 = theta;
		end
	endfunction
	generate
		if (NPower == 4) begin : gen_corr_mul_gf2p4
			assign mul_ax_z0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x, z_0);
			assign mul_bx_z0 = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x, z_0);
		end
		else begin : gen_corr_mul_gf2p2
			assign mul_ax_z0 = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x, z_0);
			assign mul_bx_z0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x, z_0);
		end
	endgenerate
	wire [NPower - 1:0] mul_ax_z0_buf;
	wire [NPower - 1:0] mul_bx_z0_buf;
	prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_z0(
		.in_i({mul_ax_z0, mul_bx_z0}),
		.out_o({mul_ax_z0_buf, mul_bx_z0_buf})
	);
	wire [NPower - 1:0] axz0_z1_d;
	wire [NPower - 1:0] bxz0_z1_d;
	wire [NPower - 1:0] axz0_z1_q;
	wire [NPower - 1:0] bxz0_z1_q;
	assign axz0_z1_d = mul_ax_z0_buf ^ z_1;
	assign bxz0_z1_d = mul_bx_z0_buf ^ z_1;
	prim_flop_en #(
		.Width(2 * NPower),
		.ResetValue(1'sb0)
	) u_prim_flop_abxz0_z1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i),
		.d_i({axz0_z1_d, bxz0_z1_d}),
		.q_o({axz0_z1_q, bxz0_z1_q})
	);
	assign prd_o = {b_yz0_q, bxz0_z1_q};
	wire [NPower - 1:0] a_x_calc;
	wire [NPower - 1:0] b_x_calc;
	wire [NPower - 1:0] a_y_calc;
	wire [NPower - 1:0] b_y_calc;
	generate
		if ((Pipeline == 1'b1) && (PreDomIndep != 1'b1)) begin : gen_pipeline_use
			assign a_x_calc = a_x_q;
			assign b_x_calc = b_x_q;
			assign a_y_calc = a_y_q;
			assign b_y_calc = b_y_q;
		end
		else begin : gen_no_pipeline_use
			assign a_x_calc = a_x;
			assign b_x_calc = b_x;
			assign a_y_calc = a_y;
			assign b_y_calc = b_y;
			if (PreDomIndep != 1'b1) begin : gen_ab_x_q
				wire [NPower - 1:0] unused_a_x_q;
				wire [NPower - 1:0] unused_b_x_q;
				assign unused_a_x_q = a_x_q;
				assign unused_b_x_q = b_x_q;
			end
			wire [NPower - 1:0] unused_a_y_q;
			wire [NPower - 1:0] unused_b_y_q;
			assign unused_a_y_q = a_y_q;
			assign unused_b_y_q = b_y_q;
		end
		if (PreDomIndep == 1'b1) begin : gen_pre_dom_indep
			wire [NPower - 1:0] mul_ax_ay_d;
			wire [NPower - 1:0] mul_bx_by_d;
			wire [NPower - 1:0] mul_ax_ay_q;
			wire [NPower - 1:0] mul_bx_by_q;
			if (NPower == 4) begin : gen_inner_mul_gf2p4
				assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, a_y_calc);
				assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b_y_calc);
			end
			else begin : gen_inner_mul_gf2p2
				assign mul_ax_ay_d = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, a_y_calc);
				assign mul_bx_by_d = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b_y_calc);
			end
			prim_flop_en #(
				.Width(2 * NPower),
				.ResetValue(1'sb0)
			) u_prim_flop_mul_abx_aby(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i),
				.d_i({mul_ax_ay_d, mul_bx_by_d}),
				.q_o({mul_ax_ay_q, mul_bx_by_q})
			);
			wire [NPower - 1:0] mul_ax_byz0;
			wire [NPower - 1:0] mul_bx_ayz0;
			if (NPower == 4) begin : gen_cross_mul_gf2p4
				assign mul_ax_byz0 = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_q, b_yz0_q);
				assign mul_bx_ayz0 = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_q, a_yz0_q);
			end
			else begin : gen_cross_mul_gf2p2
				assign mul_ax_byz0 = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_q, b_yz0_q);
				assign mul_bx_ayz0 = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_q, a_yz0_q);
			end
			wire [NPower - 1:0] mul_ax_byz0_buf;
			wire [NPower - 1:0] mul_bx_ayz0_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_mul_abx_bayz0(
				.in_i({mul_ax_byz0, mul_bx_ayz0}),
				.out_o({mul_ax_byz0_buf, mul_bx_ayz0_buf})
			);
			assign a_q = (axz0_z1_q ^ mul_ax_ay_q) ^ mul_ax_byz0_buf;
			assign b_q = (bxz0_z1_q ^ mul_bx_by_q) ^ mul_bx_ayz0_buf;
		end
		else begin : gen_not_pre_dom_indep
			wire [NPower - 1:0] a_b;
			wire [NPower - 1:0] b_b;
			assign a_b = a_y_calc ^ b_yz0_q;
			assign b_b = b_y_calc ^ a_yz0_q;
			wire [NPower - 1:0] a_b_buf;
			wire [NPower - 1:0] b_b_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_ab_b(
				.in_i({a_b, b_b}),
				.out_o({a_b_buf, b_b_buf})
			);
			wire [NPower - 1:0] a_mul_ax_b;
			wire [NPower - 1:0] b_mul_bx_b;
			if (NPower == 4) begin : gen_mul_gf2p4
				assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p4(a_x_calc, a_b_buf);
				assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p4(b_x_calc, b_b_buf);
			end
			else begin : gen_mul_gf2p2
				assign a_mul_ax_b = aes_sbox_canright_pkg_aes_mul_gf2p2(a_x_calc, a_b_buf);
				assign b_mul_bx_b = aes_sbox_canright_pkg_aes_mul_gf2p2(b_x_calc, b_b_buf);
			end
			wire [NPower - 1:0] a_mul_ax_b_buf;
			wire [NPower - 1:0] b_mul_bx_b_buf;
			prim_buf #(.Width(2 * NPower)) u_prim_buf_ab_mul_abx_b(
				.in_i({a_mul_ax_b, b_mul_bx_b}),
				.out_o({a_mul_ax_b_buf, b_mul_bx_b_buf})
			);
			assign a_q = axz0_z1_q ^ a_mul_ax_b_buf;
			assign b_q = bxz0_z1_q ^ b_mul_bx_b_buf;
		end
	endgenerate
endmodule
module aes_dom_inverse_gf2p4 (
	clk_i,
	rst_ni,
	we_i,
	a_gamma,
	b_gamma,
	prd_2_i,
	prd_3_i,
	a_gamma_inv,
	b_gamma_inv,
	prd_2_o,
	prd_3_o
);
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire [1:0] we_i;
	input wire [3:0] a_gamma;
	input wire [3:0] b_gamma;
	input wire [3:0] prd_2_i;
	input wire [7:0] prd_3_i;
	output wire [3:0] a_gamma_inv;
	output wire [3:0] b_gamma_inv;
	output wire [7:0] prd_2_o;
	output wire [7:0] prd_3_o;
	wire [1:0] a_gamma1;
	wire [1:0] a_gamma0;
	wire [1:0] b_gamma1;
	wire [1:0] b_gamma0;
	wire [1:0] a_gamma1_gamma0;
	wire [1:0] b_gamma1_gamma0;
	assign a_gamma1 = a_gamma[3:2];
	assign a_gamma0 = a_gamma[1:0];
	assign b_gamma1 = b_gamma[3:2];
	assign b_gamma0 = b_gamma[1:0];
	wire [1:0] a_gamma_ss_d;
	wire [1:0] b_gamma_ss_d;
	wire [1:0] a_gamma_ss_q;
	wire [1:0] b_gamma_ss_q;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega2_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1] ^ g[0];
			aes_sbox_canright_pkg_aes_scale_omega2_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	assign a_gamma_ss_d = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(a_gamma1 ^ a_gamma0));
	assign b_gamma_ss_d = aes_sbox_canright_pkg_aes_scale_omega2_gf2p2(aes_sbox_canright_pkg_aes_square_gf2p2(b_gamma1 ^ b_gamma0));
	prim_flop_en #(
		.Width(4),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_gamma_ss(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_gamma_ss_d, b_gamma_ss_d}),
		.q_o({a_gamma_ss_q, b_gamma_ss_q})
	);
	wire [1:0] a_gamma1_q;
	wire [1:0] a_gamma0_q;
	wire [1:0] b_gamma1_q;
	wire [1:0] b_gamma0_q;
	prim_flop_en #(
		.Width(8),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_gamma10(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_gamma1, a_gamma0, b_gamma1, b_gamma0}),
		.q_o({a_gamma1_q, a_gamma0_q, b_gamma1_q, b_gamma0_q})
	);
	wire [3:0] b_gamma10_prd2;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_gamma1_gamma0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[0]),
		.a_x(a_gamma1),
		.a_y(a_gamma0),
		.b_x(b_gamma1),
		.b_y(b_gamma0),
		.a_x_q(a_gamma1_q),
		.a_y_q(a_gamma0_q),
		.b_x_q(b_gamma1_q),
		.b_y_q(b_gamma0_q),
		.z_0(prd_2_i[1:0]),
		.z_1(prd_2_i[3:2]),
		.a_q(a_gamma1_gamma0),
		.b_q(b_gamma1_gamma0),
		.prd_o(b_gamma10_prd2)
	);
	assign prd_2_o = {b_gamma1_q, b_gamma10_prd2[3:2], b_gamma0_q, b_gamma10_prd2[1:0]};
	wire [1:0] a_omega;
	wire [1:0] b_omega;
	assign a_omega = aes_sbox_canright_pkg_aes_square_gf2p2(a_gamma1_gamma0 ^ a_gamma_ss_q);
	assign b_omega = aes_sbox_canright_pkg_aes_square_gf2p2(b_gamma1_gamma0 ^ b_gamma_ss_q);
	wire [1:0] a_omega_buf;
	wire [1:0] b_omega_buf;
	prim_buf #(.Width(4)) u_prim_buf_ab_omega(
		.in_i({a_omega, b_omega}),
		.out_o({a_omega_buf, b_omega_buf})
	);
	wire [1:0] a_gamma1_qq;
	wire [1:0] a_gamma0_qq;
	wire [1:0] b_gamma1_qq;
	wire [1:0] b_gamma0_qq;
	wire [1:0] a_omega_buf_q;
	wire [1:0] b_omega_buf_q;
	generate
		if (PipelineMul == 1'b1) begin : gen_prim_flop_omega_gamma10
			prim_flop_en #(
				.Width(8),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_gamma10_q(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[1]),
				.d_i({a_gamma1_q, a_gamma0_q, b_gamma1_q, b_gamma0_q}),
				.q_o({a_gamma1_qq, a_gamma0_qq, b_gamma1_qq, b_gamma0_qq})
			);
			prim_flop_en #(
				.Width(4),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_omega_buf(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[1]),
				.d_i({a_omega_buf, b_omega_buf}),
				.q_o({a_omega_buf_q, b_omega_buf_q})
			);
		end
		else begin : gen_no_prim_flop_ab_y10
			assign a_gamma1_qq = 1'sb0;
			assign a_gamma0_qq = 1'sb0;
			assign b_gamma1_qq = 1'sb0;
			assign b_gamma0_qq = 1'sb0;
			assign a_omega_buf_q = 1'sb0;
			assign b_omega_buf_q = 1'sb0;
		end
	endgenerate
	wire [3:0] b_gamma1_omega_prd3;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_omega_gamma1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[1]),
		.a_x(a_gamma1_q),
		.a_y(a_omega_buf),
		.b_x(b_gamma1_q),
		.b_y(b_omega_buf),
		.a_x_q(a_gamma1_qq),
		.a_y_q(a_omega_buf_q),
		.b_x_q(b_gamma1_qq),
		.b_y_q(b_omega_buf_q),
		.z_0(prd_3_i[5:4]),
		.z_1(prd_3_i[7:6]),
		.a_q(a_gamma_inv[1:0]),
		.b_q(b_gamma_inv[1:0]),
		.prd_o(b_gamma1_omega_prd3)
	);
	wire [3:0] b_gamma0_omega_prd3;
	aes_dom_dep_mul_gf2pn #(
		.NPower(2),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_omega_gamma0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[1]),
		.a_x(a_omega_buf),
		.a_y(a_gamma0_q),
		.b_x(b_omega_buf),
		.b_y(b_gamma0_q),
		.a_x_q(a_omega_buf_q),
		.a_y_q(a_gamma0_qq),
		.b_x_q(b_omega_buf_q),
		.b_y_q(b_gamma0_qq),
		.z_0(prd_3_i[1:0]),
		.z_1(prd_3_i[3:2]),
		.a_q(a_gamma_inv[3:2]),
		.b_q(b_gamma_inv[3:2]),
		.prd_o(b_gamma0_omega_prd3)
	);
	assign prd_3_o = {b_gamma1_omega_prd3, b_gamma0_omega_prd3};
endmodule
module aes_dom_inverse_gf2p8 (
	clk_i,
	rst_ni,
	we_i,
	a_y,
	b_y,
	prd_i,
	a_y_inv,
	b_y_inv,
	prd_o
);
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire [3:0] we_i;
	input wire [7:0] a_y;
	input wire [7:0] b_y;
	input wire [27:0] prd_i;
	output wire [7:0] a_y_inv;
	output wire [7:0] b_y_inv;
	output wire [19:0] prd_o;
	wire [3:0] a_y1;
	wire [3:0] a_y0;
	wire [3:0] b_y1;
	wire [3:0] b_y0;
	wire [3:0] a_y1_y0;
	wire [3:0] b_y1_y0;
	assign a_y1 = a_y[7:4];
	assign a_y0 = a_y[3:0];
	assign b_y1 = b_y[7:4];
	assign b_y0 = b_y[3:0];
	wire [3:0] a_y_ss_d;
	wire [3:0] b_y_ss_d;
	wire [3:0] a_y_ss_q;
	wire [3:0] b_y_ss_q;
	function automatic [1:0] aes_sbox_canright_pkg_aes_scale_omega_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[1] ^ g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_scale_omega_gf2p2 = d;
		end
	endfunction
	function automatic [1:0] aes_sbox_canright_pkg_aes_square_gf2p2;
		input reg [1:0] g;
		reg [1:0] d;
		begin
			d[1] = g[0];
			d[0] = g[1];
			aes_sbox_canright_pkg_aes_square_gf2p2 = d;
		end
	endfunction
	function automatic [3:0] aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2;
		input reg [3:0] gamma;
		reg [3:0] delta;
		reg [1:0] a;
		reg [1:0] b;
		begin
			a = gamma[3:2] ^ gamma[1:0];
			b = aes_sbox_canright_pkg_aes_square_gf2p2(gamma[1:0]);
			delta[3:2] = aes_sbox_canright_pkg_aes_square_gf2p2(a);
			delta[1:0] = aes_sbox_canright_pkg_aes_scale_omega_gf2p2(b);
			aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2 = delta;
		end
	endfunction
	assign a_y_ss_d = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(a_y1 ^ a_y0);
	assign b_y_ss_d = aes_sbox_canright_pkg_aes_square_scale_gf2p4_gf2p2(b_y1 ^ b_y0);
	prim_flop_en #(
		.Width(8),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_y_ss(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[0]),
		.d_i({a_y_ss_d, b_y_ss_d}),
		.q_o({a_y_ss_q, b_y_ss_q})
	);
	wire [3:0] a_y1_q;
	wire [3:0] a_y0_q;
	wire [3:0] b_y1_q;
	wire [3:0] b_y0_q;
	generate
		if (PipelineMul == 1'b1) begin : gen_prim_flop_ab_y10
			prim_flop_en #(
				.Width(16),
				.ResetValue(1'sb0)
			) u_prim_flop_ab_y10(
				.clk_i(clk_i),
				.rst_ni(rst_ni),
				.en_i(we_i[0]),
				.d_i({a_y1, a_y0, b_y1, b_y0}),
				.q_o({a_y1_q, a_y0_q, b_y1_q, b_y0_q})
			);
		end
		else begin : gen_no_prim_flop_ab_y10
			assign a_y1_q = 1'sb0;
			assign a_y0_q = 1'sb0;
			assign b_y1_q = 1'sb0;
			assign b_y0_q = 1'sb0;
		end
	endgenerate
	wire [7:0] b_y10_prd1;
	aes_dom_dep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul),
		.PreDomIndep(1'b0)
	) u_aes_dom_mul_y1_y0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[0]),
		.a_x(a_y1),
		.a_y(a_y0),
		.b_x(b_y1),
		.b_y(b_y0),
		.a_x_q(a_y1_q),
		.a_y_q(a_y0_q),
		.b_x_q(b_y1_q),
		.b_y_q(b_y0_q),
		.z_0(prd_i[23:20]),
		.z_1(prd_i[27:24]),
		.a_q(a_y1_y0),
		.b_q(b_y1_y0),
		.prd_o(b_y10_prd1)
	);
	wire [3:0] a_gamma;
	wire [3:0] b_gamma;
	assign a_gamma = a_y_ss_q ^ a_y1_y0;
	assign b_gamma = b_y_ss_q ^ b_y1_y0;
	wire [3:0] a_gamma_buf;
	wire [3:0] b_gamma_buf;
	prim_buf #(.Width(8)) u_prim_buf_ab_gamma(
		.in_i({a_gamma, b_gamma}),
		.out_o({a_gamma_buf, b_gamma_buf})
	);
	assign prd_o[19-:4] = b_y10_prd1[3:0];
	wire [3:0] unused_prd;
	assign unused_prd = b_y10_prd1[7:4];
	wire [3:0] a_theta;
	wire [3:0] b_theta;
	aes_dom_inverse_gf2p4 #(.PipelineMul(PipelineMul)) u_aes_dom_inverse_gf2p4(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[2:1]),
		.a_gamma(a_gamma_buf),
		.b_gamma(b_gamma_buf),
		.prd_2_i(prd_i[19-:4]),
		.prd_3_i(prd_i[15-:8]),
		.a_gamma_inv(a_theta),
		.b_gamma_inv(b_theta),
		.prd_2_o(prd_o[15-:8]),
		.prd_3_o(prd_o[7-:8])
	);
	wire [3:0] a_y1_qqq;
	wire [3:0] a_y0_qqq;
	wire [3:0] b_y1_qqq;
	wire [3:0] b_y0_qqq;
	prim_flop_en #(
		.Width(16),
		.ResetValue(1'sb0)
	) u_prim_flop_ab_y10_qqq(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.en_i(we_i[2]),
		.d_i({a_y1, a_y0, b_y1, b_y0}),
		.q_o({a_y1_qqq, a_y0_qqq, b_y1_qqq, b_y0_qqq})
	);
	aes_dom_indep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul)
	) u_aes_dom_mul_theta_y1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[3]),
		.a_x(a_y1_qqq),
		.a_y(a_theta),
		.b_x(b_y1_qqq),
		.b_y(b_theta),
		.z_0(prd_i[7:4]),
		.a_q(a_y_inv[3:0]),
		.b_q(b_y_inv[3:0])
	);
	aes_dom_indep_mul_gf2pn #(
		.NPower(4),
		.Pipeline(PipelineMul)
	) u_aes_dom_mul_theta_y0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we_i[3]),
		.a_x(a_theta),
		.a_y(a_y0_qqq),
		.b_x(b_theta),
		.b_y(b_y0_qqq),
		.z_0(prd_i[3:0]),
		.a_q(a_y_inv[7:4]),
		.b_q(b_y_inv[7:4])
	);
endmodule
module aes_sbox_dom (
	clk_i,
	rst_ni,
	en_i,
	out_req_o,
	out_ack_i,
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o,
	prd_o
);
	parameter [0:0] PipelineMul = 1'b1;
	input wire clk_i;
	input wire rst_ni;
	input wire en_i;
	output wire out_req_o;
	input wire out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	input wire [7:0] mask_i;
	input wire [27:0] prd_i;
	output wire [7:0] data_o;
	output wire [7:0] mask_o;
	output wire [19:0] prd_o;
	wire [7:0] in_data_basis_x;
	wire [7:0] out_data_basis_x;
	wire [7:0] in_mask_basis_x;
	wire [7:0] out_mask_basis_x;
	wire [3:0] we;
	wire [27:0] in_prd;
	wire [19:0] out_prd;
	function automatic [7:0] aes_pkg_aes_mvm;
		input reg [7:0] vec_b;
		input reg [63:0] mat_a;
		reg [7:0] vec_c;
		begin
			vec_c = 1'sb0;
			begin : sv2v_autoblock_1
				reg signed [31:0] i;
				for (i = 0; i < 8; i = i + 1)
					begin : sv2v_autoblock_2
						reg signed [31:0] j;
						for (j = 0; j < 8; j = j + 1)
							vec_c[i] = vec_c[i] ^ (mat_a[((7 - j) * 8) + i] & vec_b[7 - j]);
					end
			end
			aes_pkg_aes_mvm = vec_c;
		end
	endfunction
	localparam [63:0] aes_sbox_canright_pkg_A2X = 64'h98f3f2480981a9ff;
	localparam [63:0] aes_sbox_canright_pkg_S2X = 64'h8c7905eb12045153;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign in_data_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(data_i ^ 8'h63, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(data_i, aes_sbox_canright_pkg_A2X)));
	assign in_mask_basis_x = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_S2X) : aes_pkg_aes_mvm(mask_i, aes_sbox_canright_pkg_A2X)));
	aes_dom_inverse_gf2p8 #(.PipelineMul(PipelineMul)) u_aes_dom_inverse_gf2p8(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we_i(we),
		.a_y(in_data_basis_x),
		.b_y(in_mask_basis_x),
		.prd_i(in_prd),
		.a_y_inv(out_data_basis_x),
		.b_y_inv(out_mask_basis_x),
		.prd_o(out_prd)
	);
	localparam [63:0] aes_sbox_canright_pkg_X2A = 64'h64786e8c6829de60;
	localparam [63:0] aes_sbox_canright_pkg_X2S = 64'h582d9e0bdc040324;
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63 : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_data_basis_x, aes_sbox_canright_pkg_X2S) ^ 8'h63));
	assign mask_o = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2S) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2A) : aes_pkg_aes_mvm(out_mask_basis_x, aes_sbox_canright_pkg_X2S)));
	wire [2:0] count_d;
	reg [2:0] count_q;
	assign count_d = (out_req_o && out_ack_i ? {3 {1'sb0}} : (out_req_o ? count_q : (en_i ? count_q + 3'd1 : count_q)));
	always @(posedge clk_i or negedge rst_ni) begin : reg_count
		if (!rst_ni)
			count_q <= 1'sb0;
		else
			count_q <= count_d;
	end
	assign out_req_o = en_i & (count_q == 3'd4);
	assign we[0] = en_i & (count_q == 3'd0);
	assign we[1] = en_i & (count_q == 3'd1);
	assign we[2] = en_i & (count_q == 3'd2);
	assign we[3] = en_i & (count_q == 3'd3);
	assign in_prd = {prd_i[7:0], prd_i[11:8], prd_i[19:12], prd_i[27:20]};
	assign prd_o = {out_prd[7-:8], out_prd[15-:8], out_prd[19-:4]};
endmodule
module aes_sbox_lut (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [7:0] data_i;
	output wire [7:0] data_o;
	localparam [2047:0] SBOX_FWD = 2048'h637c777bf26b6fc53001672bfed7ab76ca82c97dfa5947f0add4a2af9ca472c0b7fd9326363ff7cc34a5e5f171d8311504c723c31896059a071280e2eb27b27509832c1a1b6e5aa0523bd6b329e32f8453d100ed20fcb15b6acbbe394a4c58cfd0efaafb434d338545f9027f503c9fa851a3408f929d38f5bcb6da2110fff3d2cd0c13ec5f974417c4a77e3d645d197360814fdc222a908846eeb814de5e0bdbe0323a0a4906245cc2d3ac629195e479e7c8376d8dd54ea96c56f4ea657aae08ba78252e1ca6b4c6e8dd741f4bbd8b8a703eb5664803f60e613557b986c11d9ee1f8981169d98e949b1e87e9ce5528df8ca1890dbfe6426841992d0fb054bb16;
	localparam [2047:0] SBOX_INV = 2048'h52096ad53036a538bf40a39e81f3d7fb7ce339829b2fff87348e4344c4dee9cb547b9432a6c2233dee4c950b42fac34e082ea16628d924b2765ba2496d8bd12572f8f66486689816d4a45ccc5d65b6926c704850fdedb9da5e154657a78d9d8490d8ab008cbcd30af7e45805b8b34506d02c1e8fca3f0f02c1afbd0301138a6b3a9111414f67dcea97f2cfcef0b4e67396ac7422e7ad3585e2f937e81c75df6e47f11a711d29c5896fb7620eaa18be1bfc563e4bc6d279209adbc0fe78cd5af41fdda8338807c731b11210592780ec5f60517fa919b54a0d2de57a9f93c99cefa0e03b4dae2af5b0c8ebbb3c83539961172b047eba77d626e169146355210c7d;
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign data_o = (op_i == sv2v_cast_63054(2'b01) ? SBOX_FWD[(255 - data_i) * 8+:8] : (op_i == sv2v_cast_63054(2'b10) ? SBOX_INV[(255 - data_i) * 8+:8] : SBOX_FWD[(255 - data_i) * 8+:8]));
endmodule
module aes_sel_buf_chk (
	clk_i,
	rst_ni,
	sel_i,
	sel_o,
	err_o
);
	reg _sv2v_0;
	parameter signed [31:0] Num = 2;
	parameter signed [31:0] Width = 1;
	parameter [0:0] EnSecBuf = 1'b0;
	input wire clk_i;
	input wire rst_ni;
	input wire [Width - 1:0] sel_i;
	output wire [Width - 1:0] sel_o;
	output reg err_o;
	wire unused_clk;
	wire unused_rst;
	assign unused_clk = clk_i;
	assign unused_rst = rst_ni;
	generate
		if (EnSecBuf) begin : gen_sec_buf
			prim_sec_anchor_buf #(.Width(Width)) u_prim_buf_sel_i(
				.in_i(sel_i),
				.out_o(sel_o)
			);
		end
		else begin : gen_buf
			prim_buf #(.Width(Width)) u_prim_buf_sel_i(
				.in_i(sel_i),
				.out_o(sel_o)
			);
		end
	endgenerate
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Mux3SelWidth = 5;
	localparam signed [31:0] aes_pkg_Mux4SelWidth = 5;
	localparam signed [31:0] aes_pkg_Mux6SelWidth = 6;
	function automatic [5:0] sv2v_cast_91DD0;
		input reg [5:0] inp;
		sv2v_cast_91DD0 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_26872;
		input reg [4:0] inp;
		sv2v_cast_26872 = inp;
	endfunction
	function automatic [4:0] sv2v_cast_19785;
		input reg [4:0] inp;
		sv2v_cast_19785 = inp;
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	generate
		if (Num == 2) begin : gen_mux2_sel_chk
			wire [2:0] sel_chk;
			assign sel_chk = sv2v_cast_14B94(sel_o);
			always @(*) begin : mux2_sel_chk
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (sel_chk)
					sv2v_cast_14B94(3'b011), sv2v_cast_14B94(3'b100): err_o = 1'b0;
					default: err_o = 1'b1;
				endcase
			end
		end
		else if (Num == 3) begin : gen_mux3_sel_chk
			wire [4:0] sel_chk;
			assign sel_chk = sv2v_cast_19785(sel_o);
			always @(*) begin : mux3_sel_chk
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (sel_chk)
					sv2v_cast_19785(5'b01110), sv2v_cast_19785(5'b11000), sv2v_cast_19785(5'b00001): err_o = 1'b0;
					default: err_o = 1'b1;
				endcase
			end
		end
		else if (Num == 4) begin : gen_mux4_sel_chk
			wire [4:0] sel_chk;
			assign sel_chk = sv2v_cast_26872(sel_o);
			always @(*) begin : mux4_sel_chk
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (sel_chk)
					sv2v_cast_26872(5'b01110), sv2v_cast_26872(5'b11000), sv2v_cast_26872(5'b00001), sv2v_cast_26872(5'b10111): err_o = 1'b0;
					default: err_o = 1'b1;
				endcase
			end
		end
		else if (Num == 6) begin : gen_mux6_sel_chk
			wire [5:0] sel_chk;
			assign sel_chk = sv2v_cast_91DD0(sel_o);
			always @(*) begin : mux6_sel_chk
				if (_sv2v_0)
					;
				(* full_case, parallel_case *)
				case (sel_chk)
					sv2v_cast_91DD0(6'b011101), sv2v_cast_91DD0(6'b110000), sv2v_cast_91DD0(6'b001000), sv2v_cast_91DD0(6'b000011), sv2v_cast_91DD0(6'b111110), sv2v_cast_91DD0(6'b100101): err_o = 1'b0;
					default: err_o = 1'b1;
				endcase
			end
		end
		else begin : gen_width_unsupported
			wire [1:1] sv2v_tmp_F86A4;
			assign sv2v_tmp_F86A4 = 1'b1;
			always @(*) err_o = sv2v_tmp_F86A4;
		end
	endgenerate
	initial _sv2v_0 = 0;
endmodule
module aes_shift_rows (
	op_i,
	data_i,
	data_o
);
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	output wire [127:0] data_o;
	assign data_o[0+:32] = data_i[0+:32];
	function automatic [31:0] aes_pkg_aes_circ_byte_shift;
		input reg [31:0] in;
		input reg [1:0] shift;
		reg [31:0] out;
		reg [31:0] s;
		begin
			s = {30'b000000000000000000000000000000, shift};
			out = {in[8 * ((7 - s) % 4)+:8], in[8 * ((6 - s) % 4)+:8], in[8 * ((5 - s) % 4)+:8], in[8 * ((4 - s) % 4)+:8]};
			aes_pkg_aes_circ_byte_shift = out;
		end
	endfunction
	assign data_o[64+:32] = aes_pkg_aes_circ_byte_shift(data_i[64+:32], 2'h2);
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	assign data_o[32+:32] = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h3) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h1) : aes_pkg_aes_circ_byte_shift(data_i[32+:32], 2'h3)));
	assign data_o[96+:32] = (op_i == sv2v_cast_63054(2'b01) ? aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h1) : (op_i == sv2v_cast_63054(2'b10) ? aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h3) : aes_pkg_aes_circ_byte_shift(data_i[96+:32], 2'h1)));
endmodule
module aes_sub_bytes (
	clk_i,
	rst_ni,
	en_i,
	out_req_o,
	out_ack_i,
	op_i,
	data_i,
	mask_i,
	prd_i,
	data_o,
	mask_o,
	err_o
);
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	localparam signed [31:0] aes_pkg_Mux2SelWidth = 3;
	localparam signed [31:0] aes_pkg_Sp2VWidth = aes_pkg_Mux2SelWidth;
	input wire [2:0] en_i;
	output wire [2:0] out_req_o;
	input wire [2:0] out_ack_i;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	input wire [1:0] op_i;
	input wire [127:0] data_i;
	input wire [127:0] mask_i;
	localparam [31:0] aes_pkg_WidthPRDSBox = 8;
	input wire [127:0] prd_i;
	output wire [127:0] data_o;
	output wire [127:0] mask_o;
	output wire err_o;
	wire [2:0] en;
	wire en_err;
	wire [15:0] out_req;
	wire [2:0] out_ack;
	wire out_ack_err;
	wire [447:0] in_prd;
	wire [319:0] out_prd;
	wire [2:0] en_raw;
	localparam signed [31:0] aes_pkg_Sp2VNum = 2;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_sb_en_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(en_i),
		.sel_o(en_raw),
		.err_o(en_err)
	);
	function automatic [2:0] sv2v_cast_39E4E;
		input reg [2:0] inp;
		sv2v_cast_39E4E = inp;
	endfunction
	assign en = sv2v_cast_39E4E(en_raw);
	wire [2:0] out_ack_raw;
	aes_sel_buf_chk #(
		.Num(aes_pkg_Sp2VNum),
		.Width(aes_pkg_Sp2VWidth),
		.EnSecBuf(1'b1)
	) u_aes_sb_out_ack_buf_chk(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.sel_i(out_ack_i),
		.sel_o(out_ack_raw),
		.err_o(out_ack_err)
	);
	assign out_ack = sv2v_cast_39E4E(out_ack_raw);
	genvar _gv_j_5;
	function automatic integer aes_pkg_aes_rot_int;
		input integer in;
		input integer num;
		integer out;
		begin
			if (in == 0)
				out = num - 1;
			else
				out = in - 1;
			aes_pkg_aes_rot_int = out;
		end
	endfunction
	function automatic [2:0] sv2v_cast_14B94;
		input reg [2:0] inp;
		sv2v_cast_14B94 = inp;
	endfunction
	generate
		for (_gv_j_5 = 0; _gv_j_5 < 4; _gv_j_5 = _gv_j_5 + 1) begin : gen_sbox_j
			localparam j = _gv_j_5;
			genvar _gv_i_35;
			for (_gv_i_35 = 0; _gv_i_35 < 4; _gv_i_35 = _gv_i_35 + 1) begin : gen_sbox_i
				localparam i = _gv_i_35;
				assign in_prd[((i * 4) + j) * 28+:28] = {out_prd[((i * 4) + aes_pkg_aes_rot_int(j, 4)) * 20+:20], prd_i[((i * 4) + j) * 8+:8]};
				aes_sbox #(.SecSBoxImpl(SecSBoxImpl)) u_aes_sbox_ij(
					.clk_i(clk_i),
					.rst_ni(rst_ni),
					.en_i(en == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
					.out_req_o(out_req[(i * 4) + j]),
					.out_ack_i(out_ack == sv2v_cast_39E4E(sv2v_cast_14B94(3'b011))),
					.op_i(op_i),
					.data_i(data_i[((i * 4) + j) * 8+:8]),
					.mask_i(mask_i[((i * 4) + j) * 8+:8]),
					.prd_i(in_prd[((i * 4) + j) * 28+:28]),
					.data_o(data_o[((i * 4) + j) * 8+:8]),
					.mask_o(mask_o[((i * 4) + j) * 8+:8]),
					.prd_o(out_prd[((i * 4) + j) * 20+:20])
				);
			end
		end
	endgenerate
	assign out_req_o = (&out_req ? sv2v_cast_39E4E(sv2v_cast_14B94(3'b011)) : sv2v_cast_39E4E(sv2v_cast_14B94(3'b100)));
	assign err_o = en_err | out_ack_err;
endmodule
module aes_wrap (
	clk_i,
	rst_ni,
	aes_input,
	aes_key,
	aes_output,
	alert_recov_o,
	alert_fatal_o,
	test_done_o
);
	reg _sv2v_0;
	parameter [0:0] AES192Enable = 1;
	parameter [0:0] SecMasking = 1;
	parameter integer SecSBoxImpl = 32'sd4;
	input wire clk_i;
	input wire rst_ni;
	input wire [127:0] aes_input;
	input wire [255:0] aes_key;
	output wire [127:0] aes_output;
	output wire alert_recov_o;
	output wire alert_fatal_o;
	output reg test_done_o;
	localparam [0:0] SIDELOAD = 1'b1;
	localparam signed [31:0] aes_pkg_AES_MODE_WIDTH = 6;
	function automatic [5:0] sv2v_cast_86B6A;
		input reg [5:0] inp;
		sv2v_cast_86B6A = inp;
	endfunction
	localparam [5:0] AES_MODE = sv2v_cast_86B6A(6'b000001);
	wire unused_idle;
	wire [31:0] unused_wdata;
	wire edn_req;
	localparam signed [31:0] keymgr_pkg_KeyWidth = 256;
	localparam signed [31:0] keymgr_pkg_Shares = 2;
	wire [(1 + (keymgr_pkg_Shares * keymgr_pkg_KeyWidth)) - 1:0] keymgr_key;
	localparam signed [31:0] prim_mubi_pkg_MuBi4Width = 4;
	localparam signed [31:0] tlul_pkg_DataIntgWidth = 7;
	localparam signed [31:0] tlul_pkg_H2DCmdIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_AUW = 23;
	localparam signed [31:0] tlul_pkg_RsvdWidth = ((top_pkg_TL_AUW - prim_mubi_pkg_MuBi4Width) - tlul_pkg_H2DCmdIntgWidth) - tlul_pkg_DataIntgWidth;
	localparam signed [31:0] top_pkg_TL_AIW = 8;
	localparam signed [31:0] top_pkg_TL_AW = 32;
	localparam signed [31:0] top_pkg_TL_DW = 32;
	localparam signed [31:0] top_pkg_TL_DBW = top_pkg_TL_DW >> 3;
	localparam signed [31:0] top_pkg_TL_SZW = $clog2($clog2(top_pkg_TL_DBW) + 1);
	reg [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] h2d;
	wire [((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0:0] h2d_intg;
	localparam signed [31:0] tlul_pkg_D2HRspIntgWidth = 7;
	localparam signed [31:0] top_pkg_TL_DIW = 1;
	wire [(((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1:0] d2h;
	localparam signed [31:0] aes_reg_pkg_NumAlerts = 2;
	wire [7:0] alert_rx;
	wire [3:0] alert_tx;
	assign keymgr_key[(keymgr_pkg_Shares * keymgr_pkg_KeyWidth) + 0] = 1'b1;
	assign keymgr_key[((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - ((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 256)-:256] = aes_key;
	assign keymgr_key[((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 1) - ((keymgr_pkg_Shares * keymgr_pkg_KeyWidth) - 512)-:256] = 1'sb0;
	assign alert_rx[3] = 1'b0;
	assign alert_rx[2] = 1'b1;
	assign alert_rx[1] = 1'b0;
	assign alert_rx[0] = 1'b1;
	assign alert_rx[7] = 1'b0;
	assign alert_rx[6] = 1'b1;
	assign alert_rx[5] = 1'b0;
	assign alert_rx[4] = 1'b1;
	assign alert_recov_o = alert_tx[1] | ~alert_tx[0];
	assign alert_fatal_o = alert_tx[3] | ~alert_tx[2];
	tlul_cmd_intg_gen tlul_cmd_intg_gen(
		.tl_i(h2d),
		.tl_o(h2d_intg)
	);
	prim_secded_inv_39_32_enc u_data_gen(
		.data_i(h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)]),
		.data_o({h2d_intg[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth], unused_wdata})
	);
	localparam signed [31:0] lc_ctrl_pkg_TxWidth = 4;
	function automatic [3:0] sv2v_cast_BE429;
		input reg [3:0] inp;
		sv2v_cast_BE429 = inp;
	endfunction
	aes #(
		.AES192Enable(AES192Enable),
		.SecMasking(SecMasking),
		.SecSBoxImpl(SecSBoxImpl)
	) aes(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_ni),
		.idle_o(unused_idle),
		.lc_escalate_en_i(sv2v_cast_BE429(4'b1010)),
		.clk_edn_i(clk_i),
		.rst_edn_ni(rst_ni),
		.edn_o(edn_req),
		.edn_i({edn_req, 33'h112345678}),
		.keymgr_key_i(keymgr_key),
		.tl_i(h2d_intg),
		.tl_o(d2h),
		.alert_rx_i(alert_rx),
		.alert_tx_o(alert_tx)
	);
	localparam signed [31:0] aes_reg_pkg_BlockAw = 8;
	localparam signed [31:0] StateWidth = aes_reg_pkg_BlockAw;
	reg [7:0] aes_wrap_ctrl_ns;
	reg [7:0] aes_wrap_ctrl_cs;
	reg [31:0] count_d;
	reg [31:0] count_q;
	reg [127:0] data_out_d;
	reg [127:0] data_out_q;
	localparam signed [31:0] aes_pkg_AES_KEYLEN_WIDTH = 3;
	localparam signed [31:0] aes_pkg_AES_OP_WIDTH = 2;
	localparam [7:0] aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET = 8'h78;
	localparam [7:0] aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET = 8'h74;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_0_OFFSET = 8'h54;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_1_OFFSET = 8'h58;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_2_OFFSET = 8'h5c;
	localparam [7:0] aes_reg_pkg_AES_DATA_IN_3_OFFSET = 8'h60;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_0_OFFSET = 8'h64;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_1_OFFSET = 8'h68;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_2_OFFSET = 8'h6c;
	localparam [7:0] aes_reg_pkg_AES_DATA_OUT_3_OFFSET = 8'h70;
	localparam [7:0] aes_reg_pkg_AES_IV_0_OFFSET = 8'h44;
	localparam [7:0] aes_reg_pkg_AES_IV_1_OFFSET = 8'h48;
	localparam [7:0] aes_reg_pkg_AES_IV_2_OFFSET = 8'h4c;
	localparam [7:0] aes_reg_pkg_AES_IV_3_OFFSET = 8'h50;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET = 8'h04;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET = 8'h08;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET = 8'h0c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET = 8'h10;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET = 8'h14;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET = 8'h18;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET = 8'h1c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET = 8'h20;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET = 8'h24;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET = 8'h28;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET = 8'h2c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET = 8'h30;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET = 8'h34;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET = 8'h38;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET = 8'h3c;
	localparam [7:0] aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET = 8'h40;
	localparam [7:0] aes_reg_pkg_AES_STATUS_OFFSET = 8'h84;
	function automatic [3:0] sv2v_cast_EECFA;
		input reg [3:0] inp;
		sv2v_cast_EECFA = inp;
	endfunction
	function automatic [7:0] sv2v_cast_288BE;
		input reg [7:0] inp;
		sv2v_cast_288BE = inp;
	endfunction
	function automatic [2:0] sv2v_cast_2BC67;
		input reg [2:0] inp;
		sv2v_cast_2BC67 = inp;
	endfunction
	function automatic [1:0] sv2v_cast_63054;
		input reg [1:0] inp;
		sv2v_cast_63054 = inp;
	endfunction
	always @(*) begin : aes_wrap_fsm
		if (_sv2v_0)
			;
		h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
		h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
		h2d[3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))))) ? ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) + 1 : ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
		h2d[top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))-:((top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))))) >= ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))) + 1 : ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) - (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) + 1)] = 2'h2;
		h2d[top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))-:(((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))) ? ((top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))) + 1 : ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) - (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))) + 1)] = 8'h00;
		h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = 32'haaaaaaa8;
		h2d[top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))-:((top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7))) >= (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)) ? ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) + 1 : ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) + 1)] = 4'hf;
		h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 32'h55555555;
		h2d[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 1) - (tlul_pkg_RsvdWidth + 17))-:((tlul_pkg_RsvdWidth + 17) >= 18 ? tlul_pkg_RsvdWidth : 19 - (tlul_pkg_RsvdWidth + 17))] = 1'sb0;
		h2d[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 18)-:4] = sv2v_cast_EECFA(4'h9);
		h2d[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 14)-:7] = 1'sb0;
		h2d[((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) - 7)-:tlul_pkg_DataIntgWidth] = 1'sb0;
		h2d[0] = 1'b1;
		aes_wrap_ctrl_ns = aes_wrap_ctrl_cs;
		count_d = count_q + 32'h00000001;
		data_out_d = data_out_q;
		test_done_o = 1'b0;
		(* full_case, parallel_case *)
		case (aes_wrap_ctrl_cs)
			sv2v_cast_288BE(0): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_STATUS_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					if (d2h[(top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - 31] == 1'b1) begin
						aes_wrap_ctrl_ns = sv2v_cast_288BE(30);
						count_d = 32'h00000000;
					end
				end
			end
			sv2v_cast_288BE(30): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_CTRL_AUX_SHADOWED_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 32'h00000000;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))])
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
				if ((count_q >= 32'h00000003) && d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))])
					aes_wrap_ctrl_ns = sv2v_cast_288BE(29);
			end
			sv2v_cast_288BE(29): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_CTRL_SHADOWED_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = {20'h00000, SIDELOAD, sv2v_cast_2BC67(3'b001), AES_MODE, sv2v_cast_63054(2'b01)};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))])
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
				if ((count_q >= 32'h00000007) && d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))])
					aes_wrap_ctrl_ns = (AES_MODE == sv2v_cast_86B6A(6'b000001) ? sv2v_cast_288BE(21) : sv2v_cast_288BE(17));
			end
			sv2v_cast_288BE(1): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_0_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[31:0];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(2);
				end
			end
			sv2v_cast_288BE(2): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_1_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[63:32];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(3);
				end
			end
			sv2v_cast_288BE(3): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_2_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[95:64];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(4);
				end
			end
			sv2v_cast_288BE(4): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_3_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[127:96];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(5);
				end
			end
			sv2v_cast_288BE(5): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_4_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[159:128];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(6);
				end
			end
			sv2v_cast_288BE(6): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_5_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[195:160];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(7);
				end
			end
			sv2v_cast_288BE(7): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_6_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[227:196];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(8);
				end
			end
			sv2v_cast_288BE(8): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE0_7_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_key[255:228];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(9);
				end
			end
			sv2v_cast_288BE(9): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_0_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(10);
				end
			end
			sv2v_cast_288BE(10): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_1_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(11);
				end
			end
			sv2v_cast_288BE(11): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_2_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(12);
				end
			end
			sv2v_cast_288BE(12): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_3_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(13);
				end
			end
			sv2v_cast_288BE(13): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_4_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(14);
				end
			end
			sv2v_cast_288BE(14): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_5_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(15);
				end
			end
			sv2v_cast_288BE(15): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_6_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(16);
				end
			end
			sv2v_cast_288BE(16): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_KEY_SHARE1_7_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = (AES_MODE == sv2v_cast_86B6A(6'b000001) ? sv2v_cast_288BE(21) : sv2v_cast_288BE(17));
				end
			end
			sv2v_cast_288BE(17): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_IV_0_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(18);
				end
			end
			sv2v_cast_288BE(18): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_IV_1_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(19);
				end
			end
			sv2v_cast_288BE(19): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_IV_2_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(20);
				end
			end
			sv2v_cast_288BE(20): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_IV_3_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = 1'sb0;
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(21);
				end
			end
			sv2v_cast_288BE(21): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_IN_0_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_input[31:0];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(22);
				end
			end
			sv2v_cast_288BE(22): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_IN_1_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_input[63:32];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(23);
				end
			end
			sv2v_cast_288BE(23): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_IN_2_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_input[95:64];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(24);
				end
			end
			sv2v_cast_288BE(24): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h0;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_IN_3_OFFSET};
				h2d[top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)-:((32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)) >= ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8) ? ((top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)) - ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)) + 1 : (((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1) - (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))) + 1)] = aes_input[127:96];
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					aes_wrap_ctrl_ns = sv2v_cast_288BE(32);
					count_d = 1'sb0;
				end
			end
			sv2v_cast_288BE(32): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_STATUS_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					if ((d2h[(top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - 31] == 1'b1) && (d2h[(top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - 28] == 1'b1))
						aes_wrap_ctrl_ns = sv2v_cast_288BE(25);
				end
			end
			sv2v_cast_288BE(25): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_OUT_0_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					data_out_d[31:0] = d2h[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
					aes_wrap_ctrl_ns = sv2v_cast_288BE(26);
				end
			end
			sv2v_cast_288BE(26): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_OUT_1_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					data_out_d[63:32] = d2h[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
					aes_wrap_ctrl_ns = sv2v_cast_288BE(27);
				end
			end
			sv2v_cast_288BE(27): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_OUT_2_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					data_out_d[95:64] = d2h[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
					aes_wrap_ctrl_ns = sv2v_cast_288BE(28);
				end
			end
			sv2v_cast_288BE(28): begin
				h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b1;
				h2d[6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))-:((6 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))))) >= (3 + (top_pkg_TL_SZW + ((32'sd8 + 32'sd32) + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8)))))) ? ((6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))) - (3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))))))) + 1 : ((3 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))))))) - (6 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))))))) + 1)] = 3'h4;
				h2d[top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))-:((32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) >= (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 8))) ? ((top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0)))) - (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1)))) + 1 : ((top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 1))) - (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))) + 1)] = {{'d24 {1'b0}}, aes_reg_pkg_AES_DATA_OUT_3_OFFSET};
				if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))]) begin
					h2d[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_AW + (top_pkg_TL_DBW + (top_pkg_TL_DW + ((((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth) + 0))))))] = 1'b0;
					data_out_d[127:96] = d2h[top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)-:((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) >= ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) ? ((top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)) - ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2)) + 1 : (((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 2) - (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1))) + 1)];
					aes_wrap_ctrl_ns = sv2v_cast_288BE(33);
				end
			end
			sv2v_cast_288BE(33): test_done_o = 1'b1;
			default: aes_wrap_ctrl_ns = sv2v_cast_288BE(33);
		endcase
		if (d2h[7 + (top_pkg_TL_SZW + (top_pkg_TL_AIW + (top_pkg_TL_DIW + (top_pkg_TL_DW + ((tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth) + 1)))))] && d2h[1])
			aes_wrap_ctrl_ns = sv2v_cast_288BE(33);
	end
	always @(posedge clk_i or negedge rst_ni) begin : fsm_reg
		if (!rst_ni) begin
			aes_wrap_ctrl_cs <= sv2v_cast_288BE(0);
			count_q <= 32'b00000000000000000000000000000000;
		end
		else begin
			aes_wrap_ctrl_cs <= aes_wrap_ctrl_ns;
			count_q <= count_d;
		end
	end
	always @(posedge clk_i or negedge rst_ni) begin : data_out_reg
		if (!rst_ni)
			data_out_q <= 1'sb0;
		else
			data_out_q <= data_out_d;
	end
	assign aes_output = data_out_q;
	initial _sv2v_0 = 0;
endmodule
