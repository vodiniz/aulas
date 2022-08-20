#include <stdio.h>


void troca3(int *a, int *b, int *c);


int main(void){

    int a, b, c;
    printf("Trocando o valor das variáveis: \n");
    
    scanf("%d %d %d", &a, &b, &c);
    
    troca3(&a, &b, &c);


    return 0;
}


void troca3(int *a, int *b, int *c){


    int aux = *a;
    *a = *b;
    *b = *c;
    *c = aux;

    printf("%d, %d, %d\n", *a, *b, *c);
    return;
}
