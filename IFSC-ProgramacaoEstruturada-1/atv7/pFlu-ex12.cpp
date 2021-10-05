/*12. Faça um programa que leia três valores inteiros e chame uma função que receba estes 3
valores de entrada e ordene esses valores nas variáveis recebidas, ou seja, o menor valor na
primeira variável, o segundo menor valor na variável do meio, e o maior valor na ultima
variável. A função deve retornar o valor 1 se os três valores forem iguais e 0 se existirem
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
