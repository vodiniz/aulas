#include<stdio.h>

int main (void){

    //declaração variaveis
    float x1, x2, x3, y;
    printf("Entre com os valores de x1, x2 e x3: ");

    //modificar valor das variaveis
    scanf("%f%f%f", &x1, &x2, &x3);

    //definir valor de y
    y = (x1 + (x2 * x2) + (x3 * x3)) * (x1 + (x2 * x2) + 
    (x3 * x3)) - (x1 * x2 * x3)*(x1 * x2 * x3);

    //print do resultado
    printf("\ny = %.2f\n", y);

    return 0;
}