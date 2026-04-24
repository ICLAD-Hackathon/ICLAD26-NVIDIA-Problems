## ================================================================
## NVDLA Open Source Project
## 
## Copyright(c) 2016 - 2017 NVIDIA Corporation.  Licensed under the
## NVDLA Open Hardware License; Check LICENSE which comes with     
## this distribution for more information. 
## ================================================================


##======================= 										  
## Project Name Setup, multiple projects supported			  	  
##======================= 										  
PROJECTS := nv_small 
  																  
##======================= 										  
##Linux Environment Setup 										  
##======================= 										  
  																  
USE_DESIGNWARE  := 0
DESIGNWARE_DIR  := 
CPP  := /usr/bin/cpp
GCC  := /usr/bin/gcc
CXX  := /usr/bin/g++
# VCS syscan / SystemC: Synopsys only certifies specific g++ versions per -sysc= (e.g. 2.3.3 → g++ 9.2/9.5 + binutils 2.33.1).
# Override if your site installs the toolchain elsewhere.
PERL := /usr/bin/perl
JAVA := /usr/bin/java
SYSTEMC := 
PYTHON := /usr/local/bin/python
VCS_HOME := 
NOVAS_HOME := 
VERDI_HOME := 
VERILATOR := /usr/local/bin/verilator
CLANG := /usr/bin/clang
