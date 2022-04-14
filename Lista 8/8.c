#include <stdio.h>
#include <strings.h>

typedef struct
{
    int x, y, z;
}tpPonto;

typedef struct
{
    tpPonto ponto;
    char rotulo;
}tpFigura;

tpFigura* preenche(tpFigura *r3)
{
    FILE *f;

    f=fopen("desenho.dat","ab");

    for (int i = 0; i < 10; i++)
    {
        r3[i].rotulo=74+i;
        r3[i].ponto.x=i+1;
        r3[i].ponto.y=i+2;
        r3[i].ponto.z=i+3;

        fwrite(&r3,sizeof(r3), 4, f);
    }
    fclose(f);
}
void imprime(tpFigura *r3)
{
    FILE *f;

    f=fopen("desenho.dat","rb");

    for (int i = 0; i < 10; i++)
    {   
        fread(&r3,sizeof(r3), 4, f);
        printf("\nPonto %c: ",r3[i].rotulo);
        printf("X =%d, Y =%d, Z = %d",r3[i].ponto.x, r3[i].ponto.y, r3[i].ponto.z);
    }
    fclose(f);
    //não sei como testar se o programa está
    //puxando do arquivo ou da memória.
}
void apaga(tpFigura *r3, char l)
{
    FILE *f;

    f=fopen("desenho.dat","rb");

    for (int i = 0; i < 10; i++)
    {
        fread(&r3,sizeof(r3), 4, f);

        if(r3[i].rotulo==l)
        {
            fclose(f);
            f=fopen("desenho.dat","ab");
            //não sei como colocar o ponteiro no local
            //correto para substituir o caracter
            r3[i].rotulo=35;
        }
    }
}
void main()
{
    tpFigura espacoR3[10];
    char l;
    FILE *f;

    f=fopen("desenho.dat","wb");

    preenche(espacoR3);

    imprime(espacoR3);

    printf("\nLetra: ");
    scanf("%c",&l);

    if(l>=97 && l<=122)
    {
        l-=32;
    }
    apaga(espacoR3, l);

    imprime(espacoR3);
}
