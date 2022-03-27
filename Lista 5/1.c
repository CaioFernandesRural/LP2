#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void mai(char *x){
    
    for (int c=0; c<strlen(x); c++){

        if (*(x+c)>=97 && *(x+c)<=122){

            *(x+c)-=32;
        }
    }
    printf("%s\n",x);
}

char conc(char *x, char *y){

    int tam=strlen(x);

    for(int c=0; c<strlen(y)+1; c++){

        *(x+tam)=*(y+c);
        
        tam++;
    }
    return(x);
}

int cap(char *x){

    for (int c=0; c<strlen(x); c++){

        if(c==0){

            if(*(x+c)>=97 && *(x+c)<=122){

                *(x+c)-=32;
            }
            else if(*(x+c)==32){

                if (*(x+c+1)>=97 && *(x+c+1)<=122){
                    *(x+c+1)-=32;
                }
            }
        }

    }
    printf("%s\n",x);
    return strlen(x);
}

int comp(char *x, char *y){

    int resu=0, tammenstr;

    if(strlen(x)<strlen(y)){

        tammenstr=strlen(x);
    }
    else{

        tammenstr=strlen(y);
    }
    for (int c=0; c<tammenstr; c++){

        if(*(x+c)==*(y+c)){

            continue;
        }
        else if(*(x+c)<*(y+c)) {return -1;}

        else {return 1;}
    }
}

int main(){

    char str1[30],str2[30];
    int op,tamstr;

    printf("Digite: ");
    gets(str1);
    printf("Digite: ");
    gets(str2);

    printf("\n");

    mai(str1);
    mai(str2);

    printf("\n");

    conc(str1, str2);
    printf("Concatenados: %s\n",str1);

    printf("\n");

    tamstr=cap(str1);
    printf("A string tem %d caracteres\n", tamstr);

    printf("\n");

    int resu=comp(str1, str2);
    printf("%d\n", resu);

    printf("\n");
}