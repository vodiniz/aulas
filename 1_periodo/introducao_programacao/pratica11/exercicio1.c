#include <stdio.h>
#include <stdlib.h>


void order_vector(int vec[], int len);



int main(void){

    int n;
    float media = 0;
    int abaixo = 0;
    int acima = 0;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    int *vec = malloc(n*sizeof(int));

    printf("Digite os valores do vetor: ");
    for (int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        media += vec[i];
    }

    media = media/n;

    printf("A média é: %.2g\n", media);
    

    for (int i = 0; i < n; i++){

        if (vec[i] < media){
            abaixo++;
        } else {
            acima++;
        }
    }

    int *vec_acima = malloc(acima*sizeof(int));
    int *vec_abaixo = malloc(abaixo*sizeof(int));

    order_vector(vec, n);


    printf("Vetor com os valores abaixo da média: [ ");
    for(int i = 0; i < abaixo; i++){
        vec_abaixo[i] = vec[i];
        printf("%d ", vec_abaixo[i]);
    }
    printf("]\n");

    printf("Vetor com os valores iguais ou acima da média: [ ");
    for(int i = 0; i < acima; i++){
        vec_acima[i] = vec[i+abaixo];
        printf("%d ", vec_acima[i]);
    }
    printf("]\n");
    
    free(vec_acima);
    free(vec_abaixo);
    free(vec);

    return 0;
}

void order_vector(int vec[], int len){
    
    for (int i = 0; i < len; i++){
		for (int j = 0; j < len; j++){
			if (vec[j] > vec[i]){
				int tmp = vec[i];        
				vec[i] = vec[j];           
				vec[j] = tmp;   
			}  
		}
	}
}