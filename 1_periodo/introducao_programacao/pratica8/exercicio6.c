#include <stdio.h>
#include <string.h>


void remove_new_line(char word[]);


int main(void){

    char word[100];
    while(1){
    
        printf("\nDigite uma palavra ou FIM para sair: ");
        fgets(word, 100, stdin);
        remove_new_line(word);

        if ( strcmp("FIM", word) == 0){
            break;
        }

        int begin = 0;
        int end = strlen(word) - 1;
        int palindrome = 0;
        while (end > begin){
            if (word[begin++] != word[end--]){
                printf("%s não é um palíndromo\n", word);
                break;
            }
            palindrome = 1;
        }
        if (palindrome){ 
            printf("%s é um palíndromo", word);
        }
    }


    return 0;
}

void remove_new_line(char word[]){

    int size = strlen(word);

    for(int i = 0; i < size; i++){
        if (word[i] == '\n'){
            word[i] = '\0';
        }
    }

}