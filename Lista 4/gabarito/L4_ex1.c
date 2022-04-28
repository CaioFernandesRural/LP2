//Leia um vetor de 20 posições e mostre-o. Em seguida, troque o primeiro elemento
// com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo,
//  e assim sucessivamente. Mostre o novo vetor depois da troca.

#include <stdio.h>

main() {
	int i, aux, vet[20];
	
	for (i=0; i<20; i++){
		printf("Entre com o %do elemento: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	for (i=0; i<10; i++) {
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;
	}

	printf("\nvet = [ ");
	for (i=0; i<19; i++)
		printf("%d, ", vet[i]);
	printf("%d ]\n", vet[i]);	
}
