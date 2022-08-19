#include <stdio.h>

void print_order(float *a, float *b, float *c);

float lowest_number(float *a, float *b, float *c);

float middle_number(float *a, float *b, float *c);

float highest_number(float *a, float *b, float *c);




int main(void){
    float n1, n2, n3;
    printf("Type 3 numbers: \n");
    scanf("%f %f %f", &n1, &n2, &n3);
    print_order(&n1, &n2, &n3);

}

void print_order(float *a, float *b, float *c){

    int high, middle, low;

    printf("\nlowest: %.2f",lowest_number(a, b, c));
    printf("\nmiddle: %.2f", middle_number(a, b, c));
    printf("\nhighest: %.2f", highest_number(a, b, c));
}


float lowest_number(float *a, float *b, float *c){

    float lowest;

    if ((*a < *b) && (*a < *c)){
        lowest = *a;
    } else if ((*b < *a) && (*b < *c)){
        lowest = *b;
    }else {
        lowest = *c;
    }
    printf("%f", lowest);
    return lowest;
}

float middle_number(float *a, float *b, float *c){

    int middle;

    if ((*a > *b) && (*a < *c)){
        middle = *b;
    } else if ((*b > *a) && (*b < *c)){
        middle = *b;
    }else {
        middle = *c;
    }

    return middle;
}


float highest_number(float *a, float *b, float *c){

    float highest;

    if ((*a > *b) && (*a > *c)){
        highest = *a;
    } else if ((*b > *a) && (*b > *c)){
        highest = *b;
    }else {
        highest = *c;
    }

    return highest;
}



    