//Atividade avaliativa


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct alunos{
	
	int matricula;
	int nota;
	
};

struct alunos recebeValor(){
	
	struct alunos aluno;
	printf("\nDigite a matricula: ");
	scanf("%d", &aluno.matricula);	
	printf("Digite a nota: ");
	scanf("%d", &aluno.nota);
	
	return aluno;	
}

void calculoTurma(struct alunos *aluno, int cont){
	int i, media, maiorNota, menorNota;
	float result;
	
	media = 0;
	maiorNota = aluno[0].nota;
	menorNota = aluno[0].nota;
	
	for (i=0; i<cont; i++){
		media += aluno[i].nota;
		
		if (aluno[i].nota >= maiorNota){
			maiorNota = aluno[i].nota;
		}
		if (aluno[i].nota <= menorNota){
			menorNota = aluno[i].nota;
		}
	}
	
	result = media/cont;
	printf("\n\nMedia da turma: %.2f | Qnt. alunos: %d\nMaior nota: %d | Menor Nota: %d", result, cont, maiorNota, menorNota);
	
}

int main(){
	
	int loopWhile, cont=0;
	
	struct alunos *aluno;
	struct alunos *aluno1;
	
	printf("Vamos calcular a media geral da Sala!");
	aluno = (struct alunos*) malloc(1 * sizeof(struct alunos));
	
	do{
		
		aluno[cont] = recebeValor();
		
		printf("\n\nDeseja cadastrar mais pacotes?\n1 - Sim\nOu pressiona qualquer tecla para nao\nOpcao: ");
		scanf("%d", &loopWhile);
		if (loopWhile == 1){
			aluno1 = (struct alunos*) realloc(aluno, (1+cont+1) * sizeof(struct alunos));
			if (aluno1 != NULL){
				aluno = aluno1;
			}
		}
		
		cont++;
	} while (loopWhile == 1);
	
	calculoTurma(aluno, cont);
	
	return 0;
}
