#include <stdio.h>

void sum(int *num);

int main(void){


    int num;


    printf("Digite um número: ");
    scanf("%d", &num);

    sum(&num);

    printf("Número: %d\n", num);

    return 0;
}


void sum(int *num){

    if (*num % 2 == 0){
        *num += 5;
    } else {
        *num += 8;
    }
    return;
}
