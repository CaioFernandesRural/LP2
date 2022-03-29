#include <stdio.h>
#include <math.h>

main(){

    double x,fat,itf,its,sen;
    sen=its=0;

    printf("Número: ");
    scanf("%lf",&x);

    for (int c=1;c<=20;c++){
        fat=c+(c-1);
        itf=fat-1;
        
        for(itf=fat-1;itf>1;itf--){
            fat*=itf;

        }

    sen+=pow(-1,its)*pow(x,c+(c-1))/fat;
    its+=1;
    
    if(c>10){
        printf("%.15lf\n",sen);
    }

    }

    return 0;
}