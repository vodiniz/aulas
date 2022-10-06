#include <stdio.h>
#include <stdlib.h>

int** criaMatriz(int m, int n);
void liberaMatriz(int** A, int m);
void print_matrix(int** A, int m, int n);
int check_different_numbers(int **A, int n);
int check_magic_square(int **A, int n);

int main(void){


    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n); 

    int **matrix = criaMatriz(n,n);

    printf("Digite os valores da matriz n x n:\n");

    for ( int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matrix[i][j]);
        }
    }

    if (check_magic_square(matrix, n)){
        printf("Esta matriz é um quadrado mágico!\n");
    } else {
        printf("Esta matriz NÃO é um quadrado mágico!\n");
    }

    
    liberaMatriz(matrix,n);
    
    return 0;
}

int check_different_numbers(int **A, int n){

    for ( int i = 0; i < n; i++){
        for (int j = 0 ; j < n; j++){
            for (int k = n - 1; k > -1; k--){
                for (int l = n - 1 ; l > -1; l--){
                    if ( k != i || l != j){
                        //printf("A[%d][%d] == A[%d][%d]\n", i, j, k, l);
                        if (A[i][j] == A[k][l]){
                            return 0;
                        }
                    }
                }
            }
        }
    }

    return 1;
}

int check_magic_square(int **A, int n){

    int sum = 0, sum_2 = 0;
    if(check_different_numbers(A, n)){

        //printf("---------------------------------\n");

        // check line sum
        for ( int i = 0; i < n; i++){
            sum = 0;
            for ( int j = 0; j < n; j++){
                sum += A[i][j];
            }
            if (!i){
                sum_2 = sum;
            }
            //printf("%d == %d\n", sum, sum_2);
            if ( sum != sum_2){
                return 0;
            }
        }
        //printf("---------------------------------\n");

        // check column sum
        for ( int i = 0; i < n; i++){
            sum = 0;
            for ( int j = 0; j < n; j++){
                sum += A[j][i];
            }

            //printf("%d == %d\n", sum, sum_2);

            if ( sum != sum_2){
                return 0;
            }
        }
        //printf("---------------------------------\n");

        //sum diagonal principal

        sum = 0;
        for ( int i = 0; i < n; i++){
            sum += A[i][i];
        }

        //printf("%d == %d\n", sum, sum_2);

        if ( sum != sum_2){
            return 0;
        }
        
        //printf("---------------------------------\n");

        sum = 0;

        for ( int i = 0; i < n; i++){
            sum += A[i][n - 1 - i];
        }

        //printf("%d == %d\n", sum, sum_2);
            
        if ( sum != sum_2){
            return 0;
        }
        

        //printf("---------------------------------\n");

        return 1;

    } else {
        return 0;
    }



}


int** criaMatriz(int m, int n){

    int **matrix;
    matrix = malloc(m * sizeof(int*));

    for (int i = 0; i < m; i++){
        matrix[i] = malloc(n * sizeof(int));
    }
    return matrix;
}

void print_matrix(int** A, int m, int n){

    for ( int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){

            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}


void liberaMatriz(int** A, int m){
    
    for (int i = 0; i < m; i++){
        free(A[i]);
    }
    free(A);
}

