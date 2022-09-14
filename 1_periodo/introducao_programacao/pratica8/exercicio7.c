#include <stdio.h>
#include <string.h>


int get_last_name_index(char str[]);
int get_letter_count(char str[]);
void remove_new_line(char word[]);


int main(){

    char str[70];
    

    printf("Digite o nome completo: ");
    fgets(str, 70, stdin);
    remove_new_line(str);
    printf("\n");

    int str_len = strlen(str);
    int last_name_index = get_last_name_index(str);

    for(int i = last_name_index; i < str_len; i++){
        printf("%c",str[i]);
    }
    printf(", ");

    
    for(int i = 0; i < last_name_index; i++){
        printf("%c",str[i]);
    }
    printf("\n");

    int letters = get_letter_count(str);
    printf("Total de letras: %d\n", letters);
    printf("Total de letras do último sobrenome: %d\n", letters - last_name_index + 2);




    return 0;
}


int get_last_name_index(char str[]){

    for( int i = strlen(str) - 1; i > 0; i--){
        if (str[i] == ' '){
            return i + 1;
        }
    }

    return 0;
}

int get_letter_count(char str[]){
    int index = strlen(str);
    int letter_count = 0;
    for ( int i = 0; i < index; i++){
        if (str[i] != ' '){
            letter_count++;
        }
    }

    return letter_count;
}

void remove_new_line(char word[]){

    int size = strlen(word);

    for(int i = 0; i < size; i++){
        if (word[i] == '\n'){
            word[i] = '\0';
        }
    }

}