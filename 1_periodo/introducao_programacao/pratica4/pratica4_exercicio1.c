#include<stdio.h>

void converterCelsius(float celsius, float *fahrenheit, float *kelvin);


int main(void){

    float celsius, farehnheit,kelvin;

    printf("\nDigite o valor em Celsius: ");
    scanf("%f", &celsius);
    converterCelsius(celsius, &farehnheit, &kelvin);

    printf("\nFahrenheit: %.2f\n", farehnheit);
    printf("\nKelvin: %.2f\n", kelvin);

    return 0;
}


void converterCelsius(float celsius, float *fahrenheit, float *kelvin){

    *fahrenheit = celsius * 9./5. + 32;
    *kelvin = celsius + 273.15;


}
