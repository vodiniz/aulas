#include <stdio.h>
#include <string.h>

int main(void){

    char str[100];
    fgets(str, 100, stdin);
    int size = strlen(str);
    for(int i = 0; i < size; i++){

        if (str[i] == 'a'){
            str[i] = '@';
        } else if (str[i] == 'e'){
            str[i] = '_';
        } else if (str[i] == 'i'){
            str[i] = '|';
        } else if (str[i] == 'o'){
            str[i] = '0';
        } else if (str[i] == 'u'){
            str[i] = '#';
        } else if (str[i] == 's'){
            str[i] = '$';
        }
    }

    printf("%s", str);


    return 0;
}