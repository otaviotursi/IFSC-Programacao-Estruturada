/*3. Escreva um programa que contenha duas vari�veis inteiras. Leia essas vari�veis do
teclado. Em seguida,compare seus endere�os e exiba o conte�do do maior endere�o.*/

#include <stdio.h>
#include <stdlib.h>

void pedeValor1(int* valor1){
	printf("Digite o valor 1: ");
	scanf("%d", valor1);
}

void pedeValor2(int* valor2){
	printf("Digite o valor 2: ");
	scanf("%d", valor2);
}

//void comparaNumero(int valor1, int valor2){
//	printf("\n2 v1 %d v2: %d", &valor1, valor2);
//	
//}

int main(){
	int valor1=0; int valor2=0;
	
	pedeValor1(&valor1);
	
	
	pedeValor2(&valor2);
//	comparaNumero(valor1, valor2);
//	printf("\n1 v1: %d| v2: %d", valor1, valor2);
	if (valor1 > valor2){
		printf("Valor 1: %d", valor1);
	} else {	
		printf("Valor 2: %d", valor2);
	}
}

