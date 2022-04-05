#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
}tpdata;

tpdata *inicializa(void)
{
    tpdata *dt;
    dt=(tpdata*) malloc(sizeof(tpdata));

    printf("\nDia: ");
    scanf("%d",&dt->dia);

    printf("\nMes: ");
    scanf("%d",&dt->mes);

    printf("\nAno: ");
    scanf("%d",&dt->ano);

    return dt;
}

void valida()
{

}

void imprime(tpdata *d1)
{
    printf("\ndia = %d\nmes = %d\nano = %d",d1->dia,d1->mes,d1->ano);
}

void main()
{
    int data;

    inicializa();
    imprime(data);

    getch();
}