#include <stdio.h>
#define SIZE 15

void move_vector( int vec[], int n);
void print_vec( int vec[]);

int main(void){

    int vec[SIZE];
    
    printf("Entre com os 15 valores: ");
    for( int i = 0; i < SIZE; i++){
        scanf("%d",&vec[i]);
    }

    int n;

    printf("Entre com o valor de n: ");
    scanf("%d",&n);
    move_vector(vec, n);
    print_vec(vec);

    return 0;
}



void move_vector( int vec[], int n){

    for (int i = 0; i < n; i++){

        int aux = vec[0];

        for (int j = 0; j < SIZE; j++){
            
            if ( j != SIZE - 1) {
                vec[j] = vec[ j + 1];
            } else {
                vec[j] = aux;
            }
        
        }
    }

    return;
}

void print_vec( int vec[]){

    for ( int i = 0; i < SIZE ; i++){
        printf("%d ", vec[i]);
    }
    printf("\n");
}

