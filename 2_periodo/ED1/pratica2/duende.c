#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "duende.h"

struct duende {
    char nome[50];
    int idade;
    int escalado;
};

struct time {
    Duende lider;
    Duende confeteiro;
    Duende entregador;
    Duende embrulhador;
};

// Manter como especificado
void lerQuantidade(int *qtdDuendes){
    scanf("%d", qtdDuendes);
}

// Manter como especificado
Duende *alocaDuendes(int qtdDuendes){
    Duende* lista_duendes = malloc ( qtdDuendes * sizeof(Duende));
    return lista_duendes;
}

// Manter como especificado
Time *alocaTimes(int qtdTimes){

    Time* lista_tim = malloc ( qtdTimes * sizeof(Time));
    return lista_tim;
}

// Manter como especificado
void desalocaDuendes(Duende **duendes){
    free(*duendes);
}

// Manter como especificado
void desalocaTimes(Time **times){
    free(*times);
}

// Manter como especificado
void lerDuendes(Duende *duendes, int qtdDuendes){
    for ( int i = 0; i < qtdDuendes; i++){
        scanf("%s", duendes[i].nome);
        scanf("%d", &duendes[i].idade);
        duendes[i].escalado = 0;
    }
}

// Manter como especificado
void escalarTimes(Duende *duendes, Time *times, int qtdDuendes){
    int i, index;
    int qtdTime = qtdDuendes/4;
    // Escalando os lideres
    for (i=0; i<qtdTime; i++) {
        index = proximoMaisVelho(duendes, qtdDuendes);
        duendes[index].escalado = 1;
        strcpy(times[i].lider.nome, duendes[index].nome);
        times[i].lider.idade = duendes[index].idade;
    }

    // Escalando os confeiteiros
    for (i=0; i<qtdTime; i++) {
        index = proximoMaisVelho(duendes, qtdDuendes);
        duendes[index].escalado = 1;
        strcpy(times[i].confeteiro.nome, duendes[index].nome);
        times[i].confeteiro.idade = duendes[index].idade;
    }

    // Escalando os entregador
    for (i=0; i<qtdTime; i++) {
        index = proximoMaisVelho(duendes, qtdDuendes);
        duendes[index].escalado = 1;
        strcpy(times[i].entregador.nome, duendes[index].nome);
        times[i].entregador.idade = duendes[index].idade;
    }

    // Escalando os embrulhador
    for (i=0; i<qtdTime; i++) {
        index = proximoMaisVelho(duendes, qtdDuendes);
        duendes[index].escalado = 1;
        strcpy(times[i].embrulhador.nome, duendes[index].nome);
        times[i].embrulhador.idade = duendes[index].idade;
    }
}

int proximoMaisVelho(Duende *duendes, int qtdDuendes){
    
    int index = -1;
    for ( int i = 0; i < qtdDuendes; i++){
        if (!duendes[i].escalado){

            if (index == -1){
                index = i;
            }

            if(duendes[i].idade > duendes[index].idade){
                index = i;
            }
        }
    }

    return index;
}

// Manter como especificado
void printTimes(Time *times, int qtdTimes){
    for (int i=0; i<qtdTimes; i++) {
        printf("Time %d\n", i+1);
        printf("PILOTO > %s %d\n", times[i].lider.nome, times[i].lider.idade);
        printf("CONFEI > %s %d\n", times[i].confeteiro.nome, times[i].confeteiro.idade);
        printf("ENTREG > %s %d\n", times[i].entregador.nome, times[i].entregador.idade);
        printf("EMBRUL > %s %d\n\n", times[i].embrulhador.nome, times[i].embrulhador.idade);
    }
}
