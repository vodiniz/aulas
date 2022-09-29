#include <stdio.h>


typedef struct {
    int numerador;
    int denominador;
} Racional ;

int check_equal(Racional *r1, Racional *r2);
int mmc(int num1, int num2);
int mdc(int num1, int num2);

int main (void){

    Racional r1, r2;

    printf("Digite numerador e denominador de r1: ");
    scanf("%d %d", &r1.numerador, &r1.denominador);

    printf("Digite numerador e denominador de r2: ");
    scanf("%d %d", &r2.numerador, &r2.denominador);


    if(check_equal(&r1, &r2)){
        int n = mdc(r1.denominador, r2.denominador);
        printf("\nr1 e r2 são iguais a (%d/%d)!\n", r1.numerador/(r1.denominador / n) , n);
    } else {
        printf("r1 e r2 são diferentes!\n");
    }

    return 0;
}


int check_equal(Racional *r1, Racional *r2){

    int mmc_number = mmc((*r1).denominador, (*r2).denominador );
    //printf("%d", mmc_number);

    if ((mmc_number / r1->denominador ) * r1 ->numerador ==  (mmc_number / r2->denominador ) * r2 ->numerador) {
        return 1;
    } 
    return 0;
}

int mmc(int num1, int num2) {

    int mmc, aux, i;

    for (i = 1; i <= num2; i++) {
        aux = num1 * i;
        if ((aux % num2) == 0) {
            mmc = aux;
            i = num2 + 1;
        }
    }
    return mmc;
}

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}