#include <stdio.h>

#define t 10


void multiply_matrix( int vec1[][], int vec2[][], int vec3[][], int m, int p, int q, int n);

int main(void){

    int m, n, p, q;
    int A[10][10];
    int B[10][10];
    int C[10][10];

    int element;

    while (1){
        printf("Entre com os valores de m, p, q, n: ");
        scanf("%d", &n);
        if (m <= 10
            && n <= 10
            && p <= 10
            && q <= 10
            && p == q
            && m > 0
            && n > 0
            && p > 0
            && q > 0){
            break;
        } else {
           printf("Valores inválidos!\n");
        }
    }

    printf("Entre com os elementos da matriz: ");
    for( int i = 0; i < m; i++){
        for (int j = 0; j < p; j++){

            scanf("%d", &element);
            A[i][j] = element;
        }
    }

    printf("Entre com os elementos da matriz: ");
    for( int i = 0; i < q; i++){
        for (int j = 0; j < n; j++){

            scanf("%d", &element);
            A[i][j] = element;
        }
    }


    multiply_matrix(A, B, C, m, p, q, n);
    


    return 0;
}

void multiply_matrix( int vec1[][], int vec2[][], int vec3[][], int m, int p, int q, int n ){

    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            
            int sum = 0;

            for (int k = 0; k < p; k++){
                sum += ((vec1[i][k]) * (vec2[k][j]));
            }

        }
    }



}
