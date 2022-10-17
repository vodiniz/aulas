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

    FILE *file = fopen("circulos.bin", "rb");

    Circunferencia* list;

    int m,n;
    int circ_counter = 0;

    scanf("%d", &n);
    scanf("%d", &m);

    list = malloc ( (m - n + 1) * sizeof(Circunferencia));

    for ( int i = 0; i < m; i++){

        int x, y;
        double radius;

        printf("CIRC %d\n", i);
        fread(&x, sizeof(int), 1, file);
        printf("%d\t", x);
        fread(&y, sizeof(int), 1, file);
        printf("%d\t", y);
        fread(&radius, sizeof(double), 1, file);
        printf("%lf\t\n", radius);


        if (i >= n - 1){
            printf("SALVO\n");
            Ponto ponto = {x, y};
            Circunferencia circ1 = { ponto, radius};

            list[circ_counter] = circ1;

            circ_counter++;

        }

    }

    for ( int i = 0; i < m - n; i++){

        Circunferencia current;
        current = list[i];

        printf("C%d :\t |", n+i);


        for ( int j = 0; j < m - n; j++){

        double distance = sqrt(pow(current.centro.x - list[j].centro.x, 2) + pow(current.centro.y -list[j].centro.y, 2));

        printf("%g\t", distance);

        }

        printf("\n");

    }


    return 0;
}