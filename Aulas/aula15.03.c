#include <stdio.h>

/*void troca(int *x,int *y){
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

int main(){

    int a,b;
    a=10;
    b=20;

    troca(&a,&b);

    printf("a=%d, b=%d",a,b);

}*/

int incre(int *x){

    (*x)+=1;
}
int decre(int *x){

    (*x)-=2;
}
main(){

    int a=5;

    printf("\nValor de a: %d\n",a);

    incre(&a);

    printf("Valor de a+1: %d\n",a);

    decre(&a);

    printf("Valor de a-1: %d\n",a); 


}