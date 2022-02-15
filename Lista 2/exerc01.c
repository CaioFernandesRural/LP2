#include <stdio.h>

int main(){
    int n,cont,div;
    n=1;

    while(n>=0){
        printf("Numero positivo: ");
        scanf("%d",&n);
        if (n>=0){
            printf("\nDivisores:\n");
        }
        for(cont=1;cont<n;cont+=1){
            div=(n%cont);
            if(div==0){
                printf("%d\n",cont);
            }
        }
        
    }

    return 0;
}