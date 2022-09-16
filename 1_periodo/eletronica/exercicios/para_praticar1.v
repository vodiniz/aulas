module Motor1(a, b, l, u, fe, fd);
    input l, u, fe, fd;
    output a, b;
    

    assign a = ~l & ~u & ~fe;
    assign b= ~fd & (l | u);
endmodule

module top;
    reg a, b, c, d;
    wire x, y;
    
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
        #20 $finish;
        end
        
        
    Motor1 teste( .l(a), .u(b), .fe(c), .fd(d), .a(x), .b(y));
        
    initial
        begin
        $dumpfile("test.dump");
        $dumpvars(0, a, b , c, d);
        $dumpon;
        $display("T \t l \t u \t fe  fd  a \t b");
        $monitor("%0d \t %b \t %b \t %b \t %b \t %b \t %b", $time, a, b, c, d, x, y);
        end
        
endmodule