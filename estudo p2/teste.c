#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    int num;
    char nome[20];
}tpCorno;

void criar()
{
    FILE *f;
    tpCorno aa;

    f=fopen("caralho.bin","wb");

    printf("\nEscreve num : ");
    scanf("%d",&aa.num);
    fflush(stdin);

    printf("\nEscreve nome : ");
    scanf("%s",&aa.nome);

    fwrite(&aa,sizeof(aa), 1, f);

    fclose(f);
}

void ler()
{
    FILE *f;
    tpCorno bb;

    f=fopen("caralho.bin","rb");

    fread(&bb,sizeof(bb), 1, f);

    printf("\nnum: %d",bb.num);
    printf("\nnome: %s",bb.nome);

    fclose(f);
}

void altera()
{
    FILE *f;
    tpCorno cc;

    f=fopen("caralho.bin","r+b");

    fread(&cc,sizeof(cc), 1, f);

    printf("\nEscreve num novo: ");
    scanf("%d",&cc.num);

    fseek(f, 0, SEEK_SET);
    fwrite(&cc,sizeof(cc), 1, f);

    fclose(f);

    ler();

}

void main()
{
    
    criar();
    
    ler();

    altera();

}
