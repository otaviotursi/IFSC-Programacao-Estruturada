/*12. Fa�a um programa que leia tr�s valores inteiros e chame uma fun��o que receba estes 3
valores de entrada e ordene esses valores nas vari�veis recebidas, ou seja, o menor valor na
primeira vari�vel, o segundo menor valor na vari�vel do meio, e o maior valor na ultima
vari�vel. A fun��o deve retornar o valor 1 se os tr�s valores forem iguais e 0 se existirem
valores diferentes. Exibir os valores ordenados na tela.*/

#include <stdio.h>
#include <stdlib.h>
#define NUM 3
int ordenaValores(int* var1, int* var2,int* var3){
	int i;
	int* menor;
	int* medio;
	int* maior;
	int var[3] = {*var1, *var2, *var3};
//	printf("var 0: %d", *var1);
	menor = var1;
	if (menor < var2) {
		menor = var2;
	} else {
		menor = var3;
	}
	
	maior = var1;
	if (maior > var2) {
		maior = var2;
	} else {
		maior = var3;
	}
	
	i = 0; 
	while(i<NUM){
		if (menor < var[i] < maior ){
			medio = var[i];
			break;
		}
		i++;
	}
	
	printf("\nMENOR %d | MEDIO %d | MAIOR %d", menor, medio, maior);
//	return value;
}

int main(){
	
	int i, var[NUM];
	for (i=0; i<NUM; i++){
		
		printf("Digite o valor %d: ", i);
		scanf("%d", &var[i]);
		
	}
	
	ordenaValores(&var[0],&var[1], &var[2]);
	
	return 0;	
}
