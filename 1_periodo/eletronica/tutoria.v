/*  
  temp   velocidade
0 - 0000 00000000
1 - 0001 00000000
2 - 0010 00000000
3 - 0011 00001111
4 - 0100 00001111
5 - 0101 00001111
6 - 0110 00001111
7 - 0111 00001111
8 - 1000 00110011
9 - 1001 00110011
10- 1010 00110011
11- 1011 00110011
12- 1100 11000011
13- 1101 11000011
14- 1110 11000011
15- 1111 11000011
*/

module fourTo8(V, Vel);
    input [3:0] V; //Temperatura
    output reg [7:0] Vel; //Velocidade ventilador

    always @(*) 
        begin
            if(V < 3) Vel = 0; //Velocidade 0
            else if(V < 8) Vel = 8'b00001111; //Velocidade 1
            else if(V < 12) Vel = 8'b00110011; //Velocidade 2
            else Vel = 8'b11000011; //Velocidade 3
        end

endmodule

module top;
    reg [3:0] V;
    wire [7:0] Vel;

    fourTo8 to(.V(V), .Vel(Vel));

    initial 
        begin
            V = 0;
        end

    always 
        begin
            #1 V++;
        end

    initial 
        begin
            #16 $stop;
        end

    initial
        begin
            $dumpfile("ex.dump");
            $dumpvars(0, top);
            $dumpon;
            $display("Tempo \t Temperatura \t Velocidade");
            $monitor("%0d \t %d - %b \t %b", $time, V, V, Vel);
        end

    
endmodule