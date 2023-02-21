#include <stdio.h>

int validate_first_digit(long cpf);
int validate_second_digit(long cpf);



int main(void){

    long cpf;

    printf("Digite o CPF: ");
    scanf("%ld", &cpf);
    
    if ((validate_first_digit(cpf)) && validate_second_digit(cpf)){
        printf("Válido!\n");
    } else {
        printf("Inválido!\n");
        
    }


    return 0;
}



int validate_first_digit(long cpf){

    long digits = cpf / 100;
    long digit;
    long second_last_digit = cpf / 10 % 10;
    long sum = 0;
    int counter = 2;
    while (digits != 0) {
  
        digit = digits % 10;
        sum += digit * counter;
        digits /= 10;
        counter ++;
    }

    if ((sum * 10 % 11) == second_last_digit){
        validate_second_digit(cpf);
        return 1;
    } else if ((sum * 10 % 11) == 10 && second_last_digit ==0){
        return 1;
    } 

    return 0;
}

int validate_second_digit(long cpf){

    long last_digit = cpf % 10;
    long digits = cpf / 10;
    long digit;
    long sum = 0;
    int counter = 2;
    while (digits != 0) {
  
        digit = digits % 10;
        sum += digit * counter;
        digits /= 10;
        counter ++;
    }

    if ((sum * 10 % 11) == last_digit){
        printf("%d\n", sum * 10 % 11);
        return 1;
    } else if ((sum * 10 % 11) == 10 && last_digit == 0){
        return 1;
    } 

    return 0;
}
