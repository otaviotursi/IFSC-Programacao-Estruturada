// 9. Escreva uma função que some os elementos em um vetor de inteiros. Exemplo: int
// soma(int vetor[], int tamanho); Teste a função criada.


#include <stdio.h>

int soma(int *vetor){
  int i = 0, refe=0;

  refe = 0;
  for (i=0; i<10; i++){
    refe += vetor[i];
  }
  
  return refe;

}

int main() {
  int i=0,valor=0, vetor[10];
  
  for(i=0; i<10; i++){
    printf("digite um numero: ");
    scanf("%d", &vetor[i]);
  }
  
  valor = soma(vetor);
  printf("Soma valor: %d", valor);


  return 0;
}