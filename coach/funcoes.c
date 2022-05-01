#include <stdio.h>

void adicionar(int * x)
{
    printf("\n%d ",*(x));

    *(x)+=2;
}
int main()
{
    int a;

    printf("\nDigite um numero: ");
    scanf("%d",&a);

    adicionar(&a);

    printf("+ 2 = %d", a);

    return 0;
}