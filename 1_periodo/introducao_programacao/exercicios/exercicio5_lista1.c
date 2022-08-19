#include <stdio.h>

#define mercury_gravity 3.70
#define venus_gravity 8.87
#define mars_gravity 3.72
#define jupiter_gravity 24.79
#define saturn_gravity 10.44
#define uranus_gravity 8.87
#define neptune_gravity 11.15
#define pluto_gravity 0.60





void choose_planet(float *earth_weight);
void print_new_weight(float new_weight);

float mercury_weight(float *earth_weight);
float venus_weight(float *earth_weight);
float mars_weight(float *earth_weight);
float jupiter_weight(float *earth_weight);
float saturn_weight(float *earth_weight);
float uranus_weight(float *earth_weight);
float neptune_weight(float *earth_weight);
float pluto_weight(float *earth_weight);

int main(void){

    float earth_weight;

    printf("\nDigite o seu peso no planeta terra: ");
    scanf("%f", &earth_weight);

    choose_planet(&earth_weight);
    

    return 0;
}

void choose_planet(float *earth_weight){

    int choice;
    printf("Choose a planet from the list: \n");
    printf("1) Mercury\n");
    printf("2) Venus\n");
    printf("3) Mars\n");
    printf("4) Jupiter\n");
    printf("5) Saturn\n");
    printf("6) Uranus\n");
    printf("7) Neptune\n");
    printf("8) Pluto\n");

    scanf("%d", &choice);

    switch (choice){
        case 1:
            print_new_weight(mercury_weight(earth_weight));
            break;

        case 2:
            print_new_weight(venus_weight(earth_weight));
            break;

        case 3:
            print_new_weight(mars_weight(earth_weight));
            break;

        case 4:
            print_new_weight(jupiter_weight(earth_weight));
            break;
        case 5:
            print_new_weight(saturn_weight(earth_weight));
            break;
        case 6:
            print_new_weight(uranus_weight(earth_weight));
            break;

        case 7:
            print_new_weight(neptune_weight(earth_weight));
            break;

        case 8:
            print_new_weight(pluto_weight(earth_weight));
            break;

        default:
            printf("Escolha inválida.\n");
            break;
    }



}


void print_new_weight(float new_weight){
    printf("Your weight on this planet is: %.2f\n", new_weight);
    return;
}


float mercury_weight(float *earth_weight){
    return *earth_weight / 9.80 * mercury_gravity;
}

float venus_weight(float *earth_weight){
    return *earth_weight / 9.80 * venus_gravity;
}

float mars_weight(float *earth_weight){
    return *earth_weight / 9.80 * mars_gravity;
}

float jupiter_weight(float *earth_weight){
    return *earth_weight / 9.80 * jupiter_gravity;
}

float saturn_weight(float *earth_weight){
    return *earth_weight / 9.80 * saturn_gravity;
}

float uranus_weight(float *earth_weight){
    return *earth_weight / 9.80 * uranus_gravity;
}

float neptune_weight(float *earth_weight){
    return *earth_weight / 9.80 * neptune_gravity;
}

float pluto_weight(float *earth_weight){
    return *earth_weight / 9.80 * pluto_gravity;
}
