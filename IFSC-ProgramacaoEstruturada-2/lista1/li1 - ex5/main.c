// 5. Escreva um programa que leia 16 números informados pelo usuário para uma matriz 4x4.
// Exiba na tela somente os números positivos. No lugar dos números negativos imprima o
// carácter '&'.

#include <stdio.h>

int main() {
  int i=0, j=0, valor[4][4], contador=0, val=0;

  for (i=0; i<4; i++){
    for (j=0; j<4; j++){
      printf("Digite o valor nº [%d][%d]: ", i, j);
      scanf("%d", &valor[i][j]);
      if (0 > valor[i][j]){
        valor[i][j] = '&';
      }
      contador += 1;
      
    }
  }
  
  for (i=0; i<4; i++){
    for (j=0; j<4; j++){  
      if (valor[i][j] == 38){
        printf("[%c]", valor[i][j]);
      } else {
        printf("[%d]", valor[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}