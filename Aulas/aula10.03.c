#include <stdio.h>

main(){
    int i=0;
    int *P;

    P=&i;

    for((*P)=0;(*P)<10;(*P)++){

        printf("%d  ",*P);
    }
}