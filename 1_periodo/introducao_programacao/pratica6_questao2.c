#include <stdio.h>

int primo(int n);

int main(void){

    int n;

    printf("Digite um número: ");
    scanf("%d", &n);

    
    if (primo(n)){
        printf(" %d é um número primo!\n", n);
    } else {
        printf(" %d não é um número primo!\n", n);
    }


    return 0;
}



int primo(int n){

    for (int i = 2; i <= n; i++){
        if ((n % i) == 0 && ( n != i)){
            return 0;
        } else {
            return 1;
        }
    }
    return 0;
}