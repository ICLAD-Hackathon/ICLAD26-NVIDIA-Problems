// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNV_nvdla.h for the primary calling header

#ifndef VERILATED_VNV_NVDLA_NV_NVDLA_CDMA_DUAL_REG_H_
#define VERILATED_VNV_NVDLA_NV_NVDLA_CDMA_DUAL_REG_H_  // guard

#include "verilated.h"

class VNV_nvdla__Syms;
VL_MODULE(VNV_nvdla_NV_NVDLA_CDMA_dual_reg) {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(nvdla_core_clk,0,0);
        VL_IN8(nvdla_core_rstn,0,0);
        VL_IN8(reg_wr_en,0,0);
        VL_OUT8(data_bank,4,0);
        VL_OUT8(weight_bank,4,0);
        VL_OUT8(batches,4,0);
        VL_OUT8(conv_x_stride,2,0);
        VL_OUT8(conv_y_stride,2,0);
        VL_OUT8(cvt_en,0,0);
        VL_OUT8(cvt_truncate,5,0);
        VL_OUT8(line_packed,0,0);
        VL_OUT8(surf_packed,0,0);
        VL_OUT8(datain_ram_type,0,0);
        VL_OUT8(datain_format,0,0);
        VL_OUT8(pixel_format,5,0);
        VL_OUT8(pixel_mapping,0,0);
        VL_OUT8(pixel_sign_override,0,0);
        VL_OUT8(mean_format,0,0);
        VL_OUT8(conv_mode,0,0);
        VL_OUT8(data_reuse,0,0);
        VL_OUT8(in_precision,1,0);
        VL_OUT8(proc_precision,1,0);
        VL_OUT8(skip_data_rls,0,0);
        VL_OUT8(skip_weight_rls,0,0);
        VL_OUT8(weight_reuse,0,0);
        VL_OUT8(nan_to_zero,0,0);
        VL_OUT8(op_en_trigger,0,0);
        VL_OUT8(dma_en,0,0);
        VL_OUT8(pixel_x_offset,4,0);
        VL_OUT8(pixel_y_offset,2,0);
        VL_OUT8(rsv_height,2,0);
        VL_OUT8(rsv_y_index,4,0);
        VL_OUT8(weight_format,0,0);
        VL_OUT8(weight_ram_type,0,0);
        VL_OUT8(pad_bottom,5,0);
        VL_OUT8(pad_left,4,0);
        VL_OUT8(pad_right,5,0);
        VL_OUT8(pad_top,4,0);
        VL_IN8(op_en,0,0);
        CData/*0:0*/ __PVT__arreggen_abort_on_invalid_wr;
        CData/*0:0*/ __PVT__arreggen_abort_on_rowr;
        CData/*0:0*/ __PVT__arreggen_dump;
        CData/*0:0*/ __PVT__nvdla_cdma_d_bank_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_conv_stride_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_cvt_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_dain_map_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_datain_format_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_datain_size_0_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_datain_size_ext_0_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_mean_global_0_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_mean_global_1_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_misc_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_pixel_offset_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_reserved_x_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_reserved_y_cfg_0_wren;
        CData/*0:0*/ __PVT__nvdla_cdma_d_zero_padding_0_wren;
        VL_IN16(reg_offset,11,0);
        VL_OUT16(cvt_offset,15,0);
        VL_OUT16(cvt_scale,15,0);
        VL_OUT16(datain_height,12,0);
        VL_OUT16(datain_width,12,0);
        VL_OUT16(datain_channel,12,0);
        VL_OUT16(datain_height_ext,12,0);
        VL_OUT16(datain_width_ext,12,0);
    };
    struct {
        VL_OUT16(entries,13,0);
        VL_OUT16(grains,11,0);
        VL_OUT16(mean_gu,15,0);
        VL_OUT16(mean_ry,15,0);
        VL_OUT16(mean_ax,15,0);
        VL_OUT16(mean_bv,15,0);
        VL_OUT16(rsv_per_line,9,0);
        VL_OUT16(rsv_per_uv_line,9,0);
        VL_OUT16(weight_kernel,12,0);
        VL_OUT16(pad_value,15,0);
        VL_OUT(reg_rd_data,31,0);
        VL_IN(reg_wr_data,31,0);
        VL_OUT(batch_stride,31,0);
        VL_OUT(cya,31,0);
        VL_OUT(datain_addr_high_0,31,0);
        VL_OUT(datain_addr_high_1,31,0);
        VL_OUT(datain_addr_low_0,31,0);
        VL_OUT(datain_addr_low_1,31,0);
        VL_OUT(line_stride,31,0);
        VL_OUT(uv_line_stride,31,0);
        VL_OUT(surf_stride,31,0);
        VL_OUT(weight_addr_high,31,0);
        VL_OUT(weight_addr_low,31,0);
        VL_OUT(weight_bytes,31,0);
        VL_OUT(byte_per_kernel,17,0);
        VL_OUT(wgs_addr_high,31,0);
        VL_OUT(wgs_addr_low,31,0);
        VL_OUT(wmb_addr_high,31,0);
        VL_OUT(wmb_addr_low,31,0);
        VL_OUT(wmb_bytes,27,0);
        VL_IN(inf_data_num,31,0);
        VL_IN(inf_weight_num,31,0);
        VL_IN(nan_data_num,31,0);
        VL_IN(nan_weight_num,31,0);
        VL_IN(dat_rd_latency,31,0);
        VL_IN(dat_rd_stall,31,0);
        VL_IN(wt_rd_latency,31,0);
        VL_IN(wt_rd_stall,31,0);
    };

    // INTERNAL VARIABLES
    VNV_nvdla__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    VNV_nvdla_NV_NVDLA_CDMA_dual_reg(const char* name);
    ~VNV_nvdla_NV_NVDLA_CDMA_dual_reg();
    VL_UNCOPYABLE(VNV_nvdla_NV_NVDLA_CDMA_dual_reg);

    // INTERNAL METHODS
    void __Vconfigure(VNV_nvdla__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
