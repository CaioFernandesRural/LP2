#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>

/*int incre(int *p){

    (*p)+=1;

}
int decre(int *p){

    (*p)-=2;

}
void main(){

    int a=0;

    printf("\nValor de a: ");
    scanf("%d",&a);


    incre(&a);
    printf("%d\n",a);

    decre(&a);
    printf("%d",a);

}*/
//---------------------------------
/*int zera(int *x,int *y){

    *x=*y=0;

}

void main(){

    int a=0,b=0;

   printf("Digite: ");
   scanf("%d",&a);
   printf("Digite: ");
   scanf("%d",&b);

    zera(&a,&b);

    printf("\na agora e: %d\n",a);
    printf("\nb agora e: %d\n",b);

}*/
//---------------------------------
/*float raiz(float *a, float *b, float *d){

    float x1=0, x2=0;

    x1=((-(*b))+sqrt(*d))/(2*(*a));

    printf("\nx1= %.2f",x1);

    x2=((-(*b))-sqrt(*d))/(2*(*a));

    printf("\nx2= %.2f",x2);

}

void main(){

    float a=0, b=0, delt=0;

    printf("a: ");
    scanf("%f",&a);
    printf("b: ");
    scanf("%f",&b);
    printf("delta: ");
    scanf("%f",&delt);

    raiz(&a,&b,&delt);

}*/
//---------------------------------
/*void main(){ //prova de conceito
    int i, *pont, numeros[10];

    for(i=0;i<10;i++){
        numeros[i]=i;        
    }

    printf("\nEscrevendo conteudo de numeros[0]: %d",numeros[0]);
    printf("\nEscrevendo conteudo de numeros[0]: %d",*numeros);
    printf("\nEscrevendo conteudo de numeros[5]: %d",numeros[5]);
    printf("\nEscrevendo conteudo de numeros[5]: %d",*numeros+5);
    pont=numeros; //pont aponta para o vetor apontado por numeros
    printf("\nEscrevendo conteudo de numeros[9]: %d",pont[9]);
    printf("\nEscrevendo conteudo de numeros[9]: %d",numeros[9]);
}*/
//---------------------------------
/*void display(int *num){ //mostra
    
    for(int i=0;i<10;i++){
        printf("%d ",num[i]);
    }
}
main(void){ //coloca os valores

    int t[10];

    for(int i=0;i<10;++i){
        t[i]=i;
    }
    display(t);
}*/
//---------------------------------
/*void passa_para_maiuscula(char *string) {

    for(int t=0; string[t]; t++){

    string[t] = toupper(string[t]);
    }
}
main(void){
    char s[80];

    printf("informe uma string: ");
    gets(s);

    passa_para_maiuscula(s);
    
    printf("\na string original é alterada: %s", s);
}*/
//---------------------------------
/*void min(char *s){ //passa pra minúsculo

    for(int c=0;c<30;c++){

        if(*(s+c)>=65 && *(s+c)<=90){

            *(s+c)+=32;
        }
    }  

}
void main(){

    char str[30];

    printf("Digite: ");
    gets(str);

    min(str);

    printf("\n%s",str);

}*/
//---------------------------------
/*void inverte(char *so){ //inverte

    int len=strlen(so),temp;

    for(int c=0;c<len/2;c++){

        temp=so[c];  
        so[c]=so[len-c-1];  
        so[len-c-1]=temp;

    }

}
void main(){

    char str[30];

    printf("Digite: ");
    gets(str);

    printf("\nstr original: %s",str);

    inverte(str);

    printf("\nstr original: %s",str);

}*/
//---------------------------------
/*char conca(char *x, char *y){

    int con=strlen(x);

    for(int c=0;c<strlen(y);c++){

        *(x+con)=*(y+c);
        con++;
    }
    return x;
}
int len(char *x){

    int con=0;

    for(int c=0; c<strlen(x); c++){

        con++;

    }
    return con;
}
int comp(char *x, char *y){

    int cx=0,cy=0;

    if(strlen(x)>strlen(y)){

        return 1;
    }
    else if(strlen(x)<strlen(y)){

        return -1;
    }
    else{
        return 0;
    }
}
void main(){

    char str1[30],str2[30];

    printf("Digite: ");
    gets(str1);
    printf("\nDigite: ");
    gets(str2);

    printf("\n%d\n",comp(str1,str2));

    printf("\n%d\n",len(str1));

    conca(str1,str2);
    
    printf("\n%s\n",str1);

}*/
//---------------------------------
/*int comp(char *x,char *y){

    int cont=0;

    for(int c=0;c<10;c++){

        if(*(x+c)==*(y+c)){
            cont++;
        }
    }
    if(cont==10){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){

    int vet1[10],vet2[10];

        for(int c=0;c<10;c++){

            printf("\nvet 1: ");
            scanf("%d",&vet1[c]);
            printf("\nvet 2: ");
            scanf("%d",&vet2[c]);

        }
        printf("\n%d\n\n",comp(vet1,vet2));
}*/