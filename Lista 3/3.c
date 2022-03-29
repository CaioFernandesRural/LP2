#include <stdio.h>

int div(int n){
    
    int tot = 0;

    printf("Divisores de %d: ",n);
    for (int c=1;c<=n;c++){
        if (n%c==0){
            printf(" %d ", c);
            tot++;
        }
    }
    return tot;
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
int nms(int n){

    int som=0;
    for(int con=1;con<=n;con++){
        som+=con;
    }
    return som;
}

int main(){

    int n;

    while(1){

        printf("Se for par verifica divisores.\nSe impar e < que 10 calcula fatorial.\nSe impar >= a 10 soma dos inteiros de 1 a n.\n");
        printf("Número(negativo para):");
        scanf("%d",&n);

        if (n<0){
            break;
        }
        if (n%2==0){
            printf("\n");
            printf("= %d divisores\n",div(n));
        }
        else if(n%2!=0 && n<10){
            printf("\n%d! = %ld\n",n,fat(n));
        }
        else if(n%2!=0 && n>=10){
            printf("\nSoma dos inteiros de 1 até n = %d\n",nms(n));
        }
    }
}