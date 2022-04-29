#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int x, y, z;
}tpponto;
typedef struct
{
    tpponto ponto;
    char rotulo;
}tpfigura;

void preenche(tpfigura espacor3[10])
{
    FILE *f;

    f = fopen("lis8.bin","wb");

    for(int i = 0; i < 10; i++)
    {
        espacor3[i].rotulo = 65 + i;
        espacor3[i].ponto.x = i * 5;
        espacor3[i].ponto.y = i * 5;
        espacor3[i].ponto.z = i * 5;

        fwrite(&espacor3[i], sizeof(tpfigura), 1, f);
        
    }
    fclose(f);
}
void imprime()
{
    FILE *f;
    tpfigura espacor4[10];

    for(int i = 0; i < 10; i++)
    {
        fread(&espacor4[i], sizeof(tpfigura), 1, f);

        printf("\n%c - Ponto X: %d Ponto Y: %d Ponto Z: %d", espacor4[i].rotulo, espacor4[i].ponto.x,
        espacor4[i].ponto.y, espacor4[i].ponto.z);
    }
    fclose(f);
}
void apaga(tpfigura espacor3[10], char let)
{
    FILE *f;

    int i;

    for (int i = 0; i < 10; i++)
    {
        if (espacor3[i].rotulo == let)
        {
            fread(&espacor3[i], sizeof(tpfigura), 1, f);
            espacor3[i].rotulo = '#';
            fseek(f, i*sizeof(tpponto), SEEK_SET);
            fwrite(&espacor3[i], sizeof(tpfigura), 1, f);
        }
    }
    f = fopen("figura.dat", "rb+");
	fseek (f, i*sizeof(tpponto), SEEK_SET); //pedir pra ela explicar essa parte
	fwrite (&espacor3[i], sizeof(tpfigura), 1, f);
	fclose(f);
}
void main()
{
    tpfigura figurar3[10];
    
    preenche(figurar3);
    imprime(figurar3);
    apaga(figurar3, 'C');
    imprime(figurar3);
}
