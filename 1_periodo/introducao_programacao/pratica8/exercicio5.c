#include <stdio.h>

#define t 10


void multiply_matrix( int vec1[][t], int vec2[][t], int vec3[][t], int m, int p, int q, int n);
void print_matrix(int M[t][t], int lines, int rows);

int main(void){

    int m, n, p, q;
    int A[t][t];
    int B[t][t];
    int C[t][t];

    int element;

    while (1){
        printf("Entre com os valores de m, p, q, n: ");
        scanf("%d %d %d %d", &m, &p, &q, &n);
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
            B[i][j] = element;
        }
    }

    //printf("%d, %d, %d, %d", m, p, q, n)

    //print_matrix(A, m, p);
    //printf("\n");
    //print_matrix(B, q, n);

    multiply_matrix(A, B, C, m, p, q, n);
    


    return 0;
}

void print_matrix(int M[t][t], int lines, int rows){

    for (int i = 0; i < lines; i++) {
        for (int j = 0; j < rows; j++) {
            printf("\t%d\t", M[i][j]);
        }
        printf("\n");
    }
}


void multiply_matrix( int vec1[][t], int vec2[][t], int vec3[][t], int m, int p, int q, int n ){


    for(int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            
             int sum = 0;

            for (int k = 0; k < p; k++){

                sum += ((vec1[i][k]) * (vec2[k][j]));
            }
            vec3[i][j] = sum;
            
            printf("%d   ", vec3[i][j]);
        }
        printf("\n");
    }

}
