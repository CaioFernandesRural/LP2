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
    dis->codigo = 420;

    printf("\nnome da disciplina: ");
    gets(dis->nome);

    for (int i = 0; i < 40; i++)
    {
        dis->turma[i].aluno.matr=0;
    }
    printf("\nDisciplina %s criada.",dis->nome);
    
}
void incluir(disc * dis)
{
    for(int i = 0; i < 40; i++)
    {
        if (dis->turma[i].aluno.matr=0)
        {
            printf("\n\nNome: ");
            fflush(stdin);
            gets(dis->turma[i].aluno.nome);
            printf("Idade: ");
            scanf("%d",&dis->turma[i].aluno.idade);
            printf("CR:");
            scanf("%f", &dis->turma[i].aluno.cr);
            printf("Matricula:");
            scanf("%ld", &dis->turma[i].aluno.matr);

            break;
        }
        else
        {
            printf("\nsem vaga porra.");
        }
        
    }
} 
void listar (disc dis)
{
    int con=0;

    for (int i = 0; i < 40; i++)
    {
        if (dis.turma[i].aluno.matr != 0)
        {
            con=1;

            printf("\n\nNome: %s Matricula: %d Idade: %d CR: %d", dis.turma[i].aluno.nome,
            dis.turma[i].aluno.matr, dis.turma[i].aluno.idade, dis.turma[i].aluno.cr);
        }
        
    }
    if(con==0)
    {
        printf("\nTurma vazia.");
    }   
}
void crmedio (disc dis)
{
    float som, con, med;

    for (int i = 0; i < 40; i++)
    {
        if (dis.turma[i].aluno.matr != 0)
        {
            som += dis.turma[i].aluno.cr;
            con++;
        }
    }
    med = som/con;
    printf("\n\nMedia: %.2f", med);
}
void boletim (disc dis)
{
    int con=0;

    for (int i = 0; i < 40; i++)
    {
        if (dis.turma[i].aluno.matr != 0)
        {
            con=1;

            printf("Nome: %s Matricula: %d Nota1: %d Nota2: %d Nota3: %d Faltas: %d Cr: %.2f", 
            dis.turma[i].aluno.nome,
            dis.turma[i].aluno.matr, dis.turma[i].notas[0], dis.turma[i].notas[1],
            dis.turma[i].notas[2], dis.turma[i].faltas, dis.turma[i].aluno.cr);
        }
    }
    if(con==0)
    {
        printf("\nTurma vazia.");
    }   
    
}