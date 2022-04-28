#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int numero;
    char frase[20];
}estrutura;

void atribuir(){
    FILE *f;
    estrutura x;

    f = fopen("numeros.bin","wb");

    printf("Digite o número: ");
    scanf("%d",&x.numero);

    printf("Digite uma frase de até 30 caracteres: ");
    scanf("%s",x.frase);

    fwrite(&x,sizeof(x),1,f);

    fclose(f);

}

void escrever(){
    FILE *f;
    estrutura y;
    
    f = fopen("numeros.bin","rb");

    fread(&y,sizeof(y),1,f);
    
    printf("\nNúmero: %d", y.numero);
    printf("\nFrase: %s", y.frase);

    fclose(f);
}

void main (){
    atribuir();
    escrever();
}