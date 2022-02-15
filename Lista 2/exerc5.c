#include <stdio.h>

int main(){

    int n=0,con=0,par=0,ipar=0,mai=0,men=0,sipar=0;
    float pepar=0,mipar=0;

    while(n>=0){
        
        printf("Número inteiro positivo: ");
        scanf("%d",&n);
        
        if(n==-1){
            break;
        }
        if(n%2==0){
            par++;
        }
        else{
            ipar++;
            sipar+=n;
        }
        if(con==0){
            mai=men=n;
        }
        if(n>mai){
            mai=n;
        }
        if(n<men){
            men=n;
        }
        con++;
    }
    pepar=(100*par)/con;
    mipar=(sipar/ipar);

    printf("\n%d Numeros validos.\n",con);
    printf("%% %.2f Dos numeros sao pares.\n",pepar);
    printf("A media dos numeros impares e: %.2f\n",mipar);
    printf("O maior numero e: %d E o menor e: %d ",mai,men);

    return 0;
}