#include<stdio.h>


int calculaMinutos(int *hinicio, int *mininicio, int *htermino, int *mintermino);


int main(void){

    int hinicio, mininicio, htermino, mintermino;
    printf("\nEntre com o horário de início: ");
    scanf("%d %d", &hinicio, &mininicio);
    printf("\nEntre com o horário de término: ");
    scanf("%d %d", &htermino, &mintermino);

    int duracao = calculaMinutos(&hinicio, &mininicio, &htermino, &mintermino);

    printf("\nDuração: %d minutos", duracao);

    return 0;
}


int calculaMinutos(int *hinicio, int *mininicio, int *htermino, int *mintermino){

    int duracao;

    if (*htermino < *hinicio){
        duracao = ((24 - *hinicio) + *htermino) * 60;
        duracao += *mintermino - *mininicio; 
         
    } else {
        duracao = (*htermino - *hinicio) * 60;
        duracao += *mintermino - *mininicio; 
    }
    return duracao;
}
