#include <stdio.h>
#include <math.h>

#define PI 3.1415926

int main (){

    // Informação ao usuário
    printf("\nDigite a hipotenusa de um triangulo retangulo e o angulo alfa ( em graus )\n");

    //definição das variáveis
    double ang1, ang2, hip, c1, c2;
    double degree_to_rad;

    degree_to_rad = PI / 180.;

    // leitura dos dados
    scanf("%lf %lf", &hip, &ang1);


    
    //cálculo do triangulo
    ang2 = 90. - ang1;
    c1 = sin(ang1 * degree_to_rad) * hip;
    c2 = sin(ang2 * degree_to_rad)  * hip;


    // c1 = (sin(ang1 * degree_to_rad) * (180./PI )) * hip;
    // c2 = (sin(ang2 * degree_to_rad) * (180./PI ))  * hip;
 

    //imprimir os dados

    printf("%f",ang2 * degree_to_rad);
    printf("\n C1 = %.3f",c1);
    printf("\n C2 = %.3f\n",c2);



    return 0;
}