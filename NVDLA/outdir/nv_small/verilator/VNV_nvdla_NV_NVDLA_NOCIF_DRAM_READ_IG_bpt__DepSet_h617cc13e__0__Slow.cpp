// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNV_nvdla.h for the primary calling header

#include "verilated.h"

#include "VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt.h"
#include "VNV_nvdla__Syms.h"

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt0__1\n"); );
    // Init
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (8ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_0__DOT__p1_pipe_ready_bc) 
                & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__2(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt1__2\n"); );
    // Init
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_rand_ready)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid) 
                                     & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (9ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_1__DOT__p1_pipe_ready_bc) 
                & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__3(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt2__3\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x3dU) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_2__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (3ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__4(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt3__4\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x3dU) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x3dU) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_3__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (2ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__5(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt4__5\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0x50U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0x50U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_4__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (1ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__6(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt5__6\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0xa0U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_5__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (5ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}

VL_ATTR_COLD void VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__7(VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNV_nvdla__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+                VNV_nvdla_NV_NVDLA_NOCIF_DRAM_READ_IG_bpt___settle__TOP__NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_bpt6__7\n"); );
    // Init
    SData/*9:0*/ __PVT__lat_cnt_ext;
    SData/*9:0*/ __PVT__lat_cnt_mod;
    SData/*9:0*/ __PVT__lat_cnt_new;
    CData/*0:0*/ __PVT__req_rdy;
    CData/*0:0*/ __PVT__pipe_p1__DOT__p1_pipe_skid_valid;
    // Body
    vlSelf->bpt2arb_req_pd = ((0x3ffffffffffULL & vlSelf->bpt2arb_req_pd) 
                              | ((QData)((IData)((0U 
                                                  == (IData)(vlSelf->__PVT__count_req)))) 
                                 << 0x2aU));
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_skid_data 
        = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
            ? vlSelf->__PVT__pipe_p1__DOT__p1_pipe_data
            : vlSelf->__PVT__pipe_p1__DOT__p1_skid_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_pipe_ready_bc = 
        (1U & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop) 
               | (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid))));
    __PVT__pipe_p1__DOT__p1_pipe_skid_valid = ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)
                                                ? (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid)
                                                : (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid));
    vlSelf->__PVT__req_vld = ((1U <= (0xffU & ((IData)(0xa0U) 
                                               - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                              & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid));
    vlSelf->__PVT__in_vld_pd = ((- (QData)((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))) 
                                & vlSelf->__PVT__pipe_p2__DOT__p2_pipe_data);
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch = (((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_pipe_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)));
    vlSelf->__PVT__pipe_p1__DOT__p1_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p1__DOT__p1_skid_catch))));
    __PVT__req_rdy = ((1U <= (0xffU & ((IData)(0xa0U) 
                                       - (IData)(vlSelf->__PVT__lat_cnt_cur)))) 
                      & (IData)(vlSymsp->TOP.NV_nvdla__DOT__u_partition_o__DOT__u_NV_NVDLA_mcif__DOT__u_read__DOT__u_ig__DOT__u_arb__DOT__pipe_p1_6__DOT__p1_pipe_ready_bc));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_pipe_valid 
        = ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)
            ? (IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid)
            : (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid));
    vlSelf->__PVT__is_ltran = ((IData)(vlSelf->__PVT__count_req) 
                               == ((0xffffU & ((IData)(1U) 
                                               + (0x7fffU 
                                                  & (IData)(
                                                            (vlSelf->__PVT__in_vld_pd 
                                                             >> 0x20U))))) 
                                   - (IData)(1U)));
    vlSelf->__PVT__bpt2arb_accept = ((IData)(vlSelf->__PVT__req_vld) 
                                     & (IData)(__PVT__req_rdy));
    vlSelf->bpt2arb_req_pd = ((0x40000000000ULL & vlSelf->bpt2arb_req_pd) 
                              | (6ULL | (((QData)((IData)(vlSelf->__PVT__is_ltran)) 
                                          << 0x29U) 
                                         | ((QData)((IData)(
                                                            ((0U 
                                                              == (IData)(vlSelf->__PVT__count_req))
                                                              ? (IData)(vlSelf->__PVT__in_vld_pd)
                                                              : vlSelf->__PVT__out_addr))) 
                                            << 4U))));
    vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc = 
        (1U & (((IData)(__PVT__req_rdy) & (IData)(vlSelf->__PVT__is_ltran)) 
               | (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_valid))));
    __PVT__lat_cnt_ext = vlSelf->__PVT__lat_cnt_cur;
    __PVT__lat_cnt_mod = (0x3ffU & (((IData)(vlSelf->__PVT__lat_cnt_cur) 
                                     + ((IData)(vlSelf->__PVT__bpt2arb_accept)
                                         ? 1U : 0U)) 
                                    - (IData)(vlSelf->__PVT__lat_count_dec)));
    __PVT__lat_cnt_new = ((((IData)(vlSelf->__PVT__bpt2arb_accept)
                             ? 1U : 0U) != (IData)(vlSelf->__PVT__lat_count_dec))
                           ? (IData)(__PVT__lat_cnt_mod)
                           : (IData)(__PVT__lat_cnt_ext));
    vlSelf->__PVT__lat_cnt_nxt = __PVT__lat_cnt_new;
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch = (((IData)(__PVT__pipe_p1__DOT__p1_pipe_skid_valid) 
                                                   & (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready_flop)) 
                                                  & (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)));
    vlSelf->__PVT__pipe_p2__DOT__p2_skid_ready = (1U 
                                                  & ((IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_valid)
                                                      ? (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_pipe_ready_bc)
                                                      : 
                                                     (~ (IData)(vlSelf->__PVT__pipe_p2__DOT__p2_skid_catch))));
}
