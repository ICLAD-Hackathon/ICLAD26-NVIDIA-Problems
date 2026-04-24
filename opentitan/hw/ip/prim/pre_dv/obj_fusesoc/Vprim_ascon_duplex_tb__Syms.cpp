// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vprim_ascon_duplex_tb__Syms.h"
#include "Vprim_ascon_duplex_tb.h"
#include "Vprim_ascon_duplex_tb___024root.h"
#include "Vprim_ascon_duplex_tb_lc_ctrl_reg_pkg.h"
#include "Vprim_ascon_duplex_tb_ascon_model_dpi_pkg.h"
#include "Vprim_ascon_duplex_tb_prim_sha2_pkg.h"

// FUNCTIONS
Vprim_ascon_duplex_tb__Syms::~Vprim_ascon_duplex_tb__Syms()
{
}

Vprim_ascon_duplex_tb__Syms::Vprim_ascon_duplex_tb__Syms(VerilatedContext* contextp, const char* namep,Vprim_ascon_duplex_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP(namep)
    , TOP__ascon_model_dpi_pkg(Verilated::catName(namep, "ascon_model_dpi_pkg"))
    , TOP__lc_ctrl_reg_pkg(Verilated::catName(namep, "lc_ctrl_reg_pkg"))
    , TOP__prim_sha2_pkg(Verilated::catName(namep, "prim_sha2_pkg"))
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT__ascon_model_dpi_pkg = &TOP__ascon_model_dpi_pkg;
    TOP.__PVT__lc_ctrl_reg_pkg = &TOP__lc_ctrl_reg_pkg;
    TOP.__PVT__prim_sha2_pkg = &TOP__prim_sha2_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(this, true);
    TOP__ascon_model_dpi_pkg.__Vconfigure(this, true);
    TOP__lc_ctrl_reg_pkg.__Vconfigure(this, true);
    TOP__prim_sha2_pkg.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_prim_ascon_duplex_tb.configure(this, name(), "prim_ascon_duplex_tb", "prim_ascon_duplex_tb", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_prim_ascon_duplex_tb__C_DPI.configure(this, name(), "prim_ascon_duplex_tb.C_DPI", "C_DPI", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
    }
}
