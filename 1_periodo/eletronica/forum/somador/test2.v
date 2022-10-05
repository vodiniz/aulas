

Em nosso encontro, foi mencionada a geração dos bits “zero” e “sinal” a partir do circuito do soma-sub. Porém não foi incluída a geração do bit “overflow”. O objetivo deste fórum consiste em incluir linhas na codificação Verilog a seguir:

 

module SOMASUB(A,B,op,R,zero,sinal);

 

  input [3:0] A,B;

  input op;

  output reg [3:0] R;

  output zero,sinal;

 

  assign sinal=R[3];

  assign zero=~(|R);

 

  always @(*)

    begin

        R = (op)?A-B:A+B;

    end

 

endmodule // SOMASUB

 

Poste a sua solução no fórum e não se esqueça de ver as demais postagens para ver outros possíveis estilos de codificação.
