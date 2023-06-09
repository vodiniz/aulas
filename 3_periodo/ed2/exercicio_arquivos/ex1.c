#include <stdio.h>


typedef struct {

    int matricula;
    char nome[30];
    float notas[3];
    int faltas;

} Aluno;


char calcular_conceito(Aluno aluno);




int main(void){


    Aluno aluno;
    FILE *arq_alunos, *arq_conceitos;

    if ((arq_alunos = fopen("alunos.txt", "r")) == NULL){
        printf("Arquivo alunos não existe.\n");
        return 0;
    }

    if ((arq_conceitos = fopen("conceitos.txt", "w")) == NULL){
        printf("Erro na criação do arquivo.\n");
        return 0;
    }


    while(
        fscanf(arq_alunos, "%d %[A-Z a-z] %f %f %f %d", 
        &aluno.matricula,
        aluno.nome,
        &aluno.notas[1],
        &aluno.notas[2],
        &aluno.notas[3],
        &aluno.faltas)
    ){

        printf("%d %s %c\n", aluno.matricula, aluno.nome, calcular_conceito(aluno));
        fprintf(arq_conceitos, "%d %s %c\n", aluno.matricula, aluno.nome, calcular_conceito(aluno));

    };
    
    fclose(arq_alunos);
    fclose(arq_conceitos);


    return 0;
}



char calcular_conceito(Aluno aluno){

    float media = 0;

    for(int i = 0; i < 2; i++)
        media += aluno.notas[i]/3;


    if (aluno.faltas > 18)
        return 'F';

    else if (media < 6)
        return 'R';
    else if (media  < 7.5)
        return 'C';
    else if (media  < 9.0)
        return 'B';
    else
        return 'A';

}

