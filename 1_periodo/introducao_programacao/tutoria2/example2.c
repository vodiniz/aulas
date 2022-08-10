#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){

    //definindo a seed para o random gerar um número aleatório
    srand(time(NULL));

    //explicação do programa
    printf("\nDigite dois números inteiros em ordem crescente \n");

    //definição de variáveis
    int n1, n2;

    //leitura dos valores

    scanf("%d %d", &n1, &n2);

    //calculo numero aleatório


    int random = (rand() % (n2 - n1 - 1)) + n1 + 1;


    //imprimindo o resultado na tela
    printf(" Numero aleatório entre %d e %d: %d\n", n1, n2, random);

    return 0;
    }