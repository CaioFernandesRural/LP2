//Escreva um programa em C que descubra o maior elemento de um conjunto 
//de N números e quantos valores iguais a este maior existem no conjunto.

#include <stdio.h>
#include <math.h>

#define N 1000  // teste com outros valores tb    

main() {
	int i, cont, max;
	int vet[N];
	
	for (i=0; i<N; i++){ 
		vet[i] = rand() % 100;	// vou limitar os numeros a 100, 
								// para ter chance de repeticao. Teste com outros valores tb
	}
	
	max = 0;
	for (i=0; i<N; i++){  
		if (vet[i] > max)
			max = vet[i];
	}

	cont = 0;
	for (i=0; i<N; i++) {
		if (vet[i] == max)
			cont++;	
	}	
	
	// a impressa do vetor pode ser comentada depois que o programa for testado
	for (i=0; i<N; i++) {
		printf("%d , ", vet[i]);	
	}
	printf("\nO maior valor encontrado foi %d e existem %d valores iguais a esse no vetor", max, cont);
	
}
