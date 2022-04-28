#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
}data;

void inicializa(int d, int m, int a, data * dt)
{
    dt->dia = d;
    dt->mes = m;
    dt->ano = a;
}
int valida(data dt)
{
    if (dt.dia <= 0 || dt.dia > 31)
    {
        return 1;
    }
    if (dt.mes <= 0 || dt.mes > 12)
    {
        return 1;
    }
    if (dt.ano <=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void imprime(data dt)
{
    printf("\n %d / %d / %d", dt.dia, dt.mes, dt.ano);
}
void main()
{
    data date;
    int day ,month ,year;

    day = 27;
    month = 4;
    year = 2022;

    inicializa(day, month, year, &date);

    if(valida(date) != 0)
    {
        exit(1);
    }

    imprime(date);

}
