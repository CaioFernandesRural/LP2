#include <stdio.h>

int main(){

    float x;
    float maio(float x);
    float men(float x);
    
    printf("Digite o valor de x: ");
    scanf("%f",&x);

    if (x>0){

        printf("Y = %.2f",maio(x));
    }
    else {
        
        printf("Y = %.2f",men(x));
    }

}
float maio(float x){
    
    float res=0;
    
    for(int som=1;som<=100;som++){
        
        res+=((x+som)/som);
    }
    return res;
}
float men(float x){
    
    float sub=100,mul=1,res=0;

        for(int som=1;som<=100;som++){
            res+=(mul*(((x*x)+som)/sub));
            sub--;
            mul*=-1;
        }
}