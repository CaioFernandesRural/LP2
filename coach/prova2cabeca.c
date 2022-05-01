#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int R, G, B;
}tpcor;

typedef struct
{
    tpcor cor;
    int x, y
}tpponto;

void preenche(tpponto * desenho[1000])
{
    FILE *f;
    int i;

    f = fopen("provaLP2.dat","wb");

    for(i = 0 ; i < 1000 ; i++)
    {
        printf("\nR:");
        scanf("%d", &desenho[i]->cor.R);
        
        printf("\nG:");
        scanf("%d", &desenho[i]->cor.G);
        
        printf("\nB:");
        scanf("%d", &desenho[i]->cor.B);
        
        printf("\nX:");
        scanf("%d", &desenho[i]->x);
        
        printf("\nY:");
        scanf("%d", &desenho[i]->y);

        fwrite(&desenho[i], sizeof(tpponto), 1, f);
    }

    fclose(f);
}
void imprime()
{
    FILE *f;
    int i;

    tpponto desenho[1000];

    f = fopen("provaLP2.dat","rb");

    for(i = 0 ; i < 1000 ; i++)
    {
        fread(&desenho[i], sizeof(desenho), 1, f);

        printf("\nR: %d", desenho[i].cor.R);
        
        printf("\nG: %d", desenho[i].cor.G);
        
        printf("\nB: %d", desenho[i].cor.B);
        
        printf("\nX: %d", desenho[i].x);

        printf("\nY: %d", desenho[i].y);

    }
    fclose(f);
}
void apaga(tpponto * desenho[1000], int pos)
{
    FILE *f;
    pos = 7;

    f = fopen("provaLP2.dat","r+b");

    desenho[pos]->cor.R = 255;
    desenho[pos]->cor.G = 255;
    desenho[pos]->cor.B = 255;

    fseek(f, sizeof(tpponto) * pos, SEEK_SET);

    fwrite(&desenho[pos], sizeof(desenho), 1, f);

    fclose(f);
}
void main()
{
    FILE *f;
    tpponto desenho[1000];
    int pos;

    preenche(&desenho[1000]);
    imprime();
    apaga(&desenho[1000], pos);
}