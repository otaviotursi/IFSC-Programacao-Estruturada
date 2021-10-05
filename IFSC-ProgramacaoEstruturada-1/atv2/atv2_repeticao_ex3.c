/*d. Escreva um programa que declare um inteiro, inicialize-o com 0, e incremente-o de 1000
em 1000, imprimindo seu valor na tela, ate que seu valor seja 100000 (cem mil)*/

#include <stdio.h>

int main (){
	
	int numero;
	
	do{
		printf("\n%d", numero);
		numero = numero + 1000;
	} while(numero <= 100000);
	
	printf("\nParabens valor atingido");
	return 0;
}
