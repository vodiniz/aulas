#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
    int freq;
} Aluno ;

int main(void){

    FILE *arquivo = fopen("alunos.txt", "r");
    int n;
    float soma_nota = 0;
    int soma_freq = 0;
    int aprovado = 0;

    fscanf(arquivo, "%d", &n);

    Aluno alunos[30];

    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%s %f %d", alunos[i].nome, &alunos[i].nota, &alunos[i].freq);
        soma_nota += alunos[i].nota;
        soma_freq += alunos[i].freq;
        if (alunos[i].nota >= 6){
            aprovado++;
        }
    }

    printf("Nota média: %.1f\n", soma_nota/n);
    printf("Frequência média: %d%%\n", soma_freq/n);
    printf("Percentual de aprovação: %.0f%%\n",((float)aprovado/n) * 100.);
    printf("Nomes dos alunos com nota acima da média:\n");

    for(int i = 0; i < n; i++){
        if (alunos[i].nota >= 6){
            printf("%s\n", alunos[i].nome);
        }
    }
    
    fclose(arquivo);

    return 0;
}
