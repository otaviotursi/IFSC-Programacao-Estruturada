/*1)
ok. Escreva um programa em linguagem C que recebe na tela um �nico n�mero, inteiro.

ok. Esse n�mero deve ser somado a ele mesmo. ok

ok. V� somando o n�mero que foi recebido na tela ao resultado da soma anterior AT� QUE o resultado dessa soma seja superior a 100.

ok. Declare um VETOR de inteiros e v� armazenando cada soma num posi��o do vetor.
ok. Defina  uma FUN��O para realizar a soma ( s� realize a soma dentro dessa fun��o).

Ao final, envie o vetor com os valores somados para uma FUN��O que far� a impress�o.
Imprima ent�o na tela, o resultado final da soma, o n�mero de somas que foram realizadas, e os valores de cada soma armazenados no vetor.
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
	
