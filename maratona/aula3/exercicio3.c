#include <stdio.h>

#define SIZE 12


int main(void){

    float matrix[SIZE][SIZE];
    float sum = 0;
    char O;
    int count = 0;
    scanf("%c", &O);

    for ( int i = 0; i < SIZE; i++){
        for ( int j = 0; j < SIZE; j++){
            scanf("%f", &matrix[i][j]);
            if (i > j){
                sum += matrix[i][j];
                count++;
            }
        }
    }

    if (O == 'S'){
        printf("%.1f\n", sum);
    } else if (O == 'M'){
        printf("%.1f\n", (sum/count));
    }
    


    return 0;
}