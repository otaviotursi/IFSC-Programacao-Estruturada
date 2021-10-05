/*2. Entre com um nome e imprima esse nome somente se a primeira letra do nome for ‘a’
(maiuscula ou minúscula). */


#include <stdio.h>
#include <conio.h>
#include <string.h>
#define NUM 50

int main(){
	
	char nome[NUM];
	
	printf("Digite um nome: ");
	scanf("%s", nome);
	
//	vai checar se é valido
	if (nome[0] == 'a' || nome[0] == 'A'){
		printf("\nNome: %s", nome);
	} else {
		printf("\nO nome nao comeca com A");
	}
	
	return 0;
}
