//1. Crie uma função em C, chamada Maior(), que recebe 2 números inteiros e retorna qual deles é o maior.
//
//Crie um programa que deve solicitar na tela 4 números inteiros. 
//
//O programa deve descobrir qual é o maior dos 4 números informados e imprimir o resultado.
//
//Detalhe: Para identificar qual é o maior número, SÓ PODE SER UTILIZADA A FUNÇÃO Maior().

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
