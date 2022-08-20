#include <stdio.h>


int main(void){

    int age;
    printf("Digite sua idade: ");
    scanf("%d", &age);

    if (age < 16){
        printf("\nNão-eleitor\n");
    } else if (age < 18 || age > 65){
        printf("Eleitor facultativo\n");
    } else {
        printf("Eleitor obrigatório\n");
    }
    return 0;
}