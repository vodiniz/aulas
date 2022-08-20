#include <stdio.h>

int lowest_number(int *num1, int *num2, int *num3, int *num4, int *num5);

int main(void){

    int num1, num2, num3, num4, num5;

    printf("Digite 5 números: \n");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("The lowest number is : %d", lowest_number(&num1, &num2, &num3, &num4, &num5));

}

int lowest_number(int *num1, int *num2, int *num3, int *num4, int *num5){
    int menor;
    if ( *num1 < *num2){
        menor = *num1;
    } else {
        menor = *num2;
    }

    if (menor < *num3){
    } else {
        menor = *num3;
    }
    
    if (menor < *num4){

    } else {
        menor = *num4;
    } 
    if (menor < *num5){

    } else {
        menor = *num5;
    }

    return menor;
}
