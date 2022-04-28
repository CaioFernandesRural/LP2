#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int idade;
    char curso[20];
    int cr;
    int matr;
}alu;

typedef struct
{
    alu aluno;
    int notas[3];
    int faltas;
}alunosmat;

typedef struct
{
    int codigo;
    char nome[20];
    alunosmat turma[40];
}disc;


void criar(disc *dis)
{
    printf("\nnome da disciplina: ");
    gets(dis->nome);

    for (int i = 0; i < 40; i++)
    {
        dis->turma.aluno[i].matr=0;
    }
    
}
void incluir()
{
    
}  