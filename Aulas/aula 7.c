/*
FILE *e;
e=fopen("entrada.dat","r"); ABERTO PARA LEITURA
if(e==NULL)
{
    printf("\nArquivo não pode ser aberto");
    exit(1);
}
FILE *e;
e=fopen("entrada.dat","r"); ABERTO PARA ESCRITA
if(e==NULL)
{
    printf("\nArquivo não pode ser aberto");
    exit(1);
}
FILE *e;
e=fopen("entrada.dat","r"); ABERTO PARA ACRÉSCIMO
if(e==NULL)
{
    printf("\nArquivo não pode ser aberto");
    exit(1);
}
*/
/*
Fechamento de arquivo:
Sintaxe: fclose(a), ou, fcloseall()
Exemplo: 

File *a, *e, *s;

fclose(s) Fecha somente s
fcloseall(); Fecha arquivos restantes
*/

//ARQUIVOS EM MODO TEXTO

//Escrita em arquivos

/*int fputc(intc, FILE *arq)
Recebe o caracter a ser escrito e
o ponteiro para o arquivo alvo
Retorna caracter EOF caso não tenha conseguido
escrever, ou o inteiro que representa o caracter,
caso tenha sucesso.*/

//Exemplo:
/*#include <stdio.h>

main()
{
    char letra;
    int cod;
    FILE *f;

    printf("Letra: ");
    scanf("%c",&letra);

    f=fopen("letra.txt", "w");
    if (f==NULL)
    {
        printf("\nERRO");
    }
    else
    {
        cod=fputc(letra, f);
        printf("\nSalvamo a letra (%d) no arquivo",cod);
        fclose(f);
    }
    return 0;
}*/
/* int fprintf(FILE *arq, char *formato,...)
.permite escrita de string inteiras
.similar a printf(), com parâmetro adicional,
que indica para o arquivo onde será salvo
.retorna a quantidade de bytes escritos no
arquivo, mas seu uso é opcional
.ela retorna o caractere EOF caso não tenha
conseguido escrever.*/
//EXEMPLO
/*#include <stdio.h>
main()
{
    char materia[31];
    float nota;
    FILE *f;

    printf("Digite o nome da disciplina: ");
    gets(materia);
    printf("e a nota: ");
    scanf("%f", &nota);

    f=fopen("letra.txt", "w");
    if (f==NULL)
    {
        printf("\nERRO");
    }
    else
    {
        fprintf(f,"%s %f \n", materia, nota);
        fclose(f);
    }
    return 0;
}*/
/*int fscanf (FILE *arq, char *formato,...):
.leitura de strings inteiras em um único comando
.similar a scanf(), com um parâmetro adicional
que indica para o arquivo onde o dado será salvo.
.a cada leitura, os dados são transferidos para
a memória e o cursor avança, passando para o
próximo dado.
.retorno a quantidade de bytes lidos com sucesso,
ou EOF quando o final for alcançado.*/
//EXEMPLO
/*#include <stdio.h>

main()
{
    char linha[30];
    int nlinhas=0;
    float nota;
    FILE *f;

    f=fopen("notas.txt","r");
    if(f==NULL)
    {
        printf("\nERRO");
    }
    else
    {
        while(!feof(f))
        {
            fscanf(f,"%s %f", linha, &nota);
            printf("\n%s %.2f", linha, nota);
        }
    }
    fclose(f);
    return 0;
}*/
/*int fgetc(FILE *arq)
.permite a leitura de caracteres e retorna o
código ASCII do caractere
  char* fgets(char *s, int n, FILE *arq)
.lê uma sequência de caracteres, até encontrar
um '\n' ou atingir o máximo de caracteres n-1,
pois é acrescentando o caractere '\0' ao final
da string s.
.retorna o código ASCII do caractere lido.
.o valor de retorno é o endereço da string s.*/
//EXEMPLO
/*#include <stdio.h>
main()
{
    char letra;
    int nlinhas=0;
    FILE *f;

    f=fopen("notas.txt", "r");
    if(f==NULL)
    {
        printf("\nERRO");
    }
    else
    {
        while ((letra=fgetc(f)) != EOF)
        {
            if(letra=='\n')
            {
                nlinhas++;
            }
        }
        printf("\nQuantidade de linhas = %d",nlinhas);
        fclose(f);
    }
    return 0;
}*/
/*#include <stdio.h>
main()
{
    char linha[30];
    int nlinhas=0;
    FILE *f;

    f=fopen("notas.txt", "r");
    if(f==NULL)
    {
        printf("\nERRO");
    }
    else
    {
        while(fgets(linha, 30, f)!=NULL)
        {
            nlinhas++;
        }
        printf("\nQuantidade de linhas = %d", nlinhas);
        fclose(f);
    }
    return 0;
}*/
/*
.A informação lida é sempre a partir da posição
atual do cursor.
.Ao abrir um arquivo para leitura o cursor é
automaticamente no início.
.A cada leitura o cursor avança e passa para
a próxima posição.*/

//EXEMPLO modo texto
/*#include <stdio.h>

void inserir_registros (FILE *s)
{
    Func f;

    printf("Entre com os dados, digitando fim para finalizar: \n");
    printf("\nNome? ");
    scanf("%s", f.nome);

    while (strcmp(f.nome,"fim"))
    {
        printf("\nSalario? ");
        scanf("%f",&f.salario);
        fprintf(s,"%s %f \n", f.nome, f.salario);
        printf("\nNome?");
        scanf("%s", f.nome);
    }
    
}
typedef struct
{
    char nome[31];
    float salario;
}Func;
FILE* abrir_arquivo(char *nome)
{
    FILE *s;

    if((s=fopen(nome,"a"))==NULL)
    {
        printf("Arquivo não pode ser aberto\n");
        return NULL;
    }
    return s;
}
int listar_registros(char*arq)
{
    Func f;
    FILE *s;

    if((s=fopen(arq,"r"))==NULL) return 0;

    printf("    NOME   \t\t|  \t\tSALARIO   \n");

    while(!feof(s))
    {
        fscanf(s,"%s %f", f.nome, &f.salario);
        printf("%20s\t\t\t%10.2f\n", f.nome, f.salario);
    }
    fclose(s);
    return 1;
}
main()
{
    FILE *s;
    Func f;

    listar_registros ("agenda.dat");
    s=abrir_arquivo("agenda.dat");
    inserir_registros(s);

    fclose(s);
    listar_registros("agenda.dat");
}*/

