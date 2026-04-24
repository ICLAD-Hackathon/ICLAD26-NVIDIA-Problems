# Loaded after VNV_nvdla.mk (and its include of verilated.mk).  Verilator's
# verilated.mk may add -fcf-protection=none; llvm-4 clang rejects it.
override CPPFLAGS := $(filter-out -fcf-protection=none,$(CPPFLAGS))
override CXXFLAGS := $(filter-out -fcf-protection=none,$(CXXFLAGS))

# Verilator 4.x uses C++14; Verilator 5.x needs C++17.
override CXXFLAGS += -std=c++14 -Wno-unknown-warning-option
override CPPFLAGS += -std=c++14 -Wno-unknown-warning-option
