#include <stdio.h>




int main(void){

    int verified = 0;
    int x,y;

    do {

        printf("Digite os valores de x e y: ");
        scanf("%d %d", &x, &y);

        if ( (x > 0)
             && (y > 0)
             && (x % 2 == 0)
             && (y % 2 == 0)
             && ( x < y)){

            verified = 1;
            
            } else if ((x % 2 != 0) || (y % 2 != 0)) {
                printf("Apenas número pares são aceitos.\n");
            } else if ((x <= 0) || (y <= 0)){
                printf("Apenas números positivos são aceitos.\n");
            } else {
                printf("x deve ser menor do que y.\n");
            }


    } while ( verified == 0);


    printf("\n");

    for ( int line = 0 ; line < (y - x) / 2; line ++){

        int space, asterisk;

        space = ((y - x) - 2 * line) / 2 - 1; 
        asterisk = x + 2 * line - 1;


        for (int i = 0; i < space; i++){
            printf(" ");
        }

        for (int i = 0 ; i < asterisk; i++){
            printf("*");
        }
        printf("\n");
    }


    return 0;
}