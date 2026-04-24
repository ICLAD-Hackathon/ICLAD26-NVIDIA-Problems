// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb___024root.h"

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___initial__TOP__1(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->test_done_o = 0U;
    vlSelf->test_passed_o = 1U;
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___settle__TOP__3(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___settle__TOP__3\n"); );
    // Body
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[1U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[2U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[3U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[4U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[5U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[6U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[7U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[8U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[9U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xaU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xbU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xcU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xdU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xeU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0xfU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x10U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x11U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x12U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x13U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x14U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x15U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x16U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x17U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x18U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x19U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x1fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x20U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x21U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x22U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x23U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x24U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x25U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x26U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x27U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x28U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x29U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x2fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x30U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x31U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x32U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x33U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x34U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x35U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x36U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x37U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x38U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x39U] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3aU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3bU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3cU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3dU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3eU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[0x3fU] 
        = ((0x10U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029)) 
           | ((8U & (VL_REDXOR_4((0xcU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029))) 
                     << 3U)) | ((4U & ((~ ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                           >> 2U)) 
                                       << 2U)) | (3U 
                                                  & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                     ^ 
                                                     ((2U 
                                                       & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029) 
                                                            >> 4U))))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 4U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 3U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 2U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | (IData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                           [0U] >> 1U)))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffeULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | (IData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                     [0U]))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 4U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 3U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 2U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [1U] >> 1U)))) 
                     << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffdULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [1U]))) << 1U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 4U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 3U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 2U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [2U] >> 1U)))) 
                     << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffffbULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [2U]))) << 2U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 4U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 3U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 2U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [3U] >> 1U)))) 
                     << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffff7ULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [3U]))) << 3U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 4U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 3U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 2U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [4U] >> 1U)))) 
                     << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffefULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [4U]))) << 4U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 4U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 3U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 2U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [5U] >> 1U)))) 
                     << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffdfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [5U]))) << 5U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 4U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 3U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 2U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [6U] >> 1U)))) 
                     << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffffbfULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [6U]))) << 6U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 4U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 3U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 2U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [7U] >> 1U)))) 
                     << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffff7fULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [7U]))) << 7U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 4U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 3U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 2U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [8U] >> 1U)))) 
                     << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffeffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [8U]))) << 8U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 4U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 3U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 2U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [9U] >> 1U)))) 
                     << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffdffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [9U]))) << 9U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 4U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 3U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 2U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xaU] 
                                            >> 1U)))) 
                     << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffffbffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xaU]))) << 0xaU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 4U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 3U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 2U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xbU] 
                                            >> 1U)))) 
                     << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffff7ffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xbU]))) << 0xbU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 4U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 3U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 2U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xcU] 
                                            >> 1U)))) 
                     << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffefffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xcU]))) << 0xcU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 4U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 3U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 2U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xdU] 
                                            >> 1U)))) 
                     << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffdfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xdU]))) << 0xdU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 4U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 3U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 2U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xeU] 
                                            >> 1U)))) 
                     << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffffbfffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xeU]))) << 0xeU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 4U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 3U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 2U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0xfU] 
                                            >> 1U)))) 
                     << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffff7fffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0xfU]))) << 0xfU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 4U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 3U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 2U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x10U] 
                                            >> 1U)))) 
                     << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffeffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x10U]))) << 0x10U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 4U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 3U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 2U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x11U] 
                                            >> 1U)))) 
                     << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffdffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x11U]))) << 0x11U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 4U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 3U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 2U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x12U] 
                                            >> 1U)))) 
                     << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffffbffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x12U]))) << 0x12U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 4U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 3U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 2U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x13U] 
                                            >> 1U)))) 
                     << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffff7ffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x13U]))) << 0x13U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 4U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 3U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 2U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x14U] 
                                            >> 1U)))) 
                     << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffefffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x14U]))) << 0x14U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 4U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 3U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 2U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x15U] 
                                            >> 1U)))) 
                     << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffdfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x15U]))) << 0x15U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 4U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 3U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 2U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x16U] 
                                            >> 1U)))) 
                     << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffffbfffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x16U]))) << 0x16U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 4U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 3U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 2U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x17U] 
                                            >> 1U)))) 
                     << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffff7fffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x17U]))) << 0x17U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 4U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 3U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 2U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x18U] 
                                            >> 1U)))) 
                     << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffeffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x18U]))) << 0x18U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 4U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 3U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 2U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x19U] 
                                            >> 1U)))) 
                     << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffdffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x19U]))) << 0x19U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 4U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 3U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 2U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1aU] 
                                            >> 1U)))) 
                     << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffffbffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1aU]))) << 0x1aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 4U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 3U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 2U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1bU] 
                                            >> 1U)))) 
                     << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffff7ffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1bU]))) << 0x1bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 4U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 3U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 2U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1cU] 
                                            >> 1U)))) 
                     << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffefffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1cU]))) << 0x1cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 4U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 3U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 2U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1dU] 
                                            >> 1U)))) 
                     << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffdfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1dU]))) << 0x1dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 4U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 3U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 2U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1eU] 
                                            >> 1U)))) 
                     << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffffbfffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1eU]))) << 0x1eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 4U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 3U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 2U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x1fU] 
                                            >> 1U)))) 
                     << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffff7fffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x1fU]))) << 0x1fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 4U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 3U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 2U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x20U] 
                                            >> 1U)))) 
                     << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffeffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x20U]))) << 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 4U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 3U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 2U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x21U] 
                                            >> 1U)))) 
                     << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffdffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x21U]))) << 0x21U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 4U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 3U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 2U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x22U] 
                                            >> 1U)))) 
                     << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffffbffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x22U]))) << 0x22U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 4U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 3U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 2U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x23U] 
                                            >> 1U)))) 
                     << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffff7ffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x23U]))) << 0x23U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 4U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 3U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 2U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x24U] 
                                            >> 1U)))) 
                     << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffefffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x24U]))) << 0x24U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 4U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 3U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 2U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x25U] 
                                            >> 1U)))) 
                     << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffdfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x25U]))) << 0x25U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 4U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 3U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 2U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x26U] 
                                            >> 1U)))) 
                     << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffffbfffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x26U]))) << 0x26U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 4U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 3U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 2U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x27U] 
                                            >> 1U)))) 
                     << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffff7fffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x27U]))) << 0x27U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 4U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 3U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 2U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x28U] 
                                            >> 1U)))) 
                     << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffeffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x28U]))) << 0x28U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 4U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 3U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 2U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x29U] 
                                            >> 1U)))) 
                     << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffdffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x29U]))) << 0x29U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 4U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 3U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 2U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2aU] 
                                            >> 1U)))) 
                     << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffffbffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2aU]))) << 0x2aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 4U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 3U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 2U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2bU] 
                                            >> 1U)))) 
                     << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffff7ffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2bU]))) << 0x2bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 4U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 3U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 2U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2cU] 
                                            >> 1U)))) 
                     << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffefffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2cU]))) << 0x2cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 4U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 3U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 2U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2dU] 
                                            >> 1U)))) 
                     << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffdfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2dU]))) << 0x2dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 4U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 3U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 2U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2eU] 
                                            >> 1U)))) 
                     << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffffbfffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2eU]))) << 0x2eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 4U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 3U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 2U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x2fU] 
                                            >> 1U)))) 
                     << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffff7fffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x2fU]))) << 0x2fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 4U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 3U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 2U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x30U] 
                                            >> 1U)))) 
                     << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffeffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x30U]))) << 0x30U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 4U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 3U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 2U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x31U] 
                                            >> 1U)))) 
                     << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffdffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x31U]))) << 0x31U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 4U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 3U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 2U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x32U] 
                                            >> 1U)))) 
                     << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfffbffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x32U]))) << 0x32U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 4U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 3U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 2U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x33U] 
                                            >> 1U)))) 
                     << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfff7ffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x33U]))) << 0x33U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 4U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 3U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 2U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x34U] 
                                            >> 1U)))) 
                     << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffefffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x34U]))) << 0x34U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 4U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 3U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 2U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x35U] 
                                            >> 1U)))) 
                     << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffdfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x35U]))) << 0x35U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 4U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 3U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 2U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x36U] 
                                            >> 1U)))) 
                     << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xffbfffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x36U]))) << 0x36U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 4U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 3U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 2U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x37U] 
                                            >> 1U)))) 
                     << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xff7fffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x37U]))) << 0x37U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 4U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 3U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 2U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x38U] 
                                            >> 1U)))) 
                     << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfeffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x38U]))) << 0x38U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 4U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 3U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 2U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x39U] 
                                            >> 1U)))) 
                     << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfdffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x39U]))) << 0x39U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 4U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 3U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 2U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3aU] 
                                            >> 1U)))) 
                     << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xfbffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3aU]))) << 0x3aU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 4U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 3U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 2U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3bU] 
                                            >> 1U)))) 
                     << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xf7ffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3bU]))) << 0x3bU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 4U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 3U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 2U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3cU] 
                                            >> 1U)))) 
                     << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xefffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3cU]))) << 0x3cU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 4U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 3U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 2U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3dU] 
                                            >> 1U)))) 
                     << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xdfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3dU]))) << 0x3dU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 4U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 3U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 2U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3eU] 
                                            >> 1U)))) 
                     << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0xbfffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3eU]))) << 0x3eU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[4U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [4U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 4U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[3U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [3U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 3U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[2U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [2U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 2U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[1U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [1U]) | ((QData)((IData)((1U & (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                            [0x3fU] 
                                            >> 1U)))) 
                     << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[0U] 
        = ((0x7fffffffffffffffULL & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
            [0U]) | ((QData)((IData)((1U & vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w
                                      [0x3fU]))) << 0x3fU));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [0U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [1U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [2U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [3U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                  [4U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w
                   [4U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[0U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[1U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[0U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[1U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[3U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[2U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[2U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[4U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[3U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[6U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[4U] 
        = (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w[8U])));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[0U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [0U] ^ (((QData)((IData)((0x7ffffU & (IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                         [0U])))) 
                     << 0x2dU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [0U] >> 0x13U))) 
           ^ (((QData)((IData)((0xfffffffU & (IData)(
                                                     vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                     [0U])))) 
               << 0x24U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                            [0U] >> 0x1cU)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[1U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [1U] ^ ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                     [1U] << 3U) | (QData)((IData)(
                                                   (7U 
                                                    & (IData)(
                                                              (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                               [1U] 
                                                               >> 0x3dU))))))) 
           ^ ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
               [1U] << 0x19U) | (QData)((IData)((0x1ffffffU 
                                                 & (IData)(
                                                           (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                            [1U] 
                                                            >> 0x27U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[2U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [2U] ^ (((QData)((IData)((1U & (IData)(
                                                   vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                   [2U])))) 
                     << 0x3fU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [2U] >> 1U))) ^ (
                                                   ((QData)((IData)(
                                                                    (0x3fU 
                                                                     & (IData)(
                                                                               vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                               [2U])))) 
                                                    << 0x3aU) 
                                                   | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [2U] 
                                                      >> 6U)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[3U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [3U] ^ (((QData)((IData)((0x3ffU & (IData)(
                                                       vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                       [3U])))) 
                     << 0x36U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [3U] >> 0xaU))) ^ 
           (((QData)((IData)((0x1ffffU & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                 [3U])))) 
             << 0x2fU) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                          [3U] >> 0x11U)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[4U] 
        = ((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
            [4U] ^ (((QData)((IData)((0x7fU & (IData)(
                                                      vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                      [4U])))) 
                     << 0x39U) | (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                  [4U] >> 7U))) ^ (
                                                   (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                    [4U] 
                                                    << 0x17U) 
                                                   | (QData)((IData)(
                                                                     (0x7fffffU 
                                                                      & (IData)(
                                                                                (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w
                                                                                [4U] 
                                                                                >> 0x29U)))))));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [0U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [0U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [1U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [1U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [2U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [2U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [3U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [3U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U] 
        = (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                  [4U]);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U] 
        = (IData)((vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w
                   [4U] >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[0U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                        : 0x80400c0600000000ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[1U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[0U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[0U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[0U]))))
                         : 0x80400c0600000000ULL)) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[2U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                        : 0xdeadbeefcafef00dULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[3U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[2U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[2U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[2U]))))
                         : 0xdeadbeefcafef00dULL)) 
                   >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[4U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                        : 0ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[5U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[4U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[4U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[4U]))))
                         : 0ULL)) >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[6U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))
                        : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                        ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                        : 0ULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[7U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[6U])))
                         : (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))))
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3))
                         ? ((((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q[6U]))) 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[6U]))))
                         : 0ULL)) >> 0x20U));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[8U] 
        = (IData)(((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                    ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))
                        : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep)
                    : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                        ? (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep 
                           ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                               << 0x20U) | (QData)((IData)(
                                                           vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                        : 0xdeadbeefcafef00dULL)));
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d[9U] 
        = (IData)((((2U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                     ? ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[9U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round[8U])))
                         : vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep)
                     : ((1U & (IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4))
                         ? (vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep 
                            ^ (((QData)((IData)(vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state[8U]))))
                         : 0xdeadbeefcafef00dULL)) 
                   >> 0x20U));
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___eval_initial(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___eval_initial\n"); );
    // Body
    Vprim_ascon_duplex_tb___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
    vlSelf->__Vclklast__TOP__rst_ni = vlSelf->rst_ni;
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___settle__TOP__2(Vprim_ascon_duplex_tb___024root* vlSelf);

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___eval_settle(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___eval_settle\n"); );
    // Body
    Vprim_ascon_duplex_tb___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    Vprim_ascon_duplex_tb___024root___settle__TOP__3(vlSelf);
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___final(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___final\n"); );
}

VL_ATTR_COLD void Vprim_ascon_duplex_tb___024root___ctor_var_reset(Vprim_ascon_duplex_tb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vprim_ascon_duplex_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vprim_ascon_duplex_tb___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk_i = VL_RAND_RESET_I(1);
    vlSelf->rst_ni = VL_RAND_RESET_I(1);
    vlSelf->test_done_o = VL_RAND_RESET_I(1);
    vlSelf->test_passed_o = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__stimulus_msg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ct[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__stimulus_ad[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__c_key[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__c_nonce[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<26; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__expected_ct[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<26; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_ct[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__expected_msg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<10; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_msg[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__actual_tag[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__expected_tag[__Vi0] = 0;
    }
    for (int __Vi0=0; __Vi0<26; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ct_tag_input[__Vi0] = 0;
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ad_count_d = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__ad_count_q = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__msg_count_d = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__msg_count_q = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__ct_count_d = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__ct_count_q = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__tb_state = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__nxt_tb_state = 0;
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ad);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_msg);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__dut_input_data_ct);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_input_valid = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_data_valid_bytes = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_ready_data = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_read_data = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_data_valid = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_response_tag_valid = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_ad = VL_RAND_RESET_I(4);
    vlSelf->prim_ascon_duplex_tb__DOT__dut_last_block_msg = VL_RAND_RESET_I(4);
    vlSelf->prim_ascon_duplex_tb__DOT__idle = VL_RAND_RESET_I(4);
    vlSelf->prim_ascon_duplex_tb__DOT__start = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__fsm_done = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__count_d = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__count_q = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h1db50af5__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h6019fc4c__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f45f71__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90d11d7b__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f673d9__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab874626__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f6058c__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfbeb5__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f40fa4__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h90cfef48__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93f0a36a__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab87578d__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93c347ee__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab868da8__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_h93efbaff__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT____Vlvbound_hab84019a__0 = 0;
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__done_o = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sparse_fsm_error = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_round_counter = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__inc_round_counter = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_q);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__ascon_state_d);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__state_from_round);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__fsm_state_d = VL_RAND_RESET_I(10);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__perm_offset = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__valid_bytes_bit_mask);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__padding_byte_bit_mask);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_valid_bytes);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_in_padded);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_out_padded);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_padding = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word0 = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word1 = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word2 = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word3 = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_word4 = VL_RAND_RESET_I(2);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word1 = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word2 = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_mux_key_word3 = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__sel_round_input = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__set_dom_sep = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__xor_with_state);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__word4_dom_sep = VL_RAND_RESET_Q(64);
    VL_RAND_RESET_W(128, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__data_to_duplex);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__mubi_error = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT____Vcellinp__u_prim_ascon_round__rcon_i = VL_RAND_RESET_I(8);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d = VL_RAND_RESET_I(8);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_d_committed = VL_RAND_RESET_I(8);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__cnt_q = VL_RAND_RESET_I(8);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__err_q = VL_RAND_RESET_I(1);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__ext_cnt = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__0__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(4);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__ext_cnt = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_round_counter__DOT__gen_cnts__BRA__1__KET____DOT__cnt_unforced_q = VL_RAND_RESET_I(4);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_state_regs__DOT__state_raw = VL_RAND_RESET_I(10);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ark_w);
    VL_RAND_RESET_W(320, vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__sbox_w);
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__x_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xtranspose_w[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__ytranspose_w[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__y_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__xl_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<5; ++__Vi0) {
        vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__yl_w[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__0__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__1__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__2__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__3__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__4__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__5__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__6__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__7__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__8__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__9__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__10__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__11__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__12__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__13__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__14__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__15__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__16__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__17__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__18__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__19__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__20__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__21__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__22__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__23__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__24__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__25__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__26__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__27__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__28__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__29__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__30__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__31__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__32__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__33__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__34__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__35__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__36__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__37__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__38__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__39__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__40__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__41__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__42__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__43__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__44__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__45__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__46__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__47__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__48__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__49__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__50__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__51__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__52__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__53__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__54__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__55__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__56__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__57__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__58__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__59__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__60__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__61__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__62__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0281__029 = VL_RAND_RESET_I(5);
    vlSelf->prim_ascon_duplex_tb__DOT__ascon_duplex__DOT__u_prim_ascon_round__DOT__gen_sbox_transpose__BRA__63__KET____DOT__u_sbox__DOT__temp_w__0282__029 = VL_RAND_RESET_I(5);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__5__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__6__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__8__val = VL_RAND_RESET_I(4);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__Vfuncout = VL_RAND_RESET_I(1);
    vlSelf->__Vfunc_mubi4_test_true_strict__9__val = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
