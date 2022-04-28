//2) Faça um programa em C que leia um vetor de 30 inteiros e implemente as funções a seguir, 
//utilizando, OBRIGATORIAMENTE, ponteiros e passagem de parâmetros por referência:
//a. void zeraPares (int * vet): recebe um vetor e troca todos os números pares contidos nele pelo zero.
//b. void dobra (int * vet): recebe um vetor e multiplica todos os seus elementos por dois.
//c. void soma (int * vet1, int * vet2): recebe dois vetores de inteiros e soma cada par
// de elementos de mesmo índice, colocando o resultado no primeiro vetor.


#include <stdio.h>
#include <math.h>

#define N 30     

void soma (int * v1, int * v2) {
	int i;

	for (i=0; i<N; i++)
		*(v1+i) += *(v2+i);	
}

void zeraPares (int * vt) {
	int i;

	for (i=0; i<N; i++)
		if (*(vt+i) % 2 == 0)
			*(vt+i) = 0;	
}

void dobra (int * vt) {
	int i;

	for (i=0; i<N; i++)
		*(vt+i) *= 2;	
}


imprime (int * vt) {
	int i;
	
	printf("\nVetor:\n [ ");
	for (i=0; i<N-1; i++)
		printf("%3d , ", vt[i]);	
	printf("%4d\t]", vt[i]);
}

main() {
	int i, cont, max;
	int vet1[N], vet2[N];
	
	for (i=0; i<N; i++) {
		vet1[i] = rand() % 100;	
		vet2[i] = rand() % 100;	
	}
	
	printf("\n\n1o vetor:");
	imprime(vet1);
	printf("\n\n2o vetor:");
	imprime(vet2);

	printf("\n\nSomando os dois:");
	soma(vet1, vet2);
	imprime(vet1);

	printf("\n\nZerando os pares:");
	zeraPares(vet1);
	imprime(vet1);

	printf("\n\nDobrando o 2o vetor:");
	dobra(vet2);
	imprime(vet2);


}
