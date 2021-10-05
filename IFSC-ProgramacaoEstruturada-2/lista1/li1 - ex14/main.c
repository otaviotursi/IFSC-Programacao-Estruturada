//14. Considerando o exercício anterior, implemente uma função/algoritmo para procurar uma
// pessoa pelo nome e imprimir os dados referentes a ela..

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 

struct pessoas{
  char nome[64];
  int idade;
  char cidade[64];
};

struct pessoas lePessoas(){
  struct pessoas pessoa;
  int cont=0;
  printf("\nDigite o nome: ");
	scanf("%s", pessoa.nome);
  fflush(stdin);
  
  printf("Digite a cidade: ");
	scanf("%s", pessoa.cidade);
  fflush(stdin);

  printf("Digite a idade: ");
	scanf("%d", &pessoa.idade);
  fflush(stdin);

  return pessoa;
}

void imprimePessoas(int quantia, struct pessoas *pessoa){
  int cont=0;
  char nome[64];
  int sinalEncontrou=0;

  printf("\nDigite o nome da pessoa que voce quer procurar: ");
	scanf("%s", nome);
  fflush(stdin);

  for (cont=0; cont<quantia; cont++){

    if (strcmp(nome, pessoa[cont].nome) == 0){
      printf("\nNome: %s | ", pessoa[cont].nome);
      printf("Idade: %d | ", pessoa[cont].idade);
      printf("Cidade: %s", pessoa[cont].cidade);
      sinalEncontrou = 1;
    }
    
  }
  if (sinalEncontrou != 1){
    printf("\nNão foi encontrado ninguem com o nome solicitado.\nVerifique e tente novamente.");
  } 
}

int main(void) {
  int quantia = 10, i;
  struct pessoas *pessoa;

  pessoa = (struct pessoas*) malloc(quantia * sizeof(struct pessoas));

  for (i =0; i<quantia; i++){
		pessoa[i] = lePessoas();
	}
	

  imprimePessoas(quantia, pessoa);

  free (pessoa);
  return 0;
}