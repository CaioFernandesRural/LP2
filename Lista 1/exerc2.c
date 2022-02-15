#include <stdio.h>
#include <math.h>

main(){
    int ans;
    float x,y;
    ans=0;

    while(ans!=8){
        printf("DIGITE SUAS VARIÁVEIS: \n");
        printf("X= ");
        scanf("%f", &x);
        printf("Y= ");
        scanf("%f", &y);

        printf("1- SOMA (x+y)\n");
        printf("2- SUBTRAÇÃO (x-y)\n");
        printf("3-MULTIPLICAÇÃO (x.y)\n");
        printf("4-DIVISÃO (x/y)\n");
        printf("5-EXPONENCIAÇÃO (x elevado a y)\n");
        printf("6-LOGARÍTMO (x na base 10)\n");
        printf("7-RAIZ QUADRADA (raiz de x)\n");
        printf("8-FIM\n-------------\n");

        printf("FAÇA SUA ESCOLHA: \n");
        scanf("%d", &ans);
        
            if(ans==1){
                float res=x+y;
                printf("%.3f + %.3f = %.3f\n-------------\n",x,y,res);
            }
            else if(ans==2){
                float res=x-y;
                printf("%.3f - %.3f = %.3f\n-------------\n",x,y,res);
            }
            else if(ans==3){
                float res=x*y;
                printf("%.3f x %.3f = %.3f\n-------------\n",x,y,res);
            }
            else if(ans==4){
                float res=x/y;
                printf("%.3f : %.3f = %.3f\n-------------\n",x,y,res);
            }
            else if(ans==5){
                float res=pow(x,y);
                printf("%.3f elevado a %.3f = %.3f\n",x,y,res);
                
            }
            else if(ans==6){
                float res=log(x);
                printf("log de %.3f = %.3f\n",x,res);

            }
            else if(ans==7){
                float res=sqrt(x);
                printf("Raiz quadrada de %.3f = %.3f\n",x,res);
            }
        
    }
    printf("\nFIM.\n");

    return 0;
}