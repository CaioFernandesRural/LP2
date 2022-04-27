//Faça um programa que leia uma quantidade indeterminada de números reais positivos x 
//até que o usuário digite um número negativo ou zero. Escreva uma função chamada func() 
//que deverá receber x como parâmetro e retornar um valor real, de acordo com a definição abaixo. 
//Além da função func(), cada opção de x deverá ser calculada em uma nova subrotina 
//(ex: se x>=10, será chamada, de dentro de func(x) a subrotina xless10(x), que retorna 
//o valor da primeira expressão:

#include <stdio.h>
#include <math.h>

float xMenor4 (int x){
	float res;
	
	res = sqrt(x*x+1)/2;
	return res;
}

float xEntre4e10 (int x){
	float res;
	
	res = (float)(x*x*x)/(x*x-16);
	return res;
}

float xMaior10 (int x){
	float res;
	
	res = sqrt(x-10)/2;
	return res;
}

float func (int x) {
   
	if (x <= 4)
		return xMenor4(x);
	else if (x >= 10)
		return xMaior10(x);
	else 
		return xEntre4e10(x);

};

main() {
	float res;
	int x;
		
	printf("\nDigite um valor para x: ");
	scanf("%d",&x);
	
	while (x > 0) {
		res = func(x);
		printf("A função Y para o valor %d eh: %.2f", x, res);
		
		printf("\n\nDigite um valor para x: ");
		scanf("%d",&x);		
	}	
}
