// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_SDP_REG_DUAL_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_SDP_REG_DUAL_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_SDP_REG_dual) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(reg_wr_en,0,0);
        VL_OUT8(cvt_shift,5,0);
        VL_OUT8(out_precision,1,0);
        VL_OUT8(proc_precision,1,0);
        VL_OUT8(bn_alu_shift_value,5,0);
        VL_OUT8(bn_alu_src,0,0);
        VL_OUT8(bn_alu_algo,1,0);
        VL_OUT8(bn_alu_bypass,0,0);
        VL_OUT8(bn_bypass,0,0);
        VL_OUT8(bn_mul_bypass,0,0);
        VL_OUT8(bn_mul_prelu,0,0);
        VL_OUT8(bn_relu_bypass,0,0);
        VL_OUT8(bn_mul_shift_value,7,0);
        VL_OUT8(bn_mul_src,0,0);
        VL_OUT8(bs_alu_shift_value,5,0);
        VL_OUT8(bs_alu_src,0,0);
        VL_OUT8(bs_alu_algo,1,0);
        VL_OUT8(bs_alu_bypass,0,0);
        VL_OUT8(bs_bypass,0,0);
        VL_OUT8(bs_mul_bypass,0,0);
        VL_OUT8(bs_mul_prelu,0,0);
        VL_OUT8(bs_relu_bypass,0,0);
        VL_OUT8(bs_mul_shift_value,7,0);
        VL_OUT8(bs_mul_src,0,0);
        VL_OUT8(ew_alu_cvt_bypass,0,0);
        VL_OUT8(ew_alu_src,0,0);
        VL_OUT8(ew_alu_cvt_truncate,5,0);
        VL_OUT8(ew_alu_algo,1,0);
        VL_OUT8(ew_alu_bypass,0,0);
        VL_OUT8(ew_bypass,0,0);
        VL_OUT8(ew_lut_bypass,0,0);
        VL_OUT8(ew_mul_bypass,0,0);
        VL_OUT8(ew_mul_prelu,0,0);
        VL_OUT8(ew_mul_cvt_bypass,0,0);
        VL_OUT8(ew_mul_src,0,0);
        VL_OUT8(ew_mul_cvt_truncate,5,0);
        VL_OUT8(dst_ram_type,0,0);
        VL_OUT8(batch_number,4,0);
        VL_OUT8(flying_mode,0,0);
        VL_OUT8(nan_to_zero,0,0);
        VL_OUT8(output_dst,0,0);
        VL_OUT8(winograd,0,0);
        VL_OUT8(op_en_trigger,0,0);
        VL_OUT8(perf_dma_en,0,0);
        VL_OUT8(perf_lut_en,0,0);
        VL_OUT8(perf_nan_inf_count_en,0,0);
        VL_OUT8(perf_sat_en,0,0);
        VL_IN8(op_en,0,0);
        VL_IN8(status_unequal,0,0);
        CData/*0:0*/ __PVT__arreggen_abort_on_invalid_wr;
        CData/*0:0*/ __PVT__arreggen_abort_on_rowr;
        CData/*0:0*/ __PVT__arreggen_dump;
        CData/*0:0*/ __PVT__nvdla_sdp_d_data_format_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bn_alu_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bn_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bn_mul_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bs_alu_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bs_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_bs_mul_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_ew_alu_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_ew_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_dp_ew_mul_cfg_0_wren;
    };
    struct {
        CData/*0:0*/ __PVT__nvdla_sdp_d_feature_mode_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_sdp_d_perf_enable_0_wren;
        VL_IN16(reg_offset,11,0);
        VL_OUT16(cvt_scale,15,0);
        VL_OUT16(channel,12,0);
        VL_OUT16(height,12,0);
        VL_OUT16(width,12,0);
        VL_OUT16(bn_alu_operand,15,0);
        VL_OUT16(bn_mul_operand,15,0);
        VL_OUT16(bs_alu_operand,15,0);
        VL_OUT16(bs_mul_operand,15,0);
        VL_OUT16(ew_alu_cvt_scale,15,0);
        VL_OUT16(ew_mul_cvt_scale,15,0);
        VL_OUT16(ew_truncate,9,0);
        VL_OUT(reg_rd_data,31,0);
        VL_IN(reg_wr_data,31,0);
        VL_OUT(cvt_offset,31,0);
        VL_OUT(ew_alu_cvt_offset,31,0);
        VL_OUT(ew_alu_operand,31,0);
        VL_OUT(ew_mul_cvt_offset,31,0);
        VL_OUT(ew_mul_operand,31,0);
        VL_OUT(dst_base_addr_high,31,0);
        VL_OUT(dst_base_addr_low,31,0);
        VL_OUT(dst_batch_stride,31,0);
        VL_OUT(dst_line_stride,31,0);
        VL_OUT(dst_surface_stride,31,0);
        VL_IN(lut_hybrid,31,0);
        VL_IN(lut_le_hit,31,0);
        VL_IN(lut_lo_hit,31,0);
        VL_IN(lut_oflow,31,0);
        VL_IN(lut_uflow,31,0);
        VL_IN(out_saturation,31,0);
        VL_IN(wdma_stall,31,0);
        VL_IN(status_inf_input_num,31,0);
        VL_IN(status_nan_input_num,31,0);
        VL_IN(status_nan_output_num,31,0);
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_SDP_REG_dual(const char* name);
    ~VNV_nvdla_NV_NVDLA_SDP_REG_dual();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_SDP_REG_dual);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
