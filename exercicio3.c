#include <stdio.h>

void fibo(int *vetor, int n);




void fibo(int *vetor, int n){


    for (int i = 0; i < n; i++){
        if ( i == 0 || i == 1){
            vetor[i] = 1;
        } else {
            vetor[i] = vetor[i - 1] + vetor[ i - 2];
        }
    }


}
