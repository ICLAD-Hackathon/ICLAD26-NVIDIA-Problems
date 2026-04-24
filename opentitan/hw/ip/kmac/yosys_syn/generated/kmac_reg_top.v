module kmac_reg_top (
	clk_i,
	rst_ni,
	rst_shadowed_ni,
	tl_i,
	tl_o,
	tl_win_o,
	tl_win_i,
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
	output wire [(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? (2 * (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1)) - 1 : (2 * (1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))) + (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) - 1)):(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0)] tl_win_o;
	input wire [((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (2 * ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2)) - 1 : (2 * (1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))) + ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 0)):((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1)] tl_win_i;
	output wire [1534:0] reg2hw;
	input wire [62:0] hw2reg;
	output wire shadowed_storage_err_o;
	output wire shadowed_update_err_o;
	output wire intg_err_o;
	localparam signed [31:0] AW = 12;
	localparam signed [31:0] DW = 32;
	localparam signed [31:0] DBW = 4;
	wire reg_we;
	wire reg_re;
	wire [11:0] reg_addr;
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
	reg [56:0] reg_we_check;
	prim_reg_we_check #(.OneHotWidth(57)) u_prim_reg_we_check(
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
	wire [(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? (3 * (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1)) - 1 : (3 * (1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))) + (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) - 1)):(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0)] tl_socket_h2d;
	wire [((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (3 * ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2)) - 1 : (3 * (1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))) + ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 0)):((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1)] tl_socket_d2h;
	reg [1:0] reg_steer;
	assign tl_reg_h2d = tl_socket_h2d[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + 0+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))];
	assign tl_socket_d2h[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + 0+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))] = tl_reg_d2h;
	assign tl_win_o[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + (((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))] = tl_socket_h2d[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + (2 * (((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0)))+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))];
	assign tl_socket_d2h[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + (2 * ((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1)))+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))] = tl_win_i[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + ((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))];
	assign tl_win_o[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + 0+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))] = tl_socket_h2d[(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? 0 : ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0) + (((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))+:(((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd32)) + top_pkg_TL_DBW) + 32'sd32) + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 32'sd7)) + 0) >= 0 ? ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 1 : 1 - (((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_AW) + top_pkg_TL_DBW) + top_pkg_TL_DW) + (((tlul_pkg_RsvdWidth + prim_mubi_pkg_MuBi4Width) + tlul_pkg_H2DCmdIntgWidth) + tlul_pkg_DataIntgWidth)) + 0))];
	assign tl_socket_d2h[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + ((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))] = tl_win_i[((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? 0 : (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1) + 0+:((((((7 + top_pkg_TL_SZW) + (32'sd8 + 32'sd1)) + 32'sd32) + (32'sd7 + 32'sd7)) + 1) >= 0 ? (((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 2 : 1 - ((((((7 + top_pkg_TL_SZW) + top_pkg_TL_AIW) + top_pkg_TL_DIW) + top_pkg_TL_DW) + (tlul_pkg_D2HRspIntgWidth + tlul_pkg_DataIntgWidth)) + 1))];
	tlul_socket_1n #(
		.N(3),
		.HReqPass(1'b1),
		.HRspPass(1'b1),
		.DReqPass({3 {1'b1}}),
		.DRspPass({3 {1'b1}}),
		.HReqDepth(4'h0),
		.HRspDepth(4'h0),
		.DReqDepth({3 {4'h0}}),
		.DRspDepth({3 {4'h0}}),
		.ExplicitErrs(1'b0)
	) u_socket(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.tl_h_i(tl_i),
		.tl_h_o(tl_o_pre),
		.tl_d_o(tl_socket_h2d),
		.tl_d_i(tl_socket_d2h),
		.dev_select_i(reg_steer)
	);
	always @(*) begin
		if (_sv2v_0)
			;
		reg_steer = ((1024 <= tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 20:(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 31]) && (1535 >= tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 20:(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 31]) ? 2'd0 : ((2048 <= tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 20:(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 31]) && (4095 >= tl_i[(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 20:(32'sd32 + (top_pkg_TL_DBW + (32'sd32 + ((tlul_pkg_RsvdWidth + (32'sd4 + 32'sd7)) + 7)))) - 31]) ? 2'd1 : 2'd2));
		if (intg_err)
			reg_steer = 2'd2;
	end
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
	wire intr_state_we;
	wire intr_state_kmac_done_qs;
	wire intr_state_kmac_done_wd;
	wire intr_state_fifo_empty_qs;
	wire intr_state_kmac_err_qs;
	wire intr_state_kmac_err_wd;
	wire intr_enable_we;
	wire intr_enable_kmac_done_qs;
	wire intr_enable_kmac_done_wd;
	wire intr_enable_fifo_empty_qs;
	wire intr_enable_fifo_empty_wd;
	wire intr_enable_kmac_err_qs;
	wire intr_enable_kmac_err_wd;
	wire intr_test_we;
	wire intr_test_kmac_done_wd;
	wire intr_test_fifo_empty_wd;
	wire intr_test_kmac_err_wd;
	wire alert_test_we;
	wire alert_test_recov_operation_err_wd;
	wire alert_test_fatal_fault_err_wd;
	wire cfg_regwen_re;
	wire cfg_regwen_qs;
	wire cfg_shadowed_re;
	wire cfg_shadowed_we;
	wire cfg_shadowed_kmac_en_qs;
	wire cfg_shadowed_kmac_en_wd;
	wire cfg_shadowed_kmac_en_storage_err;
	wire cfg_shadowed_kmac_en_update_err;
	wire [2:0] cfg_shadowed_kstrength_qs;
	wire [2:0] cfg_shadowed_kstrength_wd;
	wire cfg_shadowed_kstrength_storage_err;
	wire cfg_shadowed_kstrength_update_err;
	wire [1:0] cfg_shadowed_mode_qs;
	wire [1:0] cfg_shadowed_mode_wd;
	wire cfg_shadowed_mode_storage_err;
	wire cfg_shadowed_mode_update_err;
	wire cfg_shadowed_msg_endianness_qs;
	wire cfg_shadowed_msg_endianness_wd;
	wire cfg_shadowed_msg_endianness_storage_err;
	wire cfg_shadowed_msg_endianness_update_err;
	wire cfg_shadowed_state_endianness_qs;
	wire cfg_shadowed_state_endianness_wd;
	wire cfg_shadowed_state_endianness_storage_err;
	wire cfg_shadowed_state_endianness_update_err;
	wire cfg_shadowed_sideload_qs;
	wire cfg_shadowed_sideload_wd;
	wire cfg_shadowed_sideload_storage_err;
	wire cfg_shadowed_sideload_update_err;
	wire [1:0] cfg_shadowed_entropy_mode_qs;
	wire [1:0] cfg_shadowed_entropy_mode_wd;
	wire cfg_shadowed_entropy_mode_storage_err;
	wire cfg_shadowed_entropy_mode_update_err;
	wire cfg_shadowed_entropy_fast_process_qs;
	wire cfg_shadowed_entropy_fast_process_wd;
	wire cfg_shadowed_entropy_fast_process_storage_err;
	wire cfg_shadowed_entropy_fast_process_update_err;
	wire cfg_shadowed_msg_mask_qs;
	wire cfg_shadowed_msg_mask_wd;
	wire cfg_shadowed_msg_mask_storage_err;
	wire cfg_shadowed_msg_mask_update_err;
	wire cfg_shadowed_entropy_ready_qs;
	wire cfg_shadowed_entropy_ready_wd;
	wire cfg_shadowed_entropy_ready_storage_err;
	wire cfg_shadowed_entropy_ready_update_err;
	wire cfg_shadowed_en_unsupported_modestrength_qs;
	wire cfg_shadowed_en_unsupported_modestrength_wd;
	wire cfg_shadowed_en_unsupported_modestrength_storage_err;
	wire cfg_shadowed_en_unsupported_modestrength_update_err;
	wire cmd_we;
	wire [5:0] cmd_cmd_wd;
	wire cmd_entropy_req_wd;
	wire cmd_hash_cnt_clr_wd;
	wire cmd_err_processed_wd;
	wire status_re;
	wire status_sha3_idle_qs;
	wire status_sha3_absorb_qs;
	wire status_sha3_squeeze_qs;
	wire [4:0] status_fifo_depth_qs;
	wire status_fifo_empty_qs;
	wire status_fifo_full_qs;
	wire status_alert_fatal_fault_qs;
	wire status_alert_recov_ctrl_update_err_qs;
	wire entropy_period_we;
	wire [9:0] entropy_period_prescaler_qs;
	wire [9:0] entropy_period_prescaler_wd;
	wire [15:0] entropy_period_wait_timer_qs;
	wire [15:0] entropy_period_wait_timer_wd;
	wire [9:0] entropy_refresh_hash_cnt_qs;
	wire entropy_refresh_threshold_shadowed_re;
	wire entropy_refresh_threshold_shadowed_we;
	wire [9:0] entropy_refresh_threshold_shadowed_qs;
	wire [9:0] entropy_refresh_threshold_shadowed_wd;
	wire entropy_refresh_threshold_shadowed_storage_err;
	wire entropy_refresh_threshold_shadowed_update_err;
	wire entropy_seed_we;
	wire [31:0] entropy_seed_wd;
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
	wire key_share0_8_we;
	wire [31:0] key_share0_8_wd;
	wire key_share0_9_we;
	wire [31:0] key_share0_9_wd;
	wire key_share0_10_we;
	wire [31:0] key_share0_10_wd;
	wire key_share0_11_we;
	wire [31:0] key_share0_11_wd;
	wire key_share0_12_we;
	wire [31:0] key_share0_12_wd;
	wire key_share0_13_we;
	wire [31:0] key_share0_13_wd;
	wire key_share0_14_we;
	wire [31:0] key_share0_14_wd;
	wire key_share0_15_we;
	wire [31:0] key_share0_15_wd;
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
	wire key_share1_8_we;
	wire [31:0] key_share1_8_wd;
	wire key_share1_9_we;
	wire [31:0] key_share1_9_wd;
	wire key_share1_10_we;
	wire [31:0] key_share1_10_wd;
	wire key_share1_11_we;
	wire [31:0] key_share1_11_wd;
	wire key_share1_12_we;
	wire [31:0] key_share1_12_wd;
	wire key_share1_13_we;
	wire [31:0] key_share1_13_wd;
	wire key_share1_14_we;
	wire [31:0] key_share1_14_wd;
	wire key_share1_15_we;
	wire [31:0] key_share1_15_wd;
	wire key_len_we;
	wire [2:0] key_len_wd;
	wire prefix_0_we;
	wire [31:0] prefix_0_qs;
	wire [31:0] prefix_0_wd;
	wire prefix_1_we;
	wire [31:0] prefix_1_qs;
	wire [31:0] prefix_1_wd;
	wire prefix_2_we;
	wire [31:0] prefix_2_qs;
	wire [31:0] prefix_2_wd;
	wire prefix_3_we;
	wire [31:0] prefix_3_qs;
	wire [31:0] prefix_3_wd;
	wire prefix_4_we;
	wire [31:0] prefix_4_qs;
	wire [31:0] prefix_4_wd;
	wire prefix_5_we;
	wire [31:0] prefix_5_qs;
	wire [31:0] prefix_5_wd;
	wire prefix_6_we;
	wire [31:0] prefix_6_qs;
	wire [31:0] prefix_6_wd;
	wire prefix_7_we;
	wire [31:0] prefix_7_qs;
	wire [31:0] prefix_7_wd;
	wire prefix_8_we;
	wire [31:0] prefix_8_qs;
	wire [31:0] prefix_8_wd;
	wire prefix_9_we;
	wire [31:0] prefix_9_qs;
	wire [31:0] prefix_9_wd;
	wire prefix_10_we;
	wire [31:0] prefix_10_qs;
	wire [31:0] prefix_10_wd;
	wire [31:0] err_code_qs;
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd3),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_state_kmac_done(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(intr_state_we),
		.wd(intr_state_kmac_done_wd),
		.de(hw2reg[57]),
		.d(hw2reg[58]),
		.qe(),
		.q(reg2hw[1532]),
		.ds(),
		.qs(intr_state_kmac_done_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd1),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_state_fifo_empty(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[59]),
		.d(hw2reg[60]),
		.qe(),
		.q(reg2hw[1533]),
		.ds(),
		.qs(intr_state_fifo_empty_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd3),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_state_kmac_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(intr_state_we),
		.wd(intr_state_kmac_err_wd),
		.de(hw2reg[61]),
		.d(hw2reg[62]),
		.qe(),
		.q(reg2hw[1534]),
		.ds(),
		.qs(intr_state_kmac_err_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_enable_kmac_done(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(intr_enable_we),
		.wd(intr_enable_kmac_done_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1529]),
		.ds(),
		.qs(intr_enable_kmac_done_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_enable_fifo_empty(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(intr_enable_we),
		.wd(intr_enable_fifo_empty_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1530]),
		.ds(),
		.qs(intr_enable_fifo_empty_qs)
	);
	prim_subreg #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_intr_enable_kmac_err(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(intr_enable_we),
		.wd(intr_enable_kmac_err_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1531]),
		.ds(),
		.qs(intr_enable_kmac_err_qs)
	);
	wire intr_test_qe;
	wire [2:0] intr_test_flds_we;
	assign intr_test_qe = &intr_test_flds_we;
	prim_subreg_ext #(.DW(1)) u_intr_test_kmac_done(
		.re(1'b0),
		.we(intr_test_we),
		.wd(intr_test_kmac_done_wd),
		.d(1'sb0),
		.qre(),
		.qe(intr_test_flds_we[0]),
		.q(reg2hw[1524]),
		.ds(),
		.qs()
	);
	assign reg2hw[1523] = intr_test_qe;
	prim_subreg_ext #(.DW(1)) u_intr_test_fifo_empty(
		.re(1'b0),
		.we(intr_test_we),
		.wd(intr_test_fifo_empty_wd),
		.d(1'sb0),
		.qre(),
		.qe(intr_test_flds_we[1]),
		.q(reg2hw[1526]),
		.ds(),
		.qs()
	);
	assign reg2hw[1525] = intr_test_qe;
	prim_subreg_ext #(.DW(1)) u_intr_test_kmac_err(
		.re(1'b0),
		.we(intr_test_we),
		.wd(intr_test_kmac_err_wd),
		.d(1'sb0),
		.qre(),
		.qe(intr_test_flds_we[2]),
		.q(reg2hw[1528]),
		.ds(),
		.qs()
	);
	assign reg2hw[1527] = intr_test_qe;
	wire alert_test_qe;
	wire [1:0] alert_test_flds_we;
	assign alert_test_qe = &alert_test_flds_we;
	prim_subreg_ext #(.DW(1)) u_alert_test_recov_operation_err(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_recov_operation_err_wd),
		.d(1'sb0),
		.qre(),
		.qe(alert_test_flds_we[0]),
		.q(reg2hw[1520]),
		.ds(),
		.qs()
	);
	assign reg2hw[1519] = alert_test_qe;
	prim_subreg_ext #(.DW(1)) u_alert_test_fatal_fault_err(
		.re(1'b0),
		.we(alert_test_we),
		.wd(alert_test_fatal_fault_err_wd),
		.d(1'sb0),
		.qre(),
		.qe(alert_test_flds_we[1]),
		.q(reg2hw[1522]),
		.ds(),
		.qs()
	);
	assign reg2hw[1521] = alert_test_qe;
	prim_subreg_ext #(.DW(1)) u_cfg_regwen(
		.re(cfg_regwen_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[56]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(cfg_regwen_qs)
	);
	wire cfg_shadowed_qe;
	wire [10:0] cfg_shadowed_flds_we;
	prim_flop #(
		.Width(1),
		.ResetValue(0)
	) u_cfg_shadowed0_qe(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.d_i(&cfg_shadowed_flds_we),
		.q_o(cfg_shadowed_qe)
	);
	wire cfg_shadowed_gated_we;
	assign cfg_shadowed_gated_we = cfg_shadowed_we & cfg_regwen_qs;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_kmac_en(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_kmac_en_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[0]),
		.q(reg2hw[1494]),
		.ds(),
		.qs(cfg_shadowed_kmac_en_qs),
		.phase(),
		.err_update(cfg_shadowed_kmac_en_update_err),
		.err_storage(cfg_shadowed_kmac_en_storage_err)
	);
	assign reg2hw[1493] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(3),
		.SwAccess(3'd0),
		.RESVAL(3'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_kstrength(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_kstrength_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[1]),
		.q(reg2hw[1498-:3]),
		.ds(),
		.qs(cfg_shadowed_kstrength_qs),
		.phase(),
		.err_update(cfg_shadowed_kstrength_update_err),
		.err_storage(cfg_shadowed_kstrength_storage_err)
	);
	assign reg2hw[1495] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(2),
		.SwAccess(3'd0),
		.RESVAL(2'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_mode(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_mode_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[2]),
		.q(reg2hw[1501-:2]),
		.ds(),
		.qs(cfg_shadowed_mode_qs),
		.phase(),
		.err_update(cfg_shadowed_mode_update_err),
		.err_storage(cfg_shadowed_mode_storage_err)
	);
	assign reg2hw[1499] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_msg_endianness(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_msg_endianness_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[3]),
		.q(reg2hw[1503]),
		.ds(),
		.qs(cfg_shadowed_msg_endianness_qs),
		.phase(),
		.err_update(cfg_shadowed_msg_endianness_update_err),
		.err_storage(cfg_shadowed_msg_endianness_storage_err)
	);
	assign reg2hw[1502] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_state_endianness(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_state_endianness_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[4]),
		.q(reg2hw[1505]),
		.ds(),
		.qs(cfg_shadowed_state_endianness_qs),
		.phase(),
		.err_update(cfg_shadowed_state_endianness_update_err),
		.err_storage(cfg_shadowed_state_endianness_storage_err)
	);
	assign reg2hw[1504] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_sideload(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_sideload_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[5]),
		.q(reg2hw[1507]),
		.ds(),
		.qs(cfg_shadowed_sideload_qs),
		.phase(),
		.err_update(cfg_shadowed_sideload_update_err),
		.err_storage(cfg_shadowed_sideload_storage_err)
	);
	assign reg2hw[1506] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(2),
		.SwAccess(3'd0),
		.RESVAL(2'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_entropy_mode(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_entropy_mode_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[6]),
		.q(reg2hw[1510-:2]),
		.ds(),
		.qs(cfg_shadowed_entropy_mode_qs),
		.phase(),
		.err_update(cfg_shadowed_entropy_mode_update_err),
		.err_storage(cfg_shadowed_entropy_mode_storage_err)
	);
	assign reg2hw[1508] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_entropy_fast_process(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_entropy_fast_process_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[7]),
		.q(reg2hw[1512]),
		.ds(),
		.qs(cfg_shadowed_entropy_fast_process_qs),
		.phase(),
		.err_update(cfg_shadowed_entropy_fast_process_update_err),
		.err_storage(cfg_shadowed_entropy_fast_process_storage_err)
	);
	assign reg2hw[1511] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_msg_mask(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_msg_mask_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[8]),
		.q(reg2hw[1514]),
		.ds(),
		.qs(cfg_shadowed_msg_mask_qs),
		.phase(),
		.err_update(cfg_shadowed_msg_mask_update_err),
		.err_storage(cfg_shadowed_msg_mask_storage_err)
	);
	assign reg2hw[1513] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_entropy_ready(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_entropy_ready_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[9]),
		.q(reg2hw[1516]),
		.ds(),
		.qs(cfg_shadowed_entropy_ready_qs),
		.phase(),
		.err_update(cfg_shadowed_entropy_ready_update_err),
		.err_storage(cfg_shadowed_entropy_ready_storage_err)
	);
	assign reg2hw[1515] = cfg_shadowed_qe;
	prim_subreg_shadow #(
		.DW(1),
		.SwAccess(3'd0),
		.RESVAL(1'h0),
		.Mubi(1'b0)
	) u_cfg_shadowed_en_unsupported_modestrength(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(cfg_shadowed_re),
		.we(cfg_shadowed_gated_we),
		.wd(cfg_shadowed_en_unsupported_modestrength_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(cfg_shadowed_flds_we[10]),
		.q(reg2hw[1518]),
		.ds(),
		.qs(cfg_shadowed_en_unsupported_modestrength_qs),
		.phase(),
		.err_update(cfg_shadowed_en_unsupported_modestrength_update_err),
		.err_storage(cfg_shadowed_en_unsupported_modestrength_storage_err)
	);
	assign reg2hw[1517] = cfg_shadowed_qe;
	wire cmd_qe;
	wire [3:0] cmd_flds_we;
	assign cmd_qe = &cmd_flds_we;
	prim_subreg_ext #(.DW(6)) u_cmd_cmd(
		.re(1'b0),
		.we(cmd_we),
		.wd(cmd_cmd_wd),
		.d(1'sb0),
		.qre(),
		.qe(cmd_flds_we[0]),
		.q(reg2hw[1486-:6]),
		.ds(),
		.qs()
	);
	assign reg2hw[1480] = cmd_qe;
	prim_subreg_ext #(.DW(1)) u_cmd_entropy_req(
		.re(1'b0),
		.we(cmd_we),
		.wd(cmd_entropy_req_wd),
		.d(1'sb0),
		.qre(),
		.qe(cmd_flds_we[1]),
		.q(reg2hw[1488]),
		.ds(),
		.qs()
	);
	assign reg2hw[1487] = cmd_qe;
	prim_subreg_ext #(.DW(1)) u_cmd_hash_cnt_clr(
		.re(1'b0),
		.we(cmd_we),
		.wd(cmd_hash_cnt_clr_wd),
		.d(1'sb0),
		.qre(),
		.qe(cmd_flds_we[2]),
		.q(reg2hw[1490]),
		.ds(),
		.qs()
	);
	assign reg2hw[1489] = cmd_qe;
	prim_subreg_ext #(.DW(1)) u_cmd_err_processed(
		.re(1'b0),
		.we(cmd_we),
		.wd(cmd_err_processed_wd),
		.d(1'sb0),
		.qre(),
		.qe(cmd_flds_we[3]),
		.q(reg2hw[1492]),
		.ds(),
		.qs()
	);
	assign reg2hw[1491] = cmd_qe;
	prim_subreg_ext #(.DW(1)) u_status_sha3_idle(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[44]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_sha3_idle_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_sha3_absorb(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[45]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_sha3_absorb_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_sha3_squeeze(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[46]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_sha3_squeeze_qs)
	);
	prim_subreg_ext #(.DW(5)) u_status_fifo_depth(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[51-:5]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_fifo_depth_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_fifo_empty(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[52]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_fifo_empty_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_fifo_full(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[53]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_fifo_full_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_alert_fatal_fault(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[54]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_fatal_fault_qs)
	);
	prim_subreg_ext #(.DW(1)) u_status_alert_recov_ctrl_update_err(
		.re(status_re),
		.we(1'b0),
		.wd(1'sb0),
		.d(hw2reg[55]),
		.qre(),
		.qe(),
		.q(),
		.ds(),
		.qs(status_alert_recov_ctrl_update_err_qs)
	);
	wire entropy_period_gated_we;
	assign entropy_period_gated_we = entropy_period_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(10),
		.SwAccess(3'd0),
		.RESVAL(10'h000),
		.Mubi(1'b0)
	) u_entropy_period_prescaler(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(entropy_period_gated_we),
		.wd(entropy_period_prescaler_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1463-:10]),
		.ds(),
		.qs(entropy_period_prescaler_qs)
	);
	prim_subreg #(
		.DW(16),
		.SwAccess(3'd0),
		.RESVAL(16'h0000),
		.Mubi(1'b0)
	) u_entropy_period_wait_timer(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(entropy_period_gated_we),
		.wd(entropy_period_wait_timer_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1479-:16]),
		.ds(),
		.qs(entropy_period_wait_timer_qs)
	);
	prim_subreg #(
		.DW(10),
		.SwAccess(3'd1),
		.RESVAL(10'h000),
		.Mubi(1'b0)
	) u_entropy_refresh_hash_cnt(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[33]),
		.d(hw2reg[43-:10]),
		.qe(),
		.q(),
		.ds(),
		.qs(entropy_refresh_hash_cnt_qs)
	);
	wire entropy_refresh_threshold_shadowed_gated_we;
	assign entropy_refresh_threshold_shadowed_gated_we = entropy_refresh_threshold_shadowed_we & cfg_regwen_qs;
	prim_subreg_shadow #(
		.DW(10),
		.SwAccess(3'd0),
		.RESVAL(10'h000),
		.Mubi(1'b0)
	) u_entropy_refresh_threshold_shadowed(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.re(entropy_refresh_threshold_shadowed_re),
		.we(entropy_refresh_threshold_shadowed_gated_we),
		.wd(entropy_refresh_threshold_shadowed_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[1453-:10]),
		.ds(),
		.qs(entropy_refresh_threshold_shadowed_qs),
		.phase(),
		.err_update(entropy_refresh_threshold_shadowed_update_err),
		.err_storage(entropy_refresh_threshold_shadowed_storage_err)
	);
	wire entropy_seed_qe;
	wire [0:0] entropy_seed_flds_we;
	assign entropy_seed_qe = &entropy_seed_flds_we;
	prim_subreg_ext #(.DW(32)) u_entropy_seed(
		.re(1'b0),
		.we(entropy_seed_we),
		.wd(entropy_seed_wd),
		.d(1'sb0),
		.qre(),
		.qe(entropy_seed_flds_we[0]),
		.q(reg2hw[1443-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1411] = entropy_seed_qe;
	wire key_share0_0_qe;
	wire [0:0] key_share0_0_flds_we;
	assign key_share0_0_qe = &key_share0_0_flds_we;
	wire key_share0_0_gated_we;
	assign key_share0_0_gated_we = key_share0_0_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_0(
		.re(1'b0),
		.we(key_share0_0_gated_we),
		.wd(key_share0_0_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_0_flds_we[0]),
		.q(reg2hw[915-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[883] = key_share0_0_qe;
	wire key_share0_1_qe;
	wire [0:0] key_share0_1_flds_we;
	assign key_share0_1_qe = &key_share0_1_flds_we;
	wire key_share0_1_gated_we;
	assign key_share0_1_gated_we = key_share0_1_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_1(
		.re(1'b0),
		.we(key_share0_1_gated_we),
		.wd(key_share0_1_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_1_flds_we[0]),
		.q(reg2hw[948-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[916] = key_share0_1_qe;
	wire key_share0_2_qe;
	wire [0:0] key_share0_2_flds_we;
	assign key_share0_2_qe = &key_share0_2_flds_we;
	wire key_share0_2_gated_we;
	assign key_share0_2_gated_we = key_share0_2_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_2(
		.re(1'b0),
		.we(key_share0_2_gated_we),
		.wd(key_share0_2_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_2_flds_we[0]),
		.q(reg2hw[981-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[949] = key_share0_2_qe;
	wire key_share0_3_qe;
	wire [0:0] key_share0_3_flds_we;
	assign key_share0_3_qe = &key_share0_3_flds_we;
	wire key_share0_3_gated_we;
	assign key_share0_3_gated_we = key_share0_3_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_3(
		.re(1'b0),
		.we(key_share0_3_gated_we),
		.wd(key_share0_3_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_3_flds_we[0]),
		.q(reg2hw[1014-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[982] = key_share0_3_qe;
	wire key_share0_4_qe;
	wire [0:0] key_share0_4_flds_we;
	assign key_share0_4_qe = &key_share0_4_flds_we;
	wire key_share0_4_gated_we;
	assign key_share0_4_gated_we = key_share0_4_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_4(
		.re(1'b0),
		.we(key_share0_4_gated_we),
		.wd(key_share0_4_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_4_flds_we[0]),
		.q(reg2hw[1047-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1015] = key_share0_4_qe;
	wire key_share0_5_qe;
	wire [0:0] key_share0_5_flds_we;
	assign key_share0_5_qe = &key_share0_5_flds_we;
	wire key_share0_5_gated_we;
	assign key_share0_5_gated_we = key_share0_5_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_5(
		.re(1'b0),
		.we(key_share0_5_gated_we),
		.wd(key_share0_5_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_5_flds_we[0]),
		.q(reg2hw[1080-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1048] = key_share0_5_qe;
	wire key_share0_6_qe;
	wire [0:0] key_share0_6_flds_we;
	assign key_share0_6_qe = &key_share0_6_flds_we;
	wire key_share0_6_gated_we;
	assign key_share0_6_gated_we = key_share0_6_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_6(
		.re(1'b0),
		.we(key_share0_6_gated_we),
		.wd(key_share0_6_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_6_flds_we[0]),
		.q(reg2hw[1113-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1081] = key_share0_6_qe;
	wire key_share0_7_qe;
	wire [0:0] key_share0_7_flds_we;
	assign key_share0_7_qe = &key_share0_7_flds_we;
	wire key_share0_7_gated_we;
	assign key_share0_7_gated_we = key_share0_7_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_7(
		.re(1'b0),
		.we(key_share0_7_gated_we),
		.wd(key_share0_7_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_7_flds_we[0]),
		.q(reg2hw[1146-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1114] = key_share0_7_qe;
	wire key_share0_8_qe;
	wire [0:0] key_share0_8_flds_we;
	assign key_share0_8_qe = &key_share0_8_flds_we;
	wire key_share0_8_gated_we;
	assign key_share0_8_gated_we = key_share0_8_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_8(
		.re(1'b0),
		.we(key_share0_8_gated_we),
		.wd(key_share0_8_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_8_flds_we[0]),
		.q(reg2hw[1179-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1147] = key_share0_8_qe;
	wire key_share0_9_qe;
	wire [0:0] key_share0_9_flds_we;
	assign key_share0_9_qe = &key_share0_9_flds_we;
	wire key_share0_9_gated_we;
	assign key_share0_9_gated_we = key_share0_9_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_9(
		.re(1'b0),
		.we(key_share0_9_gated_we),
		.wd(key_share0_9_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_9_flds_we[0]),
		.q(reg2hw[1212-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1180] = key_share0_9_qe;
	wire key_share0_10_qe;
	wire [0:0] key_share0_10_flds_we;
	assign key_share0_10_qe = &key_share0_10_flds_we;
	wire key_share0_10_gated_we;
	assign key_share0_10_gated_we = key_share0_10_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_10(
		.re(1'b0),
		.we(key_share0_10_gated_we),
		.wd(key_share0_10_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_10_flds_we[0]),
		.q(reg2hw[1245-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1213] = key_share0_10_qe;
	wire key_share0_11_qe;
	wire [0:0] key_share0_11_flds_we;
	assign key_share0_11_qe = &key_share0_11_flds_we;
	wire key_share0_11_gated_we;
	assign key_share0_11_gated_we = key_share0_11_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_11(
		.re(1'b0),
		.we(key_share0_11_gated_we),
		.wd(key_share0_11_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_11_flds_we[0]),
		.q(reg2hw[1278-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1246] = key_share0_11_qe;
	wire key_share0_12_qe;
	wire [0:0] key_share0_12_flds_we;
	assign key_share0_12_qe = &key_share0_12_flds_we;
	wire key_share0_12_gated_we;
	assign key_share0_12_gated_we = key_share0_12_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_12(
		.re(1'b0),
		.we(key_share0_12_gated_we),
		.wd(key_share0_12_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_12_flds_we[0]),
		.q(reg2hw[1311-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1279] = key_share0_12_qe;
	wire key_share0_13_qe;
	wire [0:0] key_share0_13_flds_we;
	assign key_share0_13_qe = &key_share0_13_flds_we;
	wire key_share0_13_gated_we;
	assign key_share0_13_gated_we = key_share0_13_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_13(
		.re(1'b0),
		.we(key_share0_13_gated_we),
		.wd(key_share0_13_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_13_flds_we[0]),
		.q(reg2hw[1344-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1312] = key_share0_13_qe;
	wire key_share0_14_qe;
	wire [0:0] key_share0_14_flds_we;
	assign key_share0_14_qe = &key_share0_14_flds_we;
	wire key_share0_14_gated_we;
	assign key_share0_14_gated_we = key_share0_14_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_14(
		.re(1'b0),
		.we(key_share0_14_gated_we),
		.wd(key_share0_14_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_14_flds_we[0]),
		.q(reg2hw[1377-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1345] = key_share0_14_qe;
	wire key_share0_15_qe;
	wire [0:0] key_share0_15_flds_we;
	assign key_share0_15_qe = &key_share0_15_flds_we;
	wire key_share0_15_gated_we;
	assign key_share0_15_gated_we = key_share0_15_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share0_15(
		.re(1'b0),
		.we(key_share0_15_gated_we),
		.wd(key_share0_15_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share0_15_flds_we[0]),
		.q(reg2hw[1410-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[1378] = key_share0_15_qe;
	wire key_share1_0_qe;
	wire [0:0] key_share1_0_flds_we;
	assign key_share1_0_qe = &key_share1_0_flds_we;
	wire key_share1_0_gated_we;
	assign key_share1_0_gated_we = key_share1_0_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_0(
		.re(1'b0),
		.we(key_share1_0_gated_we),
		.wd(key_share1_0_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_0_flds_we[0]),
		.q(reg2hw[387-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[355] = key_share1_0_qe;
	wire key_share1_1_qe;
	wire [0:0] key_share1_1_flds_we;
	assign key_share1_1_qe = &key_share1_1_flds_we;
	wire key_share1_1_gated_we;
	assign key_share1_1_gated_we = key_share1_1_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_1(
		.re(1'b0),
		.we(key_share1_1_gated_we),
		.wd(key_share1_1_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_1_flds_we[0]),
		.q(reg2hw[420-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[388] = key_share1_1_qe;
	wire key_share1_2_qe;
	wire [0:0] key_share1_2_flds_we;
	assign key_share1_2_qe = &key_share1_2_flds_we;
	wire key_share1_2_gated_we;
	assign key_share1_2_gated_we = key_share1_2_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_2(
		.re(1'b0),
		.we(key_share1_2_gated_we),
		.wd(key_share1_2_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_2_flds_we[0]),
		.q(reg2hw[453-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[421] = key_share1_2_qe;
	wire key_share1_3_qe;
	wire [0:0] key_share1_3_flds_we;
	assign key_share1_3_qe = &key_share1_3_flds_we;
	wire key_share1_3_gated_we;
	assign key_share1_3_gated_we = key_share1_3_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_3(
		.re(1'b0),
		.we(key_share1_3_gated_we),
		.wd(key_share1_3_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_3_flds_we[0]),
		.q(reg2hw[486-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[454] = key_share1_3_qe;
	wire key_share1_4_qe;
	wire [0:0] key_share1_4_flds_we;
	assign key_share1_4_qe = &key_share1_4_flds_we;
	wire key_share1_4_gated_we;
	assign key_share1_4_gated_we = key_share1_4_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_4(
		.re(1'b0),
		.we(key_share1_4_gated_we),
		.wd(key_share1_4_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_4_flds_we[0]),
		.q(reg2hw[519-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[487] = key_share1_4_qe;
	wire key_share1_5_qe;
	wire [0:0] key_share1_5_flds_we;
	assign key_share1_5_qe = &key_share1_5_flds_we;
	wire key_share1_5_gated_we;
	assign key_share1_5_gated_we = key_share1_5_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_5(
		.re(1'b0),
		.we(key_share1_5_gated_we),
		.wd(key_share1_5_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_5_flds_we[0]),
		.q(reg2hw[552-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[520] = key_share1_5_qe;
	wire key_share1_6_qe;
	wire [0:0] key_share1_6_flds_we;
	assign key_share1_6_qe = &key_share1_6_flds_we;
	wire key_share1_6_gated_we;
	assign key_share1_6_gated_we = key_share1_6_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_6(
		.re(1'b0),
		.we(key_share1_6_gated_we),
		.wd(key_share1_6_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_6_flds_we[0]),
		.q(reg2hw[585-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[553] = key_share1_6_qe;
	wire key_share1_7_qe;
	wire [0:0] key_share1_7_flds_we;
	assign key_share1_7_qe = &key_share1_7_flds_we;
	wire key_share1_7_gated_we;
	assign key_share1_7_gated_we = key_share1_7_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_7(
		.re(1'b0),
		.we(key_share1_7_gated_we),
		.wd(key_share1_7_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_7_flds_we[0]),
		.q(reg2hw[618-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[586] = key_share1_7_qe;
	wire key_share1_8_qe;
	wire [0:0] key_share1_8_flds_we;
	assign key_share1_8_qe = &key_share1_8_flds_we;
	wire key_share1_8_gated_we;
	assign key_share1_8_gated_we = key_share1_8_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_8(
		.re(1'b0),
		.we(key_share1_8_gated_we),
		.wd(key_share1_8_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_8_flds_we[0]),
		.q(reg2hw[651-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[619] = key_share1_8_qe;
	wire key_share1_9_qe;
	wire [0:0] key_share1_9_flds_we;
	assign key_share1_9_qe = &key_share1_9_flds_we;
	wire key_share1_9_gated_we;
	assign key_share1_9_gated_we = key_share1_9_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_9(
		.re(1'b0),
		.we(key_share1_9_gated_we),
		.wd(key_share1_9_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_9_flds_we[0]),
		.q(reg2hw[684-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[652] = key_share1_9_qe;
	wire key_share1_10_qe;
	wire [0:0] key_share1_10_flds_we;
	assign key_share1_10_qe = &key_share1_10_flds_we;
	wire key_share1_10_gated_we;
	assign key_share1_10_gated_we = key_share1_10_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_10(
		.re(1'b0),
		.we(key_share1_10_gated_we),
		.wd(key_share1_10_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_10_flds_we[0]),
		.q(reg2hw[717-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[685] = key_share1_10_qe;
	wire key_share1_11_qe;
	wire [0:0] key_share1_11_flds_we;
	assign key_share1_11_qe = &key_share1_11_flds_we;
	wire key_share1_11_gated_we;
	assign key_share1_11_gated_we = key_share1_11_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_11(
		.re(1'b0),
		.we(key_share1_11_gated_we),
		.wd(key_share1_11_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_11_flds_we[0]),
		.q(reg2hw[750-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[718] = key_share1_11_qe;
	wire key_share1_12_qe;
	wire [0:0] key_share1_12_flds_we;
	assign key_share1_12_qe = &key_share1_12_flds_we;
	wire key_share1_12_gated_we;
	assign key_share1_12_gated_we = key_share1_12_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_12(
		.re(1'b0),
		.we(key_share1_12_gated_we),
		.wd(key_share1_12_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_12_flds_we[0]),
		.q(reg2hw[783-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[751] = key_share1_12_qe;
	wire key_share1_13_qe;
	wire [0:0] key_share1_13_flds_we;
	assign key_share1_13_qe = &key_share1_13_flds_we;
	wire key_share1_13_gated_we;
	assign key_share1_13_gated_we = key_share1_13_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_13(
		.re(1'b0),
		.we(key_share1_13_gated_we),
		.wd(key_share1_13_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_13_flds_we[0]),
		.q(reg2hw[816-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[784] = key_share1_13_qe;
	wire key_share1_14_qe;
	wire [0:0] key_share1_14_flds_we;
	assign key_share1_14_qe = &key_share1_14_flds_we;
	wire key_share1_14_gated_we;
	assign key_share1_14_gated_we = key_share1_14_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_14(
		.re(1'b0),
		.we(key_share1_14_gated_we),
		.wd(key_share1_14_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_14_flds_we[0]),
		.q(reg2hw[849-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[817] = key_share1_14_qe;
	wire key_share1_15_qe;
	wire [0:0] key_share1_15_flds_we;
	assign key_share1_15_qe = &key_share1_15_flds_we;
	wire key_share1_15_gated_we;
	assign key_share1_15_gated_we = key_share1_15_we & cfg_regwen_qs;
	prim_subreg_ext #(.DW(32)) u_key_share1_15(
		.re(1'b0),
		.we(key_share1_15_gated_we),
		.wd(key_share1_15_wd),
		.d(1'sb0),
		.qre(),
		.qe(key_share1_15_flds_we[0]),
		.q(reg2hw[882-:32]),
		.ds(),
		.qs()
	);
	assign reg2hw[850] = key_share1_15_qe;
	wire key_len_gated_we;
	assign key_len_gated_we = key_len_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(3),
		.SwAccess(3'd2),
		.RESVAL(3'h0),
		.Mubi(1'b0)
	) u_key_len(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(key_len_gated_we),
		.wd(key_len_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[354-:3]),
		.ds(),
		.qs()
	);
	wire prefix_0_gated_we;
	assign prefix_0_gated_we = prefix_0_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_0(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_0_gated_we),
		.wd(prefix_0_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[31-:32]),
		.ds(),
		.qs(prefix_0_qs)
	);
	wire prefix_1_gated_we;
	assign prefix_1_gated_we = prefix_1_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_1(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_1_gated_we),
		.wd(prefix_1_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[63-:32]),
		.ds(),
		.qs(prefix_1_qs)
	);
	wire prefix_2_gated_we;
	assign prefix_2_gated_we = prefix_2_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_2(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_2_gated_we),
		.wd(prefix_2_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[95-:32]),
		.ds(),
		.qs(prefix_2_qs)
	);
	wire prefix_3_gated_we;
	assign prefix_3_gated_we = prefix_3_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_3(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_3_gated_we),
		.wd(prefix_3_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[127-:32]),
		.ds(),
		.qs(prefix_3_qs)
	);
	wire prefix_4_gated_we;
	assign prefix_4_gated_we = prefix_4_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_4(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_4_gated_we),
		.wd(prefix_4_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[159-:32]),
		.ds(),
		.qs(prefix_4_qs)
	);
	wire prefix_5_gated_we;
	assign prefix_5_gated_we = prefix_5_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_5(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_5_gated_we),
		.wd(prefix_5_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[191-:32]),
		.ds(),
		.qs(prefix_5_qs)
	);
	wire prefix_6_gated_we;
	assign prefix_6_gated_we = prefix_6_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_6(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_6_gated_we),
		.wd(prefix_6_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[223-:32]),
		.ds(),
		.qs(prefix_6_qs)
	);
	wire prefix_7_gated_we;
	assign prefix_7_gated_we = prefix_7_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_7(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_7_gated_we),
		.wd(prefix_7_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[255-:32]),
		.ds(),
		.qs(prefix_7_qs)
	);
	wire prefix_8_gated_we;
	assign prefix_8_gated_we = prefix_8_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_8(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_8_gated_we),
		.wd(prefix_8_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[287-:32]),
		.ds(),
		.qs(prefix_8_qs)
	);
	wire prefix_9_gated_we;
	assign prefix_9_gated_we = prefix_9_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_9(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_9_gated_we),
		.wd(prefix_9_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[319-:32]),
		.ds(),
		.qs(prefix_9_qs)
	);
	wire prefix_10_gated_we;
	assign prefix_10_gated_we = prefix_10_we & cfg_regwen_qs;
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd0),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_prefix_10(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(prefix_10_gated_we),
		.wd(prefix_10_wd),
		.de(1'b0),
		.d(1'sb0),
		.qe(),
		.q(reg2hw[351-:32]),
		.ds(),
		.qs(prefix_10_qs)
	);
	prim_subreg #(
		.DW(32),
		.SwAccess(3'd1),
		.RESVAL(32'h00000000),
		.Mubi(1'b0)
	) u_err_code(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.we(1'b0),
		.wd(1'sb0),
		.de(hw2reg[0]),
		.d(hw2reg[32-:32]),
		.qe(),
		.q(),
		.ds(),
		.qs(err_code_qs)
	);
	reg [56:0] addr_hit;
	localparam signed [31:0] kmac_reg_pkg_BlockAw = 12;
	localparam [11:0] kmac_reg_pkg_KMAC_ALERT_TEST_OFFSET = 12'h00c;
	localparam [11:0] kmac_reg_pkg_KMAC_CFG_REGWEN_OFFSET = 12'h010;
	localparam [11:0] kmac_reg_pkg_KMAC_CFG_SHADOWED_OFFSET = 12'h014;
	localparam [11:0] kmac_reg_pkg_KMAC_CMD_OFFSET = 12'h018;
	localparam [11:0] kmac_reg_pkg_KMAC_ENTROPY_PERIOD_OFFSET = 12'h020;
	localparam [11:0] kmac_reg_pkg_KMAC_ENTROPY_REFRESH_HASH_CNT_OFFSET = 12'h024;
	localparam [11:0] kmac_reg_pkg_KMAC_ENTROPY_REFRESH_THRESHOLD_SHADOWED_OFFSET = 12'h028;
	localparam [11:0] kmac_reg_pkg_KMAC_ENTROPY_SEED_OFFSET = 12'h02c;
	localparam [11:0] kmac_reg_pkg_KMAC_ERR_CODE_OFFSET = 12'h0e0;
	localparam [11:0] kmac_reg_pkg_KMAC_INTR_ENABLE_OFFSET = 12'h004;
	localparam [11:0] kmac_reg_pkg_KMAC_INTR_STATE_OFFSET = 12'h000;
	localparam [11:0] kmac_reg_pkg_KMAC_INTR_TEST_OFFSET = 12'h008;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_LEN_OFFSET = 12'h0b0;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_0_OFFSET = 12'h030;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_10_OFFSET = 12'h058;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_11_OFFSET = 12'h05c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_12_OFFSET = 12'h060;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_13_OFFSET = 12'h064;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_14_OFFSET = 12'h068;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_15_OFFSET = 12'h06c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_1_OFFSET = 12'h034;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_2_OFFSET = 12'h038;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_3_OFFSET = 12'h03c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_4_OFFSET = 12'h040;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_5_OFFSET = 12'h044;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_6_OFFSET = 12'h048;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_7_OFFSET = 12'h04c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_8_OFFSET = 12'h050;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE0_9_OFFSET = 12'h054;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_0_OFFSET = 12'h070;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_10_OFFSET = 12'h098;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_11_OFFSET = 12'h09c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_12_OFFSET = 12'h0a0;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_13_OFFSET = 12'h0a4;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_14_OFFSET = 12'h0a8;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_15_OFFSET = 12'h0ac;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_1_OFFSET = 12'h074;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_2_OFFSET = 12'h078;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_3_OFFSET = 12'h07c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_4_OFFSET = 12'h080;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_5_OFFSET = 12'h084;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_6_OFFSET = 12'h088;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_7_OFFSET = 12'h08c;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_8_OFFSET = 12'h090;
	localparam [11:0] kmac_reg_pkg_KMAC_KEY_SHARE1_9_OFFSET = 12'h094;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_0_OFFSET = 12'h0b4;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_10_OFFSET = 12'h0dc;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_1_OFFSET = 12'h0b8;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_2_OFFSET = 12'h0bc;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_3_OFFSET = 12'h0c0;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_4_OFFSET = 12'h0c4;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_5_OFFSET = 12'h0c8;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_6_OFFSET = 12'h0cc;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_7_OFFSET = 12'h0d0;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_8_OFFSET = 12'h0d4;
	localparam [11:0] kmac_reg_pkg_KMAC_PREFIX_9_OFFSET = 12'h0d8;
	localparam [11:0] kmac_reg_pkg_KMAC_STATUS_OFFSET = 12'h01c;
	always @(*) begin
		if (_sv2v_0)
			;
		addr_hit[0] = reg_addr == kmac_reg_pkg_KMAC_INTR_STATE_OFFSET;
		addr_hit[1] = reg_addr == kmac_reg_pkg_KMAC_INTR_ENABLE_OFFSET;
		addr_hit[2] = reg_addr == kmac_reg_pkg_KMAC_INTR_TEST_OFFSET;
		addr_hit[3] = reg_addr == kmac_reg_pkg_KMAC_ALERT_TEST_OFFSET;
		addr_hit[4] = reg_addr == kmac_reg_pkg_KMAC_CFG_REGWEN_OFFSET;
		addr_hit[5] = reg_addr == kmac_reg_pkg_KMAC_CFG_SHADOWED_OFFSET;
		addr_hit[6] = reg_addr == kmac_reg_pkg_KMAC_CMD_OFFSET;
		addr_hit[7] = reg_addr == kmac_reg_pkg_KMAC_STATUS_OFFSET;
		addr_hit[8] = reg_addr == kmac_reg_pkg_KMAC_ENTROPY_PERIOD_OFFSET;
		addr_hit[9] = reg_addr == kmac_reg_pkg_KMAC_ENTROPY_REFRESH_HASH_CNT_OFFSET;
		addr_hit[10] = reg_addr == kmac_reg_pkg_KMAC_ENTROPY_REFRESH_THRESHOLD_SHADOWED_OFFSET;
		addr_hit[11] = reg_addr == kmac_reg_pkg_KMAC_ENTROPY_SEED_OFFSET;
		addr_hit[12] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_0_OFFSET;
		addr_hit[13] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_1_OFFSET;
		addr_hit[14] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_2_OFFSET;
		addr_hit[15] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_3_OFFSET;
		addr_hit[16] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_4_OFFSET;
		addr_hit[17] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_5_OFFSET;
		addr_hit[18] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_6_OFFSET;
		addr_hit[19] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_7_OFFSET;
		addr_hit[20] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_8_OFFSET;
		addr_hit[21] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_9_OFFSET;
		addr_hit[22] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_10_OFFSET;
		addr_hit[23] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_11_OFFSET;
		addr_hit[24] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_12_OFFSET;
		addr_hit[25] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_13_OFFSET;
		addr_hit[26] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_14_OFFSET;
		addr_hit[27] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE0_15_OFFSET;
		addr_hit[28] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_0_OFFSET;
		addr_hit[29] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_1_OFFSET;
		addr_hit[30] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_2_OFFSET;
		addr_hit[31] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_3_OFFSET;
		addr_hit[32] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_4_OFFSET;
		addr_hit[33] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_5_OFFSET;
		addr_hit[34] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_6_OFFSET;
		addr_hit[35] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_7_OFFSET;
		addr_hit[36] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_8_OFFSET;
		addr_hit[37] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_9_OFFSET;
		addr_hit[38] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_10_OFFSET;
		addr_hit[39] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_11_OFFSET;
		addr_hit[40] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_12_OFFSET;
		addr_hit[41] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_13_OFFSET;
		addr_hit[42] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_14_OFFSET;
		addr_hit[43] = reg_addr == kmac_reg_pkg_KMAC_KEY_SHARE1_15_OFFSET;
		addr_hit[44] = reg_addr == kmac_reg_pkg_KMAC_KEY_LEN_OFFSET;
		addr_hit[45] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_0_OFFSET;
		addr_hit[46] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_1_OFFSET;
		addr_hit[47] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_2_OFFSET;
		addr_hit[48] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_3_OFFSET;
		addr_hit[49] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_4_OFFSET;
		addr_hit[50] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_5_OFFSET;
		addr_hit[51] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_6_OFFSET;
		addr_hit[52] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_7_OFFSET;
		addr_hit[53] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_8_OFFSET;
		addr_hit[54] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_9_OFFSET;
		addr_hit[55] = reg_addr == kmac_reg_pkg_KMAC_PREFIX_10_OFFSET;
		addr_hit[56] = reg_addr == kmac_reg_pkg_KMAC_ERR_CODE_OFFSET;
	end
	assign addrmiss = (reg_re || reg_we ? ~|addr_hit : 1'b0);
	localparam [227:0] kmac_reg_pkg_KMAC_PERMIT = 228'b000100010001000100011111001101111111001100111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111110001111111111111111111111111111111111111111111111111;
	always @(*) begin
		if (_sv2v_0)
			;
		wr_err = reg_we & (((((((((((((((((((((((((((((((((((((((((((((((((((((((((addr_hit[0] & |(kmac_reg_pkg_KMAC_PERMIT[224+:4] & ~reg_be)) | (addr_hit[1] & |(kmac_reg_pkg_KMAC_PERMIT[220+:4] & ~reg_be))) | (addr_hit[2] & |(kmac_reg_pkg_KMAC_PERMIT[216+:4] & ~reg_be))) | (addr_hit[3] & |(kmac_reg_pkg_KMAC_PERMIT[212+:4] & ~reg_be))) | (addr_hit[4] & |(kmac_reg_pkg_KMAC_PERMIT[208+:4] & ~reg_be))) | (addr_hit[5] & |(kmac_reg_pkg_KMAC_PERMIT[204+:4] & ~reg_be))) | (addr_hit[6] & |(kmac_reg_pkg_KMAC_PERMIT[200+:4] & ~reg_be))) | (addr_hit[7] & |(kmac_reg_pkg_KMAC_PERMIT[196+:4] & ~reg_be))) | (addr_hit[8] & |(kmac_reg_pkg_KMAC_PERMIT[192+:4] & ~reg_be))) | (addr_hit[9] & |(kmac_reg_pkg_KMAC_PERMIT[188+:4] & ~reg_be))) | (addr_hit[10] & |(kmac_reg_pkg_KMAC_PERMIT[184+:4] & ~reg_be))) | (addr_hit[11] & |(kmac_reg_pkg_KMAC_PERMIT[180+:4] & ~reg_be))) | (addr_hit[12] & |(kmac_reg_pkg_KMAC_PERMIT[176+:4] & ~reg_be))) | (addr_hit[13] & |(kmac_reg_pkg_KMAC_PERMIT[172+:4] & ~reg_be))) | (addr_hit[14] & |(kmac_reg_pkg_KMAC_PERMIT[168+:4] & ~reg_be))) | (addr_hit[15] & |(kmac_reg_pkg_KMAC_PERMIT[164+:4] & ~reg_be))) | (addr_hit[16] & |(kmac_reg_pkg_KMAC_PERMIT[160+:4] & ~reg_be))) | (addr_hit[17] & |(kmac_reg_pkg_KMAC_PERMIT[156+:4] & ~reg_be))) | (addr_hit[18] & |(kmac_reg_pkg_KMAC_PERMIT[152+:4] & ~reg_be))) | (addr_hit[19] & |(kmac_reg_pkg_KMAC_PERMIT[148+:4] & ~reg_be))) | (addr_hit[20] & |(kmac_reg_pkg_KMAC_PERMIT[144+:4] & ~reg_be))) | (addr_hit[21] & |(kmac_reg_pkg_KMAC_PERMIT[140+:4] & ~reg_be))) | (addr_hit[22] & |(kmac_reg_pkg_KMAC_PERMIT[136+:4] & ~reg_be))) | (addr_hit[23] & |(kmac_reg_pkg_KMAC_PERMIT[132+:4] & ~reg_be))) | (addr_hit[24] & |(kmac_reg_pkg_KMAC_PERMIT[128+:4] & ~reg_be))) | (addr_hit[25] & |(kmac_reg_pkg_KMAC_PERMIT[124+:4] & ~reg_be))) | (addr_hit[26] & |(kmac_reg_pkg_KMAC_PERMIT[120+:4] & ~reg_be))) | (addr_hit[27] & |(kmac_reg_pkg_KMAC_PERMIT[116+:4] & ~reg_be))) | (addr_hit[28] & |(kmac_reg_pkg_KMAC_PERMIT[112+:4] & ~reg_be))) | (addr_hit[29] & |(kmac_reg_pkg_KMAC_PERMIT[108+:4] & ~reg_be))) | (addr_hit[30] & |(kmac_reg_pkg_KMAC_PERMIT[104+:4] & ~reg_be))) | (addr_hit[31] & |(kmac_reg_pkg_KMAC_PERMIT[100+:4] & ~reg_be))) | (addr_hit[32] & |(kmac_reg_pkg_KMAC_PERMIT[96+:4] & ~reg_be))) | (addr_hit[33] & |(kmac_reg_pkg_KMAC_PERMIT[92+:4] & ~reg_be))) | (addr_hit[34] & |(kmac_reg_pkg_KMAC_PERMIT[88+:4] & ~reg_be))) | (addr_hit[35] & |(kmac_reg_pkg_KMAC_PERMIT[84+:4] & ~reg_be))) | (addr_hit[36] & |(kmac_reg_pkg_KMAC_PERMIT[80+:4] & ~reg_be))) | (addr_hit[37] & |(kmac_reg_pkg_KMAC_PERMIT[76+:4] & ~reg_be))) | (addr_hit[38] & |(kmac_reg_pkg_KMAC_PERMIT[72+:4] & ~reg_be))) | (addr_hit[39] & |(kmac_reg_pkg_KMAC_PERMIT[68+:4] & ~reg_be))) | (addr_hit[40] & |(kmac_reg_pkg_KMAC_PERMIT[64+:4] & ~reg_be))) | (addr_hit[41] & |(kmac_reg_pkg_KMAC_PERMIT[60+:4] & ~reg_be))) | (addr_hit[42] & |(kmac_reg_pkg_KMAC_PERMIT[56+:4] & ~reg_be))) | (addr_hit[43] & |(kmac_reg_pkg_KMAC_PERMIT[52+:4] & ~reg_be))) | (addr_hit[44] & |(kmac_reg_pkg_KMAC_PERMIT[48+:4] & ~reg_be))) | (addr_hit[45] & |(kmac_reg_pkg_KMAC_PERMIT[44+:4] & ~reg_be))) | (addr_hit[46] & |(kmac_reg_pkg_KMAC_PERMIT[40+:4] & ~reg_be))) | (addr_hit[47] & |(kmac_reg_pkg_KMAC_PERMIT[36+:4] & ~reg_be))) | (addr_hit[48] & |(kmac_reg_pkg_KMAC_PERMIT[32+:4] & ~reg_be))) | (addr_hit[49] & |(kmac_reg_pkg_KMAC_PERMIT[28+:4] & ~reg_be))) | (addr_hit[50] & |(kmac_reg_pkg_KMAC_PERMIT[24+:4] & ~reg_be))) | (addr_hit[51] & |(kmac_reg_pkg_KMAC_PERMIT[20+:4] & ~reg_be))) | (addr_hit[52] & |(kmac_reg_pkg_KMAC_PERMIT[16+:4] & ~reg_be))) | (addr_hit[53] & |(kmac_reg_pkg_KMAC_PERMIT[12+:4] & ~reg_be))) | (addr_hit[54] & |(kmac_reg_pkg_KMAC_PERMIT[8+:4] & ~reg_be))) | (addr_hit[55] & |(kmac_reg_pkg_KMAC_PERMIT[4+:4] & ~reg_be))) | (addr_hit[56] & |(kmac_reg_pkg_KMAC_PERMIT[0+:4] & ~reg_be)));
	end
	assign intr_state_we = (addr_hit[0] & reg_we) & !reg_error;
	assign intr_state_kmac_done_wd = reg_wdata[0];
	assign intr_state_kmac_err_wd = reg_wdata[2];
	assign intr_enable_we = (addr_hit[1] & reg_we) & !reg_error;
	assign intr_enable_kmac_done_wd = reg_wdata[0];
	assign intr_enable_fifo_empty_wd = reg_wdata[1];
	assign intr_enable_kmac_err_wd = reg_wdata[2];
	assign intr_test_we = (addr_hit[2] & reg_we) & !reg_error;
	assign intr_test_kmac_done_wd = reg_wdata[0];
	assign intr_test_fifo_empty_wd = reg_wdata[1];
	assign intr_test_kmac_err_wd = reg_wdata[2];
	assign alert_test_we = (addr_hit[3] & reg_we) & !reg_error;
	assign alert_test_recov_operation_err_wd = reg_wdata[0];
	assign alert_test_fatal_fault_err_wd = reg_wdata[1];
	assign cfg_regwen_re = (addr_hit[4] & reg_re) & !reg_error;
	assign cfg_shadowed_re = (addr_hit[5] & reg_re) & !reg_error;
	assign cfg_shadowed_we = (addr_hit[5] & reg_we) & !reg_error;
	assign cfg_shadowed_kmac_en_wd = reg_wdata[0];
	assign cfg_shadowed_kstrength_wd = reg_wdata[3:1];
	assign cfg_shadowed_mode_wd = reg_wdata[5:4];
	assign cfg_shadowed_msg_endianness_wd = reg_wdata[8];
	assign cfg_shadowed_state_endianness_wd = reg_wdata[9];
	assign cfg_shadowed_sideload_wd = reg_wdata[12];
	assign cfg_shadowed_entropy_mode_wd = reg_wdata[17:16];
	assign cfg_shadowed_entropy_fast_process_wd = reg_wdata[19];
	assign cfg_shadowed_msg_mask_wd = reg_wdata[20];
	assign cfg_shadowed_entropy_ready_wd = reg_wdata[24];
	assign cfg_shadowed_en_unsupported_modestrength_wd = reg_wdata[26];
	assign cmd_we = (addr_hit[6] & reg_we) & !reg_error;
	assign cmd_cmd_wd = reg_wdata[5:0];
	assign cmd_entropy_req_wd = reg_wdata[8];
	assign cmd_hash_cnt_clr_wd = reg_wdata[9];
	assign cmd_err_processed_wd = reg_wdata[10];
	assign status_re = (addr_hit[7] & reg_re) & !reg_error;
	assign entropy_period_we = (addr_hit[8] & reg_we) & !reg_error;
	assign entropy_period_prescaler_wd = reg_wdata[9:0];
	assign entropy_period_wait_timer_wd = reg_wdata[31:16];
	assign entropy_refresh_threshold_shadowed_re = (addr_hit[10] & reg_re) & !reg_error;
	assign entropy_refresh_threshold_shadowed_we = (addr_hit[10] & reg_we) & !reg_error;
	assign entropy_refresh_threshold_shadowed_wd = reg_wdata[9:0];
	assign entropy_seed_we = (addr_hit[11] & reg_we) & !reg_error;
	assign entropy_seed_wd = reg_wdata[31:0];
	assign key_share0_0_we = (addr_hit[12] & reg_we) & !reg_error;
	assign key_share0_0_wd = reg_wdata[31:0];
	assign key_share0_1_we = (addr_hit[13] & reg_we) & !reg_error;
	assign key_share0_1_wd = reg_wdata[31:0];
	assign key_share0_2_we = (addr_hit[14] & reg_we) & !reg_error;
	assign key_share0_2_wd = reg_wdata[31:0];
	assign key_share0_3_we = (addr_hit[15] & reg_we) & !reg_error;
	assign key_share0_3_wd = reg_wdata[31:0];
	assign key_share0_4_we = (addr_hit[16] & reg_we) & !reg_error;
	assign key_share0_4_wd = reg_wdata[31:0];
	assign key_share0_5_we = (addr_hit[17] & reg_we) & !reg_error;
	assign key_share0_5_wd = reg_wdata[31:0];
	assign key_share0_6_we = (addr_hit[18] & reg_we) & !reg_error;
	assign key_share0_6_wd = reg_wdata[31:0];
	assign key_share0_7_we = (addr_hit[19] & reg_we) & !reg_error;
	assign key_share0_7_wd = reg_wdata[31:0];
	assign key_share0_8_we = (addr_hit[20] & reg_we) & !reg_error;
	assign key_share0_8_wd = reg_wdata[31:0];
	assign key_share0_9_we = (addr_hit[21] & reg_we) & !reg_error;
	assign key_share0_9_wd = reg_wdata[31:0];
	assign key_share0_10_we = (addr_hit[22] & reg_we) & !reg_error;
	assign key_share0_10_wd = reg_wdata[31:0];
	assign key_share0_11_we = (addr_hit[23] & reg_we) & !reg_error;
	assign key_share0_11_wd = reg_wdata[31:0];
	assign key_share0_12_we = (addr_hit[24] & reg_we) & !reg_error;
	assign key_share0_12_wd = reg_wdata[31:0];
	assign key_share0_13_we = (addr_hit[25] & reg_we) & !reg_error;
	assign key_share0_13_wd = reg_wdata[31:0];
	assign key_share0_14_we = (addr_hit[26] & reg_we) & !reg_error;
	assign key_share0_14_wd = reg_wdata[31:0];
	assign key_share0_15_we = (addr_hit[27] & reg_we) & !reg_error;
	assign key_share0_15_wd = reg_wdata[31:0];
	assign key_share1_0_we = (addr_hit[28] & reg_we) & !reg_error;
	assign key_share1_0_wd = reg_wdata[31:0];
	assign key_share1_1_we = (addr_hit[29] & reg_we) & !reg_error;
	assign key_share1_1_wd = reg_wdata[31:0];
	assign key_share1_2_we = (addr_hit[30] & reg_we) & !reg_error;
	assign key_share1_2_wd = reg_wdata[31:0];
	assign key_share1_3_we = (addr_hit[31] & reg_we) & !reg_error;
	assign key_share1_3_wd = reg_wdata[31:0];
	assign key_share1_4_we = (addr_hit[32] & reg_we) & !reg_error;
	assign key_share1_4_wd = reg_wdata[31:0];
	assign key_share1_5_we = (addr_hit[33] & reg_we) & !reg_error;
	assign key_share1_5_wd = reg_wdata[31:0];
	assign key_share1_6_we = (addr_hit[34] & reg_we) & !reg_error;
	assign key_share1_6_wd = reg_wdata[31:0];
	assign key_share1_7_we = (addr_hit[35] & reg_we) & !reg_error;
	assign key_share1_7_wd = reg_wdata[31:0];
	assign key_share1_8_we = (addr_hit[36] & reg_we) & !reg_error;
	assign key_share1_8_wd = reg_wdata[31:0];
	assign key_share1_9_we = (addr_hit[37] & reg_we) & !reg_error;
	assign key_share1_9_wd = reg_wdata[31:0];
	assign key_share1_10_we = (addr_hit[38] & reg_we) & !reg_error;
	assign key_share1_10_wd = reg_wdata[31:0];
	assign key_share1_11_we = (addr_hit[39] & reg_we) & !reg_error;
	assign key_share1_11_wd = reg_wdata[31:0];
	assign key_share1_12_we = (addr_hit[40] & reg_we) & !reg_error;
	assign key_share1_12_wd = reg_wdata[31:0];
	assign key_share1_13_we = (addr_hit[41] & reg_we) & !reg_error;
	assign key_share1_13_wd = reg_wdata[31:0];
	assign key_share1_14_we = (addr_hit[42] & reg_we) & !reg_error;
	assign key_share1_14_wd = reg_wdata[31:0];
	assign key_share1_15_we = (addr_hit[43] & reg_we) & !reg_error;
	assign key_share1_15_wd = reg_wdata[31:0];
	assign key_len_we = (addr_hit[44] & reg_we) & !reg_error;
	assign key_len_wd = reg_wdata[2:0];
	assign prefix_0_we = (addr_hit[45] & reg_we) & !reg_error;
	assign prefix_0_wd = reg_wdata[31:0];
	assign prefix_1_we = (addr_hit[46] & reg_we) & !reg_error;
	assign prefix_1_wd = reg_wdata[31:0];
	assign prefix_2_we = (addr_hit[47] & reg_we) & !reg_error;
	assign prefix_2_wd = reg_wdata[31:0];
	assign prefix_3_we = (addr_hit[48] & reg_we) & !reg_error;
	assign prefix_3_wd = reg_wdata[31:0];
	assign prefix_4_we = (addr_hit[49] & reg_we) & !reg_error;
	assign prefix_4_wd = reg_wdata[31:0];
	assign prefix_5_we = (addr_hit[50] & reg_we) & !reg_error;
	assign prefix_5_wd = reg_wdata[31:0];
	assign prefix_6_we = (addr_hit[51] & reg_we) & !reg_error;
	assign prefix_6_wd = reg_wdata[31:0];
	assign prefix_7_we = (addr_hit[52] & reg_we) & !reg_error;
	assign prefix_7_wd = reg_wdata[31:0];
	assign prefix_8_we = (addr_hit[53] & reg_we) & !reg_error;
	assign prefix_8_wd = reg_wdata[31:0];
	assign prefix_9_we = (addr_hit[54] & reg_we) & !reg_error;
	assign prefix_9_wd = reg_wdata[31:0];
	assign prefix_10_we = (addr_hit[55] & reg_we) & !reg_error;
	assign prefix_10_wd = reg_wdata[31:0];
	always @(*) begin
		if (_sv2v_0)
			;
		reg_we_check[0] = intr_state_we;
		reg_we_check[1] = intr_enable_we;
		reg_we_check[2] = intr_test_we;
		reg_we_check[3] = alert_test_we;
		reg_we_check[4] = 1'b0;
		reg_we_check[5] = cfg_shadowed_gated_we;
		reg_we_check[6] = cmd_we;
		reg_we_check[7] = 1'b0;
		reg_we_check[8] = entropy_period_gated_we;
		reg_we_check[9] = 1'b0;
		reg_we_check[10] = entropy_refresh_threshold_shadowed_gated_we;
		reg_we_check[11] = entropy_seed_we;
		reg_we_check[12] = key_share0_0_gated_we;
		reg_we_check[13] = key_share0_1_gated_we;
		reg_we_check[14] = key_share0_2_gated_we;
		reg_we_check[15] = key_share0_3_gated_we;
		reg_we_check[16] = key_share0_4_gated_we;
		reg_we_check[17] = key_share0_5_gated_we;
		reg_we_check[18] = key_share0_6_gated_we;
		reg_we_check[19] = key_share0_7_gated_we;
		reg_we_check[20] = key_share0_8_gated_we;
		reg_we_check[21] = key_share0_9_gated_we;
		reg_we_check[22] = key_share0_10_gated_we;
		reg_we_check[23] = key_share0_11_gated_we;
		reg_we_check[24] = key_share0_12_gated_we;
		reg_we_check[25] = key_share0_13_gated_we;
		reg_we_check[26] = key_share0_14_gated_we;
		reg_we_check[27] = key_share0_15_gated_we;
		reg_we_check[28] = key_share1_0_gated_we;
		reg_we_check[29] = key_share1_1_gated_we;
		reg_we_check[30] = key_share1_2_gated_we;
		reg_we_check[31] = key_share1_3_gated_we;
		reg_we_check[32] = key_share1_4_gated_we;
		reg_we_check[33] = key_share1_5_gated_we;
		reg_we_check[34] = key_share1_6_gated_we;
		reg_we_check[35] = key_share1_7_gated_we;
		reg_we_check[36] = key_share1_8_gated_we;
		reg_we_check[37] = key_share1_9_gated_we;
		reg_we_check[38] = key_share1_10_gated_we;
		reg_we_check[39] = key_share1_11_gated_we;
		reg_we_check[40] = key_share1_12_gated_we;
		reg_we_check[41] = key_share1_13_gated_we;
		reg_we_check[42] = key_share1_14_gated_we;
		reg_we_check[43] = key_share1_15_gated_we;
		reg_we_check[44] = key_len_gated_we;
		reg_we_check[45] = prefix_0_gated_we;
		reg_we_check[46] = prefix_1_gated_we;
		reg_we_check[47] = prefix_2_gated_we;
		reg_we_check[48] = prefix_3_gated_we;
		reg_we_check[49] = prefix_4_gated_we;
		reg_we_check[50] = prefix_5_gated_we;
		reg_we_check[51] = prefix_6_gated_we;
		reg_we_check[52] = prefix_7_gated_we;
		reg_we_check[53] = prefix_8_gated_we;
		reg_we_check[54] = prefix_9_gated_we;
		reg_we_check[55] = prefix_10_gated_we;
		reg_we_check[56] = 1'b0;
	end
	always @(*) begin
		if (_sv2v_0)
			;
		reg_rdata_next = 1'sb0;
		(* full_case, parallel_case *)
		case (1'b1)
			addr_hit[0]: begin
				reg_rdata_next[0] = intr_state_kmac_done_qs;
				reg_rdata_next[1] = intr_state_fifo_empty_qs;
				reg_rdata_next[2] = intr_state_kmac_err_qs;
			end
			addr_hit[1]: begin
				reg_rdata_next[0] = intr_enable_kmac_done_qs;
				reg_rdata_next[1] = intr_enable_fifo_empty_qs;
				reg_rdata_next[2] = intr_enable_kmac_err_qs;
			end
			addr_hit[2]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
				reg_rdata_next[2] = 1'sb0;
			end
			addr_hit[3]: begin
				reg_rdata_next[0] = 1'sb0;
				reg_rdata_next[1] = 1'sb0;
			end
			addr_hit[4]: reg_rdata_next[0] = cfg_regwen_qs;
			addr_hit[5]: begin
				reg_rdata_next[0] = cfg_shadowed_kmac_en_qs;
				reg_rdata_next[3:1] = cfg_shadowed_kstrength_qs;
				reg_rdata_next[5:4] = cfg_shadowed_mode_qs;
				reg_rdata_next[8] = cfg_shadowed_msg_endianness_qs;
				reg_rdata_next[9] = cfg_shadowed_state_endianness_qs;
				reg_rdata_next[12] = cfg_shadowed_sideload_qs;
				reg_rdata_next[17:16] = cfg_shadowed_entropy_mode_qs;
				reg_rdata_next[19] = cfg_shadowed_entropy_fast_process_qs;
				reg_rdata_next[20] = cfg_shadowed_msg_mask_qs;
				reg_rdata_next[24] = cfg_shadowed_entropy_ready_qs;
				reg_rdata_next[26] = cfg_shadowed_en_unsupported_modestrength_qs;
			end
			addr_hit[6]: begin
				reg_rdata_next[5:0] = 1'sb0;
				reg_rdata_next[8] = 1'sb0;
				reg_rdata_next[9] = 1'sb0;
				reg_rdata_next[10] = 1'sb0;
			end
			addr_hit[7]: begin
				reg_rdata_next[0] = status_sha3_idle_qs;
				reg_rdata_next[1] = status_sha3_absorb_qs;
				reg_rdata_next[2] = status_sha3_squeeze_qs;
				reg_rdata_next[12:8] = status_fifo_depth_qs;
				reg_rdata_next[14] = status_fifo_empty_qs;
				reg_rdata_next[15] = status_fifo_full_qs;
				reg_rdata_next[16] = status_alert_fatal_fault_qs;
				reg_rdata_next[17] = status_alert_recov_ctrl_update_err_qs;
			end
			addr_hit[8]: begin
				reg_rdata_next[9:0] = entropy_period_prescaler_qs;
				reg_rdata_next[31:16] = entropy_period_wait_timer_qs;
			end
			addr_hit[9]: reg_rdata_next[9:0] = entropy_refresh_hash_cnt_qs;
			addr_hit[10]: reg_rdata_next[9:0] = entropy_refresh_threshold_shadowed_qs;
			addr_hit[11]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[12]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[13]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[14]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[15]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[16]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[17]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[18]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[19]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[20]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[21]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[22]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[23]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[24]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[25]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[26]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[27]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[28]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[29]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[30]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[31]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[32]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[33]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[34]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[35]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[36]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[37]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[38]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[39]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[40]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[41]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[42]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[43]: reg_rdata_next[31:0] = 1'sb0;
			addr_hit[44]: reg_rdata_next[2:0] = 1'sb0;
			addr_hit[45]: reg_rdata_next[31:0] = prefix_0_qs;
			addr_hit[46]: reg_rdata_next[31:0] = prefix_1_qs;
			addr_hit[47]: reg_rdata_next[31:0] = prefix_2_qs;
			addr_hit[48]: reg_rdata_next[31:0] = prefix_3_qs;
			addr_hit[49]: reg_rdata_next[31:0] = prefix_4_qs;
			addr_hit[50]: reg_rdata_next[31:0] = prefix_5_qs;
			addr_hit[51]: reg_rdata_next[31:0] = prefix_6_qs;
			addr_hit[52]: reg_rdata_next[31:0] = prefix_7_qs;
			addr_hit[53]: reg_rdata_next[31:0] = prefix_8_qs;
			addr_hit[54]: reg_rdata_next[31:0] = prefix_9_qs;
			addr_hit[55]: reg_rdata_next[31:0] = prefix_10_qs;
			addr_hit[56]: reg_rdata_next[31:0] = err_code_qs;
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
	assign shadowed_storage_err_o = |{cfg_shadowed_kmac_en_storage_err, cfg_shadowed_kstrength_storage_err, cfg_shadowed_mode_storage_err, cfg_shadowed_msg_endianness_storage_err, cfg_shadowed_state_endianness_storage_err, cfg_shadowed_sideload_storage_err, cfg_shadowed_entropy_mode_storage_err, cfg_shadowed_entropy_fast_process_storage_err, cfg_shadowed_msg_mask_storage_err, cfg_shadowed_entropy_ready_storage_err, cfg_shadowed_en_unsupported_modestrength_storage_err, entropy_refresh_threshold_shadowed_storage_err};
	assign shadowed_update_err_o = |{cfg_shadowed_kmac_en_update_err, cfg_shadowed_kstrength_update_err, cfg_shadowed_mode_update_err, cfg_shadowed_msg_endianness_update_err, cfg_shadowed_state_endianness_update_err, cfg_shadowed_sideload_update_err, cfg_shadowed_entropy_mode_update_err, cfg_shadowed_entropy_fast_process_update_err, cfg_shadowed_msg_mask_update_err, cfg_shadowed_entropy_ready_update_err, cfg_shadowed_en_unsupported_modestrength_update_err, entropy_refresh_threshold_shadowed_update_err};
	assign reg_busy = shadow_busy;
	wire unused_wdata;
	wire unused_be;
	assign unused_wdata = ^reg_wdata;
	assign unused_be = ^reg_be;
	initial _sv2v_0 = 0;
endmodule
