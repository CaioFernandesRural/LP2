#include <stdio.h>
#include <math.h>

float mai10(int n){
    return sqrt(n-10)/2;
}
float men4(int n){
    return sqrt(pow(n,2)+1)/2;
}
float meio(int n){
    return pow(n,3)/(pow(n,2)-16);
}
float fun(int n){

    if (n>=10){
        return mai10(n);
    }
    else if (n<=4){
        return men4(n);
    }
    else{
        return meio(n);
    }
}

int main(){

    int n;

    while(1){

        printf("\nNúmero(<=0 para):");
        scanf("%d",&n);

        if (n<=0){
            break;
        }
        printf("Resposta: %.3f\n",fun(n));
    }
}

