/*12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e ordene esses valores nas variáveis recebidas, ou seja, o menor valor na
primeira variável, o segundo menor valor na variável do meio, e o maior valor na ultima
variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem
valores diferentes. Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <stdlib.h>
#define NUM 3
int ordenaValores(int* var1, int* var2,int* var3){
	
	int i, rValue=0;
	int menor;
	int medio;
	int maior;
	
	int aux1;
	int aux2;
	int aux3;
	
	int var[3] = {*var1, *var2, *var3};
	
	aux1 = var[0];
	aux2 = var[1];
	aux3 = var[2];
	
	i = 0; 
	while(i<NUM){
		if ((aux1 == aux2) && (aux1 == aux3)){
			rValue = 1;
			return rValue;
		}
		i++;
	}
	
	menor = aux1;
	if (menor > aux2) {
		menor = aux2;
	}
	if (menor > aux3) {
		menor = aux3;
	} 
	
	maior = aux1;
	if (maior < aux2) {
		printf("1");
		maior = aux2;
	}
	if (maior < aux3){
		printf("2");
		maior = aux3;
	}
	
	i = 0; 
	while(i<NUM){
		if ((menor < var[i]) && (var[i] < maior)){
			medio = var[i];
			break;
		}
		i++;
	}
	*var1 = menor;
	*var2 = medio;
	*var3 = maior;
//	printf("\nMENOR %d | MEDIO %d | MAIOR %d", menor, medio, maior);
	return rValue;
}

int main(){
	
	int i, var[NUM], resposta;
	for (i=0; i<NUM; i++){
		
		printf("Digite o valor %d: ", i);
		scanf("%d", &var[i]);
		
	}
	
	resposta = ordenaValores(&var[0],&var[1], &var[2]);
	if (resposta == 1) {
		printf("\nTodos os valores sao iguais.");
	} else {
		printf("\nOs valores sao diferentes.");
		printf("\nMenor valor: %d\nValor medio: %d\nMaior valor: %d", var[0],var[1],var[2]);
	}
	
	return 0;	
}
