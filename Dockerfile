# Dockerfile for ICLAD designs with iverilog, verilator v4.218, and yosys
FROM python:3.12-bookworm

LABEL maintainer="ICLAD Development"
LABEL description="Development environment with iverilog, verilator v4.218, and yosys"

# Set environment variables
ENV DEBIAN_FRONTEND=noninteractive
ENV VERILATOR_VERSION=4.218

# Install FuseSoC and Python dependencies
RUN pip install --no-cache-dir fusesoc packaging

# Install system dependencies (including yosys build dependencies)
RUN apt-get update -y && apt-get install -y --no-install-recommends \
    build-essential \
    autoconf \
    automake \
    autotools-dev \
    git \
    make \
    gcc \
    g++ \
    flex \
    bison \
    libfl2 \
    libfl-dev \
    zlib1g \
    zlib1g-dev \
    libelf-dev \
    ccache \
    help2man \
    perl \
    perl-doc \
    libyaml-perl \
    libcapture-tiny-perl \
    libxml-simple-perl \
    default-jre-headless \
    gperf \
    numactl \
    libgoogle-perftools-dev \
    ca-certificates \
    curl \
    wget \
    vim \
    clang \
    lld \
    pkg-config \
    tcl-dev \
    libreadline-dev \
    libffi-dev \
    graphviz \
    xdot \
    p7zip-full \
    libboost-system-dev \
    libboost-filesystem-dev \
    libboost-python-dev \
    libboost-thread-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Build and install Icarus Verilog v13 from source
WORKDIR /tmp
RUN git clone https://github.com/steveicarus/iverilog.git && \
    cd iverilog && \
    git checkout v13_0 && \
    sh autoconf.sh && \
    ./configure --prefix=/usr/local && \
    make -j$(nproc) && \
    make install && \
    cd / && \
    rm -rf /tmp/iverilog

# Build and install Yosys from source
WORKDIR /tmp
RUN git clone https://github.com/YosysHQ/yosys.git && \
    cd yosys && \
    git checkout 22ef99218 && \
    git submodule update --init && \
    make config-clang && \
    make -j$(nproc) && \
    make install && \
    cd / && \
    rm -rf /tmp/yosys

# Build and install Verilator v4.218 from source
# Patch missing #include <memory> for newer compilers (GCC 12+)
WORKDIR /tmp
RUN git clone https://github.com/verilator/verilator.git && \
    cd verilator && \
    git checkout v${VERILATOR_VERSION} && \
    sed -i '34i #include <memory>' src/V3Const.cpp && \
    autoconf && \
    CXXFLAGS="-std=c++14" ./configure --prefix=/usr/local && \
    make -j$(nproc) && \
    make install && \
    cd / && \
    rm -rf /tmp/verilator

# Set Verilator environment
ENV VERILATOR_ROOT=/usr/local/share/verilator

# Install additional dependencies for OpenSTA
RUN apt-get update -y && apt-get install -y --no-install-recommends \
    cmake \
    swig \
    libeigen3-dev \
    libgtest-dev \
    googletest \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Build and install CUDD (required for OpenSTA power analysis)
WORKDIR /tmp
RUN git clone https://github.com/The-OpenROAD-Project/cudd.git && \
    cd cudd && \
    autoreconf -fi && \
    ./configure --prefix=/usr/local && \
    make -j$(nproc) && \
    make install && \
    cd / && \
    rm -rf /tmp/cudd

# Build and install OpenSTA from source
WORKDIR /tmp
RUN git clone https://github.com/The-OpenROAD-Project/OpenSTA.git && \
    cd OpenSTA && \
    mkdir build && \
    cd build && \
    cmake .. && \
    make -j$(nproc) && \
    make install && \
    cd / && \
    rm -rf /tmp/OpenSTA

# Install sv2v (SystemVerilog to Verilog converter)
# Required for OpenTitan synthesis with Yosys
WORKDIR /tmp
RUN wget -q https://github.com/zachjs/sv2v/releases/download/v0.0.12/sv2v-Linux.zip && \
    unzip sv2v-Linux.zip && \
    mv sv2v-Linux/sv2v /usr/local/bin/ && \
    chmod +x /usr/local/bin/sv2v && \
    rm -rf sv2v-Linux.zip sv2v-Linux

# Create working directory
WORKDIR /workspace

# Verify installations
RUN iverilog -V && verilator --version && yosys --version && fusesoc --version && sta -version && sv2v --version

# Default command
CMD ["/bin/bash"]
