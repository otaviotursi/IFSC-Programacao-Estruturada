/*10. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando
apenas aritmética de ponteiros, leia esse array do teclado e imprima o dobro de cada valor
lido.
*/

#include <stdio.h>
#include <stdlib.h>

void dobroValor(int *valor){
	
	*valor *= 2;
	
}

int main(){

	int vetor[5], i=0;
	for (i=0; i< 5; i++){
		printf("Digite um valor: ");
		scanf("%d", &vetor[i]);
	}
	
	for (i=0; i< 5; i++){
		
		dobroValor(&vetor[i]);
		printf("\nValor dobrado de %d: %d: ", i, vetor[i]);
	}
	
	
    return 0;
}
