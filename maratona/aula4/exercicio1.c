#include <stdio.h>
#include <string.h>
#define TAM 50

int main (){

    int n;
    char j1[TAM], j2[TAM];

    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%s", j1);
        scanf("%s", j2);

        if(!strcmp(j1,"ataque") && !strcmp(j2, "pedra")){
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(j1,"pedra") && !strcmp(j2, "ataque")){
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(j1,"pedra") && !strcmp(j2, "papel")){
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(j1,"papel") && !strcmp(j2, "pedra")){
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(j1,"papel") && !strcmp(j2, "ataque")){
            printf("Jogador 2 venceu\n");
        }
        else if(!strcmp(j1,"ataque") && !strcmp(j2, "papel")){
            printf("Jogador 1 venceu\n");
        }
        else if(!strcmp(j1,"papel") && !strcmp(j2, "papel")){
            printf("Ambos venceram\n");
        }
        else if(!strcmp(j1,"pedra") && !strcmp(j2, "pedra")){
            printf("Sem ganhador\n");
        }
        else if(!strcmp(j1,"ataque") && !strcmp(j2, "ataque")){
            printf("Aniquilacao mutua\n");
        }

    }
    return 0;
}