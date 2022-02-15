#include <stdio.h>

int main(){

    float mi,perc;
    int i,inst,op,conop,con,mai,men,coniop;
    inst=op=mi=conop=con=mai=men=perc=coniop=0;

    while(i>0){
        con++;
        printf("Idade (0 para finalizar): ");scanf("%d",&i);
        if(i<=0){break;}

        printf("Grau de instrução, em anos: ");scanf("%d",&inst);
        printf("Opinião sobre o filme: 1 = ótimo, 2 = regular ou 3 = péssimo: ");scanf("%d",&op);

        
        if(op=1){
            conop++;
            mi=conop/con;
        }
        if(con==1){
            mai=men=i;
        }
        else{
            if(i>mai){
                mai=i;
            }
            else if(i<men){
                men=i;
            }
        }
        if(i>10 && op==3){
            coniop++;
            perc=(100*coniop)/con;
        }
    }
    printf("\nMedia das pessoas que responderam otimo: %d\n",mi);
    printf("idade do espectador mais velho: %d mais novo: %d.\n",mai,men);
    printf("O percentual de pessoas com mais de 10 anos de instrução que responderam péssimo: %d%%\n",perc);

    return 0;
}