#include <stdio.h>

int main (){
    int val1, val2, vitoriaInter = 0, vitoriaGremio = 0, empate = 0, cond;

    scanf("%d%d", &val1, &val2);

    if(val1 > val2){
        vitoriaInter++;
    }
    else if(val2 > val1){
        vitoriaGremio++;
    }
    else{
        empate++;
    }

    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &cond);

    while(cond == 1){
    
        scanf("%d%d", &val1, &val2);

        if(val1 > val2){
            vitoriaInter++;
        }
        else if(val2 > val1){
            vitoriaGremio++;
        }
        else{
            empate++;
        }

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &cond);
    }

    printf("%d grenais\n", vitoriaGremio + vitoriaInter + empate);
    printf("Inter: %d\n", vitoriaInter);
    printf("Gremio: %d\n", vitoriaGremio);
    
    return 0;
}