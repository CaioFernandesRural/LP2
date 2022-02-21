#include <stdio.h>

int main(){

    int n,es,nfat;
    long int fat(int f);
    int pot(int x,int y);

    while(1){
        printf("\nDigite N: ");
        scanf("%d",&n);
        printf(
        "\n1) Fatorial de N \n2) X^Y \n3) X*Y \n4) X mod Y \n5) Sequencia de N termos de Fibonacci \n6) Fim \nEscolha: "
        );
        scanf("%d",&es);

        if (es==1){
            nfat=fat(n);
            printf("\n%d! = %ld\n",n,fat(n));
        }
    }

}

long int fat(int n){

    int nfat;

    if(n==0){
        return 1;
    }
    else{
        return n*fat(n-1);
    }

}