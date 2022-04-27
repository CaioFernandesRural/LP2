//Faça um programa que leia uma linha de texto e substitua cada vogal lida por 
//N vogais iguais, onde N representa o número de vogais lidas até então. 
//Para os demais caracteres, o programa deve imprimir apenas o próprio caractere.
// Considere que o usuário digitará apenas caracteres minúsculos. Ex:
//Texto lido: apenas um exemplo!
//Texto impresso: apeenaaas uuuum eeeeexeeeeeemplooooooo!


#include <stdio.h>
#define N 200

main() {
	int i, j, k, tot;
	char letra, lido[40], impresso[N];
	
	printf("Entre com uma linha de texto: ");
	gets(lido);

	i = k = 0;
	tot = 1;
	while (lido[i] != '\0') {
		letra = lido[i];
		if (letra==97 || letra==101 || letra==105 || letra==111 || letra==117) {
			for (j=1; j<= tot; j++) 
				impresso[k++] = letra;	
			tot++;			
		}
		else
			impresso[k++] = lido[i];
		i++;	

	 }
	
	printf("\nLinha lida: %s", lido);
	printf("\nLinha impressa: %s", impresso);
	 	
}
