#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice_roll();

int main(void){

    int guess, roll;
    printf("Faça uma previsão do dado:");
    scanf("%d", &guess);

    roll = dice_roll();

    printf("Valor do dado: %d\n", roll);
    
    if (roll == guess){
        printf("Parabéns, você acertou!\n");
    } else {
        printf("Você Errou!\n");
    }


    return 0;
}


int dice_roll(){

    srand(time(NULL));

    int dice_number = rand() % 6 + 1; 

    return dice_number;
}