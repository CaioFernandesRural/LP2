//Leia dois vetores, um preenchido com valores sequenciais de 0 a 9 e 
//outro com valores sequenciais de 10 a 19, e intercale-os num terceiro 
//vetor formando uma nova variável. Mostre o vetor obtido, imprimindo seus
// elementos na ordem inversa.
 
 
#include <stdio.h>

main() {
	int i, j;
	int vet1[20], vet2[20], vet3[20];
	
	for (i=0; i<10; i++){
		vet1[i] = i;
		vet2[i] = i+10;
	}
	
	j = 0;
	for (i=0; i<10; i++) {
		vet3[j++] = vet1[i];
		vet3[j++] = vet2[i];
	}	

	printf("\nvet = [ ");
	for (i=0; i<19; i++)
		printf("%d, ", vet3[i]);
	printf("%d ]\n", vet3[i]);	
}
