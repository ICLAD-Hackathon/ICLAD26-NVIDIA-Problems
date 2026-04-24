// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19.h"
#include "VNV_nvdla__Syms.h"

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__32(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__testInst_Data_reg_r0__32\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rws_256x7__DOT__muxed_Data_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__testInst_Wa_reg_w0__40(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__testInst_Wa_reg_w0__40\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__testInst_Ra_reg_r0__39(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__testInst_Ra_reg_r0__39\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_data_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x9__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Wa_reg_w0__42(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Wa_reg_w0__42\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Ra_reg_r0__41(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__testInst_Ra_reg_r0__41\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_cdp__DOT__u_dp__DOT__u_NV_NVDLA_CDP_DP_syncfifo__DOT__u_info_sync_fifo__DOT__ram__DOT__r_nv_ram_rwsthp_80x15__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__47(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__47\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__48(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__48\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank0_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__49(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__49\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__50(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__50\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank1_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__51(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__51\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__52(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__52\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank2_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__53(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__53\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__54(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__54\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank3_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__55(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__55\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__56(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__56\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank4_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__57(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__57\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__58(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__58\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank5_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__59(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__59\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__60(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__60\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank6_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__61(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Wa_reg_w0__61\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__62(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0__r_nv_ram_rws_128x18__DOT__testInst_Ra_reg_r0__62\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_pdp__DOT__u_core__DOT__u_cal2d__DOT__bank7_uram_0.__PVT__r_nv_ram_rws_128x18__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__44(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__44\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__43(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__43\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_wt__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__46(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Wa_reg_w0__46\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__45(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram__r_nv_ram_rwsp_128x6__DOT__testInst_Ra_reg_r0__45\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_dc__DOT__u_fifo__DOT__ram.__PVT__r_nv_ram_rwsp_128x6__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Wa_reg_w0__38(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Wa_reg_w0__38\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Ra_reg_r0__37(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__testInst_Ra_reg_r0__37\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_img__DOT__u_sg__DOT__u_NV_NVDLA_CDMA_IMG_fifo__DOT__ram__DOT__r_nv_ram_rwsp_128x11__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Wa_reg_w0__36(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Wa_reg_w0__36\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Ra_reg_r0__35(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__testInst_Ra_reg_r0__35\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_cq__DOT__ram__DOT__r_nv_ram_rwsp_80x14__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__testInst_Wa_reg_w0__33(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__testInst_Wa_reg_w0__33\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Wa_w0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}

VL_INLINE_OPT void VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__testInst_Ra_reg_r0__34(VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                          VNV_nvdla_ScanShareSel_JTAG_reg_ext_cg__pi19___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__testInst_Ra_reg_r0__34\n"); );
    // Body
    vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 6U));
    vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 5U));
    vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 4U));
    vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 3U));
    vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 2U));
    vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & ((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0) 
                 >> 1U));
    vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_mrdma__DOT__u_eg__DOT__u_din__DOT__u_lat_fifo__DOT__ram__DOT__r_nv_ram_rwsp_80x65__DOT__muxed_Ra_r0));
    vlSelf->Q = ((0xfU & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 6U) 
                                                | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))));
    vlSelf->Q = ((0x70U & (IData)(vlSelf->Q)) | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->__Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->__Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
}
