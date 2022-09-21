#include <stdio.h>
#define TAM 3

int main(){
    float matriz[TAM][TAM], soma = 0, media;
    char op;
    int cont = 0;
    
    scanf("%c", &op);
    
    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    if(op == 'S'){
        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){
                if(j < i){
                    soma += matriz[i][j];
                }
            }
            
        }
        printf("%.1f\n", soma);
    }
    else if(op == 'M'){
        for(int i = 0; i < TAM; i++){
            for(int j = 0; j < TAM; j++){
                if(j < i){
                    soma += matriz[i][j];
                    cont++;
                    media = soma / cont;
                    
                }
            }
            
        }
    printf("%.1f\n", media);
    }
    
    return 0;
} 