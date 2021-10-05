// 15. Ainda considerando o exercício anterior, implemente uma função para remover uma
// pessoa do vetor através no nome. Sugestão: 



#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 

struct pessoas{
  char nome[64];
  char idade[64];
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
	scanf("%s", pessoa.idade);
  fflush(stdin);

  return pessoa;
}

void imprimePessoas(int quantia, struct pessoas *pessoa){
  int cont=0;
  char nome[64];
  int sinalEncontrou=0;

  printf("\nDigite o nome da pessoa que voce quer excluir: ");
	scanf("%s", nome);
  fflush(stdin);

  for (cont=0; cont<quantia; cont++){
    if (strcmp(nome, pessoa[cont].nome) == 0){
      pessoa[cont].nome = pessoa[cont+1].nome;
    }
    
  }
}

int main(void) {
  int quantia = 1, i;
  struct pessoas *pessoa;

  pessoa = (struct pessoas*) malloc(quantia * sizeof(struct pessoas));

  for (i =0; i<quantia; i++){
		pessoa[i] = lePessoas();
	}
	

  imprimePessoas(quantia, pessoa);

  free (pessoa);
  return 0;
}