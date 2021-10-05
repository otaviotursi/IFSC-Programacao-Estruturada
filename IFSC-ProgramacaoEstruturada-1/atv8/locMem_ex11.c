/*11. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
(a) Dever�o ser armazenados, para cada aluno: matr�cula, sobrenome (apenas um) e ano
de nascimento.
(b) Ao in�cio do programa, o usu�rio devera informar o n�mero de alunos que ser�o
armazenados
(c) O programa devera alocar dinamicamente a quantidade necess�ria de mem�ria para
armazenar os registros dos alunos.
(d) O programa devera pedir ao usu�rio que entre com as informa��es dos alunos.

(e) Ao final, mostrar os dados armazenados e liberar a mem�ria alocada.
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct alunos{
	
	int matricula;
	char sobrenome[50];
	int nascimento;
	
};

struct alunos recebeValor(){
	
	struct alunos aluno;
	printf("\nDigite a matricula: ");
	scanf("%d", &aluno.matricula);	
	printf("Digite o sobrenome: ");
	scanf("%s", &aluno.sobrenome);	
	printf("Digite o nascimento: ");
	scanf("%d", &aluno.nascimento);
	
	return aluno;	
}

void imprimeValor(int quantia, struct alunos *aluno){
	int i;
	
	for (i =0; i<quantia; i++){
		printf("\nMatricula: %d | Sobrenome: %s | Nascimento: %d", aluno[i].matricula, aluno[i].sobrenome, aluno[i].nascimento);
	}
}


int main(){
	
	int i, quantia;
	struct alunos *aluno;
	printf("Digite quantos alunos voce quer cadastrar: ");
	scanf("%d", &quantia);
	
	aluno = (struct alunos*) malloc(quantia * sizeof(struct alunos));
	
	for (i =0; i<quantia; i++){
		aluno[i] = recebeValor();
	}
	
	imprimeValor(quantia, aluno);
	
	free(aluno);
	
	return 0;
}
