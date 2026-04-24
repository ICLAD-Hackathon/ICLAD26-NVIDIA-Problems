// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rws_128x18.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__81(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__81\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0->Q)
                             : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                                 ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                         : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__sub_lbuf_dout_cnt)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__138(VNV_nvdla_nv_ram_rws_128x18* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rws_128x18___multiclk__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__138\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0 
        = (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S)
                     ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0_S)
                         ? ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                             ? (IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0->Q)
                             : ((IData)(vlSelf->__PVT__r_nv_ram_rws_128x18__DOT__debug_mode_sync)
                                 ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                         : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__int_mem_waddr)));
}
