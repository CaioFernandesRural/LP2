#include <stdio.h>

float mai(float x)
{
    float total=0;
    for (int i=0; i<=100;i++)
    {
        total+=(x+i)/i;
    }
    return total;
}
float men(float x)
{
    int sub=100;
    float total=0;
    int mul=1;
    for (int i=1;i<=100;i++)
    {
        total+=mul*((x*x)+i)/sub;
        sub--;
        mul*=-1;
    }
    return total;
}

int main(){

    float x,res,sub,mul;
    res=0;
    mul=1;

    printf("Digite o valor de x: ");
    scanf("%f",&x);

    if (x>0){ 
        res=mai(x);
    }
    else{
        res=men(x);
    }
    printf("Y = %.2f",res);

}