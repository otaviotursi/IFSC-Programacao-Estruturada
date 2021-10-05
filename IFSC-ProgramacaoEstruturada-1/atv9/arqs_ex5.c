/*5. Faça um programa no qual o usuario informa o nome do arquivo e uma palavra. Acesse o
arquivo informado, faça a leitura, e retorne o numero de vezes que aquela palavra aparece no
arquivo.
*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void wordInString(char* frase, char* palavra){
	int qntFrase, qntPalavra, i=0, j=0, contLetra=0, contPalavra=0;
	
	qntFrase = strlen(frase);
	qntPalavra = strlen(palavra);
	
	while(i<qntFrase){
		for (j=0; j<qntPalavra; j++){
			if (palavra[j] == frase[i]){
				contLetra++;
				i++;
			} else {
				contLetra = 0;
			}
		}
		if (contLetra == qntPalavra){
			contPalavra ++;
			contLetra = 0;
		}
		i++;
	}
	
	printf("\nNumero de vezes que a palavra %s: aparece na frase: %d", palavra, contPalavra);
}

int main (){
	
	FILE* Arq;
	char nomeArquivo[50];
	char palavra[50];
	char buffer[1024];
	
	printf("Digite o nome do arquivo com a extensao dele: ");
	scanf("%s", &nomeArquivo);
	printf("Digite uma palavra para buscar no arquivo: ");
	scanf("%s", &palavra);
	
	Arq = fopen(nomeArquivo, "a");
	fputs("\0", Arq);
	
	Arq = fopen(nomeArquivo, "r");
	fread(&buffer, sizeof(buffer), 1,Arq);
	
	fclose(Arq);
	
	wordInString(buffer, palavra);
	
}
