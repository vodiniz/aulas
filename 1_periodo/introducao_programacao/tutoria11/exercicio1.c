#include <stdio.h>

#define SIZE 100


int main(void){

    float notas[SIZE][4];
    int n;

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < 4; j++){
            scanf("%f", &notas[i][j]);
        }
    }

    int aprovados = 0;
    float soma = 0;

    for(int i = 0; i < n; i++){
        float nota = 0;
        
        nota += 0.2 * notas[i][0];
        nota += 0.2 * notas[i][1];
        nota += 0.2 * notas[i][2];
        nota += 0.4 * notas[i][3];

        if (nota >= 6){
            aprovados++;
        }

        soma += nota;
    }


    printf("Qte de aprovados = %d\n", aprovados);
    printf("Media da turma = %.2f\n", soma/n);
    


    return 0;
}