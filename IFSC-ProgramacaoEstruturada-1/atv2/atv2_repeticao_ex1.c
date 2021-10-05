/*a. Faça um programa que determine e mostre os cinco primeiros multiplos de 3,
considerando numeros maiores que 0.
*/

#include <stdio.h>

int main(){
	
	int numero3 = 3, numero, result;
	
	printf("Vamos mostrar os multiplos de 3");
	
	for (numero = 1; numero <= 5; numero++){
		result = numero3 * numero;
		printf("\nmultiplo de %d * %d = %d", numero3, numero, result);
	}
	
	return 0;
}
