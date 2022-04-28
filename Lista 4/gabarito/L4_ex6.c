//Escreva um programa que preencha com valores inteiros a matriz A[3,5] e 
//imprima seu conteúdo. Em seguida, calcule e imprima o vetor SOMA_LINHA, 
//onde cada elemento do vetor corresponde à soma dos elementos de uma linha da matriz A.


#include <stdio.h>
#include <math.h>

#define N 100  // teste com outros valores tb    

main() {
	int i, j;
	int mat[3][5], somaLinha[3];
	
	for (i=0; i<3; i++) {
		somaLinha[i] = 0;
		for (j=0; j<5; j++) {
			mat[i][j] = rand() % 10;
			somaLinha[i] = somaLinha[i] + mat[i][j];
		}
	}

	printf("\nMatriz M: ");		// vou imprimir arrumadinho :) mas não pedi isso
	for (i=0; i<3; i++) {
		printf("\n [ ");
		for (j=0; j<4; j++)
			printf("%4d , ", mat[i][j]);	
		printf("%4d\t]", mat[i][4]);
	}

	printf("\n\nVetor SOMA_LINHA:\n [ ");
	for (i=0; i<2; i++)
		printf("%4d , ", somaLinha[i]);	
	printf("%4d\t]", somaLinha[i]);

}
