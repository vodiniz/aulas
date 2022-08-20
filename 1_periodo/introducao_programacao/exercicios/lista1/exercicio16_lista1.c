#include <stdio.h>

void ord3(int *a, int *b, int *c);

int main(){
    
    int a, b, c;
    printf("\nEntre com os números: \n\n");

    scanf("%d %d %d", &a, &b, &c);

    ord3(&a, &b, &c);

    printf("%d, %d, %d\n", a, b, c);
    return 0;
}

void ord3(int *a, int *b, int *c){

    int menor, maior, intermediario;

    if ((*a < *b) && (*b < *c)){

        menor = *a ;
        intermediario = *b;
        maior = *c;

    }  else if ((*a < *c) && (*c < *b)){

        menor = *a ;
        intermediario = *c;
        maior = *b;

    } else if ((*b < *a) && (*a < *c)){

        menor = *b ;
        intermediario = *a;
        maior = *c;

    } else if ((*b < *c) && (*c < *a)){

        menor = *b ;
        intermediario = *c;
        maior = *a;

    }  else if ((*c < *b ) && (*b < *a)){

        menor = *c ;
        intermediario = *b;
        maior = *a;
    }   else if ((*c < *a ) && (*a < *b)){

        menor = *c ;
        intermediario = *a;
        maior = *b;
    }
    *a = menor;
    *b = intermediario;
    *c = maior;

}