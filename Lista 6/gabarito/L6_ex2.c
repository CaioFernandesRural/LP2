//Uma DISCIPLINA é definida por uma estrutura contendo os campos: CÓDIGO, NOME e TURMA.
//. TURMA é um vetor de 40 elementos do tipo ALUNOSMAT.
//. Um ALUNOMAT é um registro, formado pelos campos ALUNO, NOTAS e FALTAS.
//. O campo ALUNO é um registro, formado pelos campos NOME, IDADE, CURSO, CR e MATRÍCULA.

#include <stdio.h>

typedef struct {
	char nome[30];
	int idade;
	float cr;
	long int matricula;
} tpAluno;

typedef struct {
	tpAluno aluno;
	float notas[3]; 
	int faltas;
} tpAlunoMat;

typedef struct {
	int codigo;
	char nome[30];
	tpAlunoMat turma[40];
} tpDisc;

//• CRIAR DISCIPLINA (esta opção atribui código e nome à disciplina, além de inicializar 
//os campos MATRÍCULA dos alunos, atribuindo a eles o valor zero).

void criarDisciplina (tpDisc * disc, int * cod) { 
	int i;
	
	disc->codigo = *cod;
	(*cod)++;  // incremento o codigo para a próxima receber o valor novo
	printf("\nEntre com o nome dados da disciplina a ser criada:");
	scanf("%s", disc->nome);
	
	for (i=0; i<40; i++) 
		disc->turma[i].aluno.matricula = 0;	
	
	printf("\nDisciplina %s criada com sucesso!", disc->nome);
}

//• INCLUIR ALUNO (verifica antes se há vagas na turma, procurando por um elemento do 
// TURMA tal que o campo MATRICULA do ALUNO seja igual a zero)

void incluirAluno (tpDisc * disc) {
	int i;
	tpAluno aluno;
	
	printf("\n\nEntre com os dados do aluno:");
	printf("\nNome:");
	scanf("%s",aluno.nome);
	printf("Idade:");
	scanf("%d", &aluno.idade);
	printf("CR:");
	scanf("%f", &aluno.cr);
	printf("Matricula:");
	scanf("%ld", &aluno.matricula);
	
	for (i=0; i<40; i++) {
		if (disc->turma[i].aluno.matricula == 0) {
			disc->turma[i].aluno = aluno;
			disc->turma[i].notas[0] = disc->turma[i].notas[1] = disc->turma[i].notas[2] = 0;
			disc->turma[i].faltas = 0;
			break;
		}
	}
}

//• LISTAR ALUNOS (todos os dados, de todos os alunos da disciplina)

void listarAlunos (tpDisc disc) {
	int i, vazia = 1;
	
	printf("\n\nListagem da Disciplina %s - Cod %d", disc.nome, disc.codigo);
	printf("\n\nAluno\tMatricula\tIdade\tCR");

	for (i=0; i<40; i++) {
		if (disc.turma[i].aluno.matricula != 0) {
			vazia = 0;
			printf("\n\n%s \t%ld \t%d \t%.1f", disc.turma[i].aluno.nome,
				disc.turma[i].aluno.matricula, disc.turma[i].aluno.idade, disc.turma[i].aluno.cr);
		}
	}
	if (vazia)
		printf("\nA turma %d esta vazia", disc.codigo);
}
//• CALCULAR CR MÉDIO dos alunos inscritos na disciplina

void calculaCrMedio (tpDisc disc) {
	int i;
	float soma=0, cont=0, media;
	
	for (i=0; i<40; i++) {
		if (disc.turma[i].aluno.matricula != 0) {
			soma += disc.turma[i].aluno.cr;
			cont++;
		}
	}
	media = soma/cont;
	printf("\n\nO CR medio dos alunos matriculados em %s eh de %.1f", disc.nome, media);
}

//• IMPRIMIR BOLETIM de alunos da disciplina (imprimindo um relatório onde conste a 
//relação de todos os alunos, seus respectivos cursos, números de matrícula, total de
// faltas e nota na disciplina.

void imprimirBoletim (tpDisc disc) {
	int i, vazia = 1;

	printf("\n\nAluno\t\tMatricula\t\tP1\tP2\tOPT\tFaltas");
	
	for (i=0; i<40; i++) {
		if (disc.turma[i].aluno.matricula != 0) {
			vazia = 0;   // a formatacao do relatorio ficou ruim, mas nao tive tempo para acertar
			printf("\n%s %10ld %7.1f %7.1f %7.1f %7d %7.1f", disc.turma[i].aluno.nome,
				disc.turma[i].aluno.matricula, disc.turma[i].notas[0], disc.turma[i].notas[1],
				disc.turma[i].notas[2], disc.turma[i].faltas, disc.turma[i].aluno.cr );
		}
	}
	if (vazia)
		printf("\nA turma %d esta vazia", disc.codigo);
}
//• FECHAR DISCIPLINA (atribui para os campos código e nome o valor ‘ ‘ (ou ASCII=32) e, 
//para os campos MATRÍCULA dos alunos, o valor zero).

void fecharDisciplina (tpDisc * disc) { 
	int i;

	strcpy(disc->nome, " ");
	disc->codigo = 0;   // acabei usando um codigo numérico...
	
	for (i=0; i<40; i++)
		disc->turma[i].aluno.matricula = 0;	
}

main() {
	tpDisc disc; // um upgrade legal seria criar um vetor de disciplinas, mas ficaria mais complicado
	tpAluno aluno;
	char nomeDisc[30];
	int op = 1, cod = 1000;  // esse eh o codigo da primeira disciplina a ser criada
	
	while (op != 7) {
			printf("\n\nUFRRJ - Curso de Sistemas de Informacao - SIGAA");
	printf("\n-----------------------------------------------");
	printf("\nEscolha a opcao desejada:");
	printf("\n1 - Criar disciplina");
	printf("\n2 - Incluir aluno");
	printf("\n3 - Listar alunos");
	printf("\n4 - Imprimir boletins");
	printf("\n5 - Calcular CR medio");
	printf("\n6 - Fechar disciplina");
	printf("\n7 - Encerrar\nOpcao: ");
	scanf("%d", &op);
	
		switch (op) {
			case 1: criarDisciplina(&disc, &cod);  // cada vez que for criada uma nova disciplina, 
									// essa função irá incrementar o código, evitando repeticoes
					break;
			case 2: incluirAluno (&disc );
					break;
			case 3: listarAlunos(disc);	
					break;
			case 4: imprimirBoletim(disc);
					break;
			case 5: calculaCrMedio(disc);
					break;
			case 6: fecharDisciplina(&disc);
					break;				
		}
	}
}

