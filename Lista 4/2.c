#include <stdio.h>

int main(){

    int v1[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int v2[10]={10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
    int vf[20];
    int p=0;

    for(int c=0;c<10;c++){

        vf[p]=v1[c];
        p++;
        vf[p]=v2[c];
        p++;
    }
    for (int c = 19; c >= 0; c--){
        printf("%d, ", vf[c]);
    }
}