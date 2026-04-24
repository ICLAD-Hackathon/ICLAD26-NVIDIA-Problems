// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDMA_dual_reg.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___initial__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__7(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___initial__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_regfile__DOT__u_dual_reg_d0__7\n"); );
    // Body
    vlSelf->__PVT__arreggen_dump = (1U & VL_TESTPLUSARGS_I("arreggen_dump_wr"));
    vlSelf->__PVT__arreggen_abort_on_rowr = (1U & VL_TESTPLUSARGS_I("arreggen_abort_on_rowr"));
    vlSelf->__PVT__arreggen_abort_on_invalid_wr = (1U 
                                                   & VL_TESTPLUSARGS_I("arreggen_abort_on_invalid_wr"));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_CDMA_dual_reg___ctor_var_reset(VNV_nvdla_NV_NVDLA_CDMA_dual_reg* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_dual_reg___ctor_var_reset\n"); );
    // Body
    vlSelf->reg_rd_data = VL_RAND_RESET_I(32);
    vlSelf->reg_offset = VL_RAND_RESET_I(12);
    vlSelf->reg_wr_data = VL_RAND_RESET_I(32);
    vlSelf->reg_wr_en = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_clk = VL_RAND_RESET_I(1);
    vlSelf->nvdla_core_rstn = VL_RAND_RESET_I(1);
    vlSelf->data_bank = VL_RAND_RESET_I(5);
    vlSelf->weight_bank = VL_RAND_RESET_I(5);
    vlSelf->batches = VL_RAND_RESET_I(5);
    vlSelf->batch_stride = VL_RAND_RESET_I(32);
    vlSelf->conv_x_stride = VL_RAND_RESET_I(3);
    vlSelf->conv_y_stride = VL_RAND_RESET_I(3);
    vlSelf->cvt_en = VL_RAND_RESET_I(1);
    vlSelf->cvt_truncate = VL_RAND_RESET_I(6);
    vlSelf->cvt_offset = VL_RAND_RESET_I(16);
    vlSelf->cvt_scale = VL_RAND_RESET_I(16);
    vlSelf->cya = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_high_0 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_high_1 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_low_0 = VL_RAND_RESET_I(32);
    vlSelf->datain_addr_low_1 = VL_RAND_RESET_I(32);
    vlSelf->line_packed = VL_RAND_RESET_I(1);
    vlSelf->surf_packed = VL_RAND_RESET_I(1);
    vlSelf->datain_ram_type = VL_RAND_RESET_I(1);
    vlSelf->datain_format = VL_RAND_RESET_I(1);
    vlSelf->pixel_format = VL_RAND_RESET_I(6);
    vlSelf->pixel_mapping = VL_RAND_RESET_I(1);
    vlSelf->pixel_sign_override = VL_RAND_RESET_I(1);
    vlSelf->datain_height = VL_RAND_RESET_I(13);
    vlSelf->datain_width = VL_RAND_RESET_I(13);
    vlSelf->datain_channel = VL_RAND_RESET_I(13);
    vlSelf->datain_height_ext = VL_RAND_RESET_I(13);
    vlSelf->datain_width_ext = VL_RAND_RESET_I(13);
    vlSelf->entries = VL_RAND_RESET_I(14);
    vlSelf->grains = VL_RAND_RESET_I(12);
    vlSelf->line_stride = VL_RAND_RESET_I(32);
    vlSelf->uv_line_stride = VL_RAND_RESET_I(32);
    vlSelf->mean_format = VL_RAND_RESET_I(1);
    vlSelf->mean_gu = VL_RAND_RESET_I(16);
    vlSelf->mean_ry = VL_RAND_RESET_I(16);
    vlSelf->mean_ax = VL_RAND_RESET_I(16);
    vlSelf->mean_bv = VL_RAND_RESET_I(16);
    vlSelf->conv_mode = VL_RAND_RESET_I(1);
    vlSelf->data_reuse = VL_RAND_RESET_I(1);
    vlSelf->in_precision = VL_RAND_RESET_I(2);
    vlSelf->proc_precision = VL_RAND_RESET_I(2);
    vlSelf->skip_data_rls = VL_RAND_RESET_I(1);
    vlSelf->skip_weight_rls = VL_RAND_RESET_I(1);
    vlSelf->weight_reuse = VL_RAND_RESET_I(1);
    vlSelf->nan_to_zero = VL_RAND_RESET_I(1);
    vlSelf->op_en_trigger = VL_RAND_RESET_I(1);
    vlSelf->dma_en = VL_RAND_RESET_I(1);
    vlSelf->pixel_x_offset = VL_RAND_RESET_I(5);
    vlSelf->pixel_y_offset = VL_RAND_RESET_I(3);
    vlSelf->rsv_per_line = VL_RAND_RESET_I(10);
    vlSelf->rsv_per_uv_line = VL_RAND_RESET_I(10);
    vlSelf->rsv_height = VL_RAND_RESET_I(3);
    vlSelf->rsv_y_index = VL_RAND_RESET_I(5);
    vlSelf->surf_stride = VL_RAND_RESET_I(32);
    vlSelf->weight_addr_high = VL_RAND_RESET_I(32);
    vlSelf->weight_addr_low = VL_RAND_RESET_I(32);
    vlSelf->weight_bytes = VL_RAND_RESET_I(32);
    vlSelf->weight_format = VL_RAND_RESET_I(1);
    vlSelf->weight_ram_type = VL_RAND_RESET_I(1);
    vlSelf->byte_per_kernel = VL_RAND_RESET_I(18);
    vlSelf->weight_kernel = VL_RAND_RESET_I(13);
    vlSelf->wgs_addr_high = VL_RAND_RESET_I(32);
    vlSelf->wgs_addr_low = VL_RAND_RESET_I(32);
    vlSelf->wmb_addr_high = VL_RAND_RESET_I(32);
    vlSelf->wmb_addr_low = VL_RAND_RESET_I(32);
    vlSelf->wmb_bytes = VL_RAND_RESET_I(28);
    vlSelf->pad_bottom = VL_RAND_RESET_I(6);
    vlSelf->pad_left = VL_RAND_RESET_I(5);
    vlSelf->pad_right = VL_RAND_RESET_I(6);
    vlSelf->pad_top = VL_RAND_RESET_I(5);
    vlSelf->pad_value = VL_RAND_RESET_I(16);
    vlSelf->inf_data_num = VL_RAND_RESET_I(32);
    vlSelf->inf_weight_num = VL_RAND_RESET_I(32);
    vlSelf->nan_data_num = VL_RAND_RESET_I(32);
    vlSelf->nan_weight_num = VL_RAND_RESET_I(32);
    vlSelf->op_en = VL_RAND_RESET_I(1);
    vlSelf->dat_rd_latency = VL_RAND_RESET_I(32);
    vlSelf->dat_rd_stall = VL_RAND_RESET_I(32);
    vlSelf->wt_rd_latency = VL_RAND_RESET_I(32);
    vlSelf->wt_rd_stall = VL_RAND_RESET_I(32);
    vlSelf->__PVT__arreggen_abort_on_invalid_wr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_abort_on_rowr = VL_RAND_RESET_I(1);
    vlSelf->__PVT__arreggen_dump = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_bank_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_conv_stride_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_cvt_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_dain_map_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_format_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_size_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_datain_size_ext_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_mean_global_0_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_mean_global_1_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_misc_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_pixel_offset_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_reserved_x_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_reserved_y_cfg_0_wren = VL_RAND_RESET_I(1);
    vlSelf->__PVT__nvdla_cdma_d_zero_padding_0_wren = VL_RAND_RESET_I(1);
}
