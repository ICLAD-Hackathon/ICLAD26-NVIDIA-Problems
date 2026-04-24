module ascon (
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
	localparam signed [31:0] ascon_reg_pkg_NumAlerts = 2;
	parameter [1:0] AlertAsyncOn = {ascon_reg_pkg_NumAlerts {1'b1}};
	parameter [31:0] AlertSkewCycles = 1;
	input clk_i;
	input rst_ni;
	input rst_shadowed_ni;
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
	wire [1273:0] reg2hw;
	wire [1086:0] hw2reg;
	wire [31:0] edn_data;
	wire edn_req;
	wire edn_ack;
	wire [1:0] alert;
	wire ascon_fatal_alert;
	wire ascon_recov_alert;
	wire intg_err_alert;
	wire shadowed_storage_err;
	wire shadowed_update_err;
	ascon_reg_top u_reg(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.rst_shadowed_ni(rst_shadowed_ni),
		.tl_i(tl_i),
		.tl_o(tl_o),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg),
		.intg_err_o(intg_err_alert),
		.shadowed_storage_err_o(shadowed_storage_err),
		.shadowed_update_err_o(shadowed_update_err)
	);
	ascon_core ascon_core(
		.clk_i(clk_i),
		.rst_ni(rst_ni),
		.lc_escalate_en_i(lc_escalate_en_i),
		.alert_recov_o(ascon_recov_alert),
		.alert_fatal_o(ascon_fatal_alert),
		.error_recov_i(shadowed_update_err),
		.error_fatal_i(alert[1]),
		.keymgr_key_i(keymgr_key_i),
		.reg2hw(reg2hw),
		.hw2reg(hw2reg),
		.idle_o(idle_o)
	);
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
	wire unused_edn_fips;
	assign unused_edn_fips = edn_i[32];
	wire [31:0] unused_edn_data;
	wire unused_edn_ack;
	assign unused_edn_data = edn_data;
	assign edn_req = 1'b0;
	assign unused_edn_ack = edn_ack;
	assign alert[1] = (ascon_fatal_alert | intg_err_alert) | shadowed_storage_err;
	assign alert[0] = ascon_recov_alert | shadowed_update_err;
	wire [1:0] alert_test;
	assign alert_test = {reg2hw[1273] & reg2hw[1272], reg2hw[1271] & reg2hw[1270]};
	genvar _gv_i_1;
	generate
		for (_gv_i_1 = 0; _gv_i_1 < ascon_reg_pkg_NumAlerts; _gv_i_1 = _gv_i_1 + 1) begin : gen_alert_tx
			localparam i = _gv_i_1;
			prim_alert_sender #(
				.AsyncOn(AlertAsyncOn[i]),
				.SkewCycles(AlertSkewCycles),
				.IsFatal(i)
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
endmodule
