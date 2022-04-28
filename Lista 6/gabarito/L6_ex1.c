//Escreva um programa que cria um tipo de registro (usando typedef) que define uma data, 
//formada pelos campos DIA, M�S e ANO. Escreva tamb�m as fun��es:
//� INICIALIZA, que recebe valores de dia, m�s e ano, al�m de um registro do 
//tipo data, passado por refer�ncia e atribui esses valores aos campos do registro;
//� VALIDA, que recebe o registro data, passado por valor, e verifica se os 
//valores de dia, m�s e ano do registro s�o v�lidos; e
//� IMPRIME, que recebe o registro data, passado por valor, e imprime seus campos.
//Dentro da fun��o main, declare uma vari�vel do tipo data e chame cada uma das
// fun��es descritas acima.

#include <stdio.h>

typedef struct {
	int dia, mes, ano;
} tpData;

void inicializa (tpData * dt, int dia, int mes, int ano) {
	dt->dia = dia;
	dt->mes = mes;
	dt->ano = ano;
}

int valida (tpData dt) {
	if (dt.ano > 2022 || dt.ano<1900) {
		printf("Ano invalido!");  // poderia ter colocado mensangens de erro espec�ficas tamb�m
		return 0;  //  0 = false vai indicar que a data � inv�lida
	}
	
	if (dt.mes > 12 || dt.mes < 1) {
		printf("Mes invalido!");
		return 0;  //  0 = false vai indicar que a data � inv�lida
	}
	
	if (dt.dia < 1 || dt.dia > 31) {
		printf("Dia invalido!");
		return 0;  //  0 = false vai indicar que a data � inv�lida	
	}
	
	if ((dt.mes == 4 || dt.mes == 6 || dt.mes == 9 || dt.mes == 11 ) && dt.dia > 30) {
		printf("Dia invalido!");
		return 0;  //  0 = false vai indicar que a data � inv�lida	
	}	

	if (dt.mes == 2 && dt.dia > 28) {  // nao vou pensar em anos bissextos...
		printf("Dia invalido!");
		return 0;  //  0 = false vai indicar que a data � inv�lida	
	}	
	
	return 1; //  1 = true vai indicar que a data � v�lida	
}

void imprime (tpData dt) {
	printf("\n%d/%d/%d", dt.dia, dt.mes, dt.ano);	
}

main() {
	tpData data;
	int dia, mes, ano, flag = 0;
	
	while (!flag) {
		printf("\nDia: ");
		scanf("%d", &dia);
		printf("\nMes: ");
		scanf("%d", &mes);
		printf("\nAno: ");
		scanf("%d", &ano);
			
		inicializa(&data,dia, mes, ano);
		flag = valida(data);
		imprime(data);
	}
}
