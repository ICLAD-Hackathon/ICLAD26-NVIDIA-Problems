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
