#include <stdio.h>
#include <stdlib.h>
#include <math.h>



typedef struct{
    int x;
    int y;
}Ponto;


typedef struct{
    Ponto centro;
    double raio;
}Circunferencia;



int main(void){

    FILE *file = fopen("circulos.txt", "r");

    int n;
    int x, y, radius;
    int inscrito = 0;
    int c_counter = 1;
    int c_number;

    Circunferencia* list;

    scanf("%d", &n);
    list = malloc ( n * sizeof(Circunferencia));

    for ( int i = 0; i < n; i++){

        fscanf(file, "%d", &x);
        fscanf(file, "%d", &y);
        fscanf(file, "%d", &radius);


        Ponto ponto = {x, y};
        Circunferencia circ1 = { ponto, radius};

        list[i] = circ1;
    }

    Circunferencia biggest = list[0];

    for ( int i = 0; i < n; i++){
        if (biggest.raio < list[i].raio ){
            biggest = list[i];
            c_number = c_counter;
        }
        c_counter++;
    }

    for ( int i = 0; i < n; i++){
       if (biggest.centro.x != list[i].centro.x && 
       list[0].centro.y != biggest.centro.y){
        int d = sqrt(pow(list[i].centro.x - biggest.centro.x, 2) + pow(list[i].centro.y - biggest.centro.y, 2));
        if(d < biggest.raio - list[i].raio){
            inscrito++;
        }
       }
    }

    printf("Maior circulo = C%d\n", c_number);
    printf("Coordenadas:\n");
    printf("\tX = %d\n", biggest.centro.x);
    printf("\tY = %d\n", biggest.centro.y);
    printf("Quantidade de circunferencias inscritas: %d circunferencias\n", inscrito);

    free(list);

    return 0;
}