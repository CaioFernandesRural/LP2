#include <stdio.h>
#include <math.h>
main(){
    int i,mai21,i60,con60;
    float med;
    mai21=0;

    while(i>=0){
        printf("Idade: ");
        scanf("%d",&i);
            if(i>21){
                mai21+=1;
            }
            else if(i>60){
                i60+=i;
                con60+=1;
            }
    }
    med=(float)i60/(float)con60;
    vai tomar no cu essa porra

    printf("%d pessoas com mais de 21 anos de idade.\n",mai21);
    printf("A media das idades das pessoas com mais de 60 anos de idade e: %f",med);

    return 0;
}