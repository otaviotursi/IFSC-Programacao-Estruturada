/*1)
ok. Escreva um programa em linguagem C que recebe na tela um único número, inteiro.

ok. Esse número deve ser somado a ele mesmo. ok

ok. Vá somando o número que foi recebido na tela ao resultado da soma anterior ATÉ QUE o resultado dessa soma seja superior a 100.

ok. Declare um VETOR de inteiros e vá armazenando cada soma num posição do vetor.
ok. Defina  uma FUNÇÃO para realizar a soma ( só realize a soma dentro dessa função).

Ao final, envie o vetor com os valores somados para uma FUNÇÃO que fará a impressão.
Imprima então na tela, o resultado final da soma, o número de somas que foram realizadas, e os valores de cada soma armazenados no vetor.
*/

#include <string.h>
#include <stdio.h>
#define NUM 100

int funSoma(int resultadoVetor, int numero){
	resultadoVetor += numero;
	return resultadoVetor;	
}

int funImprimir(int resultadoContador, int resultadoVetor){
	printf("\nNumero de somas: %d | Resultado das somatorias: %d ", resultadoContador, resultadoVetor);
	
}

int main(){
	
	int numero, resultadoContador, resultadoVetor=0, vetorNumero[NUM], contador=0;
	
	printf("Vamos fazer somas com 1 unico numero.");	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &numero);
	
	
	while (contador <= NUM){
		resultadoVetor = funSoma(resultadoVetor, numero);
	
		contador ++;
		if (resultadoVetor >= 100){
			break;
		}
	}
	
	funImprimir(contador, resultadoVetor);
}
	
