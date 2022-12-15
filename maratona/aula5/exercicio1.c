#include <stdio.h>
#include <string.h>

#define TAM 1000

void primeiro_passo(char frase[]);
void segundo_passo(char frase[]);
void terceiro_passo(char frase[]);


int main(void){

    char frase[TAM];
    int entradas;
    scanf("%d", &entradas);
    getchar();

    for(int i = 0; i < entradas; i++){

        fgets(frase, TAM, stdin);
        primeiro_passo(frase);
        segundo_passo(frase);
        terceiro_passo(frase);

        printf("%s\n", frase);

    }




    return 0;
}


void primeiro_passo(char frase[]){

    int tam_frase = strlen(frase);
    frase[tam_frase - 1] = '\0';
    tam_frase -= 1;
    for (int i = 0; i < tam_frase; i++){
        if((frase[i] >= 65 && frase[i] <= 90) ||
        (frase[i] >= 97 && frase[i] <=122)){
            frase[i] += 3;
        }
    }
}

void segundo_passo(char frase[]){
    int tam_frase = strlen(frase);
    char copia[TAM];
    strcpy(copia, frase);
    for (int i = tam_frase - 1; i >= 0 ; i--){
        frase[tam_frase - i - 1] = copia[i];
    }
}

void terceiro_passo(char frase[]){

    int tam_frase = strlen(frase);
    int tam_metade = tam_frase/2;
    
    
    // if (!(tam_frase % 2)){
    //     tam_metade = tam_frase/2;
    // } else {
    //     tam_metade = tam_frase/2;
    // }

    
    for (int i = tam_metade ; i < tam_frase; i++){
        frase[i] -= 1;
    }
}