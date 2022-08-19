#include <stdio.h>
#include <ctype.h>

int main(void){


    char input;

    printf("Digite uma letra/símbolo: ");
    scanf("%c", &input);

    if (isupper(input)){
        printf("É uma letra maiúscula (A-Z).\n");
    } else if (islower(input)){
        printf(" é uma letra minúscula (a-z).\n");
    } else {
        printf("É um símbolo ou número (!, @, #, $, %%, 1, 2, 3, etc).\n");
    }

    return 0;
}