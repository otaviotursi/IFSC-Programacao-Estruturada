#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct pessoas{
  char nome[64];
  char idade[64];
  char cidade[64];
};

void lePessoas(){
  struct pessoas pessoa[MAX];
  int cont=0;
  for (cont=0; cont<MAX; cont++){
    printf("\nDigite o nome: ");
    fgets(pessoa[cont].nome, 64, stdin);
    fflush(stdin);
    
    printf("Digite a cidade: ");
    fgets(pessoa[cont].cidade, 64, stdin);
    fflush(stdin);
  
    printf("Digite a idade: ");
    fgets(pessoa[cont].idade, 64, stdin);
    fflush(stdin);
  } 
}

void imprimePessoas(){
  struct pessoas pessoa[MAX];
  int cont=0;
  for (cont=0; cont<MAX; cont++){
    printf("\nNome: %s", pessoa[cont].nome);
    printf("Idade: %s", pessoa[cont].idade);
    printf("Cidade: %s", pessoa[cont].cidade);
  }
}

int main(void) {

  printf("Hello World\n");
  lePessoas();
  imprimePessoas();

  return 0;
}