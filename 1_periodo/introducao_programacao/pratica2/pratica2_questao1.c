#include<stdio.h>

int main (void){

    //declaração variaveis
    int a, b, c, d, x;
    printf("Entre com os valores de a, b, c, d: ");

    //modificar valor das variaveis
    scanf("%d%d%d%d", &a, &b, &c, &d);

    //definir valor de x
    x = a * a * a * ((b + c)/d);

    //print do resultado
    printf("\nx = %d\n", x);

    return 0;
}