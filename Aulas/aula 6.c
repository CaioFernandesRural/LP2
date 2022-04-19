/*struct aluno  //exemplo de declaração de struct e declaração das variáveis

{
    char nome[40];
    int registro;
    int ano_entrada;    
    char curso[20];
}paulo, carlos, ana;

paulo.ano_entrada = 1999; //exemplo referenciação de um elemento

gets(paulo.curso) //ler o nome do curso de paulo

*/
//-------------------
/*struct data   //estruturas podem conter estruturas
{
    int dia, mes, ano;
};
struct aluno            
{
    char nome[40];
    int registro;
    int ano_entrada;
    char curso[20];
    struct data data_nascimento;
};
paulo.data_nascimento.mes //para referir ao mês de nascimento da variável paulo
*/                        //operador(.)associa os campos da esquerda para a direita
/* //possível atribui conteúdo de uma estrutura a outa, desnecessário atribuir 1 por 1
#include <stdio.h>
void main(){
    struct empregado{
        char nome[40];
        float salario;
    }temp, emp1;
    puts("nome: "); gets(emp1.nome);
    puts("salario: "); scanf("%f",&emp1.salario);
    
    temp=emp1;

    printf("O salario de %s e %.2f\n",temp.nome,temp.salario);
}
*/
/*struct aluno turma[100]; //estruturas aparecem frequentemente na forma de matrizes

printf("%s\n", turma[2].nome); //se quisermos imprimir nome do terceiro aluno
*/
#include <stdio.h>
#define max 4

/*void main(){
    
    struct aluno{
        char nome[40];
        float n1, n2, media;
    }turma[max], turma2[max];
    
    int i, j, pos;

    puts("Lendo dados da turma");

    for(i=0;i<max;i++){
        printf("Dados do aluno %d\n", i+1);
        puts("Nome: "); gets(turma[i].nome);
        puts("Primeira nota: "); scanf("%f", &turma[i].n1);
        puts("Segunda nota: "); scanf("%f", &turma[i].n2);
        turma[i].media=(turma[i].n1+turma[i].n2);
    }
}*/
// Passagem de estruturas para funções
/*struct ponto{ //passagem de elementos da estrutura para funções, usa maneira normal
    float x, y;
}p1, p2;

if(positivo(p1.x)==0){ //passar a coordanada x do ponto1, para a função positivo
    puts("Eixo y");
}
else if(positivo(p1.x>0)){
    puts("Eixo positivo dos x");
}
else{
    puts("Eixo negativo dos x");
}*/
/*
#include <math.h>
#include <stdio.h>
struct ponto {
    float x, y;
};
float comp(struct ponto p1, struct ponto p2){
    
    return sqrt (pow(p2.x-p1.x,2)+pow(p2.y-p1.y,2));
}
void main () {
    struct ponto P1, P2 ;
    puts("Coordenadas do ponto 1");
    printf("x1 = ? "); scanf ("%f", &P1.x);
    printf("y1 = ? "); scanf ("%f", &P1.y);
    puts("Coordenadas do ponto 2");
    printf("x1 = ? "); scanf ("%f", &P2.x);
    printf("y1 = ? "); scanf ("%f", &P2.y);
    printf("\nnComprimento da reta = %.2f", comp (P1, P2));
}*/

//Ponteiros para estruturas
//definir ponteiros para estruturas,declaração similar a um ponteiro normal, exemplo:
/*struct aluno 
{
    char nome[40];
    int ano_entrada;
    float n1, n2, media;
}*maria;

//acessar elementos da estrutura apontada por ponteito usa: (->)

printf("A media vale %1.f",maria->media); //imprimir a media de maria
*/

//SINTAXE
//car_pt = (struct var_pt*) malloc(sizeof(struct var_pt));
// trecho (struct var_pt*) usado para conversão de tipo (cast).

//Exemplo:

/*struct data{
    int dia, mes, ano;
};

struct data * cria_data (int d, int m, int a){
    struct data *dt;
    dt= (struct data*) malloc(sizeof(struct data));
    dt->dia = d;
    dt->mes = m;
    dt->ano = a;
    return dt;
}
void imprime_data(struct data *d1){
    printf("\ndia = %d\n mes = %d\n ano = %d", d1->dia, d1->mes, d1->ano);
}   //acessar elementos de estrutura apontada por um apontador (->) operador seta
void imprime_data2(struct data d1){
    printf("\ndia = %d\n mes = %d\n ano = %d", d1.dia, d1.mes, d1.ano);
}   
void imprime_data3(struct data *d1){
    printf("\ndia = %d\n mes = %d\n ano = %d", (*d1).dia, (*d1).mes, (*d1).ano);
}   //alternativamente, operadores (*) e (.)
void main(){
    struct data *dt;

    dt = cria_data(25,12,2016);

    imprime_data(dt);
    imprime_data2(*dt);
    imprime_data3(dt);

    getch();
}*/

//Declarando um tipo struct

// typedef tipo var; //cria novo tipo de dado

/*typedef struct{ // faz com que var passe a ser o nome de um novo tipo
    int x;
    int y;
}ponto;

ponto a, b;*/ //novo tipo chamado ponto, que pode declarar novos pontos

/*struct data{ //usando typedeft temos de:
    int dia, mes, ano;
};
//para:
typedef struct{ //deixa o código mais legível
    int dia, mes, ano;
} tpData;*/

typedef struct{
    int dia, mes, ano;
}tpData;

tpData *cria_data(int d, int m, int a){
    tpData *dt;
    dt = (tpData*) malloc(sizeof(tpData));
    dt->dia = d;
    dt->mes = m;
    dt->ano = a;
    return dt;
}
void imprime_data(tpData * d1){
    printf("\ndia = %d\n mes = %d\n ano = %d",d1->dia,d1->mes,d1->ano);
}
void imprime_data2(tpData d1){
    printf("\ndia = %d\n mes = %d\n ano = %d",d1.dia,d1.mes,d1.ano);
}
void imprime_data3(tpData * d1){
    printf("\ndia = %d\n mes = %d\n ano = %d",(*d1).dia,(*d1).mes,(*d1).ano);
}
main(){
    tpData * dt;

    dt = cria_data(25,12,2016);

    imprime_data(dt);
    imprime_data2(*dt);
    imprime_data3(dt);

    getch();
}


