#include <stdio.h>
#include <stdlib.h>

int somavalor(int numero)
{
    return numero+5;
}
void somaponteiro(int *numero)
{
    *numero+=5;
}

void main()
{
    int x;

    printf("\nNumero: ");
    scanf("%d",&x);

    printf("\nSoma por valor: %d",somavalor(x));//recebe o valor de x
    printf("\nProva de que nao foi alterado: %d", x);//x continua igual

    somaponteiro(&x);//recebe o endereço na memória de x

    printf("\nSoma por ponteiro: %d",x);//5 foi somado diretamente na variável x
    printf("\nProva de que foi alterado: %d", x);
}