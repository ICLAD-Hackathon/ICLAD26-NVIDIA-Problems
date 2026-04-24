// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vaes_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vaes_tb__Syms.h"
#include "Vaes_tb_aes_model_dpi_pkg.h"

extern "C" void c_dpi_aes_crypt_block(svBit impl_i, svBit op_i, const svBitVecVal* mode_i, const svBitVecVal* iv_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, const svBitVecVal* data_i, svBitVecVal* data_o);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_block_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, VlWide<4>/*127:0*/ data_i, VlWide<4>/*127:0*/ &data_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_block_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit impl_i__Vcvt;
    for (size_t impl_i__Vidx = 0; impl_i__Vidx < 1; ++impl_i__Vidx) impl_i__Vcvt = impl_i;
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal mode_i__Vcvt[1];
    for (size_t mode_i__Vidx = 0; mode_i__Vidx < 1; ++mode_i__Vidx) VL_SET_SVBV_I(6, mode_i__Vcvt + 1 * mode_i__Vidx, mode_i);
    svBitVecVal iv_i__Vcvt[4];
    for (size_t iv_i__Vidx = 0; iv_i__Vidx < 1; ++iv_i__Vidx) VL_SET_SVBV_W(128, iv_i__Vcvt + 4 * iv_i__Vidx, iv_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    svBitVecVal data_i__Vcvt[4];
    for (size_t data_i__Vidx = 0; data_i__Vidx < 1; ++data_i__Vidx) VL_SET_SVBV_W(128, data_i__Vcvt + 4 * data_i__Vidx, data_i);
    svBitVecVal data_o__Vcvt[4];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_crypt_block(impl_i__Vcvt, op_i__Vcvt, mode_i__Vcvt, iv_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, data_i__Vcvt, data_o__Vcvt);
    VL_SET_W_SVBV(128,data_o,data_o__Vcvt + 0);
}

extern "C" void c_dpi_aes_crypt_message(svBit impl_i, svBit op_i, const svBitVecVal* mode_i, const svBitVecVal* iv_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, int data_len_i, int aad_len_i, const svOpenArrayHandle data_i, const svOpenArrayHandle aad_i, const svBitVecVal* tag_i, const svOpenArrayHandle data_o, svBitVecVal* tag_o, int* crypto_res);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc5_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, IData/*31:0*/ data_len_i, IData/*31:0*/ aad_len_i, const VlUnpacked<CData/*7:0*/, 60> &data_i, const VlUnpacked<CData/*7:0*/, 20> &aad_i, VlWide<4>/*127:0*/ tag_i, VlUnpacked<CData/*7:0*/, 60> &data_o, VlWide<4>/*127:0*/ &tag_o, IData/*31:0*/ &crypto_res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc5_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit impl_i__Vcvt;
    for (size_t impl_i__Vidx = 0; impl_i__Vidx < 1; ++impl_i__Vidx) impl_i__Vcvt = impl_i;
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal mode_i__Vcvt[1];
    for (size_t mode_i__Vidx = 0; mode_i__Vidx < 1; ++mode_i__Vidx) VL_SET_SVBV_I(6, mode_i__Vcvt + 1 * mode_i__Vidx, mode_i);
    svBitVecVal iv_i__Vcvt[4];
    for (size_t iv_i__Vidx = 0; iv_i__Vidx < 1; ++iv_i__Vidx) VL_SET_SVBV_W(128, iv_i__Vcvt + 4 * iv_i__Vidx, iv_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    int data_len_i__Vcvt;
    for (size_t data_len_i__Vidx = 0; data_len_i__Vidx < 1; ++data_len_i__Vidx) data_len_i__Vcvt = data_len_i;
    int aad_len_i__Vcvt;
    for (size_t aad_len_i__Vidx = 0; aad_len_i__Vidx < 1; ++aad_len_i__Vidx) aad_len_i__Vcvt = aad_len_i;
    static const int data_i__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_i__Vopenprops__ulims);
    VerilatedDpiOpenVar data_i__Vopenarray (&data_i__Vopenprops, &data_i);
    static const int aad_i__Vopenprops__ulims[2] = {0, 19};
    static const VerilatedVarProps aad_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, aad_i__Vopenprops__ulims);
    VerilatedDpiOpenVar aad_i__Vopenarray (&aad_i__Vopenprops, &aad_i);
    svBitVecVal tag_i__Vcvt[4];
    for (size_t tag_i__Vidx = 0; tag_i__Vidx < 1; ++tag_i__Vidx) VL_SET_SVBV_W(128, tag_i__Vcvt + 4 * tag_i__Vidx, tag_i);
    static const int data_o__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_o__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_o__Vopenprops__ulims);
    VerilatedDpiOpenVar data_o__Vopenarray (&data_o__Vopenprops, &data_o);
    svBitVecVal tag_o__Vcvt[4];
    int crypto_res__Vcvt;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_crypt_message(impl_i__Vcvt, op_i__Vcvt, mode_i__Vcvt, iv_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, data_len_i__Vcvt, aad_len_i__Vcvt, &data_i__Vopenarray, &aad_i__Vopenarray, tag_i__Vcvt, &data_o__Vopenarray, tag_o__Vcvt, &crypto_res__Vcvt);
    VL_SET_W_SVBV(128,tag_o,tag_o__Vcvt + 0);
