#include <stdio.h>

int main(){

    int n,es,nfat,x,y,xpoty,xmulty;
    long int fat(int n);
    int pot(int x, int y);
    int mult(int x, int y);

    while(1){

        printf(
        "\n1) Fatorial de N \n2) X^Y \n3) X*Y \n4) X mod Y \n5) Sequencia de N termos de Fibonacci \n6) Fim \nEscolha: "
        );
        scanf("%d",&es);

        if (es==1){
            printf("\nDigite N: ");
            scanf("%d",&n);

            nfat=fat(n);
            printf("\n%d! = %ld\n",n,fat(n));
        }

        else if (es==2){
            printf("\nDigite X: ");
            scanf("%d",&x);
            printf("Digite Y: ");
            scanf("%d",&y);

            xpoty=pot(x,y);
            printf("\n%d ^ %d = %d\n",x,y,xpoty);
        }

        else if (es==3){

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
int pot(int x,int y){

    if (y==0){
        return 1;
    }
    else{
        return(x*pot(x,y-1));
    }
}
int mult(int x, int y);