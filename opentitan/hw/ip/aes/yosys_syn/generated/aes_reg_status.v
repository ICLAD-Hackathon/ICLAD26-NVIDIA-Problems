module aes_reg_status (
	clk_i,
	rst_ni,
	we_i,
	use_i,
	clear_i,
	arm_i,
	new_o,
	new_pulse_o,
	clean_o
);
	parameter signed [31:0] Width = 1;
	input wire clk_i;
	input wire rst_ni;
	input wire [Width - 1:0] we_i;
	input wire use_i;
	input wire clear_i;
	input wire arm_i;
	output wire new_o;
	output wire new_pulse_o;
	output wire clean_o;
	wire [Width - 1:0] we_d;
	reg [Width - 1:0] we_q;
	wire armed_d;
	reg armed_q;
	wire all_written;
	wire none_written;
	wire new_d;
	reg new_q;
	wire clean_d;
	reg clean_q;
	assign we_d = (clear_i || use_i ? {Width {1'sb0}} : (armed_q && |we_i ? we_i : we_q | we_i));
	assign armed_d = (clear_i || use_i ? 1'b0 : (armed_q && |we_i ? 1'b0 : armed_q | arm_i));
	always @(posedge clk_i or negedge rst_ni) begin : reg_ops
		if (!rst_ni) begin
			we_q <= 1'sb0;
			armed_q <= 1'b0;
		end
		else begin
			we_q <= we_d;
			armed_q <= armed_d;
		end
	end
	assign all_written = &we_d;
	assign none_written = ~|we_d;
	assign new_d = (clear_i || use_i ? 1'b0 : all_written);
	assign clean_d = (clear_i ? 1'b0 : (all_written ? 1'b1 : (none_written ? clean_q : 1'b0)));
	always @(posedge clk_i or negedge rst_ni) begin : reg_status
		if (!rst_ni) begin
			new_q <= 1'b0;
			clean_q <= 1'b0;
		end
		else begin
			new_q <= new_d;
			clean_q <= clean_d;
		end
	end
	assign new_o = new_q;
	assign new_pulse_o = new_d & ~new_q;
	assign clean_o = clean_q;
endmodule
