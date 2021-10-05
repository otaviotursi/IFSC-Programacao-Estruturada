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
void gravaAlunos(struct alunos *aluno, FILE* Arq, int cont){
	char string[50];
	int i;
	
	Arq = fopen("saida.txt", "a+");
	if (Arq == NULL){
		printf("NULL");
	}
	
	
	for (i=0; i<cont; i++){
		
		sprintf(string, "matricula: %d: nota: %d\n", aluno[i].matricula, aluno[i].nota);
		fputs(string, Arq);
		
	}
	
	fclose(Arq);
}

void lerDados(FILE* Arq){
	int opcao;
	char buffer[1024];
	
	printf("\n\nVoce deseja ler os dados do arquivo?\n1- para Sim \nOu pressiona qualquer tecla para nao \nOpcao: ");
	scanf("%d", &opcao);
	
	if (opcao == 1){
		printf("\nInformacoes: \n");
		
		
		Arq = fopen("saida.txt", "a");
		fputs("\0", Arq);
		Arq = fopen("saida.txt", "r");
		fread(&buffer, sizeof(buffer), 1,Arq);
		
		fclose(Arq);
		
		printf("%s", buffer);	
	}
}

int main(){
	
	FILE* Arq;
	int loopWhile, cont=0;
	
	struct alunos *aluno;
	struct alunos *aluno1;
	
	printf("Vamos calcular a media geral da Sala!");
	aluno = (struct alunos*) malloc(1 * sizeof(struct alunos));
	
	do{
		
		aluno[cont] = recebeValor();
		printf("\n\nDeseja cadastrar mais alunos?\n1 - Sim\nOu pressiona qualquer tecla para nao\nOpcao: ");
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
	
	gravaAlunos(aluno, Arq, cont);
	
	lerDados(Arq);
	
	return 0;
}
