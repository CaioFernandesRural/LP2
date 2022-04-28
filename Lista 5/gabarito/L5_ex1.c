//Faça um programa em C que leia uma, ou duas, strings de 30 caracteres e implemente as funções 
// a seguir, utilizando, OBRIGATORIAMENTE, ponteiros e passagem de parâmetros por referência:
//a. void maiúsculas (string * str): converte todas as letras da string para maiúsculas.
//b. string * str concatena (string * str, string * str): recebe duas strings e retorna uma 
//string resultante da concatenação das duas iniciais.
//c. int capitaliza (string * str): recebe uma string e troca para maiúscula
//a primeira letra e todas as que seguirem um espaço, retorna também o tamanho
// da string, ou seja, a quantidade de caracteres preenchidos, antes do ‘\0’. 
// OBS: Toda string em C termina com o caractere ‘\0’.
//d. int compara(string * str, string * str): recebe duas strings e retorna um 
//resultado inteiro (-1, 0 ou 1) indicando se, respectivamente, a primeira é menor,
// igual ou maior do que a segunda string. OBS. A comparação é feita pela ordem lexográfica.

#include <stdio.h>

char * maiusculas (char * frase) {
	int i = 0;
	
	while (frase[i]!= '\0') {
		if (frase[i] > 90)
			frase[i] = frase[i]-32;	
		i++;
	
	}	
	return frase;
	
}

char * concatena (char * frase1, char * frase2) {
	char frase[60];
	int i = 0, j = 0;
	
	while (frase1[i]!= '\0') {
		frase[i] = frase1[i];	
		i++;
	}	
	
	while (frase2[j] != '\0') { 
		frase[i] = frase2[j];	
		i++;
		j++;
	}	
	
	frase2[i] = '\0';
	return frase2;		
}

char * capitaliza (char * frase) {
	int i = 0;
	
	while (frase[i]!= '\0') {
		frase[i] = frase[i];
		if (frase[i] == ' ') {
			if (frase[i+1] > 90)
			frase[i+1] = frase[i+1]-32;	
			i++;
		}
		i++;
	}	
	
	return frase;		
	
}

main() {
	char frase[50]; 
	
	printf("\nEntre com uma frase curta: ");
	gets(frase);

	printf("%s", frase);
	printf("%s", capitaliza(frase));
	printf("%s", maiusculas(frase));
	printf("%s", concatena(frase, frase));
}
	



