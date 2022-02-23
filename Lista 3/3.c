#include <stdio.h>

int div(int n)
{
    int tot = 0;
    printf("Divisores de %d: ",n);
    for (int c=1;c<=n;c++)
    {
        if (n%c==0)
        {
            printf(" %d ", c);
            tot++;
        }
    }
    return tot;
}

int main(){

    int n;

    printf("Número(negativo para): ");
    scanf("%d",&n);

    if (n%2==0){
        printf("= %d divisores\n",div(n));
    }

}