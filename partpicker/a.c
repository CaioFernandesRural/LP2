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

void novo(pc *pc)
{
    FILE *fp;
    fp=fopen("pcs.txt","a");

    printf("\nNome: ");
    fflush(stdin);
    gets(pc->nome);
    printf("---Processador---");
    printf("Preco(R$): ");
    scanf("%f",&pc->cpua.preco);
    printf("\nMarca: ");
    scanf("%s",&pc->cpua.marca);
    /*printf("Socket: ");
    scanf("%s",&pc->cpua.sckt);
    printf("Clock(GHz): ");
    scanf("%f",&pc->cpua.clock);
    printf("Nucleos: ");
    scanf("%d",&pc->cpua.nucleos);
    printf("Threads: ");
    scanf("%d",&pc->cpua.threads);
    printf("Cache(Mb): ");
    scanf("%d",&pc->cpua.cache);*/
    printf("---Placa Mãe---");
    printf("Fabricante: ");
    scanf("%s",&pc->plma.fabricante);
    printf("Socket: ");
    scanf("%s",&pc->plma.sckt);
    /*printf("Wi-Fi?(0-1) ");
    scanf("%d",&pc->plma.wifi);
    printf("Bluetooth?(0-1) ");
    scanf("%d",&pc->plma.blue);*/
    
    fclose(fp);
}
void mostra(pc pc)
{
    printf("\nNome: %s",pc.nome);
    printf("\n---Processador---");
    printf("\nPreco: R$%.2f",pc.cpua.preco);
    printf("\nMarca: %s",pc.cpua.marca);
    /*printf("\nSocket: %s",pc.cpua.sckt);
    printf("\nClock: %.2f MHz",pc.cpua.clock);
    printf("\nNucleos: %d",pc.cpua.nucleos);
    printf("\nThreads: %d",pc.cpua.threads);
    printf("\nCache: %dMb",pc.cpua.cache);*/
    printf("\n---Placa Mae---");
    printf("\nFabricante: %s",pc.plma.fabricante);
    printf("\nSocket: %s",pc.plma.sckt);
    /*if (pc.plma.wifi>0) {printf("\nWi-Fi: sim");}
    else {printf("\nWi-Fi: nao");}
    if (pc.plma.blue>0) {printf("\nBluetooth: sim");}
    else {printf("\nBluetooth: nao\n\n");}*/
}
int main()
{
    pc pca[2];
    int esc0, esc1;
    FILE * fp;

    fp = fopen("pcs.txt","w");

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
                fp = fopen("pcs.txt","w");
                novo(&pca[esc1-1]);
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