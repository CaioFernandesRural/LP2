#include <stdio.h>

int main(){

    int aux;
    int vet[20];

    for(int c=0;c<20;c++){
        
        printf("Digite valor para array: ");
        scanf("%d",&vet[c]);
        
    }
    for(int c=0;c<10;c++){

        aux=vet[c];
        vet[c]=vet[19-c];
        vet[19-c]=aux;

    }
    for(int c=0;c<20;c++){
        printf("%d ",vet[c]);
    }
}