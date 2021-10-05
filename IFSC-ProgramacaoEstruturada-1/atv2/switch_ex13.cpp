/*13. Usando o comando switch, escreva um programa que leia um inteiro entre 1 e 7 e
imprima o dia da semana correspondente a este numero. Isto é, domingo se for 1, segundafeira se for 2, e assim por diante.*/

#include <stdio.h>

int main(){
	
	int diaNumero;
	
	printf("Vamos descobrir qual eh o dia da semana!");
	printf("\nDigite um numero entre 1 e 7: ");
	
	scanf("%d", &diaNumero);
	
	switch (diaNumero){
		case 1:
			printf("\nDomingo");
			break;
		
		case 2:
			printf("\nSegundo");
			break;
		
		case 3:
			printf("\nTerca");
			break;
		
		case 4:
			printf("\nQuarta");
			break;
		case 5:
			printf("\nQuinta");
			break;
		case 6:
			printf("\nSexta");
			break;
		case 7:
			printf("\nSabado");
			break;
		default:
			printf("\nValor invalido\n");
		
	}
	return 0;
}
