#include <stdio.h>
#include <math.h>



float imc(float *weight, float *height);

int main(void){

    float weight, height;
    printf("Digite seu peso(kg) e sua altura(m) :");
    scanf("%f %f", &weight, &height);

    printf("IMC = %f", imc(&weight, &height));
    return 0;
}


float imc(float *weight, float *height){
    return (*weight)/pow(*height, 2);
}
