#include<stdio.h>

int main (void){

    //declaração variaveis
    float celsius, fahrenheit, kelvin;
    printf("Entre com o valor em graus Celsius: ");

    //modificar valor das variaveis
    scanf("%f", &celsius);

    //definir valor de farenheit
    fahrenheit = (9./5.) * celsius + 32;
    kelvin = celsius + 273.15;

    //print do resultado
    printf("\nCelsius: c = %.2f", celsius);
    printf("\nFahrenheit: f = %.2f", fahrenheit);
    printf("\nKelvin: k = %.2f\n", kelvin);
    return 0;
}