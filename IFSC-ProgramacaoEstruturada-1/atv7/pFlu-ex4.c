/*4. Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba o ponteiro
destas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o � chamada passando duas
vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B e B ter� o
valor de A.*/

#include <stdio.h>
#include <stdlib.h>

void trocaValor(int* valor1, int* valor2){
	int salvar;
	
	salvar = *valor1;
	printf("\nv1 %d", salvar);
	*valor1 = *valor2;
	printf("\nv2 %d", valor1);
	*valor2 = salvar;
	printf("\nv3 %d", valor2);	
	
}

int main(){
	
	int valor1, valor2;
	
	printf("Digite o valor 1: ");
	scanf("%d", &valor1);
	printf("Digite o valor 2: ");
	scanf("%d", &valor2);
	
	trocaValor(&valor1, &valor2);
	
	printf("valores trocados:\n1: %d | valor 2: %d", valor1, valor2);
	
}
