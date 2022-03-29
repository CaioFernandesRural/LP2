#include <stdio.h>

/*void arr(int n){
    int ar[n];
}*/

int main(){

    int n,mai,con=0;

    printf("Quantidade de numeros: ");
    scanf("%d",&n);

    int ar[n];

    for(int c=0;c<n;c++){
        printf("numero: ");
        scanf("%d",&ar[c]);
        
        if(c==0){
            mai=ar[c];
        }
        else{
            if(ar[c]>mai){
                mai=ar[c];
            }
        }
    }
    for(int c=0;c<n;c++){
        if(ar[c]==mai){
            con++;
        }
    }
    printf("Maior: %d, aparece %d vezes.\n", mai, con);
    

}

