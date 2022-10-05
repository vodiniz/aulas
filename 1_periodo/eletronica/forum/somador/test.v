module SOMASUB(A,B,op,R,zero,sinal);

    input [3:0] A,B;

    input op;

    output reg overflow; // adicionado o overflow para somas muito grandes

    output reg [4:0] R; // adicionado um bit a mais para o overflow
    output zero,sinal;

    assign sinal=R[3];
    assign zero=~(|R);
    
    always @(*)
        
        if(op)
            begin
                {overflow, R} = A-B;
            end

        else
            begin
                {overflow, R} = A+B;
            end
            
endmodule // SOMASUB

