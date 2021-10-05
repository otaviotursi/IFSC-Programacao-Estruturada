/*3. Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuario a
informação de 5 alunos, armazene em vetor dessa estrutura e, utilizando uma outra função,
imprima os dados na tela.
*/

#include <stdio.h>
#define NUM 5

struct lista{
	char nome[50];
	int matricula;
	char curso[50];
	
};

struct lista recebeValor(){
	struct lista aluno;
	printf("\nDigite o nome do aluno: ");
	scanf("%s", aluno.nome);
	
	printf("Digite o numero de matricula do aluno: ");
	scanf("%d", &aluno.matricula);
	
	printf("Digite o curso aluno: ");
	scanf("%s", aluno.curso);
	
	return aluno;
}

void imprimeValor(struct lista aluno){
	printf("\n\nNome do aluno: %s\nNumero matricula: %d\nCurso: %s", aluno.nome, aluno.matricula, aluno.curso);
}

int main(){
	int i;
	struct lista alunos[NUM];
	printf("Lista de alunos a serem matriculados: ");
	
	for (i=0; i<NUM; i++){
		alunos[i] = recebeValor();
	}
	printf("\n\nLista de alunos matriculados:");
	for (i=0; i<NUM; i++){
		imprimeValor(alunos[i]);
	}
	
}
