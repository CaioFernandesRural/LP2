#include <stdio.h>
int main(){
    int n,cont,divd,m,mai,men;

    cont=divd=0;
    
    printf("Digite um numero: ");
    scanf("%d", &n);

    while(n!=999){
        cont+=1;
        divd+=n;

        if (cont==1){
            mai=n;
            men=n;
        }
        else if (n>mai){
            mai=n;
        }
        else if (n<men){
            men=n;
        }

        printf("Digite um numero: ");
        scanf("%d", &n);
    }

    m=divd/cont;
    printf("Numeros digitados: %d\n",cont);
    printf("Media dos numeros digitados: %d\n",m);
    printf("Maior numero digitados: %d\n",mai);
    printf("Menor numero digitados: %d\n",men);
}