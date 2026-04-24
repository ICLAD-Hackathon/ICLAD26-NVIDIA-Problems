#include "Vtb_async_fifo_verilator.h"
#include "verilated.h"

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vtb_async_fifo_verilator* top = new Vtb_async_fifo_verilator;
    while (!Verilated::gotFinish()) {
        top->eval();
    }
    top->final();
    delete top;
    return 0;
}
