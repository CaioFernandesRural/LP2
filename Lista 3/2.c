#include <stdio.h>

int main(){

    float x,res,sub,mul;
    res=0;
    mul=1;

    printf("Digite o valor de x: ");
    scanf("%f",&x);

    if (x>0){

        for(int som=1;som<=100;som++){
        
        res+=((x+som)/som);
        }
    }
    else {
        sub=100;
        for(int som=1;som<=100;som++){
            res+=(mul*(((x*x)+som)/sub));
            sub--;
            mul*=-1;
        }
    }
    printf("Y = %.2f",res);

}