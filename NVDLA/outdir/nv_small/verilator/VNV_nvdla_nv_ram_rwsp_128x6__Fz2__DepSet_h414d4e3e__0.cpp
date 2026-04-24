// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_128x6__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__5\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o 
        = (IData)((0U != (0x180U & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__7\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__9\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_wt) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__27(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__27\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__29(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__29\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)
                        : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_data_in));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0;
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3eU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3dU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (2U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3bU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (4U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x37U & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (8U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x2fU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (0x10U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x1fU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (0x20U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__35(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__35\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__68(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__68\n"); );
    // Init
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
    // Body
    if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0) {
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (1U & ((~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                         | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                             == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0)))) 
                     & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                        & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x3eU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0));
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (1U & ((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                          >> 1U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                     == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                    & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0)))) 
                     & (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 1U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x3dU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0) 
                  << 1U));
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (1U & ((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                          >> 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                     == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                    & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0)))) 
                     & (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 2U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x3bU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0) 
                  << 2U));
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (1U & ((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                          >> 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                     == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                    & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0)))) 
                     & (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 3U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x37U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0) 
                  << 3U));
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (1U & ((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                          >> 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                     == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                    & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0)))) 
                     & (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 4U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x2fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0) 
                  << 4U));
        vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0 
            = (IData)(((((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr) 
                         >> 5U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o))) 
                       & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 5U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0))))));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x1fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(vlSelf->r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT____Vlvbound_h921bfe26__0) 
                  << 5U));
    }
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__8(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__8\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
            | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)) 
           | ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable) 
              | (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd 
        = ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd 
        = vlSelf->__PVT__mbist_ramaccess_rst_;
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd 
        = ((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_popping) 
             & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r))) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync))) 
           | ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
               ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__access_en_r_1p)
               : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_en_r) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__mbist_ce_r0_1p))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__10(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__10\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_gate_core__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Wa_reg_w0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Wa_reg_w0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__la_bist_clkw0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_la_bist_clkw0_gate__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__dft_rst_gated_clk 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__CLK_GATE_clk__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_jtag_Data_reg_r0 
        = ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__nvdla_op_gated_clk_dc) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__UJ_clk_jtag_Data_reg_r0__DOT__qd));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__28(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__28\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__we_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_reserving));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__30(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__30\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_we_w0;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat 
            = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Di_w0_S)
                    ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync)
                        ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__data_regq)
                        : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_data_in));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0;
    }
    if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3eU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3dU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (2U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x3bU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (4U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x37U & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (8U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x2fU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (0x10U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat] 
            = ((0x1fU & vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat]) 
               | (0x20U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wd_lat)));
    }
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__32(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__32\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable));
}
