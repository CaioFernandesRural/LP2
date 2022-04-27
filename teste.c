#include <stdio.h>
#include <stdlib.h>
 
typedef struct
{
    int num;
    char nome[20];
}tpCorno;

void ler()
{
    FILE *f;
    tpCorno aa;

    f=fopen("caralho.bin","rb");

    fread(&aa,sizeof(aa), 1, f);

    printf("\nnum: %d",aa.num);
    printf("\nnome: %s",aa.nome);

    fclose(f);
}

void altera()
{
    FILE *f;
    tpCorno aa;

    f=fopen("caralho.bin","r+b");

    fread(&aa,sizeof(aa), 1, f);

    printf("\nEscreve num novo: ");
    scanf("%d",&aa.num);

    printf("\n------\n%d\n------\n",aa.num);

    fseek(f, 0, SEEK_SET);
    fwrite(&aa,sizeof(aa), 1, f);

    fclose(f);

    ler();

}

void main()
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

    ler();

    altera();

}
