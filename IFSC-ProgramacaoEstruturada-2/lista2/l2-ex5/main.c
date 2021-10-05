// Questão 5:. Os números tetranacci representam uma
// generalização da sequência bonacci. Eles iniciam com
// quatro termos pré-determinados e a partir daí todos
// os demais números são obtidos pela soma dos quatro
// números anteriores. Os primeiros números são: 0, 1,
// 1, 2, 4, 8, 15, 29, 56, 108, 208, ... Faça uma função
// recursiva que receba um número N e retorne o Nésimo termo da sequência.

#include <stdio.h>
#include <string.h>

void imprime(int *numero, int qntNumero){
  int soma=0;
  
  // limitador
  if (qntNumero <= 10){
    imprime(numero, qntNumero+1);

    // fez o calculo matematico, ele aloca o valor seguinte, no anterior sucessivalmente, assim vai somando todos os valores e obtemos o tetranacci
    soma = numero[0] + numero[1] + numero[2] + numero[3];
    numero[0] = numero[1];
    numero[1] = numero[2];
    numero[2] = numero[3];
    numero[3] = soma;
    printf("\nTetranacci: %d = %d %d %d %d", soma, numero[0], numero[1], numero[2],numero[3]);

  }

}

int main() {
  // vamos iniciar com uma lista de numeros para conseguir fazer o tretanacci e limitar em 10 rodadas.


  int tam=0, numero[] = {0, 1, 1, 2};
   
  printf("Tetranacci numeros: ");

  imprime(numero, tam);
  return 0;
}