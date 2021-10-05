/*12. Escreva um programa que leia a profissao e o tempo de serviço (em anos) de cada um dos 5
funcionarios de uma empresa e armazene-os no arquivo “emp.txt”. Cada linha do arquivo
corresponde aos dados de um funcionario. Em seguida, leia o mesmo arquivo utilizando fscanf().
Apresente os dados na tela.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

struct func{
	
	int tempoServico;
	char profissao[50];

};

struct func leValores(){
	struct func valores;
	
	printf("\nDigite a profissao: ");
	scanf("%s", &valores.profissao);
	printf("Digite o tempo de servico em anos: ");
	scanf("%d", &valores.tempoServico);
	
	return valores;
}

void armazenarVal(struct func *pessoa, FILE* Arq){

	char string[100];
	int i;

	Arq = fopen("emp.txt", "a+");
	if (Arq == NULL){
		printf("NULL");
	}
	for (i=0; i<NUM; i++){
		sprintf(string, "profissao: %s. tempo de servico: %d\n", pessoa[i].profissao, pessoa[i].tempoServico);
		fputs(string, Arq);
		
	}
	
	fclose(Arq);

}

void imprimeValor(FILE* Arq){
	int num1;
	char ch1[10], ch2[200], ch3[5], ch4[2], ch5[8]; 
	
	Arq = fopen("emp.txt", "r");
	while( (fscanf(Arq,"%s %s %s %s %s %d\n", &ch1, &ch2, &ch3, &ch4, &ch5, &num1))!=EOF ){
		printf("%s %s %s %s %s %d\n", ch1, ch2, ch3, ch4, ch5, num1);	
	}
	
	fclose(Arq);
}

int main(){
	FILE* Arq;
	
	int i;
	struct func *valor;
	struct func *valor1;
	printf("Programa para ler o STATUS dos funcionarios e imprimi-los");
	valor = (struct func*) malloc(1 * sizeof(struct func));
	
	for (i=0; i<NUM; i++){
		
		valor[i] = leValores();
		
		valor1 = (struct func*) realloc(valor, (1+i+1) * sizeof(struct func));
		if (valor1 != NULL){
			valor = valor;
		}
		
	}
	armazenarVal(valor, Arq);
	printf("\n");
	imprimeValor(Arq);
	return 0;
}
