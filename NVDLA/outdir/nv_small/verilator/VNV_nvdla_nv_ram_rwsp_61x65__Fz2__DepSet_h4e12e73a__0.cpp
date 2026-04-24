// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rwsp_61x65__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__5\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__17\n"); );
    // Body
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Wa_w0));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_Ra_r0));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__we_q = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_we_w0;
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q 
        = ((0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
               << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                         << 4U)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q 
        = ((0x30U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__wadr_q)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q 
        = ((0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
               << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                         << 4U)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q 
        = ((0x30U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__radr_q)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_61x65__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__19\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__20\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__22\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__re_q = vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__30(VNV_nvdla_nv_ram_rwsp_61x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_61x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_rdma__DOT__u_eg__DOT__u_lat_fifo__DOT__ram__30\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_61x65__DOT__mbist_en_r = 0U;
}
