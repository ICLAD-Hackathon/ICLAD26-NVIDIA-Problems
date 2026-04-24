// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rwsp_160x16__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__5\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__18(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__18\n"); );
    // Body
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xfU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xeU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xdU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xcU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xbU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 0xaU));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 9U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 8U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 7U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 6U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut) 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__19(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__19\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__we_q 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__21(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__21\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__22(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__22\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__24(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__24\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__re_q 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__31(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__31\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__32(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__32\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfff0U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xff0fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
               << 7U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                          << 6U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                     << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                               << 4U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
               << 0xbU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xaU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                         << 9U) | ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                   << 8U)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq 
        = ((0xfffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
               << 0xfU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                            << 0xeU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xdU) | 
                                        ((IData)(vlSelf->r_nv_ram_rwsp_160x16__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                         << 0xcU)))));
}
