#include "Vtb_sha512.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_sha512* top = new Vtb_sha512;
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    top->final();
    delete top;
    return 0;
}
