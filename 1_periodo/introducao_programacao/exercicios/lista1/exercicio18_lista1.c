#include <stdio.h>

#define IS_ODD(a) a % 2

int main(void){

    int a;

    printf("Descubra se o número é par ou impar: ");
    scanf("%d", &a);
    if (IS_ODD(a)){
        printf("É impar.\n");
    } else {
        printf("É par.\n");
    }


    return 0;
}