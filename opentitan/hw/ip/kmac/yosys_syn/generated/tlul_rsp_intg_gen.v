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
