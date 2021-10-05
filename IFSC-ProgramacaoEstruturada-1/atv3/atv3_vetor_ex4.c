/*4. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.
*/

#include <stdio.h>

int main(){
	int i, vetor[10], qntValoresPares=0;
	printf("Vetor de 10 posicoes. Contar os pares.\n");
	
	for (i=0;i<10; i++){
		printf("Digite um numero: ");
		scanf("%d", &vetor[i]);
	}
	for (i=0;i<10;i++){
		if (vetor[i] % 2 == 0){
			printf("\nValor PAR = %d", vetor[i]);
			qntValoresPares = qntValoresPares + 1;
			
		}
	}
	printf("\nQuantidade de numeros pares = %d", qntValoresPares);
	return 0;
}
