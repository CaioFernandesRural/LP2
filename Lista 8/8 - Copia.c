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

    f=fopen("desenho.dat","wb");
    
    for (int i = 0; i < 10; i++)
    {

        r3[i].rotulo=74+i;
        r3[i].ponto.x=i+1;
        r3[i].ponto.y=i+2;
        r3[i].ponto.z=i+3;
    }
}
void imprime(tpFigura *r3)
{
    for (int i = 0; i < 10; i++)
    {
        printf("\nPonto %c: ",r3[i].rotulo);
        printf("X =%d, Y =%d, Z = %d",r3[i].ponto.x, r3[i].ponto.y, r3[i].ponto.z);
    }
}
void apaga(tpFigura *r3, char l)
{
    for (int i = 0; i < 10; i++)
    {
        if(r3[i].rotulo==l)
        {
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
