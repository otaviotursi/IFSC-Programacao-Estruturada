/*17. Faça um programa que leia um nome e imprima as 4 primeiras letras do nome.*/

#include <stdio.h>
#include <conio.h>
int main(){
	
	char nome[20];
	int i, tamanho;
	
	printf("Digite um nome: ");
	scanf("%s", nome);

//	vai checar se é valido
	for(i=0; i<4; i++){
		printf("\n%c", nome[i]);
	}
	
	return 0;
}
