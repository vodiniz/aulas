#include <stdio.h>
#include <string.h>

void moveLetras (char *frase, int pos);

int main(){
    int n, pos;
    char frase[50];

    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", frase);
        scanf("%d", &pos);
        moveLetras(frase, pos);
        printf("%s\n", frase);
    }


    return 0;
}

void moveLetras (char *frase, int pos){
        
    int tam = strlen(frase);
    for(int i = 0; i < tam; i++){
        for(int j = 0; j < pos; j++){
            if (frase[i] == 'A'){
                frase[i] = 'Z';
            }
            else{
                frase[i] -= 1;
            }
        }
    }
} 