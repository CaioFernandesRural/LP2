#include <stdio.h>

main(){
    int lin,cont,contast,esp;
    
    printf("Quantidade de linhas: \n");
    scanf("%d",&lin);

    for(cont=1;cont<=lin;cont++){
        
        for(esp=1;esp<=(lin-cont);esp++){
            printf(" ");
        }
        for(contast=1;contast<=(cont*2)-1;contast++){
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}