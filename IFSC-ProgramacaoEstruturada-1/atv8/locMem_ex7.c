/*7. Escreva um programa que leia primeiro os 6 números gerados pela loteria e depois os
6 números do seu bilhete. O programa então compara quantos números o jogador
acertou. Em seguida, ele aloca espaço para um vetor de tamanho igual a quantidade de
números corretos (os que foram acertados) e guarda os números corretos nesse novo
vetor. Finalmente, uma função que recebe o endereço do vetor alocado, exibe os números
sorteados e os seus números corretos.*/



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define NUM 6

int comparador(int nLot, int nBil){
	if (nLot == nBil){
		return nLot;	
	} else {
		return 0;
	}

}

void imprimeResult(int cont, int *nCertos){
	int i;
	printf("Numeros certos: %d", cont);
	for (i=0; i<cont; i++){
		printf("\nNumeros sorteados: %d", nCertos[i]);
	}
}

int main(){

	int *nLoteria, *nBilhete, *nCertos, *nCertos1;
	int i, j, respN=0, cont=0;
	
	nLoteria = (int*) malloc(NUM * sizeof(int));
	nBilhete = (int*) malloc(NUM * sizeof(int));
	
	nCertos = (int*) malloc(1 * sizeof(int));
	
	for (i=0; i<NUM; i++){
		printf("Digite o numero %d sorteado: ", i+1);
		scanf("%d", &nLoteria[i]);
	}
	printf("\n");
	for (i=0; i<NUM; i++){
		printf("Digite o numero %d do seu bilhete: ", i+1);
		scanf("%d", &nBilhete[i]);
	}
	
	for (i=0; i<NUM; i++){
		for (j=0; j<NUM; j++){
			respN = comparador(nLoteria[i], nBilhete[j]);
			
			if (respN != 0){
				nCertos[cont] = respN;
				cont +=1;
				
				nCertos1 = (int*) realloc(nCertos, (1+cont) * sizeof(int));
				if (nCertos1 != NULL){
					nCertos = nCertos1;
				}
				
			}
		}
	}
	
	printf("\n");
	imprimeResult(cont, nCertos);
	
	
	free(nLoteria);
	free(nBilhete);
	free(nCertos);
	free(nCertos1);
	
	return 0;
}
