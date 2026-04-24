// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_prim_onehot_check__O3_ABz3_Sz3.h"

VL_INLINE_OPT void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel__2(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__0__KET____DOT__u_prim_onehot_check_add_in_sel__2\n"); );
    // Body
    vlSelf->__PVT__or_tree__BRA__15__KET__ = (1U & 
                                              (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q
                                               [0U] 
                                               | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q
                                                  [0U] 
                                                  >> 1U)));
}

VL_INLINE_OPT void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel__3(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_masked_add__DOT__gen_add_in_muxes__BRA__1__KET____DOT__u_prim_onehot_check_add_in_sel__3\n"); );
    // Body
    vlSelf->__PVT__or_tree__BRA__15__KET__ = (1U & 
                                              (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q
                                               [1U] 
                                               | (vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__ghash_add_in_sel_q
                                                  [1U] 
                                                  >> 1U)));
}

VL_INLINE_OPT void Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel__1(Vaes_tb_prim_onehot_check__O3_ABz3_Sz3* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vaes_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vaes_tb_prim_onehot_check__O3_ABz3_Sz3___settle__TOP__aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__u_prim_onehot_check_gf_mult1_in_sel__1\n"); );
    // Body
    vlSelf->__PVT__or_tree__BRA__15__KET__ = (IData)(
                                                     (0U 
                                                      != 
                                                      (3U 
                                                       & (IData)(vlSymsp->TOP.aes_tb__DOT__u_aes__DOT__u_aes_core__DOT__gen_ghash__DOT__u_aes_ghash__DOT__gen_gf_mult1_mux__DOT__gf_mult1_in_sel_q_raw))));
}
