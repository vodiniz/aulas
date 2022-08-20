#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float sum(float *a,float *b);
float multiply_square(float *a, float *b);
float square_first(float *a, float *b);
float sqrt_of_square_sum(float *a, float *b);
float sin_of_dif(float *a, float *b);
float module(float *a, float *b);


int main(void){

    float a, b;
    printf("Digite 2 números: \n");
    scanf("%f %f", &a, &b);

    printf("A soma dos números: %f\n", sum(&a, &b));
    printf("O produto do primeiro número pelo quadrado do segundo: %f\n", multiply_square(&a, &b));
    printf("O quadrado do primeiro número: %f\n", square_first(&a, &b));
    printf("A raiz quadrada da soma dos quadrados: %f\n", sqrt_of_square_sum(&a, &b));
    printf("O seno da diferença do primeiro número pelo segundo: %f\n", sin_of_dif(&a, &b));
    printf("O módulo do primeiro número: %f\n", module(&a, &b));


    return 0;
}


float sum(float *a,float *b){
    return *a + *b;
}

float multiply_square(float *a, float *b){

    return *a * pow(*b, 2);
}

float square_first(float *a, float *b){
    return pow(*a, 2);
}

float sqrt_of_square_sum(float *a, float *b){
    return sqrt(pow(*a, 2) + pow(*b, 2));
}

float sin_of_dif(float *a, float *b){
    return sin(*a - *b);
}

float module(float *a, float *b){
    return abs(*a);
}
