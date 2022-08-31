#include <stdio.h> 



long long fat(int n);


int main(void){

    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);

    printf("%d! = %lld\n", n, fat(n));

    return 0;
}




long long fat(int n){

    long long fatorial = 1;
    for (; n > 0 ; n--){

        fatorial *= n;
    }

    return fatorial;
}