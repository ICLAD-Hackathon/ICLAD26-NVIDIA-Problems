// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_128x6__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__24(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__24\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__34(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__34\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->Q)
                             : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                                 ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                         : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_popping)
                                   ? ((IData)(1U) + (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr))
                                   : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__26(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__26\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__31(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__31\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->Q)
                             : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                                 ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                         : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_popping)
                                   ? ((IData)(1U) + (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr))
                                   : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr))));
}
