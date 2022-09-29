#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
    int freq;
} Aluno ;

void change_to_dat(char name[]);

int main(void){

    char nome_arquivo[50];

    printf("Digite o nome do arquivo:");
    scanf("%s", nome_arquivo);

    FILE *arquivo = fopen(nome_arquivo, "r");
    change_to_dat(nome_arquivo);

    FILE *arquivo_binario = fopen(nome_arquivo, "wb");

    int n;
    float soma_nota = 0;
    int soma_freq = 0;
    int aprovado = 0;

    fscanf(arquivo, "%d", &n);
    fwrite(&n, sizeof(int), 1, arquivo_binario);


    Aluno alunos[30];

    for(int i = 0; i < n; i++){
        fscanf(arquivo, "%s %f %d", alunos[i].nome, &alunos[i].nota, &alunos[i].freq);
        fwrite(&alunos[i].nome, sizeof(char), strlen(alunos[i].nome), arquivo_binario);
        fwrite(&alunos[i].nota, sizeof(float), 1, arquivo_binario);
        fwrite(&alunos[i].freq, sizeof(int), 1, arquivo_binario);

        soma_nota += alunos[i].nota;
        soma_freq += alunos[i].freq;
        if (alunos[i].nota >= 6){
            aprovado++;
        }
    }

    printf("Nota média: %.1f\n", soma_nota/n);
    printf("Frequência média: %d%%\n", soma_freq/n);
    printf("Percentual de aprovação: %.0f%%\n",((float)aprovado/n) * 100.);
    printf("Nome dos alunos com nota acima da nota média:\n");

    for(int i = 0; i < n; i++){
        if (alunos[i].nota >= 6){
            printf("%s\n", alunos[i].nome);
        }
    }

    fclose(arquivo_binario);
    fclose(arquivo);
    return 0;
}

void change_to_dat( char name[]){
    int lenght = strlen(name);
    
    name[lenght - 1] = 't';
    name[lenght - 2] = 'a';
    name[lenght - 3] = 'd';
}
