// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_128x6__Fz2.h"

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__3\n"); );
    // Init
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
                    = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->Q;
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                    = (0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->Q));
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                    = (0x7fU & 0U);
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                = (0x7fU & 0U);
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__wr_adr;
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
            = (0x7fU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_popping)
                         ? ((IData)(1U) + (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr))
                         : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_adr)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__rd_enable;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
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
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x3fU & (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0))) 
                     & (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0)))) 
                    & (- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                  == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat))))));
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
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
}

VL_ATTR_COLD void VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__4(VNV_nvdla_nv_ram_rwsp_128x6__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_nv_ram_rwsp_128x6__Fz2___settle__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__4\n"); );
    // Init
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
    CData/*5:0*/ __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk;
    // Body
    if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) {
        if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0_S) {
            if (vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__debug_mode_sync) {
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
                    = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0->Q;
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                    = (0x7fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0->Q));
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
                    = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__posedge_updateDR_sync) 
                       & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__re_q));
            } else {
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 = 0U;
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                    = (0x7fU & 0U);
                vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 = 0U;
            }
        } else {
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 = 0U;
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
                = (0x7fU & 0U);
            vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 = 0U;
        }
    } else {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__wr_adr;
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0 
            = (0x7fU & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_popping)
                         ? ((IData)(1U) + (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr))
                         : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_adr)));
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0 
            = vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__rd_enable;
    }
    if ((1U & (~ ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clk_w_iddq) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__we_lat))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0;
    }
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_re_r0;
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
    if ((1U & (~ (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
                   & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
                  & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat 
            = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0;
    }
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__gated_clk_core) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__re_lat)) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_arr 
        = vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__array
        [vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat];
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__collision_ff_clk 
        = (0x3fU & (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__weclk_d0))) 
                     & (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__reclk_d0)))) 
                    & (- (IData)(((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__ra_lat) 
                                  == (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__wa_lat))))));
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
    __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o)
            ? 0U : ((0U != (0xffU & vlSymsp->TOP.nvdla_pwrbus_ram_c_pd))
                     ? 0U : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__io__DOT__r0_dout_tmp) 
                             & (- (IData)((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__ITOP__DOT__clamp_o))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_128x6__DOT__ramDataOut 
        = __PVT__r_nv_ram_rwsp_128x6__DOT__ram_Inst_128X6__DOT__RD;
}
