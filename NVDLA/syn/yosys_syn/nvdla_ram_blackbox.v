// ================================================================
// NVDLA RAM Blackbox Declarations for Yosys Synthesis
// These modules are declared as blackboxes and will be replaced
// with actual memory IP during physical implementation.
// ================================================================

// =============================================================================
// nv_ram_rws_* : Simple single-port RAM (read/write sync)
// =============================================================================

(* blackbox *)
module nv_ram_rws_128x18 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    output [17:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [17:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_16x256 (
    input           clk,
    input  [3:0]    ra,
    input           re,
    output [255:0]  dout,
    input  [3:0]    wa,
    input           we,
    input  [255:0]  di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_16x272 (
    input           clk,
    input  [3:0]    ra,
    input           re,
    output [271:0]  dout,
    input  [3:0]    wa,
    input           we,
    input  [271:0]  di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_16x64 (
    input           clk,
    input  [3:0]    ra,
    input           re,
    output [63:0]   dout,
    input  [3:0]    wa,
    input           we,
    input  [63:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_256x3 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    output [2:0]    dout,
    input  [7:0]    wa,
    input           we,
    input  [2:0]    di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_256x64 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    output [63:0]   dout,
    input  [7:0]    wa,
    input           we,
    input  [63:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_256x7 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    output [6:0]    dout,
    input  [7:0]    wa,
    input           we,
    input  [6:0]    di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_32x16 (
    input           clk,
    input  [4:0]    ra,
    input           re,
    output [15:0]   dout,
    input  [4:0]    wa,
    input           we,
    input  [15:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rws_64x10 (
    input           clk,
    input  [5:0]    ra,
    input           re,
    output [9:0]    dout,
    input  [5:0]    wa,
    input           we,
    input  [9:0]    di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

// =============================================================================
// nv_ram_rwsp_* : RAM with output register enable (ore)
// =============================================================================

(* blackbox *)
module nv_ram_rwsp_128x11 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [10:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [10:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_128x6 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [5:0]    dout,
    input  [6:0]    wa,
    input           we,
    input  [5:0]    di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_160x16 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    input           ore,
    output [15:0]   dout,
    input  [7:0]    wa,
    input           we,
    input  [15:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_160x65 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    input           ore,
    output [64:0]   dout,
    input  [7:0]    wa,
    input           we,
    input  [64:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_20x289 (
    input           clk,
    input  [4:0]    ra,
    input           re,
    input           ore,
    output [288:0]  dout,
    input  [4:0]    wa,
    input           we,
    input  [288:0]  di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_245x514 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    input           ore,
    output [513:0]  dout,
    input  [7:0]    wa,
    input           we,
    input  [513:0]  di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_256x11 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    input           ore,
    output [10:0]   dout,
    input  [7:0]    wa,
    input           we,
    input  [10:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_32x32 (
    input           clk,
    input  [4:0]    ra,
    input           re,
    input           ore,
    output [31:0]   dout,
    input  [4:0]    wa,
    input           we,
    input  [31:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_61x65 (
    input           clk,
    input  [5:0]    ra,
    input           re,
    input           ore,
    output [64:0]   dout,
    input  [5:0]    wa,
    input           we,
    input  [64:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_80x14 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [13:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [13:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_80x16 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [15:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [15:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_80x256 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [255:0]  dout,
    input  [6:0]    wa,
    input           we,
    input  [255:0]  di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_80x65 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [64:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [64:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsp_8x65 (
    input           clk,
    input  [2:0]    ra,
    input           re,
    input           ore,
    output [64:0]   dout,
    input  [2:0]    wa,
    input           we,
    input  [64:0]   di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

// =============================================================================
// nv_ram_rwst_* : Simple RAM (same as rws)
// =============================================================================

(* blackbox *)
module nv_ram_rwst_256x8 (
    input           clk,
    input  [7:0]    ra,
    input           re,
    output [7:0]    dout,
    input  [7:0]    wa,
    input           we,
    input  [7:0]    di,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

// =============================================================================
// nv_ram_rwsthp_* : RAM with output register enable and bypass
// =============================================================================

(* blackbox *)
module nv_ram_rwsthp_19x4 (
    input           clk,
    input  [4:0]    ra,
    input           re,
    input           ore,
    output [3:0]    dout,
    input  [4:0]    wa,
    input           we,
    input  [3:0]    di,
    input           byp_sel,
    input  [3:0]    dbyp,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsthp_60x21 (
    input           clk,
    input  [5:0]    ra,
    input           re,
    input           ore,
    output [20:0]   dout,
    input  [5:0]    wa,
    input           we,
    input  [20:0]   di,
    input           byp_sel,
    input  [20:0]   dbyp,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsthp_80x15 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [14:0]   dout,
    input  [6:0]    wa,
    input           we,
    input  [14:0]   di,
    input           byp_sel,
    input  [14:0]   dbyp,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule

(* blackbox *)
module nv_ram_rwsthp_80x9 (
    input           clk,
    input  [6:0]    ra,
    input           re,
    input           ore,
    output [8:0]    dout,
    input  [6:0]    wa,
    input           we,
    input  [8:0]    di,
    input           byp_sel,
    input  [8:0]    dbyp,
    input  [31:0]   pwrbus_ram_pd
);
parameter FORCE_CONTENTION_ASSERTION_RESET_ACTIVE=1'b0;
endmodule
