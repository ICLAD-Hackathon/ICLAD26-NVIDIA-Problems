// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rws_256x64.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__257(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__257\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__we_q = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_we_w0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__258(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__258\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__260(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__260\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__261(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__261\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__578(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__578\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__833(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___multiclk__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__833\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Data_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__debug_mode_sync)
            ? (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__re_q)
            : (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__897(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__897\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr 
        = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Di_w0;
    vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF 
        = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__961(VNV_nvdla_nv_ram_rws_256x64* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VNV_nvdla_nv_ram_rws_256x64___combo__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__961\n"); );
    // Init
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0;
    CData/*0:0*/ __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1;
    // Body
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF)));
    __PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WECLK) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF));
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk0) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WrClk1) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr[(0x7fU 
                                                                                & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WAFF) 
                                                                                >> 1U))] 
            = vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__WDQ_pr;
    }
    if (vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK) {
        vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__dout 
            = (((- (QData)((IData)(((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK) 
                                    & (~ (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RADR)))))) 
                & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow0__DOT__arr
                [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RADR) 
                           >> 1U))]) | ((- (QData)((IData)(
                                                           ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RECLK) 
                                                            & (IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RADR))))) 
                                        & vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__iow1__DOT__arr
                                        [(0x7fU & ((IData)(vlSelf->__PVT__r_nv_ram_rws_256x64__DOT__ram_Inst_256X64__DOT__ITOP__DOT__RADR) 
                                                   >> 1U))]));
    }
}
