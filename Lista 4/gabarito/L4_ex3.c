//Tentando descobrir se um dado era viciado, um dono de cassino honesto
// o lançou N vezes. Dados os N resultados dos lançamentos, determinar o 
// número de ocorrências de cada face e a face que saiu o maior número 
// de vezes. Use um único vetor para armazenar as contagens de cada face.

 
#include <stdio.h>
#include <math.h>

// teste com N=100, 1000, 10000 e veja como a distribuição vai ficando mais homogênea
#define N 10000     

main() {
	int i, num;
	int dado[6];
	
	for (i=1; i<6; i++){ 
		dado[i] = 0;		// inicializo o dado, zerando todos os lados
	}
	
	for (i=1; i<=N; i++){  // vou escolher o N como constante e jogar o dados N vezes
		num = rand() % 6; // calculo o modulo de 6, para garantir que saíra um inteiro entre 
		dado[num]++;	  // 0 e 5. Cada inteiro representa um lado do dado
	}

	for (i=0; i<6; i++) {
		printf("\nLado %d = %d vezes", i, dado[i]);	
	}	

}
