// Questão 2:. Escreva uma função recursiva que calcule
// a multiplicação de dois números naturais, através de
// incrementos sucessivos.

#include <stdio.h>
#include <string.h>

void imprime(int numero){

  if (numero < 100){
    numero *= numero;
    imprime(numero);
    printf("\n%d", numero);
  }

}

int main() {
  // vamos iniciar com 2 para conseguir fazer a multiplicação e não ser um valor infinito e limitar a algum valor < 100

  int numero = 2;

  printf("multiplicando numeros: ");

  imprime(numero);

  return 0;
}