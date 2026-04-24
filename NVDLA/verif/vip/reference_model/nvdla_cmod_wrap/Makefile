override DEPTH = ../../../..
-include ${DEPTH}/tree.make
-include ${DEPTH}/tools/make/common.make
override SYSTEMC_INC_DIR   = $(VCS_HOME)/include/systemc233
override SYSTEMC_LIB_DIR   = $(VCS_HOME)/linux64/lib
include ../../../../cmod/Makefile
# cmod/Makefile builds -l from *.so names; link the bundled .a explicitly for VCS SystemC.
SYSTEMC_VCS_STATIC ?= $(SYSTEMC_LIB_DIR)/libsystemc233-gcc9-64.a
override LDFLAGS := -shared -L$(SYSTEMC_LIB_DIR) -L$(BUILD_DIR) $(SYSTEMC_VCS_STATIC)

UVMCONNECT_HOME  := ${TOT}/third_party_tools/uvmc-2.3.0


INTER_MON = ${DEPTH}/verif/vip/reference_model/rm_nvdla_internal_monitor/NvdlaCoreInternalMonitor.cpp

DEPS += $(BUILD_DIR)/../rm_nvdla_internal_monitor/NvdlaCoreInternalMonitor.d

INC_DIRS_REF := ${VCS_HOME}/include \
                ${UVMCONNECT_HOME}/src/connect/sc \
			    ${DEPTH}/cmod/nvdla_payload/ \
			    ${DEPTH}/verif/vip/reference_model/nvdla_scsv/sc \
			    $(SRC_DIR)/../verif/vip/reference_model/rm_nvdla_internal_monitor 

INC_FLAGS_REF := $(addprefix -I,$(INC_DIRS_REF))
CPPFLAGS += $(INC_FLAGS_REF)

CPPFLAGS += -DNVDLA_REFERENCE_MODEL_ENABLE

SRCS_REF := $(subst ../../../../cmod/,,$(SRCS))
OBJS_REF := $(SRCS_REF:%cpp=$(BUILD_DIR)/%ref.o) \
            $(BUILD_DIR)/../rm_nvdla_internal_monitor/NvdlaCoreInternalMonitor.o

all: $(BUILD_DIR)/$(TARGET) install 
	@echo "*** Reference model build done ***"

$(BUILD_DIR)/$(TARGET): $(OBJS_REF)
	$(CXX) $(OBJS_REF) -o $(BUILD_DIR)/$(TARGET) $(LDFLAGS) -L$(BUILD_DIR)


$(BUILD_DIR)/%.ref.o: ../../../../cmod/%.cpp
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR)/../rm_nvdla_internal_monitor/NvdlaCoreInternalMonitor.o: $(INTER_MON)
	$(MKDIR_P) $(dir $@)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

.PHONY: default
.PHONY: $(SRCS:%=$(BUILD_DIR)/%.o)
