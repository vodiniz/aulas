#include <stdio.h>


void easter_calculator(int year, int *easter_day, int *easter_month);
void good_friday_calculator(int *easter_day, int *easter_month);
void carnival_calculator(int *year, int *easter_day, int *easter_month);
void corpus_christi_calculator(int *easter_day, int *easter_month);

int is_leap_year(int year);

int main(){

    int year,easter_day, easter_month;

    printf("Digite um ano: ");
    scanf("%d", &year);
    easter_calculator(year, &easter_day, &easter_month);
    good_friday_calculator(&easter_day, &easter_month);
    carnival_calculator(&year, &easter_day, &easter_month);
    corpus_christi_calculator(&easter_day, &easter_month);

    return 0;
}


void easter_calculator(int year, int *easter_day, int *easter_month){

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
    *easter_month =  (H + L - 7 * M + 114) / 31;
    *easter_day = (H + L - 7 * M + 114) % 31 + 1;

    printf("\nPascoa:  %d / %d\n", *easter_day, *easter_month);


}

void good_friday_calculator(int *easter_day, int *easter_month){
    printf("\nSexta-feira Santa: %d / %d", *easter_day - 2, *easter_month);
}

void carnival_calculator(int *year, int *easter_day, int *easter_month){
    int month_carnival = *easter_month;
    int day_carnival = *easter_day;

    int subtract_day = 47;
        if (subtract_day > day_carnival){
            
            if (month_carnival == 1 || 
                month_carnival == 3 ||
                month_carnival == 5 ||
                month_carnival == 7 ||
                month_carnival == 8 ||
                month_carnival == 10 ||
                month_carnival == 12){
                
                day_carnival += 31;
        
            } else if (month_carnival == 4 ||
                        month_carnival == 9 ||
                        month_carnival== 11){

                day_carnival += 30;
            } else if ( is_leap_year(*year)){
                day_carnival += 29;
            } else {
                day_carnival += 28;
            }
            month_carnival -= 1;

        if (subtract_day > day_carnival){
            
            if (month_carnival == 1 || 
                month_carnival == 3 ||
                month_carnival == 5 ||
                month_carnival == 7 ||
                month_carnival == 8 ||
                month_carnival == 10 ||
                month_carnival == 12){
                
                day_carnival += 31;
        
            } else if (month_carnival == 4 ||
                        month_carnival == 9 ||
                        month_carnival == 11){

                day_carnival += 30;
            } else if ( is_leap_year(*year)){
                day_carnival += 29;
            } else {
                day_carnival += 28;
            }

            month_carnival -= 1;

        }

        day_carnival -= subtract_day;

        printf("\nTerça-feira de Carnaval: %d / %d\n", day_carnival, month_carnival);

    }   
}

void corpus_christi_calculator(int *easter_day, int *easter_month){

    int day = *easter_day + 60;
    int month = *easter_month;

    if (month == 1 || 
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12){
        
        if (day > 31){
            month += 1;
            day -= 31;
        } 
    } else {
        if (day > 30){
            month += 1;
            day -= 30;
        } 
    }

    if (month == 1 || 
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12){
        
        if (day > 31){
            month += 1;
            day -= 31;
        } 
    } else {
        if (day > 30){
            month += 1;
            day -= 30;
        } 
    }

    printf("Corpus Christi: %d / %d\n", day, month);
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