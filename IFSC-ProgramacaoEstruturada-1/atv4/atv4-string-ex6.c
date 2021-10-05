/*6. Faça um programa que conte o numero de 1’s que aparecem em um string. Exemplo:
“0011001” -> 3*/


#include <stdio.h>
#include <conio.h>
#include <string.h>
#define NUM 50

int main(){
	
	char frase[NUM];
	int contador=0, i;
	
	printf("Digite alguma coisa que tenha '1': ");
	scanf("%s", frase);
	

//	faz a contagem de 1's na frase

	for (i=0;i<strlen(frase); i++){
		if (frase[i]=='1'){
			contador = contador + 1;
		}
	}
	printf("\nnumero de '1' na frase: %d", contador);
	return 0;	
}
