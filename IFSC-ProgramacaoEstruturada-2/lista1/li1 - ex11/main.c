// 11. Crie um programa para determinar a matriz resultante da subtração de duas matrizes de
// tamanho 2x2. O usuário deve informar os valores para as matrizes. Exemplo:

#include <stdio.h>
#define TAM 2

int main(void) {
  int i=0, j=0, matriz1[TAM][TAM], matriz2[TAM][TAM], cont, resultado[4];

  printf("\n\nMatriz 1\n");
  for (i=0;i<TAM;i++){
    for (j=0;j<TAM;j++){
      printf("Digite um numero [%d][%d]: ", i, j);
      scanf("%d", &matriz1[i][j]);
    }
  }

  printf("\nMatriz 2\n");
  for (i=0;i<TAM;i++){
    for (j=0;j<TAM;j++){
      printf("Digite um numero [%d][%d]: ", i, j);
      scanf("%d", &matriz2[i][j]);
    }
  }

  printf("\n\nCalculando a subtração de matrizes:\n");

  for (i=0;i<TAM;i++){
    for (j=0;j<TAM;j++){
        printf("[%d]", matriz1[i][j]);
    }
    
    printf(" - ");
    for (j=0;j<TAM;j++){
        printf("[%d]", matriz2[i][j]);
    }
    printf("\n");
  }

  // printf("\n\Conta:");
  cont = 0;
  for (i=0;i<TAM;i++){
    for (j=0;j<TAM;j++){
      resultado[cont] = matriz1[i][j] - matriz2[i][j];
      printf("\n[%d] | [%d][%d] = [%d]-[%d]= [%d]",cont, i, j, matriz1[i][j], matriz2[i][j], resultado[cont]);
      cont ++;
    }
  }

  printf("\n\nResultado:\n");
  cont = 0;
  while (cont<4){
    printf("[%d]", resultado[cont]);
    if (cont == 1){
      printf("\n");
    }
    cont ++;
  }
  return 0;
}