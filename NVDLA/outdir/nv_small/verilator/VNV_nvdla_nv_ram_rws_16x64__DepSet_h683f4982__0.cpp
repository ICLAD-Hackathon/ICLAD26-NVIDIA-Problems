// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rws_16x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__81(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__81\n"); );
    // Body
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__we_q = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__radr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Ra_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__wadr_q 
        = (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
            << 3U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                       << 2U) | (((IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                  << 1U) | (IData)(vlSelf->r_nv_ram_rws_16x64__DOT__testInst_Wa_reg_w0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__83(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__83\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__84(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__84\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__85(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__85\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r = 0U;
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__161(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__161\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__177(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__177\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__273(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__273\n"); );
    // Init
    QData/*63:0*/ __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_re_r0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_we_w0;
    }
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Ra_r0;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Di_w0;
    }
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__we_lat));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__muxed_Wa_w0;
    }
    if (vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0) {
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffffeULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | (IData)((IData)((1U & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat)))));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffffdULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 1U))))) 
                  << 1U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffffbULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 2U))))) 
                  << 2U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffff7ULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 3U))))) 
                  << 3U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffffefULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 4U))))) 
                  << 4U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffffdfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 5U))))) 
                  << 5U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffffbfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 6U))))) 
                  << 6U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffff7fULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 7U))))) 
                  << 7U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffeffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 8U))))) 
                  << 8U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffdffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 9U))))) 
                  << 9U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffffbffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xaU))))) 
                  << 0xaU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffff7ffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xbU))))) 
                  << 0xbU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffefffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xcU))))) 
                  << 0xcU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffdfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xdU))))) 
                  << 0xdU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffffbfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xeU))))) 
                  << 0xeU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffff7fffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0xfU))))) 
                  << 0xfU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffeffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x10U))))) 
                  << 0x10U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffdffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x11U))))) 
                  << 0x11U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffffbffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x12U))))) 
                  << 0x12U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffff7ffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x13U))))) 
                  << 0x13U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffefffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x14U))))) 
                  << 0x14U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffdfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x15U))))) 
                  << 0x15U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffffbfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x16U))))) 
                  << 0x16U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffff7fffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x17U))))) 
                  << 0x17U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffeffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x18U))))) 
                  << 0x18U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffdffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x19U))))) 
                  << 0x19U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffffbffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1aU))))) 
                  << 0x1aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffff7ffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1bU))))) 
                  << 0x1bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffefffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1cU))))) 
                  << 0x1cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffdfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1dU))))) 
                  << 0x1dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffffbfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1eU))))) 
                  << 0x1eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffff7fffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x1fU))))) 
                  << 0x1fU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffeffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x20U))))) 
                  << 0x20U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffdffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x21U))))) 
                  << 0x21U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffffbffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x22U))))) 
                  << 0x22U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffff7ffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x23U))))) 
                  << 0x23U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffefffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x24U))))) 
                  << 0x24U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffdfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x25U))))) 
                  << 0x25U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffffbfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x26U))))) 
                  << 0x26U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffff7fffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x27U))))) 
                  << 0x27U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffeffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x28U))))) 
                  << 0x28U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffdffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x29U))))) 
                  << 0x29U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffffbffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2aU))))) 
                  << 0x2aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffff7ffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2bU))))) 
                  << 0x2bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffefffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2cU))))) 
                  << 0x2cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffdfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2dU))))) 
                  << 0x2dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffffbfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2eU))))) 
                  << 0x2eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffff7fffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x2fU))))) 
                  << 0x2fU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffeffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x30U))))) 
                  << 0x30U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffdffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x31U))))) 
                  << 0x31U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfffbffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x32U))))) 
                  << 0x32U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfff7ffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x33U))))) 
                  << 0x33U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffefffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x34U))))) 
                  << 0x34U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffdfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x35U))))) 
                  << 0x35U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xffbfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x36U))))) 
                  << 0x36U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xff7fffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x37U))))) 
                  << 0x37U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfeffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x38U))))) 
                  << 0x38U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfdffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x39U))))) 
                  << 0x39U));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xfbffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3aU))))) 
                  << 0x3aU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xf7ffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3bU))))) 
                  << 0x3bU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xefffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3cU))))) 
                  << 0x3cU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xdfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3dU))))) 
                  << 0x3dU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0xbfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3eU))))) 
                  << 0x3eU));
        vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat] 
            = ((0x7fffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat]) 
               | ((QData)((IData)((1U & (IData)((vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wd_lat 
                                                 >> 0x3fU))))) 
                  << 0x3fU));
    }
    __PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (((- (QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__weclk_d0))) 
            & (- (QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)))) 
           & (- (QData)((IData)(((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat) 
                                 == (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__wa_lat))))));
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__ra_lat];
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)(__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 1U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 2U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 3U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 4U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 5U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__6__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 6U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__7__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 7U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__8__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 8U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__9__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 9U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__10__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xaU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__11__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xbU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__12__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xcU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__13__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xdU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__14__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xeU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__15__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0xfU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__16__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x10U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__17__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x11U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__18__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x12U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__19__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x13U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__20__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x14U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__21__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x15U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__22__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x16U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__23__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x17U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__24__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x18U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__25__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x19U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__26__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1aU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__27__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1bU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__28__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1cU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__29__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1dU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__30__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1eU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__31__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x1fU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__32__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x20U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__33__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x21U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__34__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x22U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__35__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x23U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__36__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x24U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__37__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x25U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__38__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x26U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__39__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x27U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__40__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x28U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__41__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x29U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__42__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2aU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__43__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2bU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__44__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2cU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__45__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2dU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__46__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2eU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__47__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x2fU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__48__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x30U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__49__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x31U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__50__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x32U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__51__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x33U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__52__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x34U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__53__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x35U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__54__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x36U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__55__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x37U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__56__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x38U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__57__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x39U)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__58__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3aU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__59__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3bU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__60__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3cU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__61__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3dU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__62__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3eU)));
    vlSelf->r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision__BRA__63__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)((__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
                         >> 0x3fU)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1329(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1329\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffffeULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | (IData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1330(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1330\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffffdULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 1U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1331(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1331\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffffbULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 2U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1332(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1332\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffff7ULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 3U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1333(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1333\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffffefULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 4U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1334(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1334\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffffdfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 5U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1335(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1335\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffffbfULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 6U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1336(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1336\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffff7fULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 7U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1337(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1337\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffeffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 8U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1338(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1338\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffdffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 9U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1339(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1339\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffffbffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xaU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1340(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1340\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffff7ffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xbU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1341(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1341\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffefffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xcU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1342(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1342\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffdfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xdU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1343(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1343\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffffbfffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xeU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1344(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1344\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffff7fffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0xfU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1345(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1345\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffeffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x10U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1346(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1346\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffdffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x11U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1347(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1347\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffffbffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x12U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1348(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1348\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffff7ffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x13U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1349(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1349\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffefffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x14U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1350(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1350\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffdfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x15U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1351(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1351\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffffbfffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x16U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1352(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1352\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffff7fffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x17U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1353(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1353\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffeffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x18U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1354(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1354\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffdffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x19U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1355(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1355\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffffbffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1aU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1356(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1356\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffff7ffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1bU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1357(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1357\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffefffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1cU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1358(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1358\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffdfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1dU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1359(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1359\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffffbfffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1eU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1360(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1360\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffff7fffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x1fU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1361(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1361\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffeffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x20U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1362(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1362\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffdffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x21U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1363(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1363\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffffbffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x22U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1364(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1364\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffff7ffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x23U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1365(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1365\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffefffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x24U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1366(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1366\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffdfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x25U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1367(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1367\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffffbfffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x26U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1368(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1368\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffff7fffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x27U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1369(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1369\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffeffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x28U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1370(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1370\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffdffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x29U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1371(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1371\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffffbffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2aU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1372(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1372\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffff7ffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2bU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1373(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1373\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffefffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2cU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1374(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1374\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffdfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2dU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1375(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1375\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffffbfffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2eU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1376(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1376\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffff7fffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x2fU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1377(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1377\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffeffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x30U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1378(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1378\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffdffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x31U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1379(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1379\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfffbffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x32U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1380(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1380\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfff7ffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x33U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1381(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1381\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffefffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x34U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1382(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1382\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffdfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x35U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1383(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1383\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xffbfffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x36U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1384(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1384\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xff7fffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x37U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1385(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1385\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfeffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x38U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1386(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1386\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfdffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x39U));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1387(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1387\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xfbffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3aU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1388(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1388\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xf7ffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3bU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1389(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1389\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xefffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3cU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1390(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1390\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xdfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3dU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1391(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1391\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0xbfffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3eU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1392(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__1392\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff 
        = ((0x7fffffffffffffffULL & vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__io__DOT__collision_ff) 
           | ((QData)((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0)) 
              << 0x3fU));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__2353(VNV_nvdla_nv_ram_rws_16x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_nv_ram_rws_16x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_shared_buffer__DOT__u_shared_buffer_00__2353\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_16x64__DOT__ram_Inst_16X64__DOT__ITOP__DOT__clamp_o)));
}
