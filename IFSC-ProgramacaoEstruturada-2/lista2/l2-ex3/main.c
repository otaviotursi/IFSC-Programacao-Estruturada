// Questão 3:. Escreva uma função recursiva que ache o
// maior elemento em um vetor de inteiros.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int imprime(int *numero, int qntNumero){
  int maior, m;
  
  m = numero[0];
  if (qntNumero != 0){

    maior = imprime(numero+1, qntNumero-1);
    printf("\nImprime: %d %d", maior, m);
    if (maior > m){
      return maior;
    } else {
      return m;
    }

  }

  return maior;
}

int main() {
  // vamos achar o maior valor do vetor

  int maior, tam=10, numero[] = {6, 2, 5, 10, 20, 4, 1, 0, -10, 3};
   
  
  printf("Analisando numeros: ");

  maior = imprime(numero, tam);
  printf("\n\nMaior valor: %d", maior);

  return 0;
}