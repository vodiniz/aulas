#include <stdio.h>

#define SIZE 15
#define SIZE2 5


int main(void){

    int vec[SIZE];
    int par[SIZE2];
    int impar[SIZE2];
    int par_count = 0;
    int impar_count = 0;

    for( int i = 0; i < SIZE; i++){
        scanf("%d", &vec[i]);
    }


    for( int i = 0; i < SIZE; i++){
        if ( (vec[i] % 2) == 0){

            if (par_count == 5){
                for( int j = 0; j < par_count; j++){{
                    printf("par[%d] = %d\n", j, par[j]);
                }}
                par_count = 0;
            }

            par[par_count] = vec[i];
            par_count++;
        } else {
            if (impar_count == 5){
                for( int j = 0; j < impar_count; j++){{
                    printf("impar[%d] = %d\n", j, impar[j]);
                }}
                impar_count = 0;
            }

            impar[impar_count] = vec[i];
            impar_count ++;
        }
    }
    
    if (impar_count < 5 && par_count < 5){
        for( int j = 0; j < impar_count; j++){
            printf("impar[%d] = %d\n", j, impar[j]);
        }
        for( int j = 0; j < par_count; j++){
            printf("par[%d] = %d\n", j, par[j]);
        }

    }

    return 0;
}
