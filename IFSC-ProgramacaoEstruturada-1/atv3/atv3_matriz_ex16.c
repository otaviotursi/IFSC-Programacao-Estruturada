/*16. Declare uma matriz 5 x 5. Preencha com 1 a diagonal principal e com 0 os demais
elementos. Escreva ao final a matriz obtida.*/


#include <stdio.h>
#define NUM 5
int main(){
	int matriz[5][5], i, j;
	
	printf("Matriz 5x5\n");
	
	for (i=0;i<NUM;i++){
		for (j=0;j<NUM;j++){
			if (matriz[i] == matriz[j]){
				matriz[i][j] = 5;	
			} else {
				matriz[i][j] = 0;	
			}	
		}
	}
	
	for (i=0;i<NUM;i++){
		for (j=0;j<NUM;j++){
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
