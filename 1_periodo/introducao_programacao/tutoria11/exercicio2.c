#include <stdio.h>
#include <string.h>


char to_lower(char letter);
char to_upper(char letter);

int odd = 1;

int main(void){

    char sentence[50];
    fgets(sentence, 50, stdin);

    int string_lenght = strlen(sentence);

    for (int i = 0; i < string_lenght; i++){
        if (sentence[i] != ' ' && odd){
            sentence[i] = to_upper(sentence[i]);
            odd = 0;
        } else if (sentence[i] != ' ' && !odd){
            sentence[i] = to_lower(sentence[i]);
            odd = 1;
        }
    }

    printf("%s", sentence);
    return 0;
}


char to_lower(char letter){
    if ((int) letter > 64 && letter < 91){
        return (char) (letter + 32);
    } 
    return letter;
}

char to_upper(char letter){
    if ( letter > 96 && letter < 123){
        return (char) (letter - 32);
    } 
    return letter;
}
