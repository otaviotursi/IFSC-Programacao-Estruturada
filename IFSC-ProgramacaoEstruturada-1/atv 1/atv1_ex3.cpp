/* 3. Pe�a ao usuario para digitar tr�s valores inteiros e imprima a soma deles.*/

#include <stdio.h>

int main(){
	
	int numero1, numero2, numero3, soma;
	
	printf("Vamos digitar 3 numeros inteiros e realizar a soma deles! ");
	
	printf("\n\nDigite o primeiro numero: ");
	scanf("%d", &numero1);
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &numero2);
	
	printf("\nDigite o primeiro numero: ");
	scanf("%d", &numero3);
	
	soma = numero1 + numero2 + numero3;
	
	printf("\nSoma dos 3 numeros: %d", soma);
	
}
