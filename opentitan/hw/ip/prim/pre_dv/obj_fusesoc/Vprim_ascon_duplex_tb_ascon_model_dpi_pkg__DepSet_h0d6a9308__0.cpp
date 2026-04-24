// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vprim_ascon_duplex_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vprim_ascon_duplex_tb__Syms.h"
#include "Vprim_ascon_duplex_tb_ascon_model_dpi_pkg.h"

extern "C" void c_dpi_ascon_round(const svBitVecVal* data_i, const svBitVecVal* round_i, svBitVecVal* data_o);

VL_INLINE_OPT void Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_ascon_round_TOP__ascon_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, VlWide<10>/*319:0*/ data_i, CData/*7:0*/ round_i, VlWide<10>/*319:0*/ &data_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_ascon_round_TOP__ascon_model_dpi_pkg\n"); );
    // Body
    svBitVecVal data_i__Vcvt[10];
    for (size_t data_i__Vidx = 0; data_i__Vidx < 1; ++data_i__Vidx) VL_SET_SVBV_W(320, data_i__Vcvt + 10 * data_i__Vidx, data_i);
    svBitVecVal round_i__Vcvt[1];
    for (size_t round_i__Vidx = 0; round_i__Vidx < 1; ++round_i__Vidx) VL_SET_SVBV_I(8, round_i__Vcvt + 1 * round_i__Vidx, round_i);
    svBitVecVal data_o__Vcvt[10];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_ascon_round(data_i__Vcvt, round_i__Vcvt, data_o__Vcvt);
    VL_SET_W_SVBV(320,data_o,data_o__Vcvt + 0);
}

extern "C" void c_dpi_aead_encrypt(const svOpenArrayHandle ct, const svOpenArrayHandle msg, int msg_len, const svOpenArrayHandle ad, unsigned int ad_len, const svOpenArrayHandle nonce, const svOpenArrayHandle key);

VL_INLINE_OPT void Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_aead_encrypt__Vdpioc2_TOP__ascon_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, VlUnpacked<CData/*7:0*/, 26> &ct, const VlUnpacked<CData/*7:0*/, 10> &msg, IData/*31:0*/ msg_len, const VlUnpacked<CData/*7:0*/, 8> &ad, IData/*31:0*/ ad_len, const VlUnpacked<CData/*7:0*/, 16> &nonce, const VlUnpacked<CData/*7:0*/, 16> &key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_aead_encrypt__Vdpioc2_TOP__ascon_model_dpi_pkg\n"); );
    // Body
    static const int ct__Vopenprops__ulims[2] = {0, 25};
    static const VerilatedVarProps ct__Vopenprops(VLVT_UINT8, VLVD_OUT|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, ct__Vopenprops__ulims);
    VerilatedDpiOpenVar ct__Vopenarray (&ct__Vopenprops, &ct);
    static const int msg__Vopenprops__ulims[2] = {0, 9};
    static const VerilatedVarProps msg__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, msg__Vopenprops__ulims);
    VerilatedDpiOpenVar msg__Vopenarray (&msg__Vopenprops, &msg);
    int msg_len__Vcvt;
    for (size_t msg_len__Vidx = 0; msg_len__Vidx < 1; ++msg_len__Vidx) msg_len__Vcvt = msg_len;
    static const int ad__Vopenprops__ulims[2] = {0, 7};
    static const VerilatedVarProps ad__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, ad__Vopenprops__ulims);
    VerilatedDpiOpenVar ad__Vopenarray (&ad__Vopenprops, &ad);
    unsigned int ad_len__Vcvt;
    for (size_t ad_len__Vidx = 0; ad_len__Vidx < 1; ++ad_len__Vidx) ad_len__Vcvt = ad_len;
    static const int nonce__Vopenprops__ulims[2] = {0, 15};
    static const VerilatedVarProps nonce__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, nonce__Vopenprops__ulims);
    VerilatedDpiOpenVar nonce__Vopenarray (&nonce__Vopenprops, &nonce);
    static const int key__Vopenprops__ulims[2] = {0, 15};
    static const VerilatedVarProps key__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, key__Vopenprops__ulims);
    VerilatedDpiOpenVar key__Vopenarray (&key__Vopenprops, &key);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aead_encrypt(&ct__Vopenarray, &msg__Vopenarray, msg_len__Vcvt, &ad__Vopenarray, ad_len__Vcvt, &nonce__Vopenarray, &key__Vopenarray);
}

extern "C" void c_dpi_aead_decrypt(const svOpenArrayHandle ct, int ct_len, const svOpenArrayHandle msg, const svOpenArrayHandle ad, unsigned int ad_len, const svOpenArrayHandle nonce, const svOpenArrayHandle key);

VL_INLINE_OPT void Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_aead_decrypt__Vdpioc2_TOP__ascon_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const VlUnpacked<CData/*7:0*/, 26> &ct, IData/*31:0*/ ct_len, VlUnpacked<CData/*7:0*/, 10> &msg, const VlUnpacked<CData/*7:0*/, 8> &ad, IData/*31:0*/ ad_len, const VlUnpacked<CData/*7:0*/, 16> &nonce, const VlUnpacked<CData/*7:0*/, 16> &key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vprim_ascon_duplex_tb_ascon_model_dpi_pkg____Vdpiimwrap_c_dpi_aead_decrypt__Vdpioc2_TOP__ascon_model_dpi_pkg\n"); );
    // Body
    static const int ct__Vopenprops__ulims[2] = {0, 25};
    static const VerilatedVarProps ct__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, ct__Vopenprops__ulims);
    VerilatedDpiOpenVar ct__Vopenarray (&ct__Vopenprops, &ct);
    int ct_len__Vcvt;
    for (size_t ct_len__Vidx = 0; ct_len__Vidx < 1; ++ct_len__Vidx) ct_len__Vcvt = ct_len;
    static const int msg__Vopenprops__ulims[2] = {0, 9};
    static const VerilatedVarProps msg__Vopenprops(VLVT_UINT8, VLVD_OUT|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, msg__Vopenprops__ulims);
    VerilatedDpiOpenVar msg__Vopenarray (&msg__Vopenprops, &msg);
    static const int ad__Vopenprops__ulims[2] = {0, 7};
    static const VerilatedVarProps ad__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, ad__Vopenprops__ulims);
    VerilatedDpiOpenVar ad__Vopenarray (&ad__Vopenprops, &ad);
    unsigned int ad_len__Vcvt;
    for (size_t ad_len__Vidx = 0; ad_len__Vidx < 1; ++ad_len__Vidx) ad_len__Vcvt = ad_len;
    static const int nonce__Vopenprops__ulims[2] = {0, 15};
    static const VerilatedVarProps nonce__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, nonce__Vopenprops__ulims);
    VerilatedDpiOpenVar nonce__Vopenarray (&nonce__Vopenprops, &nonce);
    static const int key__Vopenprops__ulims[2] = {0, 15};
    static const VerilatedVarProps key__Vopenprops(VLVT_UINT8, VLVD_IN|VLVF_DPI_CLAY, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, key__Vopenprops__ulims);
    VerilatedDpiOpenVar key__Vopenarray (&key__Vopenprops, &key);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aead_decrypt(&ct__Vopenarray, ct_len__Vcvt, &msg__Vopenarray, &ad__Vopenarray, ad_len__Vcvt, &nonce__Vopenarray, &key__Vopenarray);
}
