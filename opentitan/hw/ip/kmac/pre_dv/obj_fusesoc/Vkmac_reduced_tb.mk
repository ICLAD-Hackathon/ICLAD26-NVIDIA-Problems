# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vkmac_reduced_tb.mk

default: Vkmac_reduced_tb

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = Vkmac_reduced_tb
# Module prefix (from --prefix)
VM_MODPREFIX = Vkmac_reduced_tb
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp/detail \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp/algorithm/mixin \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp/algorithm/detail/constants \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp/algorithm/detail \
	-Isrc/lowrisc_dv_digestpp_dpi_0.1/vendor/kerukuro_digestpp/algorithm \
	-Isrc/lowrisc_dv_verilator_simutil_verilator_0/cpp \
	-Isrc/lowrisc_prim_util_memload_0/rtl \
	-Isrc/lowrisc_prim_assert_0.1/rtl \
	-Isrc/lowrisc_prim_secded_0.1/rtl \
	-Isrc/lowrisc_prim_fifo_0/rtl \
	-std=c++17 -Wall -DVM_TRACE_FMT_FST -DTOPLEVEL_NAME=kmac_reduced_tb -g -O0 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-pthread -lutil -lelf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	digestpp_dpi \
	kmac_reduced_tb \
	verilated_toplevel \
	verilator_sim_ctrl \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	src/lowrisc_dv_digestpp_dpi_0.1 \
	src/lowrisc_dv_verilator_kmac_reduced_tb_0/cpp \
	src/lowrisc_dv_verilator_simutil_verilator_0/cpp \


### Default rules...
# Include list of all generated classes
include Vkmac_reduced_tb_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

digestpp_dpi.o: src/lowrisc_dv_digestpp_dpi_0.1/digestpp_dpi.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
kmac_reduced_tb.o: src/lowrisc_dv_verilator_kmac_reduced_tb_0/cpp/kmac_reduced_tb.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilated_toplevel.o: src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilated_toplevel.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator_sim_ctrl.o: src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilator_sim_ctrl.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vkmac_reduced_tb: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
