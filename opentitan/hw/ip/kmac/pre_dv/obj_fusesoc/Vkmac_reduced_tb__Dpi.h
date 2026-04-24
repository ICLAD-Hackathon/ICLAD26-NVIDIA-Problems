// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VKMAC_REDUCED_TB__DPI_H_
#define VERILATED_VKMAC_REDUCED_TB__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:52:40
    extern void c_dpi_cshake128(const svOpenArrayHandle msg, const char* function_name, const char* customization_str, unsigned long long msg_len, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:61:40
    extern void c_dpi_cshake256(const svOpenArrayHandle msg, const char* function_name, const char* customization_str, unsigned long long msg_len, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:70:40
    extern void c_dpi_kmac128(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle key, unsigned long long key_len, const char* customization_str, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:80:40
    extern void c_dpi_kmac128_xof(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle key, unsigned long long key_len, const char* customization_str, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:90:40
    extern void c_dpi_kmac256(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle key, unsigned long long key_len, const char* customization_str, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:100:40
    extern void c_dpi_kmac256_xof(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle key, unsigned long long key_len, const char* customization_str, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:14:40
    extern void c_dpi_sha3_224(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:20:40
    extern void c_dpi_sha3_256(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:26:40
    extern void c_dpi_sha3_384(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:32:40
    extern void c_dpi_sha3_512(const svOpenArrayHandle msg, unsigned long long msg_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:38:40
    extern void c_dpi_shake128(const svOpenArrayHandle msg, unsigned long long msg_len, unsigned long long output_len, const svOpenArrayHandle digest);
    // DPI import at src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi_pkg.sv:45:40
    extern void c_dpi_shake256(const svOpenArrayHandle msg, unsigned long long msg_len, unsigned long long output_len, const svOpenArrayHandle digest);

#ifdef __cplusplus
}
#endif

#endif  // guard
