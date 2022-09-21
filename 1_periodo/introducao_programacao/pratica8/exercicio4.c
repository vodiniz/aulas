#include <stdio.h>
#include <stdlib.h>

void generate_numbers(int vec1[], int vec2[]);

int main (void){

    srand(5);
    int vec1[100000], vec2[501];

    generate_numbers(vec1, vec2);

    return 0;
}

void generate_numbers(int vec1[], int vec2[]){

    int n;

    while (1){
        printf("Entre com um número inteiro <= 500: ");
        scanf("%d", &n);
        if (n <= 500 && n > 0){
            break;
        }
    }
        for (int i = 0; i < 500 ; i ++){
            vec2[i] = 0;
    }

    for ( int i = 0; i < 100000 ; i++){
        int random = rand() % n + 1;
        vec1[i] = random;
        vec2[random] += 1;
    }

    for ( int i = 1; i < n + 1 ; i ++){
        printf("A[%d] = %d\n", i,  vec2[i]);
    }
}
