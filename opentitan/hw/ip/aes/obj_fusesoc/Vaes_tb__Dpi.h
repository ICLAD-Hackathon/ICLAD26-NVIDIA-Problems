// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VAES_TB__DPI_H_
#define VERILATED_VAES_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:9:40
    extern void c_dpi_aes_crypt_block(svBit impl_i, svBit op_i, const svBitVecVal* mode_i, const svBitVecVal* iv_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, const svBitVecVal* data_i, svBitVecVal* data_o);
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:22:40
    extern void c_dpi_aes_crypt_message(svBit impl_i, svBit op_i, const svBitVecVal* mode_i, const svBitVecVal* iv_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, int data_len_i, int aad_len_i, const svOpenArrayHandle data_i, const svOpenArrayHandle aad_i, const svBitVecVal* tag_i, const svOpenArrayHandle data_o, svBitVecVal* tag_o, int* crypto_res);
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:59:40
    extern void c_dpi_aes_key_expand(svBit op_i, const svBitVecVal* rcon_i, const svBitVecVal* round_i, const svBitVecVal* key_len_i, const svBitVecVal* key_i, svBitVecVal* key_o);
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:53:40
    extern void c_dpi_aes_mix_columns(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:47:40
    extern void c_dpi_aes_shift_rows(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);
    // DPI import at src/lowrisc_dv_aes_model_dpi_0/aes_model_dpi_pkg.sv:41:40
    extern void c_dpi_aes_sub_bytes(svBit op_i, const svBitVecVal* data_i, svBitVecVal* data_o);

#ifdef __cplusplus
}
#endif

#endif  // guard
