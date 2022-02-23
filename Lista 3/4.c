#include <stdio.h>
#include <math.h>

float fun(int n){
    
    float res;

    if (n>=10){
        res=sqrt(n-10)/2;
    }
    else if (n<=4){
        res=sqrt(pow(n,2)+1)/2;
    }
    else{
        res=pow(n,3)/(pow(n,2)-16);
    }
    return res;
}

int main(){

    int n;

    while(1){

        printf("\nNúmero(negativo para):");
        scanf("%d",&n);

        if (n<=0){
            break;
        }
        printf("Resposta: %.3f\n",fun(n));
    }
}

