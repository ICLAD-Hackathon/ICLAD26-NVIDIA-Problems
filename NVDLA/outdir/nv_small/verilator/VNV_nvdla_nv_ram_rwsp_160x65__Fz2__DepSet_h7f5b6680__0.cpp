// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_nv_ram_rwsp_160x65__Fz2.h"

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__5(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___combo__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__5\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Wa_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_Ra_r0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0_S 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync) 
           | (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__18(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__18\n"); );
    // Body
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[2U]);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q 
        = (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
           >> 0x1fU);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x1eU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x1dU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x1cU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x1bU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x1aU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x19U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x18U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x17U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x16U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x15U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x14U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x13U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x12U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x11U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0x10U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xfU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xeU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xdU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xcU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xbU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 0xaU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 9U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 8U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 7U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 6U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U] 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[1U]);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q 
        = (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
           >> 0x1fU);
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x1eU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x1dU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x1cU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x1bU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x1aU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x19U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x18U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x17U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x16U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x15U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x14U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x13U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x12U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x11U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0x10U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xfU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xeU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xdU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xcU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xbU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 0xaU));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 9U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 8U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 7U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 6U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 5U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 4U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 3U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 2U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q 
        = (1U & (vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U] 
                 >> 1U));
    vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q 
        = (1U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__ramDataOut[0U]);
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__19(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__19\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__we_q 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_we_w0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__21(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__21\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_ce_r0_1p = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__22(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__22\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__access_en_r_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync) 
              & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__re_q)));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync_1p 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_synchronizer__DOT__NV_GENERIC_CELL__DOT__d0 = 0U;
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__posedge_updateDR_sync 
        = ((IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync) 
           & (~ (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__updateDR_sync_1p)));
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__24(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__24\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__re_q 
        = vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__muxed_re_r0;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__33(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__33\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__debug_mode_sync 
        = ((IData)(vlSelf->__PVT__mbist_ramaccess_rst_) 
           & (IData)(vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__mbist_en_r = 0U;
}

VL_INLINE_OPT void VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__34(VNV_nvdla_nv_ram_rwsp_160x65__Fz2* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                  VNV_nvdla_nv_ram_rwsp_160x65__Fz2___sequent__TOP__NV_nvdla__DOT__u_partition_p__DOT__u_NV_NVDLA_sdp__DOT__u_rdma__DOT__u_brdma__DOT__u_lat_fifo__DOT__ram__34\n"); );
    // Body
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[2U] 
        = (1U & (IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__64__KET____DOT__SSS__DOT__nr__Q));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__3__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__2__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__1__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__0__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xfffffff0U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__7__KET____DOT__SSS__DOT__nr__Q) 
                              << 7U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__6__KET____DOT__SSS__DOT__nr__Q) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__5__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__4__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xffffff00U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__11__KET____DOT__SSS__DOT__nr__Q) 
                              << 0xbU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__10__KET____DOT__SSS__DOT__nr__Q) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__9__KET____DOT__SSS__DOT__nr__Q) 
                                              << 9U) 
                                             | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__8__KET____DOT__SSS__DOT__nr__Q) 
                                                << 8U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xfffff000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__15__KET____DOT__SSS__DOT__nr__Q) 
                              << 0xfU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__14__KET____DOT__SSS__DOT__nr__Q) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__13__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0xdU) 
                                             | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__12__KET____DOT__SSS__DOT__nr__Q) 
                                                << 0xcU))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xffff0000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__19__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x13U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__18__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__17__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x11U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__16__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x10U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xfff00000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__23__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x17U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__22__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__21__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x15U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__20__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x14U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xff000000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__27__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x1bU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__26__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__25__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x19U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__24__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x18U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[0U]) 
           | (0xf0000000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__31__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x1fU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__30__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__29__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x1dU) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__28__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x1cU))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xfffffff0U & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__35__KET____DOT__SSS__DOT__nr__Q) 
               << 3U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__34__KET____DOT__SSS__DOT__nr__Q) 
                          << 2U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__33__KET____DOT__SSS__DOT__nr__Q) 
                                     << 1U) | (IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__32__KET____DOT__SSS__DOT__nr__Q)))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xffffff0fU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xfffffff0U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__39__KET____DOT__SSS__DOT__nr__Q) 
                              << 7U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__38__KET____DOT__SSS__DOT__nr__Q) 
                                         << 6U) | (
                                                   ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__37__KET____DOT__SSS__DOT__nr__Q) 
                                                    << 5U) 
                                                   | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__36__KET____DOT__SSS__DOT__nr__Q) 
                                                      << 4U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xfffff0ffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xffffff00U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__43__KET____DOT__SSS__DOT__nr__Q) 
                              << 0xbU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__42__KET____DOT__SSS__DOT__nr__Q) 
                                           << 0xaU) 
                                          | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__41__KET____DOT__SSS__DOT__nr__Q) 
                                              << 9U) 
                                             | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__40__KET____DOT__SSS__DOT__nr__Q) 
                                                << 8U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xffff0fffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xfffff000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__47__KET____DOT__SSS__DOT__nr__Q) 
                              << 0xfU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__46__KET____DOT__SSS__DOT__nr__Q) 
                                           << 0xeU) 
                                          | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__45__KET____DOT__SSS__DOT__nr__Q) 
                                              << 0xdU) 
                                             | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__44__KET____DOT__SSS__DOT__nr__Q) 
                                                << 0xcU))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xfff0ffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xffff0000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__51__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x13U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__50__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x12U) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__49__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x11U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__48__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x10U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xff0fffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xfff00000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__55__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x17U) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__54__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x16U) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__53__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x15U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__52__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x14U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xf0ffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xff000000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__59__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x1bU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__58__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x1aU) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__57__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x19U) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__56__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x18U))))));
    vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U] 
        = ((0xfffffffU & vlSelf->__PVT__r_nv_ram_rwsp_160x65__DOT__data_regq[1U]) 
           | (0xf0000000U & (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__63__KET____DOT__SSS__DOT__nr__Q) 
                              << 0x1fU) | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__62__KET____DOT__SSS__DOT__nr__Q) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__61__KET____DOT__SSS__DOT__nr__Q) 
                                               << 0x1dU) 
                                              | ((IData)(vlSelf->r_nv_ram_rwsp_160x65__DOT__testInst_Data_reg_r0__DOT____Vcellout__Jreg_ff__BRA__60__KET____DOT__SSS__DOT__nr__Q) 
                                                 << 0x1cU))))));
}