crypto_res = crypto_res__Vcvt;
}

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc4_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, IData/*31:0*/ data_len_i, IData/*31:0*/ aad_len_i, const CData/*0:0*/ &data_i, const VlUnpacked<CData/*7:0*/, 20> &aad_i, VlWide<4>/*127:0*/ tag_i, VlUnpacked<CData/*7:0*/, 60> &data_o, VlWide<4>/*127:0*/ &tag_o, IData/*31:0*/ &crypto_res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc4_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit impl_i__Vcvt;
    for (size_t impl_i__Vidx = 0; impl_i__Vidx < 1; ++impl_i__Vidx) impl_i__Vcvt = impl_i;
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal mode_i__Vcvt[1];
    for (size_t mode_i__Vidx = 0; mode_i__Vidx < 1; ++mode_i__Vidx) VL_SET_SVBV_I(6, mode_i__Vcvt + 1 * mode_i__Vidx, mode_i);
    svBitVecVal iv_i__Vcvt[4];
    for (size_t iv_i__Vidx = 0; iv_i__Vidx < 1; ++iv_i__Vidx) VL_SET_SVBV_W(128, iv_i__Vcvt + 4 * iv_i__Vidx, iv_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    int data_len_i__Vcvt;
    for (size_t data_len_i__Vidx = 0; data_len_i__Vidx < 1; ++data_len_i__Vidx) data_len_i__Vcvt = data_len_i;
    int aad_len_i__Vcvt;
    for (size_t aad_len_i__Vidx = 0; aad_len_i__Vidx < 1; ++aad_len_i__Vidx) aad_len_i__Vcvt = aad_len_i;
    static const VerilatedVarProps data_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar data_i__Vopenarray (&data_i__Vopenprops, &data_i);
    static const int aad_i__Vopenprops__ulims[2] = {0, 19};
    static const VerilatedVarProps aad_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, aad_i__Vopenprops__ulims);
    VerilatedDpiOpenVar aad_i__Vopenarray (&aad_i__Vopenprops, &aad_i);
    svBitVecVal tag_i__Vcvt[4];
    for (size_t tag_i__Vidx = 0; tag_i__Vidx < 1; ++tag_i__Vidx) VL_SET_SVBV_W(128, tag_i__Vcvt + 4 * tag_i__Vidx, tag_i);
    static const int data_o__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_o__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_o__Vopenprops__ulims);
    VerilatedDpiOpenVar data_o__Vopenarray (&data_o__Vopenprops, &data_o);
    svBitVecVal tag_o__Vcvt[4];
    int crypto_res__Vcvt;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_crypt_message(impl_i__Vcvt, op_i__Vcvt, mode_i__Vcvt, iv_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, data_len_i__Vcvt, aad_len_i__Vcvt, &data_i__Vopenarray, &aad_i__Vopenarray, tag_i__Vcvt, &data_o__Vopenarray, tag_o__Vcvt, &crypto_res__Vcvt);
    VL_SET_W_SVBV(128,tag_o,tag_o__Vcvt + 0);
