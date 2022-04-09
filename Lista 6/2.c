#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade, cr, matricula;
    char curso[20];
}aluno;

typedef struct
{
    aluno aluno;
    float notas[4];
    int faltas;
}alunosmat;

typedef struct
{
    int codigo;
    char nomedi[20];
    alunosmat turma[40];
}disciplina;

main()
{//tentei habilitar a possibilidade de ter multiplas disciplinas mas não consegui.
    disciplina disciplina; 
    int escolha, matricula, cvaga=0, ccr=0;
    float crm, med;

    while(1>0)
    {
        printf("\n1-CRIAR DISCIPLINA");
        printf("\n2-INCLUIR ALUNO");
        printf("\n3-EXCLUIR ALUNO");
        printf("\n4-LISTAR ALUNOS");
        printf("\n5-CALCULAR CR MEDIO");
        printf("\n6-IMPRIMIR BOLETIM");
        printf("\n7-FECHAR DISCIPLINA");
        printf("\n8-SAIR");
        printf("\nESCOLHA: ");
        scanf("%d",&escolha);

        if(escolha==1)
        {
            printf("\nNome da nova disciplina: ");
            scanf("%s",&disciplina.nomedi);
            printf("\nCodigo da nova disciplina: ");
            scanf("%d",&disciplina.codigo);
            for(int c=0;c<40;c++)
            {
                disciplina.turma[c].aluno.matricula=0;
            }

        }
        else if(escolha==2)
        {
            for(int c=0;c<40;c++)
            {
                if(disciplina.turma[c].aluno.matricula == 0)
                {
                    printf("\nDigite a matricula do aluno: ");
                    scanf("%d",&disciplina.turma[c].aluno.matricula);
                    
                    printf("\nNome do aluno: ");
                    scanf("%s",&disciplina.turma[c].aluno.nome);

                    printf("\nIdade do aluno: ");
                    scanf("%d",&disciplina.turma[c].aluno.idade);
                    
                    printf("\nCurso do aluno: ");
                    scanf("%s",&disciplina.turma[c].aluno.curso);

                    printf("\nCR do aluno: ");
                    scanf("%d",&disciplina.turma[c].aluno.cr);

                    cvaga++;
                }
                if(cvaga==0)
                {
                    printf("\nNão há vagas.\n");
                }
            }
        }
        else if(escolha==3)
        {
            printf("\nMatricula: ");
            scanf("%d",&matricula);
            for(int c=0; c<40; c++)
            {
                if(disciplina.turma[c].aluno.matricula==matricula)
                {
                    disciplina.turma[c].aluno.matricula=0;
                }
            }
        }
        else if(escolha==4)
        {
            for(int c=0; c<40; c++)
            {
                if(disciplina.turma[c].aluno.matricula != 0)
                {
                    printf("\nAluno: %c",disciplina.turma[c].aluno.nome);
                    printf("\nIdade: %d",disciplina.turma[c].aluno.idade);
                    printf("\nCurso: %c",disciplina.turma[c].aluno.curso);
                    printf("\nCR: %d",disciplina.turma[c].aluno.cr);
                    printf("\nMatricula: %d",disciplina.turma[c].aluno.matricula);
                }
            }
        }
        else if(escolha==5)
        {
            for(int c=0; c<40; c++)
            {
                if(disciplina.turma[c].aluno.matricula != 0)
                {
                    crm=crm+disciplina.turma[c].aluno.cr;
                    ccr++;
                }
            }
            if(ccr!=0)
            {
                med=(float)crm/ccr;
                printf("Media: %.2f",med);
            }
            ccr=0;
        }
        else if(escolha==6)
        {
            for (int c=0; c<40; c++)
            {
                if(disciplina.turma[c].aluno.matricula !=0)
                {
                    printf("Nome: %s\n", disciplina.turma[c].aluno.nome);
                    printf("Idade: %d\n", disciplina.turma[c].aluno.idade);
                    printf("Curso: %s\n", disciplina.turma[c].aluno.curso);
                    printf("CR: %d\n", disciplina.turma[c].aluno.cr);
                    printf("Matrícula: %d\n\n",disciplina.turma[c].aluno.matricula);
                    printf("Faltas: %d\n\n",disciplina.turma[c].faltas);
                    for (int d=0; d<4; d++)
                    {
                    printf("Nota: %d\n\n",disciplina.turma[c].notas[d]);
                    }
                }
            }
            
        }
        else if(escolha==7)
        {
            if(disciplina.codigo !=0)
            {
                disciplina.codigo=0;
            }
            for(int c=0; c<20; c++)
            {
                disciplina.nomedi[c]=(' ');
            }
            for(int c=0; c<40; c++)
            {
                disciplina.turma[40].aluno.matricula=0;
            }
            
        }
        else if(escolha==8)
        {
            printf("\nAdios\n");
            break;
        }
    }
}