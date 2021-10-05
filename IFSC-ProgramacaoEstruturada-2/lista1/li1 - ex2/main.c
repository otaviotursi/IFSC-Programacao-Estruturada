// 2. Crie um programa que solicite dois nomes A e B, verifique se os nomes são iguais (mesmo
// nome); se A é maior que B (número de caracteres); se B é maior que A;

#include <stdio.h>
#include <string.h>
#include<stdbool.h>

bool compararNome(char *nomeA, char *nomeB){
  bool sinalIgual = false;
  int contNome=0;
  
  // vai fazer um ciclo for para verificar se a string é a mesma, se for, retorna true, se não false
  for (contNome=0; contNome < strlen(nomeA); contNome ++ ){
    if (nomeA[contNome] == nomeB[contNome]){
      sinalIgual = true;
    } else {
      sinalIgual = false;
    }
  }
  return sinalIgual;
}

int main(void) {
  int qntChars=0;
  char nomeA[60];
  char nomeB[60];
  bool sinalIgual;

  printf("Digite um nome: ");
  scanf("%s", nomeA);
  
  fflush(stdin);

  printf("Digite mais um nome: ");
  scanf("%s", nomeB);
  
  qntChars = strcmp(nomeA, nomeB);

  if (qntChars > 0){
    printf("Nome 1: %s é maior", nomeA);
  } else if (qntChars < 0) {
    printf("Nome 2: %s é maior", nomeB);
  } else {
    printf("Nome A e B são iguais\n");
    sinalIgual = compararNome(nomeA, nomeB);
  
    if (sinalIgual){
      printf("Nomes são iguais");
    } else {
      printf("Nomes não são iguais");
    }
  }

  return 0;
}