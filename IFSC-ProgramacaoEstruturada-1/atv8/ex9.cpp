/*9. Faça um programa que leia uma quantidade qualquer de números armazenando-os na
memória e pare a leitura quando o usuário entrar um número negativo. Em seguida,
imprima o vetor lido. Use a função REALLOC para alocar memória.*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

	int *vNumeros, *vNumeros1;
	int cont=0, i;
	
	vNumeros = (int*) malloc(2 * sizeof(int));
	
	do{
		printf("Digite um numero inteiro, que nao seja negativo: ", cont+1);
		scanf("%d", &vNumeros[cont]);
		
		
		cont += 1;
		
		vNumeros1 = (int*) realloc(vNumeros, (5+cont) * sizeof(int));
		if (vNumeros1 != NULL){
			vNumeros = vNumeros1;
		}
		
	} while (vNumeros[cont-1] >= 0);
	
	for (i=0; i<cont; i++){
		printf("\nNumeros digitados: %d", vNumeros[i]);
	}
	
	free(vNumeros);
	
	return 0;
	
}
