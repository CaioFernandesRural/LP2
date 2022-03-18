#include <stdio.h>
#include <strings.h>

void mai(char *x){
    
    int c=0;
    
    if(x[c]>=97 && x[c]<=122){

        *x-=32;
    }

}

int conc(char *x){



}

int capi(char *x){

    int con=0;

    for(int c=-1;c<31;c++){

        if(x[c]==0 && x[c+1]>=97 && x[c+1]<=122){

            *x-=32;
        }
    }

}

main(){

    char str1[30],str2[30];
    int con=0;

    printf("Digite: ");
    gets(str1);
    printf("Digite: ");
    gets(str2);

    while(str1[con]!='\0'){

        mai(&str1[con]);

        printf("%c", str1[con]);
        con++;
    }
    con=0;
    printf("\n");
    while(str2[con]!='\0'){

        mai(&str2[con]);

        printf("%c", str2[con]);
        con++;
    }

}