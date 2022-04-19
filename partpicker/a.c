#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char fabricante[20];
    int wifi;
    int blue;
    char sckt[20];
}plmae;
typedef struct
{
    char nome[20];
    float clock;
    char marca[20];
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

void novo(pc *pc)
{
    printf("\nNome: ");
    fflush(stdin);
    gets(pc->nome);
    printf("\n%s",pc->nome);
}
void mostra(pc pc)
{
    printf("\nNome: %s\n",pc.nome);
}
main()
{
    pc pca[2];
    int esc0, esc1;

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
                novo(&pca[esc1-1]);
                printf("\n%s",pca[esc1].nome);
            }
            else
            {
                printf("\nERRO!\n");
            }
        }
        else if (esc0==3)
        {
            printf("\nQual slot mostrar(1-2)? ");
            scanf("%d",&esc1);
            if(esc1>=1 && esc1<=2)
            {
                mostra(pca[esc1-1]);
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