#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

void mai(char *x){  //funfa
    
    int c=0;
    
    if(x[c]>=97 && x[c]<=122){

        *x-=32;
    }

}

int conc(char *x, char *y, char *z){ //n funfa

    int con=0;

    while(x[con]!='\0'){
        
        z[con]=x[con];
        con++;
    }
    while(y[con]!='\0'){
        
        z[con]=y[con];
        con++;
    }
    //str3[con]='\0';

}

int cap(char *x){  //funfa +-

    int con=0;

    if(x[con-1]==32 && x[con]>=97 && x[con]<=122){

        *x-=32;
    }
    con++;
    
    
}

int comp(char *x, char *y){ //funfa +-

    int conx=0,cony=0;

    while(x[conx]!='\0'){

        conx++;
    }
    while(y[cony]!='\0'){

        cony++;
    }

    if(conx>cony) {return 1;}

    else if(conx<cony) {return -1;}

    else {return 0;}

}

int main(){

    char str1[30],str2[30],str3[60];
    int con=0;

    printf("Digite: ");
    gets(str1);
    printf("Digite: ");
    gets(str2);

    printf("\n");
    while(str1[con]!='\0'){

        mai(&str1[con]);

        printf("%c", str1[con]);
        con++;
    }
    con=0;
    printf("\n");

    /*while(str1[con]!='\0'){

        cap(&str1[con]);

        printf("%c", str1[con]);
        con++;
    }
    con=0;
    printf("\n");
    printf("\n");*/
    
    /*while(str2[con]!='\0'){

        mai(&str2[con]);

        printf("%c", str2[con]);
        con++;
    }*/
    
    /*while(str3[con]!='\0'){

        conc(&str1[con],&str2[con],&str3[con]);

        printf("%c",str3[con]);

        con++;

    }*/

    /*printf("%d",comp(str1,str2));*/

}