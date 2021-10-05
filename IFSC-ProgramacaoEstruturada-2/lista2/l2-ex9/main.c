// Questão 9:. Considerando um array de inteiros, faça
// uma função que inverta a posição dos seus elementos.

#include <stdio.h>

void imprime(int *frase, int tam){

  if (tam > 0){
    imprime(frase+1, tam-1);

    printf("%d, ", frase[0]);
  }

}

int main() {
  int tam=10, frase[] = {1,2,3,4,5,6,7,8,9,10};
  
  printf("Invertendo valores: \n");
  printf("ARRAY: ");
  imprime(frase, tam);

  return 0;
}