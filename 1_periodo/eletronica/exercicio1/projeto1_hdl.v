module V1 (a, b, c, d, x);

    input a, b, c, d;
    output x;

    assign x = ~a & ( b | (c & d));

endmodule

module V2 (a, b, c, d, y);

    input a, b, c, d;
    output y;

    assign y = a & ~b;
    
endmodule

module V3 (a, b, c, d, z);

    input a, b, c, d;
    output z;

    assign z = a & b;
    
endmodule

module top;
    reg a, b, c, d;
    wire x, y, z;
    
    initial
        begin
        a = 0;
        b = 0;
        c = 0;
        d = 0;
        end
        
    always
        begin
        #1 { a, b, c, d } = { a, b, c, d } +1;
        end
        
    initial
        begin
        #16 $finish;
        end
        
    V1 velocity1 (.a(a), .b(b), .c(c), .d(d), .x(x));
    V2 velocity2 (.a(a), .b(b), .c(c), .d(d), .y(y));
    V3 velocity3 (.a(a), .b(b), .c(c), .d(d), .z(z));

    initial
        begin
        $dumpfile ("test.dump");
        $dumpvars (0, a, b , c, d);
        $dumpon;
        $display ("T \t A \t B \t C \t D \t X \t Y \t Z");
        $monitor ("%0d \t %b \t %b \t %b \t %b \t %b \t %b \t %b", $time, a, b, c, d, x, y, z);
        end
        
endmodule
