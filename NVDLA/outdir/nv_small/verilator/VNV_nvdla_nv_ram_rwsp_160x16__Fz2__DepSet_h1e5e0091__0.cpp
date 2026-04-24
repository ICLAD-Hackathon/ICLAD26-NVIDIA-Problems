// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"
#include "VNV_nvdla_nv_ram_rwsp_160x16__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__29(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__29\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ig2cq_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__35(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__35\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK;
    CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__cq2eg_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL))) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL)))) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd 
        = (1U & ((IData)((0xc0U == (0xc0U & (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR)))) 
                 | (IData)((0xa0U == (0xa0U & (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR))))));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF))) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)));
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0) {
        vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h56b2b936__0 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
                = vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h56b2b936__0;
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1) {
        vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h56b2b936__0 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
                = vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h56b2b936__0;
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                              >> 1U))] : 0U)) | ((- (IData)(
                                                            ((IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                                             & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)))) 
                                                 & ((0x4fU 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                                        >> 1U))]
                                                     : 0U)));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xfff0U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((8U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                     & (~ (0xffffU & (- (IData)((1U 
                                                 & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                    >> 7U)))))))) 
              | ((4U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                        & (~ (0xffffU & (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                       >> 7U)))))))) 
                 | ((2U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                           & (~ (0xffffU & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                          >> 7U)))))))) 
                    | (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xff0fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x80U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                        & (~ (0xffffU & (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                       >> 7U)))))))) 
              | ((0x40U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                           & (~ (0xffffU & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                          >> 7U)))))))) 
                 | ((0x20U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                              & (~ (0xffffU & (- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                             >> 7U)))))))) 
                    | (0x10U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                & (~ (0xffffU & (- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                               >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x800U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                         & (~ (0xffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                        >> 7U)))))))) 
              | ((0x400U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                            & (~ (0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                           >> 7U)))))))) 
                 | ((0x200U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                               & (~ (0xffffU & (- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                              >> 7U)))))))) 
                    | (0x100U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                 & (~ (0xffffU & (- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                                >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xfffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x8000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))) 
              | ((0x4000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                             & (~ (0xffffU & (- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                            >> 7U)))))))) 
                 | ((0x2000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                & (~ (0xffffU & (- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                               >> 7U)))))))) 
                    | (0x1000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                  & (~ (0xffffU & (- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                                 >> 7U))))))))))));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__30(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__30\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Wa_w0)))
                : 0U) : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ig2cq_adr));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__36(VNV_nvdla_nv_ram_rwsp_160x16__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x16__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__36\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK;
    CData/*7:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1;
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0_S)
                ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                    ? (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0->Q)
                    : ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync)
                        ? 0U : (IData)(vlSelf->__PVT__mbist_Ra_r0)))
                : 0U) : ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_popping)
                          ? (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_adr_next)
                          : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__cq2eg_adr)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S)
            ? ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_we_w0_S) 
               & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__debug_mode_sync) 
                  & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__posedge_updateDR_sync) 
                     & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__re_q))))
            : (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__rd_enable));
    if ((1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core)))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB 
            = (1U & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_re_r0)));
    }
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK 
        = (((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
            & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                  >> 8U))) & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core));
    if ((1U & (~ ((~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RE_LATB)) 
                  & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__gated_clk_core))))) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0;
    }
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR 
        = (((- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL))) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           | ((~ (- (IData)((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RWSEL)))) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd 
        = (1U & ((IData)((0xc0U == (0xc0U & (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR)))) 
                 | (IData)((0xa0U == (0xa0U & (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__ADR))))));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF))) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)));
    __PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1 
        = (((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WECLK) 
            & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF)) 
           & (~ (IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__empadd)));
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk0) {
        vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h56b2b936__0 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
                = vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT____Vlvbound_h56b2b936__0;
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WrClk1) {
        vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h56b2b936__0 
            = vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WDQ_pr;
        if ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                >> 1U)))) {
            vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
                = vlSelf->r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT____Vlvbound_h56b2b936__0;
        }
    }
    if (__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout 
            = (((- (IData)(((IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                            & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR))))) 
                & ((0x4fU >= (0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                       >> 1U))) ? vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow0__DOT__arr
                   [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                              >> 1U))] : 0U)) | ((- (IData)(
                                                            ((IData)(__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RECLK) 
                                                             & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR)))) 
                                                 & ((0x4fU 
                                                     >= 
                                                     (0x7fU 
                                                      & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                                         >> 1U)))
                                                     ? 
                                                    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__iow1__DOT__arr
                                                    [
                                                    (0x7fU 
                                                     & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__RADR) 
                                                        >> 1U))]
                                                     : 0U)));
    }
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xfff0U & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((8U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                     & (~ (0xffffU & (- (IData)((1U 
                                                 & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                    >> 7U)))))))) 
              | ((4U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                        & (~ (0xffffU & (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                       >> 7U)))))))) 
                 | ((2U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                           & (~ (0xffffU & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                          >> 7U)))))))) 
                    | (1U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                             & (~ (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                   >> 7U))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xff0fU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x80U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                        & (~ (0xffffU & (- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                       >> 7U)))))))) 
              | ((0x40U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                           & (~ (0xffffU & (- (IData)(
                                                      (1U 
                                                       & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                          >> 7U)))))))) 
                 | ((0x20U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                              & (~ (0xffffU & (- (IData)(
                                                         (1U 
                                                          & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                             >> 7U)))))))) 
                    | (0x10U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                & (~ (0xffffU & (- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                               >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xf0ffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x800U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                         & (~ (0xffffU & (- (IData)(
                                                    (1U 
                                                     & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                        >> 7U)))))))) 
              | ((0x400U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                            & (~ (0xffffU & (- (IData)(
                                                       (1U 
                                                        & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                           >> 7U)))))))) 
                 | ((0x200U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                               & (~ (0xffffU & (- (IData)(
                                                          (1U 
                                                           & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                              >> 7U)))))))) 
                    | (0x100U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                 & (~ (0xffffU & (- (IData)(
                                                            (1U 
                                                             & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                                >> 7U))))))))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut 
        = ((0xfffU & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ramDataOut)) 
           | ((0x8000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                          & (~ (- (IData)((1U & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                 >> 7U))))))) 
              | ((0x4000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                             & (~ (0xffffU & (- (IData)(
                                                        (1U 
                                                         & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                            >> 7U)))))))) 
                 | ((0x2000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                & (~ (0xffffU & (- (IData)(
                                                           (1U 
                                                            & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                               >> 7U)))))))) 
                    | (0x1000U & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x16__DOT__ram_Inst_160X16__DOT__ITOP__DOT__dout) 
                                  & (~ (0xffffU & (- (IData)(
                                                             (1U 
                                                              & (vlSymsp->TOP.nvdla_pwrbus_ram_p_pd 
                                                                 >> 7U))))))))))));
}
