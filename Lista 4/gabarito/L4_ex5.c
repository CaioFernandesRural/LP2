//Escreva um programa que preencha com valores reais uma matriz M[4,5]. 
//Em seguinda, calcule e imprima a matriz DOBRO [4, 5], onde cada elemento
// é o dobro do elemento da mesma posição em M. Finalmente, calcule e 
// imprima a matriz SOMA[4, 5], calculada pela fórmula: SOMA = M + DOBRO.


#include <stdio.h>
#include <math.h>

#define N 1000  // teste com outros valores tb    

main() {
	int i, j;
	int mat[4][5], dobro[4][5], soma[4][5];
	
	for (i=0; i<4; i++)
		for (j=0; j<5; j++) {
			mat[i][j] = rand() % 100;
			dobro[i][j] = mat[i][j] * 2;
			soma[i][j] = mat[i][j] + dobro[i][j];			
	}

	printf("\nMatriz M: ");		// vou imprimir arrumadinho :) mas não pedi isso
	for (i=0; i<4; i++) {
		printf("\n [ ");
		for (j=0; j<4; j++)
			printf("%4d , ", mat[i][j]);	
		printf("%4d\t]", mat[i][4]);
	}

	printf("\n\nMatriz DOBRO: ");		// vou imprimir arrumadinho :) mas não pedi isso
	for (i=0; i<4; i++) {
		printf("\n [ ");
		for (j=0; j<4; j++)
			printf("%4d , ", dobro[i][j]);	
		printf("%4d\t]", dobro[i][4]);
	}

	printf("\n\nMatriz SOMA: ");		// vou imprimir arrumadinho :) mas não pedi isso
	for (i=0; i<4; i++) {
		printf("\n [ ");
		for (j=0; j<4; j++)
			printf("%4d , ", soma[i][j]);	
		printf("%4d\t]", soma[i][4]);
	}
	
}
