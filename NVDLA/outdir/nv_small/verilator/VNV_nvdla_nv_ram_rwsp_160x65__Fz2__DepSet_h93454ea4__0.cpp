// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_160x65__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__30(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__30\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__lat_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__35(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__35\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK;
    CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL))) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL)))) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd 
        = (1U & ((IData)((0xc0U == (0xc0U & (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR)))) 
                 | (IData)((0xa0U == (0xa0U & (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR))))));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF))) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd)));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF)) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd)));
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0) {
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][0U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[0U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][1U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[1U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][2U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[2U];
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1) {
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][0U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[0U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][1U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[1U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][2U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[2U];
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][0U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][0U] : 0U)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][1U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][1U] : 0U)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[2U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][2U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][2U] : 0U)));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | ((8U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                     & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                            >> 7U))))))) 
              | ((4U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))) 
                 | ((2U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))) 
                    | (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xfU & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                      & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                             >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[2U] 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[2U] 
                 & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                        >> 7U)))))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__29(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__29\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__lat_wr_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__36(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__36\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK;
    CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__lat_rd_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL))) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RWSEL)))) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd 
        = (1U & ((IData)((0xc0U == (0xc0U & (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR)))) 
                 | (IData)((0xa0U == (0xa0U & (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__ADR))))));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF))) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd)));
    __PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WECLK) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF)) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__empadd)));
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk0) {
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][0U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[0U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][1U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[1U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][2U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h3198c9a6__0[2U];
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WrClk1) {
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[0U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[0U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[1U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[1U];
        vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[2U] 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WDQ_pr[2U];
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][0U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[0U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][1U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[1U];
            vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))][2U] 
                = vlSelf->r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h3198c9a6__0[2U];
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][0U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][0U] : 0U)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][1U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][1U] : 0U)));
        vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[2U] 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][2U] : 0U)) | 
               ((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RECLK) 
                            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR)))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__iow1__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__RADR) 
                              >> 1U))][2U] : 0U)));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | ((8U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                     & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                            >> 7U))))))) 
              | ((4U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))) 
                 | ((2U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))) 
                    | (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[0U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xfU & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                      & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                             >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                       & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                              >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf00U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                        & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                         & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf00000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                           & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                  >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                            & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]) 
           | (0xf0000000U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[1U] 
                             & (~ (- (IData)((1U & 
                                              (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                               >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[2U] 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ram_Inst_160X65__DOT__ITOP__DOT__dout[2U] 
                 & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                        >> 7U)))))));
}
