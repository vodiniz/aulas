#include "matriz.h"
#include<stdio.h>
#include<stdlib.h>

void lerOrdem(int *ordem) {
    
    scanf("%d", ordem);
    getchar();

}

//manter como especificado
double **alocaMatriz(int ordem) {

    double **matrix;
    matrix = malloc(ordem * sizeof(double));

    for (int i = 0; i < ordem; i++){
        matrix[i] = malloc(ordem * sizeof(double));
    }
    return matrix;
}

//manter como especificado
void desalocaMatriz(double ***M, int ordem) {

    for ( int i = 0; i < ordem; i++){
        free((*M)[i]);
    }
    free(*M);

}

//manter como especificado
void lerOperacao(char *operacao) {

    *operacao = getchar();

}

void lerMatriz(double **M, int ordem) {

    for ( int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            scanf("%lf", &M[i][j]);
        }
    }
}

double somaMatriz(double **M, int ordem) {

    double soma = 0;

    for ( int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (( i < j) && (i + j < ordem - 1)){
                soma += M[i][j];
            }
        }
    }

    return soma;
}

double media(double resultado, int ordem) {

    int cont = 0;

    for ( int i = 0; i < ordem; i++){
        for (int j = 0; j < ordem; j++){
            if (( i < j) && (i + j < ordem - 1)){
                cont++;
            }
        }
    }

    return resultado / cont;

}

void printResultado(double resultado) {

    printf("%.1lf\n",resultado);
}
