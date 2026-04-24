// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0__155(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0__155\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0__154(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0__154\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0__156(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0__156\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0__150(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Wa_reg_w0__150\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0__149(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Ra_reg_r0__149\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0__152(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Wa_reg_w0__152\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0__151(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Ra_reg_r0__151\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0__153(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram__r_nv_ram_rwst_256x8__DOT__testInst_Data_reg_r0__153\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__adr_ram.__PVT__r_nv_ram_rwst_256x8__DOT__muxed_Data_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0__148(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__testInst_Wa_reg_w0__148\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0__147(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__testInst_Ra_reg_r0__147\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_write__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x3__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__157(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__157\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__158(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__158\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__159(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__159\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__160(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__160\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank0_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__161(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__161\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__162(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__162\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__163(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__163\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__164(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__164\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank1_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__165(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__165\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__166(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__166\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__167(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__167\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__168(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__168\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank2_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__169(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__169\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__170(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__170\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__171(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__171\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__172(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__172\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank3_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__173(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__173\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__174(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__174\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__175(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__175\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__176(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__176\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank4_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__177(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__177\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__178(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__178\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__179(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__179\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__180(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__180\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank5_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__181(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__181\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__182(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__182\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__183(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__183\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__184(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__184\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank6_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__185(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__185\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__186(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__186\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__187(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__187\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__188(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__188\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank7_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__189(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__189\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__190(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__190\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__191(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__191\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__192(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__192\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank8_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__193(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__193\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__194(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__194\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__195(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__195\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__196(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__196\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank9_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__197(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__197\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__198(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__198\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__199(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__199\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__200(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__200\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank10_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__201(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__201\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__202(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__202\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__203(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__203\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__204(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__204\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank11_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__205(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__205\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__206(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__206\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__207(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__207\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__208(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__208\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank12_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__209(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__209\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__210(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__210\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__211(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__211\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__212(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__212\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank13_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__213(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__213\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__214(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__214\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__215(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__215\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__216(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__216\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank14_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__217(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__217\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__218(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__218\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__219(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__219\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__220(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__220\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank15_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__221(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__221\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__222(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__222\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__223(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__223\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__224(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__224\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank16_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__225(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__225\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__226(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__226\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__227(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__227\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__228(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__228\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank17_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__229(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__229\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__230(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__230\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__231(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__231\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__232(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__232\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank18_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__233(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__233\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__234(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__234\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__235(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__235\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__236(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__236\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank19_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__237(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__237\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__238(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__238\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__239(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__239\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__240(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__240\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank20_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__241(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__241\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__242(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__242\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__243(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__243\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__244(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__244\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank21_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__245(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__245\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__246(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__246\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__247(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__247\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__248(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__248\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank22_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__249(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__249\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__250(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__250\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__251(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__251\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__252(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__252\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank23_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__253(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__253\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__254(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__254\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__255(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__255\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__256(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__256\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank24_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__257(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__257\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__258(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__258\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__259(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__259\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__260(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__260\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank25_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__261(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__261\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__262(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__262\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__263(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__263\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__264(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__264\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank26_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__265(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__265\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__266(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__266\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__267(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__267\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__268(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__268\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank27_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__269(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__269\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__270(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__270\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__271(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__271\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__272(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__272\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank28_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__273(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__273\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__274(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__274\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__275(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__275\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__276(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__276\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank29_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__277(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__277\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__278(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__278\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__279(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__279\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__280(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__280\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank30_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__281(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__281\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__282(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__282\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram0.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__283(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__r_nv_ram_rws_256x64__DOT__testInst_Wa_reg_w0__283\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__284(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1__r_nv_ram_rws_256x64__DOT__testInst_Ra_reg_r0__284\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cbuf__DOT__u_cbuf_ram_bank31_ram1.__PVT__r_nv_ram_rws_256x64__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0__289(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0__289\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0__290(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0__290\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0__291(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0__291\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0__292(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0__292\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0__285(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Wa_reg_w0__285\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0__286(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram__r_nv_ram_rwsp_160x16__DOT__testInst_Ra_reg_r0__286\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_cq__DOT__ram.__PVT__r_nv_ram_rwsp_160x16__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0__287(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Wa_reg_w0__287\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0__288(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi7___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram__r_nv_ram_rwsp_160x65__DOT__testInst_Ra_reg_r0__288\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 7U));
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_nrdma__DOT__u_lat_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 7U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 6U) 
                                                   | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                       << 5U) 
                                                      | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                         << 4U)))));
    vlSelf->Q = ((0xf0U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}
