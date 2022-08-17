#include<stdio.h>
#include<math.h>

int calculaRaizes(float *a, float  *b, float *c, float *x1, float *x2);


int main(void){

    float a, b ,c, x1, x2;

    printf("\nDigite os valores de a, b , c:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (calculaRaizes(&a, &b, &c, &x1, &x2)) {
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } else {
        printf("Não foi possível calcular as raízes!\n");
    }
    





    return 0;

}

int calculaRaizes(float *a, float  *b, float *c, float *x1, float *x2){

    float delta = pow(*b, 2) -4 * *a * *c;

    if (delta >= 0){

        *x1 = (-*b + sqrt(delta))/(2* *a);
        *x2 = (-*b - sqrt(delta))/(2* *a);

        return 1;
    } else {
        return 0;
    }

}