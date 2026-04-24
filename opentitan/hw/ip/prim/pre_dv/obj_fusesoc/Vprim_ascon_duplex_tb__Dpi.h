// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VPRIM_ASCON_DUPLEX_TB__DPI_H_
#define VERILATED_VPRIM_ASCON_DUPLEX_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at src/lowrisc_dv_ascon_model_dpi_0/ascon_model_dpi_pkg.sv:25:40
    extern void c_dpi_aead_decrypt(const svOpenArrayHandle ct, int ct_len, const svOpenArrayHandle msg, const svOpenArrayHandle ad, unsigned int ad_len, const svOpenArrayHandle nonce, const svOpenArrayHandle key);
    // DPI import at src/lowrisc_dv_ascon_model_dpi_0/ascon_model_dpi_pkg.sv:15:40
    extern void c_dpi_aead_encrypt(const svOpenArrayHandle ct, const svOpenArrayHandle msg, int msg_len, const svOpenArrayHandle ad, unsigned int ad_len, const svOpenArrayHandle nonce, const svOpenArrayHandle key);
    // DPI import at src/lowrisc_dv_ascon_model_dpi_0/ascon_model_dpi_pkg.sv:8:40
    extern void c_dpi_ascon_round(const svBitVecVal* data_i, const svBitVecVal* round_i, svBitVecVal* data_o);

#ifdef __cplusplus
}
#endif

#endif  // guard
