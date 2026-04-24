// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkmac_reduced_tb.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb_digestpp_dpi_pkg.h"

extern "C" void c_dpi_sha3_256(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle digest);

VL_INLINE_OPT void Vkmac_reduced_tb_digestpp_dpi_pkg____Vdpiimwrap_c_dpi_sha3_256__Vdpioc2_TOP__digestpp_dpi_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const VlUnpacked<CData/*7:0*/, 16> &msg, QData/*63:0*/ msg_len, VlUnpacked<CData/*7:0*/, 32> &digest) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vkmac_reduced_tb_digestpp_dpi_pkg____Vdpiimwrap_c_dpi_sha3_256__Vdpioc2_TOP__digestpp_dpi_pkg\n"); );
    // Body
    static const int msg__Vopenprops__ulims[2] = {15, 0};
    static const VerilatedVarProps msg__Vopenprops(VLVT_UINT8, VLVD_IN, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, msg__Vopenprops__ulims);
    VerilatedDpiOpenVar msg__Vopenarray (&msg__Vopenprops, &msg);
    unsigned long long msg_len__Vcvt;
    for (size_t msg_len__Vidx = 0; msg_len__Vidx < 1; ++msg_len__Vidx) msg_len__Vcvt = msg_len;
    static const int digest__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps digest__Vopenprops(VLVT_UINT8, VLVD_OUT, VerilatedVarProps::Packed(), 7, 0, VerilatedVarProps::Unpacked(), 1, digest__Vopenprops__ulims);
    VerilatedDpiOpenVar digest__Vopenarray (&digest__Vopenprops, &digest);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    c_dpi_sha3_256(&msg__Vopenarray, msg_len__Vcvt, &digest__Vopenarray);
}
