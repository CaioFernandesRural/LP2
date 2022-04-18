#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
}tpData;

tpData *inicializa(int d, int m, int a){
    tpData *dt;
    dt = (tpData*) malloc(sizeof(tpData));
    dt->dia = d;
    dt->mes = m;
    dt->ano = a;
    return dt;
}

void valida()
{

}

void imprime(tpData *d1)
{
    printf("\ndia = %d\nmes = %d\nano = %d",(*d1).dia,(*d1).mes,(*d1).ano);
}

void main()
{
    tpData *data;
    int dia,mes,ano;

    printf("\nDia: ");
    scanf("%d",&dia);

    printf("\nMes: ");
    scanf("%d",&mes);

    printf("\nAno: ");
    scanf("%d",&ano);

    inicializa(dia,mes,ano);
    imprime(data);

    getch();
}