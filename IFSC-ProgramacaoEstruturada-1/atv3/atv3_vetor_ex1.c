/*1. Fa�a um programa que possua um vetor denominado A que armazene 6 numeros inteiros.
O programa deve executar os seguintes passos:
(a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
(b) Armazene em uma variavel inteira (simples) a soma entre os valores das posi��es A[0],
A[1] e A[5] do vetor e mostre na tela esta soma.
(c) Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100.
(d) Mostre na tela cada valor do vetor A, um em cada linha.*/

#include <stdio.h>

int main(){
	
	int somaVetor, i;
	int vetor[6] = {1, 0, 5, -2, -5, 7};
	
	
	somaVetor = vetor[0] + vetor[1] + vetor[5];
	printf("Soma dos vetores = %d", somaVetor);
	
	vetor[4] = 100;
	
	for (i=0;i<6;i++){
		printf("\nValor do vetor [%d] = %d", i, vetor[i]);
	}
	
	
	return 0;
}
