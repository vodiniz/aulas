#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main(void){

    int n;
    scanf("%d", &n);

    while ((getchar()) != '\n');

    char input[100];
    char number1[100];
    char number2[100];
    int n1, n2;

    for ( int i = 0; i < n; i ++){
        fgets(input, 100, stdin);
        int len = strlen(input);
        int op_index = 0;
        if (!strcmp("P=NP\n", input)){
            printf("skipped\n");
        } else {
            for ( int j = 0; j < len; j++){
                if ( input[j] == '+'){
                    op_index = j;
                }
            }

            for ( int j = 0; j < op_index; j++){
                number1[j] = input[j];
            }

            number1[op_index] = '\0';
            // printf("op_index: %d\n", op_index);
            // printf("string1: %s\n", number1);

            int pos = 0;
            for ( int j = op_index+1; j < len; j++){
                number2[pos] = input[j];
                pos++;
            }
            number2[len - 1] = '\0';
            n1 = atoi(number1);
            n2 = atoi(number2);

            // printf("n1: %d\n", n1);
            // printf("n2: %d\n", n2);


            printf("%d\n", n1 + n2);

        }
    }




    return 0;
}