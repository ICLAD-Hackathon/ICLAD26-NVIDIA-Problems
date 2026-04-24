// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rwsp_128x6__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__11(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__11\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__13(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__13\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__14(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__14\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__15(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__15\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__16(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__16\n"); );
    // Body
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut) 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut) 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut) 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut) 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut) 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0xfU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
               << 5U) | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                         << 4U)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq 
        = ((0x30U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__23(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__23\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__43(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__43\n"); );
    // Init
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x3fU & (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0))) 
                     & (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0)))) 
                    & (- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                  == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat))))));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 5U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__59(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__59\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3eU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__60(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__60\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3dU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) 
              << 1U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__61(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__61\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x3bU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) 
              << 2U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__62(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__62\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x37U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) 
              << 3U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__63(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__63\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x2fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) 
              << 4U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__64(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__64\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x1fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff)) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) 
              << 5U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__66(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__66\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
}
