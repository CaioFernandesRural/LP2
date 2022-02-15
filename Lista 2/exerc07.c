#include <stdio.h>

int main(){

    int pp,bb,ss,tot;
    pp=bb=ss=tot=0;

    printf("PRATO PRINCIPAL\n1-Vegetariano: 180 cals\n2-Peixe: 230 cals\n3-Frango: 250 cals\n4–Carne: 350 cals");
    printf("\nESCOLHA: ");
    scanf("%d",&pp);

    if(pp==1){
        tot+=180;
    }
    else if(pp==2){
        tot+=230;
    }
    else if(pp==3){
        tot+=250;
    }
    else if(pp==4){
        tot+=350;
    }
    else{
        printf("\nINVÁLIDO.");
    }

    printf("BEBIDA\n1-Chá (lata): 80 cals\n2-Suco de laranja: 150 cals\n3-Suco de melão: 70 cals\n4-Refrigentante diet: 2 cals");
    printf("\nESCOLHA: ");
    scanf("%d",&bb);

    if(bb==1){
        tot+=80;
    }
    else if(bb==2){
        tot+=150;
    }
    else if(bb==3){
        tot+=70;
    }
    else if(bb==4){
        tot+=2;
    }
    else{
        printf("\nINVÁLIDO.");
    }

    printf("SOBREMESA\n1-Abacaxi: 75 cals\n2-Sorvete diet: 110 cals\n3-Mousse diet: 60 cals\n4-Mousse chocolate: 250 cals");
    printf("\nESCOLHA: ");
    scanf("%d",&ss);

    if(ss==1){
        tot+=75;
    }
    else if(ss==2){
        tot+=110;
    }
    else if(ss==3){
        tot+=60;
    }
    else if(ss==4){
        tot+=250;
    }
    else{
        printf("\nINVÁLIDO.");
    }

    printf("\nTotal: %d",tot);

    return 0;
}