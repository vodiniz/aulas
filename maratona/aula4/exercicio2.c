#include <stdio.h>

#define SIZE 1000


int main(void){


    int matrix[SIZE][SIZE];
    int n, m, encontrado = 0;

    scanf("%d %d", &n, &m);

    for ( int i = 0; i < n; i++){
        for ( int j = 0; j < m; j++){
            scanf("%d", &matrix[i][j]);
        }

    }


    for ( int i = 1; i < n; i++){
        for ( int j = 1; j < m; j++){
            if(matrix[i][j] == 42){
                if((matrix[i -1][j-1] == 7) &&
                    (matrix[i-1][j] == 7) &&
                    (matrix[i -1][j+1] == 7) &&
                    (matrix[i][j-1] == 7) &&
                    (matrix[i][j+1] == 7) &&
                    (matrix[i + 1][j-1] == 7) &&                  
                    (matrix[i +1][j] == 7) &&
                    (matrix[i +1][j+1] == 7)){
                    encontrado++;
                    printf("%d %d\n" ,i + 1, j + 1);
                    }
                    
                    
            }      
        }

    }

    if (!encontrado){
        printf("0 0\n");
    }

    return 0;
}