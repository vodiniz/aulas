#include <stdio.h>

int is_leap_year(int year);

int main(void){

    int year;
    printf("Digite um ano: ");
    scanf("%d", &year);

    if (is_leap_year(year)){
        printf("\nAno bissexto.\n");
    } else {
        printf("\nAno não é bissexto.\n");
    }


    return 0;
}


int is_leap_year(int year){

    if (year % 4 == 0) {
        if ((year % 100) != 0){
            return 1;
        } else if ((year % 400) == 0){
            return 1;
        }
    } else {
        return 0;
    }
    return 0;
}