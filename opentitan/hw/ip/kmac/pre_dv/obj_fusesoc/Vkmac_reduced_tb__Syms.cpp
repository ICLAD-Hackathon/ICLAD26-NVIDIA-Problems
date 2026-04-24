// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vkmac_reduced_tb__Syms.h"
#include "Vkmac_reduced_tb.h"
#include "Vkmac_reduced_tb___024root.h"
#include "Vkmac_reduced_tb_digestpp_dpi_pkg.h"
#include "Vkmac_reduced_tb_lc_ctrl_reg_pkg.h"
#include "Vkmac_reduced_tb_csrng_reg_pkg.h"
#include "Vkmac_reduced_tb_edn_reg_pkg.h"
#include "Vkmac_reduced_tb_keymgr_reg_pkg.h"
#include "Vkmac_reduced_tb_kmac_reg_pkg.h"
#include "Vkmac_reduced_tb_prim_sha2_pkg.h"
#include "Vkmac_reduced_tb_sha3_pkg.h"

// FUNCTIONS
Vkmac_reduced_tb__Syms::~Vkmac_reduced_tb__Syms()
{
}

Vkmac_reduced_tb__Syms::Vkmac_reduced_tb__Syms(VerilatedContext* contextp, const char* namep,Vkmac_reduced_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__csrng_reg_pkg(Verilated::catName(namep, "csrng_reg_pkg"))
    , TOP__digestpp_dpi_pkg(Verilated::catName(namep, "digestpp_dpi_pkg"))
    , TOP__edn_reg_pkg(Verilated::catName(namep, "edn_reg_pkg"))
    , TOP__keymgr_reg_pkg(Verilated::catName(namep, "keymgr_reg_pkg"))
    , TOP__kmac_reg_pkg(Verilated::catName(namep, "kmac_reg_pkg"))
    , TOP__lc_ctrl_reg_pkg(Verilated::catName(namep, "lc_ctrl_reg_pkg"))
    , TOP__prim_sha2_pkg(Verilated::catName(namep, "prim_sha2_pkg"))
    , TOP__sha3_pkg(Verilated::catName(namep, "sha3_pkg"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__csrng_reg_pkg = &TOP__csrng_reg_pkg;
    TOP.__PVT__digestpp_dpi_pkg = &TOP__digestpp_dpi_pkg;
    TOP.__PVT__edn_reg_pkg = &TOP__edn_reg_pkg;
    TOP.__PVT__keymgr_reg_pkg = &TOP__keymgr_reg_pkg;
    TOP.__PVT__kmac_reg_pkg = &TOP__kmac_reg_pkg;
    TOP.__PVT__lc_ctrl_reg_pkg = &TOP__lc_ctrl_reg_pkg;
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    TOP.__PVT__sha3_pkg = &TOP__sha3_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__csrng_reg_pkg.__Vconfigure(this, true);
    TOP__digestpp_dpi_pkg.__Vconfigure(this, true);
    TOP__edn_reg_pkg.__Vconfigure(this, true);
    TOP__keymgr_reg_pkg.__Vconfigure(this, true);
    TOP__kmac_reg_pkg.__Vconfigure(this, true);
    TOP__lc_ctrl_reg_pkg.__Vconfigure(this, true);
    TOP__prim_sha2_pkg.__Vconfigure(this, true);
    TOP__sha3_pkg.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_kmac_reduced_tb.configure(this, name(), "kmac_reduced_tb", "kmac_reduced_tb", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
