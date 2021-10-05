/*16. Faça um programa que receba duas frases distintas e imprima de maneira invertida,
trocando as letras A por *.*/


#include <stdio.h>
#include <conio.h>
#include <string.h>
#define NUM 50
int main(){
	
	char frase1[NUM], frase2[NUM];
	int i;
	
	printf("Digite 2 frases\n");
	
	printf("Digite a 1 frase: ");
	scanf("%s", frase1);
	
	printf("Digite a 2 frase: ");
	scanf("%s", frase2);
	
//	trocando letra frase 1
	for (i=0; i<strlen(frase1); i++){
		if ((frase1[i] == 'A') || (frase1[i] == 'a')){
			frase1[i] = '*';
		}
	}

//	trocando letra frase 2	
	for (i=0; i<strlen(frase2) ; i++){
		if ((frase2[i] == 'A') || (frase2[i] == 'a')){
			frase2[i] = '*';
		}	
	}
	
//	imprime frase1
	printf("\nOrdem inversa:\n");
	for (i=strlen(frase1); i>=0; i--){
		printf("%c", frase1[i]);
	}
	printf("\n");

//	imprime frase2	
	for (i=strlen(frase2); i>=0; i--){
		printf("%c", frase2[i]);
	}
	
	return 0;
}
