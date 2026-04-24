#include "Vtb_sha512_core.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_sha512_core* top = new Vtb_sha512_core;
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    top->final();
    delete top;
    return 0;
}
