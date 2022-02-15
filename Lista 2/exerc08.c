#include <stdio.h>

int main(){

    int n,mul;

    printf("Numero: ");
    scanf("%d",&n);

    for(int c=0;c<=10;c++){
        mul=n*c;
        printf("%d x %d = %d\n",n,c,mul);
    }

    return 0;
}