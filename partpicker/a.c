#include <stdlib.h>
#include <stdio.h>

typedef struct
{
    char fabricante;
    int wifi;
    int blue;
    char sckt;
}plmae;
typedef struct
{
    char nome;
    float clock;
    char marca;
    int nucleos;
    int threads;
    int cache;
    char sckt;
}cpu;
typedef struct
{
    char fabricante;
    char nome;
    int clock;
    int vram;
    int ray;
}gpu;
typedef struct
{
    char marca;
    int watts;
    char cert;
}fon;
typedef struct
{
    char marca;
    int capacidade;
    int rpm;
}hdd;
typedef struct
{
    char marca;
    int capacidade;
    char tipo;
    int velocidade;
}ssd;
typedef struct
{
    char marca;
    int capacidade;
    int velocidade;
    char geracao;
}ram;
typedef struct
{
    char nome;
    plmae plm;
    cpu cpu;
    gpu gpu[1];
    fon fon;
    hdd hdd[3];
    ssd ssd[3];
    ram ram[3];
}pc;
main()
{
    pc pc;
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
            printf("\nQual slot ocupar(1-3)? ");
            scanf("%d",&esc1);
            if (esc1==1)
            {
                printf("\nNome: ");
                fflush(stdin);
                gets(pc.nome);//morre no gets
            }
            
        }
        else if (esc0==3)
        {
            printf("\nQual slot mostrar(1-3)? ");
            scanf("%d",&esc1);
            if(esc1==1)
            {
                printf("\nNome:%c",pc);
            }
        }
        else if (esc0==5)
        {
            printf("\nAdios");
            break;
        }
        
        
        
    }
    

}