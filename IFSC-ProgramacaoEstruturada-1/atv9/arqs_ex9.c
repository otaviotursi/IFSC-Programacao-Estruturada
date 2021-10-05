/*9. Faça um programa que receba como entrada o ano corrente e o nome de dois arquivos: um de
entrada e outro de saída. 
Cada linha do arquivo de entrada contem o nome de uma pessoa
(ocupando 40 caracteres) e o seu ano de nascimento. O programa devera ler 
o arquivo de entrada e
gerar um arquivo de saída onde aparece o nome da pessoa seguida por uma string que representa a
sua idade.
 • Se a idade for menor do que 18 anos, escreva “menor de idade”
 • Se a idade for maior do que 18 anos, escreva “maior de idade”
 • Se a idade for igual a 18 anos, escreva “entrando na maior idade” */
 
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 2

struct arquivo{
	char nomeArq[40];
	int numArq;
};

void imprimir(int cont, char arqSaida[50], FILE* Arq, struct arquivo *valor, int ano){
	int i;
	char string[100];
	char resultado[25];
	
	Arq = fopen(arqSaida, "a+");
	if (Arq == NULL){
		printf("NULL");
	}
	for (i=0; i<cont; i++){
		
		if ((ano - valor[i].numArq) > 18){
			strcpy(resultado, "maior de idade");
		} else if ((ano - valor[i].numArq) == 18){
			strcpy(resultado, "entrando na maior idade");
		} else {
			strcpy(resultado, "menor de idade");
		}
		printf("\nnome: %s: %s", valor[i].nomeArq, resultado);
		
		sprintf(string, "nome: %s: %s\n", valor[i].nomeArq, resultado);
		fputs(string, Arq);
		
	}
	
	fclose(Arq);
}

void compara(int ano, char arqEntrada[50], char arqSaida[50], FILE* Arq, struct arquivo *valor){
	
	int cont=0;
	struct arquivo *valor1;
	
	valor = (struct arquivo*) malloc(1 * sizeof(struct arquivo));
	printf("\n");
	Arq = fopen(arqEntrada, "r");
	if (Arq == NULL){
		printf("NULL");
	}
	while( (fscanf(Arq,"%s %d\n", &valor[cont].nomeArq, &valor[cont].numArq))!=EOF ){
		
		valor1 = (struct arquivo*) realloc(valor, (1+cont+1) * sizeof(struct arquivo));
		if (valor1 != NULL){
			valor = valor1;
		}
		cont++;
	}
	
	fclose(Arq);
	imprimir(cont, arqSaida, Arq, valor, ano);
	
}

int main(){
	FILE* Arq;
	int ano;
	char arqEntrada[50], arqSaida[50];
	struct arquivo *valor;
	
	printf("Programa para classificar a maior idade");
	printf("\nDigite o ano corrente: ");
	scanf("%d", &ano);
	
	printf("\nDigite o nome do arquivo de entrada: ");
	scanf("%s", &arqEntrada);
	
	printf("\nDigite o nome do arquivo de saida: ");
	scanf("%s", &arqSaida);
	
	compara(ano, arqEntrada, arqSaida, Arq, valor);
	
	return 0;
}
