#include <stdio.h>
#include <stdlib.h>

int** criaMatriz(int m, int n);
int multiplicaMatrizes(int *** R, int ** A, int n, int m, int ** B, int p, int q);
void liberaMatriz(int** A, int m);
void print_matrix(int** A, int m, int n);

int main(void){


    int n,m,p,q;
    int ** R;

    printf("Digite os tamanhos da matriz A: ");
    scanf("%d %d", &n, &m); // n = l1 m =c1 p = l2 q = c2

    int **A = criaMatriz(n,m);

    for ( int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            scanf("%d", &A[i][j]);
        }
    }

    //print_matrix(A, n, m);

    printf("Digite os tamanhos da matriz B: ");
    scanf("%d %d", &p, &q); // p = l2 q = c2

    int **B = criaMatriz(p, q); 

    for ( int i = 0; i < p; i++){
        for (int j = 0; j < q; j++){
            scanf("%d", &B[i][j]);
        }
    }

    //print_matrix(B, p, q);

    if (multiplicaMatrizes(&R, A, n, m, B, p, q)){

        printf("Resultado de A x B: \n");

        print_matrix(R, n, q);
        // printf("%d %d\n", R[0][0], R[0][1]);
        // printf("%d %d\n", R[1][0], R[1][1]);


        for (int i = 0; i < n; i++){
            free(R[i]);
        }
        free(R);

    } else {
        printf("Não é possível multiplicar as matrizes A e B.\n");

    }

    
    liberaMatriz(A,n);
    liberaMatriz(B,p);



    return 0;
}


int multiplicaMatrizes(int *** R, int ** A, int n, int m, int ** B, int p, int q){


    // n = l1 m =c1 p = l2 q = c2

    if ( m!= p){
        return 0;
    } 

    *R = criaMatriz(n, q);

    for(int i = 0; i < n; i++){
        for (int j = 0; j < q; j++){
            
            int sum = 0;

            for (int k = 0; k < p; k++){

                //printf("R[%d][%d] += %d\n",i, j, ((A[i][k]) * (B[k][j])));
                sum += ((A[i][k]) * (B[k][j]));
            }
            R[0][i][j] = sum;
            //printf("R[%d][%d] = %d\n",i, j, sum);
            //printf("R[%d][%d] = %d\n",i, j, *R[i][j]);

        }
    }


    return 1;
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

