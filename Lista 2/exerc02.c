#include <stdio.h>

int main(){
    int n,test,c;
    n=0;

    while(n<10){
        printf("Numero menor que 10: ");
        scanf("%d",&n);
        if (n<10){
            printf("\nMultiplos:\n");
        }
        for(c=100;c>1;c-=1){
            test=c%n;
            if(test==0){
                printf("%d - ",c);
            }

        }
    }
    
    return 0;
}