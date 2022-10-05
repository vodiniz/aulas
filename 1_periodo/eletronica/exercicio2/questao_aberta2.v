// Sistema de ativação e de controle de velocity de motor DC

module control (S, V, motor, velocity); // módulo de controle

    input [1:0] S;
    input [3:0] V;
    output reg [1:0] motor;
    output reg [7:0] velocity;

    always @ (*) begin

            if (S == 0) motor = 2'b00;
            else if (S == 1) motor = 2'b01;
            else if (S == 2) motor = 2'b10;
            else if (S == 3) motor = 2'b11;
            
            if (V == 0) velocity = 0;
            else if (V < 3) velocity = 8'b00001111;
            else if (V < 8) velocity = 8'b00110011;
            else velocity = 8'b11000011;
            
        end // always @ (*)
endmodule // control

module top (); // módulo de teste

    reg [1:0] a;
    reg [3:0] b;
    wire [1:0] x;
    wire [7:0] y;

    initial begin
        a = 2'b00;
        b = 4'b0000;
    end

    always begin
        begin
            #64 $finish; // $stop caso não compile no jdoodle
        end
    end

    always begin
        #1 {a, b} = {a, b} + 1;
    end

    initial begin
        $dumpfile ("teste.dump");
        $dumpvars (0, a, b, x, y);
        $dumpon;
        $display ("T \t S \t\t V \t\t\tMotor \t Velocidade");
        $monitor ("%0d \t %b \t %b \t\t %b \t\t%d", $time, a, b, x, y);
    end

    control integ (.S(a), .V(b), .motor(x), .velocity(y));
endmodule // top