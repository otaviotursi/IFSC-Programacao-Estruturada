// 8. Escreva uma função que ache o maior elemento em um vetor de inteiros. Exemplo: int
// maior(int vetor[], int tamanho); Teste a função criada.

#include <stdio.h>

void maior(int *vetor){
  int i = 0, refe=0;

  refe = 0;
  for (i=0; i<10; i++){
    if (vetor[i] > refe){
      refe = vetor[i];
    } 
  }

  printf("Maior valor: %d", refe);

}

int main() {
  int i=0, vetor[10];
  
  for(i=0; i<10; i++){
    printf("digite um numero: ");
    scanf("%d", &vetor[i]);
  }
  
  maior(vetor);


  return 0;
}