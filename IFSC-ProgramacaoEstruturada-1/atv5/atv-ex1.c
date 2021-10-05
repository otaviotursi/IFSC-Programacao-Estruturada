//1. Crie uma fun��o em C, chamada Maior(), que recebe 2 n�meros inteiros e retorna qual deles � o maior.
//
//Crie um programa que deve solicitar na tela 4 n�meros inteiros. 
//
//O programa deve descobrir qual � o maior dos 4 n�meros informados e imprimir o resultado.
//
//Detalhe: Para identificar qual � o maior n�mero, S� PODE SER UTILIZADA A FUN��O Maior().

#include <stdio.h>
#define NUM 4
int Maior(int numero1, int numero2){
	
	int numero;
	
	if (numero1 > numero2){
		numero = numero1;
	} else{
		numero = numero2;
	}
	
	return numero;
}

int main(){
	
	int numero[NUM], numeroMaior1, numeroMaior2, numeroMaiorTotal, i;
	
	for (i=0; i<NUM; i++){
		printf("Digite o numero %d: ", i);
		scanf("%d", &numero[i]);
	}
	
	
	numeroMaior1 = Maior(numero[0], numero[1]);
	
	numeroMaior2 = Maior(numero[2], numero[3]);
	
	numeroMaiorTotal = Maior(numeroMaior1, numeroMaior2);
	
	printf("\nO numero: %d eh maior.", numeroMaiorTotal);
	return 0;
}
