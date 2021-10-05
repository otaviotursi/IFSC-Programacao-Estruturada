// 1. Faça um programa que solicite o nome de uma pessoa, como saída, exiba a soma das
// letras do nome (tabela ASCII); Dica: para fazer com que o scanf leia também após o
// espaço utilize:
//  char buffer[TAMANHO];
//  scanf("%[^\n]", buffer);
 
#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[256];
  int cont =0, soma=0;

  printf("Digite o seu nome: ");
  scanf("%[^\n]",nome);

  for (cont=0; cont<strlen(nome); cont++){
    soma += nome[cont];
  }
  
  printf("soma: %d", soma);

  return 0;
}