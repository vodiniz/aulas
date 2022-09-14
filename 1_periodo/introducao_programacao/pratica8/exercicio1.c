#include <stdio.h>

#define SIZE 30

void calculate_temperature(float temp []);

int main(void){


    float temp[SIZE];

    for( int i = 0; i < SIZE; i++){
        scanf("%f",&temp[i]);
    }
    calculate_temperature(temp);


    return 0;
}



void calculate_temperature(float temp []){

    int below = 0, above = 0;
    float sum = 0;
    for (int i = 0; i < SIZE; i++){
        sum += temp[i];
    }
    float average = sum/SIZE;

    for (int i = 0; i < SIZE; i++){
        if (temp[i] < average){
            below += 1;
        } else if ( temp[i] > average){
            above += 1;
        }
    }
    printf("Acima: %d\n", above);
    printf("Abaixo: %d\n", below);
}