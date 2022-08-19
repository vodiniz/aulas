#include <stdio.h>


void holiday_calculator(int year);

int main(){

    int year;

    printf("Digite um ano: ");
    scanf("%d", &year);
    holiday_calculator(year);


    return 0;
}


void holiday_calculator(int year){

    int month, day;
    int A, B, C, D, E, F, G, H, I, K, L, M;

    A = year % 19;
    B = year / 100;
    C = year % 100;
    D = B / 4;
    E = B % 4;
    F = (B + 8) / 25;
    G = (B - F + 1) / 3;
    H = (19 * A + B - D - G + 15) % 30;
    I = C / 4;
    K = C % 4;
    L = (32 + 2 * E + 2 * I - H - K) % 7;
    M = (A + 11 * H + 22 * L) / 451;
    month =  (H + L - 7 * M + 114) / 31;
    day = (H + L - 7 * M + 114) % 31 + 1;

    printf("\nMes : %d, Dia: %d\n", month, day);

}