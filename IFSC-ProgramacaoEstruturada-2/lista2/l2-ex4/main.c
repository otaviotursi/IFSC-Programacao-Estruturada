// Questão 4:. Escreva uma função recursiva que some
// os elementos em um vetor de inteiros.

#include <stdio.h>
#include <string.h>

int imprime(int *numero, int qntNumero, int soma){

  
  if (qntNumero != 0){

    soma = imprime(numero+1, qntNumero-1, soma);
    soma += numero[0];
    printf("\n%d %d", soma, numero[0]);
    return soma;
  }

  return soma;
}

int main() {
  // vamos iniciar com uma lista de numeros para conseguir fazer a soma.


  int soma, tam=3, numero[] = {2,3,5};
  // int soma, tam=10, numero[] = {6, 2, 5, 10, 20, 4, 1, 0, -10, 3};
   
  printf("Somando numeros: ");

  soma = imprime(numero, tam, soma=0);
  printf("\nSoma: %d", soma);
  return 0;
}