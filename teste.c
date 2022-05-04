#include <stdio.h>

void teste (int *lista) {
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &*(lista+i));
    }
    
}

main () {
    int lista[20];

    teste(lista);

    for (int i = 0; i < 20; i++)
    {
        printf("\n %d", lista[i]);
    }
    
}