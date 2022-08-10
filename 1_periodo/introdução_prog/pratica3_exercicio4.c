#include <stdio.h>


int main (void){

    float salario, novo_salario;
    int cargo;

    printf("Entre com o salário: ");
    scanf("%f", &salario);
    printf("\nEntre com o código do cargo: ");
    scanf("%d", &cargo);

    switch(cargo){
        case 100:
            novo_salario = salario * 1.03;
            break;
        case 101:
            novo_salario = salario * 1.05;
            break;
        case 102:
            novo_salario = salario * 1.075;
            break;
        case 201:
            novo_salario = salario * 1.1;
            break;
        default:
            novo_salario = salario * 1.15;
            break;
    }


    printf("\nAntigo:  R$ %.2f", salario);
    printf("\nNovo:  R$ %.2f", novo_salario);
    printf("\nDiferença:  R$ %.2f\n", novo_salario - salario);

    
    return 0;
}