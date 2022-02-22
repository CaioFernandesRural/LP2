#include <stdio.h>

int main(){

    int n,es,nfat,x,y,xpoty,xmulty;
    long int fat(int n);
    int pot(int x, int y);
    int mult(int x, int y);
    int mod(int x,int y);

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

            printf("\n%d ^ %d = %d\n",x,y,pot(x,y));
        }

        else if (es==3){
            printf("\nDigite X: ");
            scanf("%d",&x);
            printf("Digite Y: ");
            scanf("%d",&y);

            printf("\n%d * %d = %li\n",x,y,mult(x,y));
        }
        else if (es==4){
            printf("\nDigite X: ");
            scanf("%d",&x);
            printf("Digite Y: ");
            scanf("%d",&y);

            printf("\n%d %% %d = %d\n",x,y,mod(x,y));
        }
        else if(es==6){
            break;
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
int mult(int x, int y){

    if (x==0 || y==0){
        return 0;
    }
    else if(x>0 && y>0){
        return (x+mult(x,y-1));
    }
    else if(x>0 && y<0){
        return (y+mult(x-1,y));
    }
    else if(x<0 && y>0){
        return (x+mult(x,y-1));
    }
    else if(x<0 && y<0){
        return (-x+mult(-x,-y-1));
    }
        
}
int mod(int x,int y){

    while(x>y){
        x-=y;
    }

}