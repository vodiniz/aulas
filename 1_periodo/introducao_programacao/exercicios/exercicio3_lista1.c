#include <stdio.h>
#include <math.h>


void power_or_sqrt(float *a, float *b);


int main(void){

    float a, b;
    printf("Digite dois números: \n");
    scanf("%f %f", &a, &b);

    power_or_sqrt(&a, &b);


}


void power_or_sqrt(float *a, float *b){


    float *smaller, *bigger;

    if ( *a > *b){
        smaller = b;
        bigger = a;

    } else if (*b > *a){
        smaller = a;
        bigger = b;

    } else {
        printf("Os números são iguais\n");
        return;
    }

    *bigger = sqrt(*bigger);
    *smaller = pow(*smaller, 2);

    printf("Raiz quadrada do maior número: %.2f\n", *bigger);
    printf("Quadrado do menor número: %.2f\n", *smaller);
}