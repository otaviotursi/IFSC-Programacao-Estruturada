
//3. Crie uma função em C chamada Sorteio(). Essa função retorna, através de sorteio (utilizando um número randômico, com a função rand() ) , um número entre 1 e 10.
//
//Crie um programa que faça a chamada dessa função por 100 vezes.
//
//Conte quantas vezes cada um dos 10 números foi sorteado e ao final, imprima o resultado dos sorteios.


#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUM 100

int Sortear(){
	int sorteador = (rand() % 10)+1;
	return sorteador;
	
}

int main(){
	
	int i, j, vezesSorteador[NUM], contador[NUM];
	
	
	for (j=1;j<11;j++){
		contador[j] =0;
	}
	for (i=0;i<NUM;i++){
		contador[i] = 0;
		vezesSorteador[i] = Sortear();
		
		for (j=1;j<11;j++){
			if (vezesSorteador[i] == j){
				contador[j] = contador[j]+1;
			}
		}
	}
	
	for (i=1;i<11; i++){
		printf("\nNumero: %d, vezes contado: %d", i,contador[i]);
	}
	
	return 0;
}
