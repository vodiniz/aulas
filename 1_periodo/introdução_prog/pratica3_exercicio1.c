#include <stdio.h>



int main (void){


    printf("\n Entre com o ano: \n");

    int ano;

    scanf("%d", &ano);

    if (ano % 4 == 0) {

        if ((ano % 100) != 0){

            printf("O ano %d é bissexto\n", ano);

        } else if ((ano % 400) == 0){
            printf("O ano %d é bissexto\n", ano);
        } 


    } else {
        printf("O ano %d não é bissexto\n", ano);
    }

    return 0;
}