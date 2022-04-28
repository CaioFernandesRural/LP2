#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

typedef struct
{
    char fabricante[20];
    int wifi;
    int blue;
    char sckt[20];
}plmae;
typedef struct
{
    char marca[20];
    float preco;
    int clock;
    int nucleos;
    int threads;
    int cache;
    char sckt[20];
}cpu;
typedef struct
{
    char fabricante[20];
    char nome[20];
    int clock;
    int vram;
    int ray;
}gpu;
typedef struct
{
    char marca[20];
    int watts;
    char cert[20];
}fon;
typedef struct
{
    char marca[20];
    int capacidade;
    int rpm;
}hdd;
typedef struct
{
    char marca[20];
    int capacidade;
    char tipo[20];
    int velocidade;
}ssd;
typedef struct
{
    char marca[20];
    int capacidade;
    int velocidade;
    char geracao[20];
}ram;
typedef struct
{
    char nome[20];
    plmae plma;
    cpu cpua;
    gpu gpua[2];
    fon fona;
    hdd hdda[4];
    ssd ssda[4];
    ram rama[4];
}pc;

void novo(pc *pc, int es)
{
    FILE *fp;
    if (es==1) {fp=fopen("pc1.txt","w");}
    else {fp=fopen("pc2.txt","w");}

    printf("\nNome: ");
    fflush(stdin);
    gets(pc->nome);
    fprintf(fp,"\nNome: %s",pc->nome);
    
    printf("---Processador---");
    printf("\nPreco(R$): ");
    scanf("%f",&pc->cpua.preco);
    printf("\nMarca: ");
    scanf("%s",&pc->cpua.marca);
    fprintf(fp,"\n---Processador---\nPreco(R$): %.2f\nMarca: %s",pc->cpua.preco,pc->cpua.marca);

    printf("---Placa Mãe---");
    printf("\nFabricante: ");
    scanf("%s",&pc->plma.fabricante);
    printf("Socket: ");
    scanf("%s",&pc->plma.sckt);
    fprintf(fp,"\n---Placa Mae---\nFabricante: %s\nSocket: %s",pc->plma.fabricante,pc->plma.sckt);

    fclose(fp);
}
void altera(pc pc, int es)
{
    FILE *fp;
    int m, n, linha, i, j;
    char esco[10] , esco0[10], alvo[200], buffer[200];

    if (es==1) {fp=fopen("pc1.txt","a+");}
    else {fp=fopen("pc2.txt","a+");}

    printf("\nParte a ser alterada: ");
    fflush(stdin);
    gets(esco);

    if (tolower(esco) == "processador")
    {
        printf("\nPropriedade a ser alterada: ");
        fflush(stdin);
        gets(esco0);
    }
    else if (tolower(esco)=="placa mae")
    {
        printf("\nPropriedade a ser alterada: ");
        fflush(stdin);
        gets(esco0);
    }
}
void mostra(pc pc, int es)
{
    FILE *fp;
    char linha[200];

    if (es==1) {fp=fopen("pc1.txt","r");}
    else {fp=fopen("pc2.txt","r");}

    while (!feof(fp))
    {
        fgets(linha, 200, fp);
        puts(linha);
    }
    fclose(fp);
}
int main()
{
    pc pca[2];
    int esc0, esc1;
    FILE * fp;

    while (1>0)
    {
        printf("\n1-Novo Pc \n");
        printf("2-Alterar Pc \n");
        printf("3-Mostrar Pc \n");
        printf("4-Deletar Pc \n");
        printf("5-Fim\n");
        printf("Escolha: ");
        scanf("%d",&esc0);

        if (esc0==1)
        {
            printf("\nQual slot ocupar(1-2)? ");
            scanf("%d",&esc1);
            if (esc1>=1 && esc1<=2)
            {
                novo(&pca[esc1-1], esc1);
            }
            else
            {
                printf("\nERRO!\n");
            }
        }
        else if (esc0==2)
        {
            printf("\nQual slot alterar(1-2)? ");
            scanf("%d",&esc1);
            if(esc1>=1 && esc1<=2)
            {
                altera(pca[esc1-1], esc1);
            }
            else
            {
                printf("\nERRO!");
            }
            
        }
        
        else if (esc0==3)
        {
            printf("\nQual slot mostrar(1-2)? ");
            scanf("%d",&esc1);
            if(esc1>=1 && esc1<=2)
            {
                mostra(pca[esc1-1], esc1);
            }
            else
            {
                printf("\nERRO!\n");
            }
            
        }
        else if (esc0==5)
        {
            printf("\nAdios\n");
            break;
        }
    }
}