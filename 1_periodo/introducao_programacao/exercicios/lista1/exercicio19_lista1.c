#include <stdio.h>


float salary_calculator(float *salary, int *productivity);


int main(void){

    int productivity;
    float salary;
    
    printf("Digite o salário base:");
    scanf("%f", &salary);
    printf("Digite a produditivade do funcionário: ");
    scanf("%d", &productivity);


    printf("O salário novo é: R$ %.2f\n", (salary_calculator(&salary, &productivity)));
    return 0;
}


float salary_calculator(float *salary, int *productivity){

    float new_salary;

    switch (*productivity){
    case 1:
        new_salary = *salary * 1.65;
        break;
    case 2:
        new_salary = *salary * 1.35;
        break;

    case 3:
        new_salary = *salary * 0.88;
        break;
    }

    return new_salary;
}