crypto_res = crypto_res__Vcvt;
}

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc3_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, IData/*31:0*/ data_len_i, IData/*31:0*/ aad_len_i, const VlUnpacked<CData/*7:0*/, 60> &data_i, const CData/*0:0*/ &aad_i, VlWide<4>/*127:0*/ tag_i, VlUnpacked<CData/*7:0*/, 60> &data_o, VlWide<4>/*127:0*/ &tag_o, IData/*31:0*/ &crypto_res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc3_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit impl_i__Vcvt;
    for (size_t impl_i__Vidx = 0; impl_i__Vidx < 1; ++impl_i__Vidx) impl_i__Vcvt = impl_i;
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal mode_i__Vcvt[1];
    for (size_t mode_i__Vidx = 0; mode_i__Vidx < 1; ++mode_i__Vidx) VL_SET_SVBV_I(6, mode_i__Vcvt + 1 * mode_i__Vidx, mode_i);
    svBitVecVal iv_i__Vcvt[4];
    for (size_t iv_i__Vidx = 0; iv_i__Vidx < 1; ++iv_i__Vidx) VL_SET_SVBV_W(128, iv_i__Vcvt + 4 * iv_i__Vidx, iv_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    int data_len_i__Vcvt;
    for (size_t data_len_i__Vidx = 0; data_len_i__Vidx < 1; ++data_len_i__Vidx) data_len_i__Vcvt = data_len_i;
    int aad_len_i__Vcvt;
    for (size_t aad_len_i__Vidx = 0; aad_len_i__Vidx < 1; ++aad_len_i__Vidx) aad_len_i__Vcvt = aad_len_i;
    static const int data_i__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_i__Vopenprops__ulims);
    VerilatedDpiOpenVar data_i__Vopenarray (&data_i__Vopenprops, &data_i);
    static const VerilatedVarProps aad_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar aad_i__Vopenarray (&aad_i__Vopenprops, &aad_i);
    svBitVecVal tag_i__Vcvt[4];
    for (size_t tag_i__Vidx = 0; tag_i__Vidx < 1; ++tag_i__Vidx) VL_SET_SVBV_W(128, tag_i__Vcvt + 4 * tag_i__Vidx, tag_i);
    static const int data_o__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_o__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_o__Vopenprops__ulims);
    VerilatedDpiOpenVar data_o__Vopenarray (&data_o__Vopenprops, &data_o);
    svBitVecVal tag_o__Vcvt[4];
    int crypto_res__Vcvt;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_crypt_message(impl_i__Vcvt, op_i__Vcvt, mode_i__Vcvt, iv_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, data_len_i__Vcvt, aad_len_i__Vcvt, &data_i__Vopenarray, &aad_i__Vopenarray, tag_i__Vcvt, &data_o__Vopenarray, tag_o__Vcvt, &crypto_res__Vcvt);
    VL_SET_W_SVBV(128,tag_o,tag_o__Vcvt + 0);
crypto_res = crypto_res__Vcvt;
}

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc2_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ impl_i, CData/*0:0*/ op_i, CData/*5:0*/ mode_i, VlWide<4>/*127:0*/ iv_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, IData/*31:0*/ data_len_i, IData/*31:0*/ aad_len_i, const CData/*0:0*/ &data_i, const CData/*0:0*/ &aad_i, VlWide<4>/*127:0*/ tag_i, VlUnpacked<CData/*7:0*/, 60> &data_o, VlWide<4>/*127:0*/ &tag_o, IData/*31:0*/ &crypto_res) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_crypt_message__Vdpioc2_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit impl_i__Vcvt;
    for (size_t impl_i__Vidx = 0; impl_i__Vidx < 1; ++impl_i__Vidx) impl_i__Vcvt = impl_i;
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal mode_i__Vcvt[1];
    for (size_t mode_i__Vidx = 0; mode_i__Vidx < 1; ++mode_i__Vidx) VL_SET_SVBV_I(6, mode_i__Vcvt + 1 * mode_i__Vidx, mode_i);
    svBitVecVal iv_i__Vcvt[4];
    for (size_t iv_i__Vidx = 0; iv_i__Vidx < 1; ++iv_i__Vidx) VL_SET_SVBV_W(128, iv_i__Vcvt + 4 * iv_i__Vidx, iv_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    int data_len_i__Vcvt;
    for (size_t data_len_i__Vidx = 0; data_len_i__Vidx < 1; ++data_len_i__Vidx) data_len_i__Vcvt = data_len_i;
    int aad_len_i__Vcvt;
    for (size_t aad_len_i__Vidx = 0; aad_len_i__Vidx < 1; ++aad_len_i__Vidx) aad_len_i__Vcvt = aad_len_i;
    static const VerilatedVarProps data_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar data_i__Vopenarray (&data_i__Vopenprops, &data_i);
    static const VerilatedVarProps aad_i__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 0, 0);
    VerilatedDpiOpenVar aad_i__Vopenarray (&aad_i__Vopenprops, &aad_i);
    svBitVecVal tag_i__Vcvt[4];
    for (size_t tag_i__Vidx = 0; tag_i__Vidx < 1; ++tag_i__Vidx) VL_SET_SVBV_W(128, tag_i__Vcvt + 4 * tag_i__Vidx, tag_i);
    static const int data_o__Vopenprops__ulims[2] = {0, 59};
    static const VerilatedVarProps data_o__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, data_o__Vopenprops__ulims);
    VerilatedDpiOpenVar data_o__Vopenarray (&data_o__Vopenprops, &data_o);
    svBitVecVal tag_o__Vcvt[4];
    int crypto_res__Vcvt;
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_crypt_message(impl_i__Vcvt, op_i__Vcvt, mode_i__Vcvt, iv_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, data_len_i__Vcvt, aad_len_i__Vcvt, &data_i__Vopenarray, &aad_i__Vopenarray, tag_i__Vcvt, &data_o__Vopenarray, tag_o__Vcvt, &crypto_res__Vcvt);
    VL_SET_W_SVBV(128,tag_o,tag_o__Vcvt + 0);
