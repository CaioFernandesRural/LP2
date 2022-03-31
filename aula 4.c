#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/*void main(){

    int num;

    puts("Quantos números?");
    scanf("%d",&num);

    float valor[num]; //declaração de vetor, errado!
}*/
//--------------------
void main(){

    int vet[20],aux;

    for(int c=0;c<20;c++){
        printf("\nentre com o elemento %d do vetor: ",c+1);
        //scanf("%d",&vet[c]);
        vet[c]=c+1; //em caso de preguiça
        printf("%d, ",vet[c]);
    }
    for(int c=0;c<10;c++){
        aux=vet[c];
        vet[c]=vet[19-c];
        vet[19-c]=aux;
    }
    printf("\nO vetor invertido: \n");

    for (int c=0;c<20;c++){
        printf("%d, ",vet[c]);
    }
}