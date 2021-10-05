/*15. Leia uma matriz 4 x 4, conte e escreva quantos valores maiores que 10 ela possui.
*/

#include <stdio.h>
#define NUM 4

int main(){
	
	int matriz[4][4], qntMaiores10=0, i, j;
	printf("Matriz 4x4\n");
	
	for (i=0;i<NUM;i++){
		for (j=0;j<NUM;j++){
			printf("Digite um valor para a linha [%d] e coluna [%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	for (i=0;i<NUM;i++){
		for (j=0;j<NUM;j++){
			if ( matriz[i][j] > 10){
				qntMaiores10 = qntMaiores10 + 1;
			}
		}
	}
	printf("Quantidade de valores maiores que 10 na matriz = %d", qntMaiores10);
	
	return 0;
}
