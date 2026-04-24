// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_CDMA_CVT_cell.h"

VL_INLINE_OPT void VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__9(VNV_nvdla_NV_NVDLA_CDMA_CVT_cell* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              VNV_nvdla_NV_NVDLA_CDMA_CVT_cell___sequent__TOP__NV_nvdla__DOT__u_partition_c__DOT__u_NV_NVDLA_cdma__DOT__u_cvt__DOT__u_cell_0__9\n"); );
    // Init
    IData/*17:0*/ __Vdly__pipe_p1__DOT__p1_skid_data;
    QData/*33:0*/ __Vdly__pipe_p2__DOT__p2_skid_data;
    SData/*15:0*/ __Vdly__pipe_p3__DOT__p3_skid_data;
    // Body
    __Vdly__pipe_p3__DOT__p3_skid_data = vlSelf->__PVT__pipe_p3__DOT__p3_skid_data;
    __Vdly__pipe_p2__DOT__p2_skid_data = vlSelf->__PVT__pipe_p2__DOT__p2_skid_data;
    __Vdly__pipe_p1__DOT__p1_skid_data = vlSelf->__PVT__pipe_p1__DOT__p1_skid_data;
    __Vdly__pipe_p3__DOT__p3_skid_data = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_catch)
                                           ? (IData)(vlSelf->__PVT__chn_dout)
                                           : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_data));
    __Vdly__pipe_p2__DOT__p2_skid_data = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch)
                                           ? vlSelf->__PVT__mul_dout
                                           : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data);
    __Vdly__pipe_p1__DOT__p1_skid_data = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch)
                                           ? vlSelf->__PVT__sub_dout
                                           : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                   ? vlSelf->__PVT__sub_dout
                                                   : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data)
                                                  : vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data);
    vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data = ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_pipe_valid)
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_ready_flop)
                                                   ? (IData)(vlSelf->__PVT__chn_dout)
                                                   : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_skid_data))
                                                  : (IData)(vlSelf->__PVT__pipe_p3__DOT__p3_pipe_data));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data = (((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc) 
                                                  & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid))
                                                  ? 
                                                 ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                   ? vlSelf->__PVT__mul_dout
                                                   : vlSelf->__PVT__pipe_p2__DOT__p2_skid_data)
                                                  : vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_data = __Vdly__pipe_p1__DOT__p1_skid_data;
    vlSelf->__PVT__pipe_p3__DOT__p3_skid_data = __Vdly__pipe_p3__DOT__p3_skid_data;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_data = __Vdly__pipe_p2__DOT__p2_skid_data;
}
