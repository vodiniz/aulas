#include "duende.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum { NAO=0, SIM } ESCALADO;

struct duende {
    char nome[20];
    int idade;
    ESCALADO escalado;
};

// Manter como especificado
void lerQuantidade(int *qtd) { 
    scanf("%d", qtd);
}

// Manter como especificado
Duende *alocaDuendes(int n) { 
    Duende* duendes = malloc ( n * sizeof(Duende));
    return duendes; 
}

// Manter como especificado
Duende *copiaDuende(Duende *duendes, int i) {
    /* Aloca um novo duende baseado nos dados de um outro duende */ 
    Duende* novo_duende = (Duende*)malloc (sizeof(Duende));
    *novo_duende = duendes[i];

    return novo_duende;
}

// Manter como especificado
void desalocaDuendes(Duende **duendes){
    /* Desaloca um vetor ou um unico duende alocado dinamicamente */
    free(*duendes);
}

// Manter como especificado
void lerDuendes(Duende *duendes, int n) {
    for ( int i = 0; i < n; i++){
        scanf("%s", duendes[i].nome);
        scanf("%d", &duendes[i].idade);
        duendes[i].escalado = NAO;
    } 
}


// Manter como especificado
int proximoMaisVelho(Duende *duendes, int n) {
    /* Pega o próximo duende mais velho que ainda nao foi escalado */
    int index = -1;
    int mais_velho = 0;
    int ordenado = 0;

    for (int i =0; i < n; i++){

        if (duendes[i].escalado == SIM){
            ordenado++;
        }

        else if (duendes[i].escalado == NAO && duendes[i].idade > mais_velho){
            index = i;
            mais_velho = duendes[i].idade;
        }
    }
    // printf("index mais velho: %d, idade mais velho : %d \n", index, mais_velho);
    // printf("-------terminou loop\n");

    Duende aux = duendes[index];

    duendes[index] = duendes[ordenado];
    duendes[ordenado] = aux;


    return ordenado;

}

// Manter como especificado
void escalarDuende(Duende *duendes, int index) {
    /* Dado um vetor de duendes, "seta" como escalado um duende */
    duendes[index].escalado = SIM;
}

// Manter como especificado
void printDuende(Duende *duende) {
    /* Imprime os dados de um duende e um \n no final */
    printf("%s ", duende->nome);
    printf("%d", duende->idade);
    printf("\n");

}