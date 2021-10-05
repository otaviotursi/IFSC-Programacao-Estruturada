/*1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros,
(b) Peça para o usuario digitar os 5 numeros no espaço alocado,
(c) Mostre na tela os 5 numeros,
(d) Libere a memoria alocada*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
	int i;
	int *vNumeros;
	
	vNumeros = (int*) malloc(5 * sizeof(int));
	
	for (i=0; i<5; i++){
		printf("Digite um numero inteiro %d/5: ", i+1);
		scanf("%d", &vNumeros[i]);
	}
	for (i=0; i<5; i++){
		printf("\nNumeros digitados: %d", vNumeros[i]);
	}
	
	free(vNumeros);
	
	return 0;
}
