#include <stdio.h>

int main(){

    char input;
    int removed_number;



    do{
        int contador = 0;
        scanf("%d", &removed_number);
        if (removed_number == 0){
            break;
        }
        do{

            input = getc(stdin);

            if (input == '\n'){
                if (!contador){
                    printf("0\n");
                } else {
                    printf("\n");
                }
            }

            if ((input == '0' && contador == 0) || input == (removed_number + 48) || input == ' ' || input =='\n'){
                //printf("IF: %c\n", input);
                ;
            } else{
                contador++;
                printf("%c", input);
            }

        } while (input != '\n');
    } while (removed_number);

    return 0;
}
