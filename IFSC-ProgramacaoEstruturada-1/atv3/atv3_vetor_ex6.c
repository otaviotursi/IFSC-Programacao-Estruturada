/*6. Crie um programa que leia 6 valores inteiros pares (garanta que eles sejam pares) e, em
seguida, mostre na tela os valores lidos na ordem inversa*/

#include <stdio.h>

int main(){
	
	int vetor[6], i;
	
	printf("Vetor INVERSO\n");
	
	for(i=0; i<6; i++){
		
		printf("Digite um numero par [%d]: ", i);
		scanf("%d", &vetor[i]);
		while ((vetor[i] %2 == 1) || (vetor[i] == 1)){
			printf("Tente novamente com um numero PAR\n");
			printf("Digite um numero par [%d]: ", i);
			scanf("%d", &vetor[i]);
		}
		
	}
	
	for(i=5; i>=0; i--){
		printf("\nVetor %d: %d", i+1, vetor[i]);
	}
	
}
