// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwst_256x8.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__3(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__3\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__index_l7_0));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
                ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut)
                : 0U) : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0;
    }
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfeU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfdU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (2U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfbU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (4U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xf7U & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (8U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xefU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x10U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xdfU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x20U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xbfU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x40U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0x7fU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x80U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__5(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__5\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_adr));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_adr) 
               == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_adr)) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_rd_enable)) 
             & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0xffU & (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0))) 
                     & (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0)))) 
                    & (- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                  == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat))))));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 1U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 2U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 3U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 4U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 5U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__6__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 6U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__7__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 7U));
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfeU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (1U & ((~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                            | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                               & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfdU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (2U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 1U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 1U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 1U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfbU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (4U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 2U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 2U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xf7U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (8U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 3U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 3U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xefU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x10U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 4U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 4U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xdfU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x20U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 5U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 5U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 5U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xbfU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x40U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 6U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 6U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 6U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 7U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))) 
                           & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                  >> 7U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                             == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                            & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))))) 
                  << 7U));
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__4(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__4\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru_en)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ramDataOut));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__index_l7_0));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0;
    }
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_S)
                ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_r0_OutputMuxDataOut)
                : 0U) : (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0));
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Di_w0;
    }
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfeU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (1U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfdU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (2U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xfbU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (4U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xf7U & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (8U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xefU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x10U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xdfU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x20U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0xbfU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x40U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array[vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat] 
            = ((0x7fU & vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
                [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat]) 
               | (0x80U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wd_lat)));
    }
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__6(VNV_nvdla_nv_ram_rwst_256x8* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwst_256x8___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__6\n"); );
    // Init
    CData/*7:0*/ __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_re_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0->Q)
                    : 0U) : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_adr));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__wthru 
        = ((((((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_adr) 
               == (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_adr)) 
              & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_rd_enable)) 
             & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram_wr_enable)) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_sync))) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__debug_mode_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0)));
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0xffU & (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0))) 
                     & (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0)))) 
                    & (- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                  == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat))))));
    vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat];
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__0__KET____DOT____Vsenitemexpr1 
        = (1U & (IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__1__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 1U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__2__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 2U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__3__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 3U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__4__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 4U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__5__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 5U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__6__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 6U));
    vlSelf->r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision__BRA__7__KET____DOT____Vsenitemexpr1 
        = (1U & ((IData)(__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff_clk) 
                 >> 7U));
    if (vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__reclk_d0) {
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfeU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (1U & ((~ ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                            | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                               & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                        & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfdU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (2U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 1U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 1U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 1U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xfbU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (4U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 2U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 2U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 2U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xf7U & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (8U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                              >> 3U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                         == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                        & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                         << 3U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                   & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                      << 3U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xefU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x10U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 4U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 4U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 4U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xdfU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x20U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 5U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 5U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 5U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0xbfU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | (0x40U & (((~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                 >> 6U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                            == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                           & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))) 
                            << 6U) & ((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                                      & ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o)) 
                                         << 6U)))));
        vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp 
            = ((0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_dout_tmp)) 
               | ((IData)(((((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__r0_arr) 
                             >> 7U) & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__clamp_o))) 
                           & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__io__DOT__collision_ff) 
                                  >> 7U) | (((IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__ra_lat) 
                                             == (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__wa_lat)) 
                                            & (IData)(vlSelf->__PVT__r_nv_ram_rwst_256x8__DOT__ram_Inst_256X8__DOT__ITOP__DOT__weclk_d0)))))) 
                  << 7U));
    }
}