crypto_res = crypto_res__Vcvt;
}

extern "C" void c_dpi_aes_sub_bytes(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_sub_bytes_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ op_i, VlWide<4>/*127:0*/ data_i, VlWide<4>/*127:0*/ &data_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_sub_bytes_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal data_i__Vcvt[4];
    for (size_t data_i__Vidx = 0; data_i__Vidx < 1; ++data_i__Vidx) VL_SET_SVBV_W(128, data_i__Vcvt + 4 * data_i__Vidx, data_i);
    svBitVecVal data_o__Vcvt[4];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_sub_bytes(op_i__Vcvt, data_i__Vcvt, data_o__Vcvt);
    VL_SET_W_SVBV(128,data_o,data_o__Vcvt + 0);
}

extern "C" void c_dpi_aes_shift_rows(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_shift_rows_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ op_i, VlWide<4>/*127:0*/ data_i, VlWide<4>/*127:0*/ &data_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_shift_rows_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal data_i__Vcvt[4];
    for (size_t data_i__Vidx = 0; data_i__Vidx < 1; ++data_i__Vidx) VL_SET_SVBV_W(128, data_i__Vcvt + 4 * data_i__Vidx, data_i);
    svBitVecVal data_o__Vcvt[4];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_shift_rows(op_i__Vcvt, data_i__Vcvt, data_o__Vcvt);
    VL_SET_W_SVBV(128,data_o,data_o__Vcvt + 0);
}

extern "C" void c_dpi_aes_mix_columns(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_mix_columns_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ op_i, VlWide<4>/*127:0*/ data_i, VlWide<4>/*127:0*/ &data_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_mix_columns_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal data_i__Vcvt[4];
    for (size_t data_i__Vidx = 0; data_i__Vidx < 1; ++data_i__Vidx) VL_SET_SVBV_W(128, data_i__Vcvt + 4 * data_i__Vidx, data_i);
    svBitVecVal data_o__Vcvt[4];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_mix_columns(op_i__Vcvt, data_i__Vcvt, data_o__Vcvt);
    VL_SET_W_SVBV(128,data_o,data_o__Vcvt + 0);
}

extern "C" void c_dpi_aes_key_expand(svBit op_i, const svBitVecVal* rcon_i, const svBitVecVal* round_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, svBitVecVal* key_o);

VL_INLINE_OPT void Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_key_expand_TOP__aes_model_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, CData/*0:0*/ op_i, CData/*7:0*/ rcon_i, CData/*3:0*/ round_i, CData/*2:0*/ key_len_i, VlWide<8>/*255:0*/ key_i, VlWide<8>/*255:0*/ &key_o) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vaes_tb_aes_model_dpi_pkg____Vdpiimwrap_c_dpi_aes_key_expand_TOP__aes_model_dpi_pkg\n"); );
    // Body
    svBit op_i__Vcvt;
    for (size_t op_i__Vidx = 0; op_i__Vidx < 1; ++op_i__Vidx) op_i__Vcvt = op_i;
    svBitVecVal rcon_i__Vcvt[1];
    for (size_t rcon_i__Vidx = 0; rcon_i__Vidx < 1; ++rcon_i__Vidx) VL_SET_SVBV_I(8, rcon_i__Vcvt + 1 * rcon_i__Vidx, rcon_i);
    svBitVecVal round_i__Vcvt[1];
    for (size_t round_i__Vidx = 0; round_i__Vidx < 1; ++round_i__Vidx) VL_SET_SVBV_I(4, round_i__Vcvt + 1 * round_i__Vidx, round_i);
    svBitVecVal key_len_i__Vcvt[1];
    for (size_t key_len_i__Vidx = 0; key_len_i__Vidx < 1; ++key_len_i__Vidx) VL_SET_SVBV_I(3, key_len_i__Vcvt + 1 * key_len_i__Vidx, key_len_i);
    svBitVecVal key_i__Vcvt[8];
    for (size_t key_i__Vidx = 0; key_i__Vidx < 1; ++key_i__Vidx) VL_SET_SVBV_W(256, key_i__Vcvt + 8 * key_i__Vidx, key_i);
    svBitVecVal key_o__Vcvt[8];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_aes_key_expand(op_i__Vcvt, rcon_i__Vcvt, round_i__Vcvt, key_len_i__Vcvt, key_i__Vcvt, key_o__Vcvt);
    VL_SET_W_SVBV(256,key_o,key_o__Vcvt + 0);
}
