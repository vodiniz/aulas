#include<stdio.h>

#define _USE_MATH_DEFINES
#include<math.h>

float degress_to_radians(float *value);
float radians_to_degress(float *value);
float celsius_to_kelvin(float *value);
float celsius_to_fahrenheit(float *value);
float fahrenheit_to_celsius(float *value);
float fahrenheit_to_kelvin(float *value);
float kelvin_to_celsius(float *value);
float kelvin_to_fahrenheit(float *value);

void main_menu();
void choose_angle_temperature(int *option1);
void angle_conversion();
void temperature_conversion();





int main(void){

    main_menu();
    return 0;
}






float degress_to_radians(float *value){

    float radians = *value * M_PI/ 180.;
    return radians;
}

float radians_to_degress(float *value){
    float degrees = *value * 180./M_PI;
    return degrees;
}

float celsius_to_kelvin(float *value){
    float kelvin = *value + 273.15;
    return kelvin;
}

float celsius_to_fahrenheit(float *value){
    float fahrenheit = *value * 9./5. + 32;
    return fahrenheit;
}

float fahrenheit_to_celsius(float *value){
    float celsius = (*value - 32) * 5./9.;
    return celsius;
}

float fahrenheit_to_kelvin(float *value){
    float kelvin = (*value - 32) * 5./9. + 273.15;
    return kelvin;
}

float kelvin_to_celsius(float *value){
    float celsius = *value -273.15;
    return celsius;
}

float kelvin_to_fahrenheit(float *value){
    float fahrenheit = (*value - 273.15) * 9./5. + 32;
    return fahrenheit;
}

void main_menu(){

    int option;

    printf("\n### CONVERSOR DE UNIDADES ###");
    printf("\n1) Angulo");
    printf("\n2) Temperatura");
    printf("\nDigite uma opcao:");

    scanf("%d", &option);

    choose_angle_temperature(&option);
}

void choose_angle_temperature(int *option1){

    switch (*option1){

        case 1:
            angle_conversion();
            break;

        case 2:
            temperature_conversion();
            break;
    }
}

void angle_conversion(){

    int option2;
    float value;

    printf("\nQual a unidade de origem?");
    printf("\n1) Graus");
    printf("\n2) Radianos");
    printf("\nSelecione uma opcao: ");

    scanf("%d", &option2);

    switch (option2){
        case 1:
            printf("\nDigite o valor em Graus:");
            scanf("%f", &value);
            printf("\nValor em Radianos: %.2f\n", degress_to_radians(&value));
            break;
        case 2:
            printf("\nDigite o valor em Radianos:");
            scanf("%f", &value);
            printf("\nValor em Graus: %.2f\n", radians_to_degress(&value));
            break;
    }
}


void temperature_conversion(){

    int option2;
    float value;

    printf("\nQual a unidade de origem?");
    printf("\n1) Celsius");
    printf("\n2) Fahrenheit");
    printf("\n3) Kelvin");
    printf("\nSelecione uma opcao: ");

    scanf("%d", &option2);

    switch (option2){

        case 1:
            printf("\nDigite o valor em Celsius: ");
            scanf("%f", &value);
            printf("\nValor em Fahrenheit: %.2f", celsius_to_fahrenheit(&value));
            printf("\nValor em Kelvin: %.2f\n", celsius_to_kelvin(&value));
            break;

        case 2: 
            printf("\nDigite o valor em Fahrenheit: ");
            scanf("%f", &value);
            printf("\nValor em Celsius: %.2f", fahrenheit_to_celsius(&value));
            printf("\nValor em Kelvin: %.2f\n", fahrenheit_to_kelvin(&value));
            break;

        case 3:
            printf("\nDigite o valor em Kelvin: ");
            scanf("%f", &value);
            printf("\nValor em Celsius: %.2f", kelvin_to_celsius(&value));
            printf("\nValor em Fahrenheit: %.2f\n", kelvin_to_fahrenheit(&value));
            break;

    }
}