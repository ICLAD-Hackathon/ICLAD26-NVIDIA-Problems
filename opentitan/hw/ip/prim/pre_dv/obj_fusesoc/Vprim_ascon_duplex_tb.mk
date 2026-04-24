# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f Vprim_ascon_duplex_tb.mk

default: Vprim_ascon_duplex_tb

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
VM_PREFIX = Vprim_ascon_duplex_tb
# Module prefix (from --prefix)
VM_MODPREFIX = Vprim_ascon_duplex_tb
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-Isrc/lowrisc_dv_verilator_simutil_verilator_0/cpp \
	-Isrc/lowrisc_prim_assert_0.1/rtl \
	-Isrc/lowrisc_prim_secded_0.1/rtl \
	-Isrc/lowrisc_prim_fifo_0/rtl \
	-Isrc/lowrisc_dv_ascon_model_dpi_0/vendor/ascon_ascon-c/ascon128 \
	-Isrc/lowrisc_dv_ascon_model_dpi_0 \
	-std=c++17 -Wall -DVM_TRACE_FMT_FST -DTOPLEVEL_NAME=prim_ascon_duplex_tb -g -O0 \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lz \
	-pthread -lutil -lelf \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	ascon_model_dpi \
	aead \
	printstate \
	prim_ascon_duplex_tb \
	verilated_toplevel \
	verilator_sim_ctrl \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	src/lowrisc_dv_ascon_model_dpi_0 \
	src/lowrisc_dv_ascon_model_dpi_0/vendor/ascon_ascon-c/ascon128 \
	src/lowrisc_dv_verilator_prim_ascon_duplex_tb_0/cpp \
	src/lowrisc_dv_verilator_simutil_verilator_0/cpp \


### Default rules...
# Include list of all generated classes
include Vprim_ascon_duplex_tb_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

ascon_model_dpi.o: src/lowrisc_dv_ascon_model_dpi_0/ascon_model_dpi.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
aead.o: src/lowrisc_dv_ascon_model_dpi_0/vendor/ascon_ascon-c/ascon128/aead.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
printstate.o: src/lowrisc_dv_ascon_model_dpi_0/vendor/ascon_ascon-c/ascon128/printstate.c
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
prim_ascon_duplex_tb.o: src/lowrisc_dv_verilator_prim_ascon_duplex_tb_0/cpp/prim_ascon_duplex_tb.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilated_toplevel.o: src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilated_toplevel.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
verilator_sim_ctrl.o: src/lowrisc_dv_verilator_simutil_verilator_0/cpp/verilator_sim_ctrl.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
Vprim_ascon_duplex_tb: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
