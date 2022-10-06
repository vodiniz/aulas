#include <stdio.h>
#include <stdlib.h>


double** criaMatriz(int m, int n);
double** transposta(double **A, int m, int n);
void liberaMatriz(double** A, int m);

int main(void){
    int m, n;
    printf("Digite o valor de m e n: ");
    scanf("%d %d", &m, &n);

    double **matrix = criaMatriz(m, n);

    printf("Digite a matriz:\n");

    for ( int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf("%lf", &matrix[i][j]);
        }
    }

    double **t_matrix = transposta(matrix, m, n);

    printf("Transposta:\n");
    for ( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%.0f ", t_matrix[i][j]);
        }
        printf("\n");
    }

    liberaMatriz(matrix, m);
    liberaMatriz(t_matrix, n);

    return 0;
}


double** criaMatriz(int m, int n){

    double **matrix;
    matrix = malloc(m * sizeof(double));

    for (int i = 0; i < m; i++){
        matrix[i] = malloc(n * sizeof(double));
    }
    return matrix;
}

void liberaMatriz(double** A, int m){
    
    for (int i = 0; i < m; i++){
        free(A[i]);
    }
}

double** transposta(double **A, int m, int n){


    double **t_matrix = criaMatriz(n, m);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            t_matrix[j][i] = A[i][j];
        }
    }

    return t_matrix;
}