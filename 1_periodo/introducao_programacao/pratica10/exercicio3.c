#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    float nota;
    int freq; 
} Aluno ;

void get_aluno(int counter, Aluno vec[]);


int main(void){

    int aluno_counter = 0;
    int op;
    Aluno vec_aluno[30];
    printf("Digite 1 para entrar um aluno ou 0 para encerrar: ");
    scanf("%d", &op);
    
    while (op && aluno_counter < 30){

        get_aluno(aluno_counter, vec_aluno);
        aluno_counter++;
        printf("Digite 1 para entrar um aluno ou 0 para encerrar: ");
        scanf("%d", &op);
        
    }

    // for ( int i = 0; i < aluno_counter; i++){
    //     printf("%s %f %d\n\n", vec_aluno[i].nome, vec_aluno[i].nota, vec_aluno[i].freq);
    // }

    FILE *arquivo = fopen("alunos.txt", "wr");
    fprintf(arquivo, "%d\n", aluno_counter);
    
    for ( int i = 0; i < aluno_counter; i++){
        fprintf(arquivo, "%s %.1f %d\n", vec_aluno[i].nome, vec_aluno[i].nota, vec_aluno[i].freq);
    }

    fclose(arquivo);

    return 0;
}

void get_aluno(int counter, Aluno vec[]){

    Aluno aluno;

    scanf("%s", aluno.nome);
    scanf("%f", &aluno.nota);
    scanf("%d", &aluno.freq);

    vec[counter] = aluno;

}