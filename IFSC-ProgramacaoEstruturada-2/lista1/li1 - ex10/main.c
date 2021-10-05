// 10. Escreva um programa que atribua 25 números para uma matriz 5x5. O algoritmo deve
// atribuir na diagonal da matriz o valor numérico 1, nos outros elementos da matriz o valor
// numérico 0. Exiba para o usuário o conteúdo da matriz. Observação: a matriz não deve ser
// inicializada com os respectivos valores; o exercício deve ser resolvido com estrutura de
// repetição. Exemplo:

#include <stdio.h>

int main(void) {
  int i=0, j=0, matriz[5][5];

  for (i=0;i<5;i++){
    for (j=0;j<5;j++){
      if (i == j){
        matriz[i][j] = 1;
      } else {
        matriz[i][j] = 0;
      }
    }
  }

  for (i=0;i<5;i++){
    for (j=0;j<5;j++){
        printf("[%d]", matriz[i][j]);
    }
    printf("\n");
  }

  return 0;
}