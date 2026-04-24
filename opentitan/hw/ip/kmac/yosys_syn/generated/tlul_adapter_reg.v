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
