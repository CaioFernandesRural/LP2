#include <stdio.h>

int main(){

    int sub,x,y,con,res;
    con=0;

    printf("X: ");
    scanf("%d",&x);
    printf("Y: ");
    scanf("%d",&y);

    while(res!=x%y){
        res=x-y;
        x-=y;
        con+=1;  
    }
    
    printf("quociente=%d ,resto=%d",con,res);

    return 0;
}