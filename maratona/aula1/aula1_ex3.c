#include <stdio.h>



int main(void){

    float n1, n2, n3, n4, n5, n6;
    
    int count = 0;
    float sum = 0;
    
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);


    if (n1 > 0){
        count++;
        sum+= n1;
    }
    if (n2 > 0){
        count++;
        sum+= n2;

    }
    if (n3 > 0){
        count++;
        sum+= n3;

    }
    if (n4 > 0){
        count++;
        sum+= n4;

    }
    if (n5 > 0){
        count++;
        sum+= n5;

    }
    if (n6 > 0){
        count++;
        sum+= n6;

    }

    printf("%d valores positivos\n", count);
    printf("%.1f", (float) sum / count);

    return 0;
}