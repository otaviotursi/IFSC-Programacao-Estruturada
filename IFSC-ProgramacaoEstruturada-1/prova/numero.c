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

int funSoma(int numero){
	
	int contador =1, contador1=1, vetorNumero[NUM];
	
	
	vetorNumero[0] = numero;
	printf("\nvetorNumero %d", vetorNumero[0]);
	
	while (contador <= NUM){
		
		vetorNumero[contador] = vetorNumero[contador-1] + numero;
		printf("\nvetorNumero %d %d",contador, vetorNumero[contador]);
		
		if (vetorNumero[contador] >= 100){
			printf("\ncontador %d", contador1);
			return contador1, vetorNumero[contador];
		}
		contador1 ++;
		contador ++;
	}
	
	
}
int funImprimir(int resultadoContador, int resultadoVetor){
	printf("\nfinalSoma %d | Numero de somatorias: %d ", resultadoContador, resultadoVetor);
	
}

int main(){
	
	int numero, resultadoContador, resultadoVetor, abc, imprimir;
	
	printf("Vamos fazer somas com 1 unico numero.");	
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &numero);
	
	resultadoContador, resultadoVetor, abc = funSoma(numero);
	printf("\nresultadoSoma %d %d %d", abc, resultadoContador, resultadoVetor);
	funImprimir(resultadoContador, resultadoVetor);
}
	
