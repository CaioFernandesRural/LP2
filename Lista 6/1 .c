#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
}tpData;

tpData *inicializa(int d, int m, int a){
    tpData *dt;
    dt = (tpData*) malloc(sizeof(dt));
    dt->dia = d;
    dt->mes = m;
    dt->ano = a;
    return dt;
}

void valida (tpData data)
{
    if(data.dia>31 || data.dia<1){
        printf("\nDia inválido.");
    }
    else if(data.mes>12 || data.mes<1){
        printf("\nMes Inválido.");
    }
    else if(data.ano<1){
        printf("\nAno Inválido.");
    }
    else{
        imprime(data);
    }
}

void imprime(tpData d1)
{
    printf("\ndia = %d\nmes = %d\nano = %d",d1.dia,d1.mes,d1.ano);
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

    data = inicializa(dia,mes,ano);
    valida(*data);
}