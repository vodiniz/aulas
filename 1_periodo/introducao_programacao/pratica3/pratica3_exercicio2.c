#include <stdio.h>



int main (void){


    printf("\nEntre com os números: \n\n");

    int n1, n2, n3;
    int menor, intermediario, maior;

    scanf("%d %d %d",&n1, &n2, &n3) ;

    if ((n1 < n2) && (n2 < n3)){

        menor = n1 ;
        intermediario = n2;
        maior = n3;

    }  else if ((n1 < n3) && (n3 < n2)){

        menor = n1 ;
        intermediario = n3;
        maior = n2;

    } else if ((n2 < n1) && (n1 < n3)){

        menor = n2 ;
        intermediario = n1;
        maior = n3;

    } else if ((n2 < n3) && (n3 < n1)){

        menor = n2 ;
        intermediario = n3;
        maior = n1;

    }  else if ((n3 < n2 ) && (n2 < n1)){

        menor = n3 ;
        intermediario = n2;
        maior = n1;
    }   else if ((n3 < n1 ) && (n1 < n2)){

        menor = n3 ;
        intermediario = n1;
        maior = n2;
    }


    printf("\nMenor: %d\n", menor);
    printf("\nIntermediário: %d\n", intermediario);
    printf("\nMaior: %d\n", maior);
    return 0;
}