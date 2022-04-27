// Escreva um programa que implemente uma calculadora com o seguinte 
// menu de opções (use uma estrutura de repetição que só será encerrada 
// quando o usuário escolher a opção FIM), onde TODAS as opções 
// deverão ser implementadas usando uma FUNÇÃO RECURSIVA:
// 1) Fatorial de N
// 2) X^Y (XY = X*X^Y-1)
// 3) X*Y (usando o método de somas sucessivas) (X*Y = X+(X*Y-1) )
// 4) X mod Y (X=X-Y enquanto X for maior do que Y)
// 5) Sequência de N termos de Fibonacci (Ni= Ni-1+Ni-2)


#include <stdio.h>

long int fatorial (int n) {
    long int fat;
    
	if(n == 0)
		fat = 1;
	else
		fat = n * fatorial(n-1); 
		
	return fat;	

};

long int exponencial (int n1, int n2) {
    long int expo;
    
	if(n2 == 0)
		expo = 1;
	else if (n2 == 1)
		expo = n1;
	else
		expo = n1 * exponencial(n1, n2-1); 
		
	return expo;	
};

long int multiplica (int n1, int n2) {
    long int multi;
    
	if(n2 == 0)
		multi = 0;
	else if (n2 == 1)
		multi = n1;
	else
		multi = n1 + multiplica(n1, n2-1); 
		
	return multi;	
};

long int modulo (int n1, int n2) {
    long int mod;
    
	if(n1 < n2)
		mod = n1;
	else
		mod = modulo(n1-n2, n2); 
		
	return mod;	
};

int fibonacci(int n) {
   if (n == 0)
      return 0;
   else if (n == 1) 
      return 1;
   else 
      return (fibonacci(n-1) + fibonacci(n-2));

}

main() {
	int i, op, n1, n2;
	long int res;

	printf("\nEscolha uma opcao:");
	printf("\n\n1 - Fatorial de N");
	printf("\n2 - X^Y");
	printf("\n3 - X*Y ");
	printf("\n4 - X mod Y");
	printf("\n5 - Fibonacci");
	printf("\n6 - Encerrar");
	printf("\nOpcao: ");
	scanf("%d", &op);
	
	while ( op != 6 )	 {
		printf("\nEntre com um numero:");
		scanf("%d", &n1);
		
		switch(op) {
			case 1: res = fatorial(n1);
					printf("\nFatorial de %d = %ld", n1, res);
					break;
			case 2: printf("\nEntre com outro numero:");
					scanf("%d", &n2);
					res = exponencial(n1, n2);
					printf("\n%d ^ %d = %ld", n1, n2, res);
					break;
			case 3: printf("\nEntre com outro numero:");
					scanf("%d", &n2);
					res = multiplica(n1, n2);
					printf("\n%d x %d = %ld", n1, n2, res);
					break;
			case 4: printf("\nEntre com outro numero:");
					scanf("%d", &n2);
					res = modulo(n1, n2);
					printf("\n%d mod %d = %ld", n1, n2, res);
					break;
			case 5: for (i = 1; i<n1; i++)
						printf("%d ",fibonacci(n1));
					break;
		}
		
		printf("\nEscolha uma opcao:");
		printf("\n\n1 - Fatorial de N");
		printf("\n2 - X^Y");
		printf("\n3 - X*Y ");
		printf("\n4 - X mod Y");
		printf("\n5 - Fibonacci");
		printf("\n6 - Encerrar");
		printf("\nOpcao: ");
		scanf("%d", &op);

	}
	
}
