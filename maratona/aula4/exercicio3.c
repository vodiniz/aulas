#include <stdio.h>
#include <string.h>
#define TAM 100

int main(){
    char frase1[TAM], frase2[TAM], frase3[TAM];
    int tam1, tam2, tam3;

    fgets(frase1, TAM, stdin);
    fgets(frase2, TAM, stdin);
    fgets(frase3, TAM, stdin);

    tam1 = strlen(frase1);
    tam2 = strlen(frase2);
    tam3 = strlen(frase3);

    frase1[tam1 - 1] = '\0';
    frase2[tam2 - 1] = '\0';
    frase3[tam3 - 1] = '\0';

    printf("%s%s%s\n", frase1,frase2,frase3);
    printf("%s%s%s\n", frase2,frase3,frase1);
    printf("%s%s%s\n", frase3,frase1,frase2);

    for(int i = 0; i < 10; i++){
        if(frase1[i] == '\0'){
            break;
        }
        printf("%c",frase1[i]);
    }
    for(int i = 0; i < 10; i++){
         if(frase2[i] == '\0'){
            break;
        }
        printf("%c",frase2[i]);
    }
    for(int i = 0; i < 10; i++){
         if(frase3[i] == '\0'){
            break;
        }
        printf("%c",frase3[i]);
    }
    printf("\n");





    return 0;
}