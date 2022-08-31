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
            
            } else {
                printf("Apenas números positivos são aceitos.\n");
            }


    } while ( verified == 0);


    printf("\n");

    for ( int line = 0 ; line < (y - x) / 2; line ++){

        int space, astherisc;

        space = ((y - x) - 2 * line) / 2 - 1; 
        astherisc = x + 2 * line - 1;


        for (int i = 0; i < space; i++){
            //printf("%d", i);
            printf(" ");
        }

        for (int i = 0 ; i < astherisc; i++){
            printf("*");
        }
        
        for (int i = 0; i < space; i++){
            printf(" ");
        }

        printf("\n");
    }






    return 0;
}