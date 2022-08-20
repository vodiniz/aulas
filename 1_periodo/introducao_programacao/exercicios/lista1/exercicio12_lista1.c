#include <stdio.h>



void return_parts(float *number, int *int_part, float *float_part);


int main(void){


    float number, float_part;
    int int_part;

    printf("Digite um número: ");
    scanf("%f", &number);
    return_parts(&number, &int_part, &float_part);
    printf("Parte inteira: %d \n", int_part);
    printf("Parte decimal: %.2f\n", float_part);

    return 0;
}



void return_parts(float *number, int *int_part, float *float_part){

    *int_part = (int)*number;

    *float_part = *number - (float)*int_part;

}
