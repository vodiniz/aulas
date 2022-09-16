#include <stdio.h>

#define SIZE 10


int main(void){

    float vec[SIZE];

    for( int i = 0; i < SIZE; i++){
        scanf("%f", &vec[i]);
    }

    for( int i = 0; i < SIZE; i++){
        if ( vec[i] <= 10){
            printf("A [%d] = %.1f\n", i, vec[i]);
        }
    }

    return 0;
}