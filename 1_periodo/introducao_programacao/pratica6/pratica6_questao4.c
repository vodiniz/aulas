#include <stdio.h>
#include <math.h>


double calculate_pi( int n);


int main(void){


    int count;
    printf("Digite o número de termos: ");


    scanf("%d", &count);
    
    printf("pi = %.4lf\n", calculate_pi(count));
    return 0;
}


double calculate_pi( int n){

    double s = 1;
    double x = 3;
    int subtract = 1;


    for (int i = 1; i < n; i++){
        /* code */

        if (subtract){
        s -= 1/(pow(x,3));
        subtract = 0;
        } else {
            s += 1/(pow(x,3));
            subtract = 1;
        }

        x += 2;
    }
    return pow( s * 32, (1./3.));
}
