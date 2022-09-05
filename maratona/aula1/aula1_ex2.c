#include <stdio.h>



int main(void){

    float n1, n2, n3, n4, n5, n6;
    
    int count = 0;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);
    printf("\n");



    if (n1 > 0){
        count++;
    }
    if (n2 > 0){
        count++;
    }
    if (n3 > 0){
        count++;
    }
    if (n4 > 0){
        count++;
    }
    if (n5 > 0){
        count++;
    }
    if (n6 > 0){
        count++;
    }

    printf("%d valores positivos", count);

    return 0;
}