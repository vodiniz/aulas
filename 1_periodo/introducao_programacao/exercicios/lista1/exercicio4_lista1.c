#include <stdio.h>


float profit_calculator(float *price);


int main(void){

    float price;
    printf("Digite o preço do produto e o lucro será calculado.\n");

    scanf("%f", &price);

    printf("Valor de venda: %f\n",profit_calculator(&price));

    return 0;
}

float profit_calculator(float *price){

    if (*price < 20){
        return *price * 1.45;
    } else {
        return *price * 1.30;
    }
}