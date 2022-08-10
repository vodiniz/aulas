#include <stdio.h>
#include <math.h>



int main (void){

    float peso, altura, imc;

    printf("Entre com o peso: ");
    scanf("%f", &peso);
    printf("Entre com a altura: ");
    scanf("%f", &altura);


    imc = (peso)/(pow(altura, 2));

    if (imc < 18.5){
        printf("Abaixo do peso");
    } else if (imc < 25){
        printf("Peso normal");
    } else if (imc < 30){
        printf("Acima do peso");
    } else {
        printf("Obeso");

    }
    
    return 0;
}