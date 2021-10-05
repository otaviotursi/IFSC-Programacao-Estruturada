// 13. Repita o exercício anterior considerando agora a criação de um vetor de ponteiros de
// structs pessoa, ao invés de um vetor de structs pessoa. Em seguida, leia os dados de 10
// pessoas preenchendo o vetor com ponteiros de structs criadas utilizando alocação
// dinâmica de memória (malloc). Como passo final, deve-se imprimir os dados do vetor.
// Exemplo de vetor de ponteiros para structs Pessoa: struct Pessoa* pessoas[10];

#include <stdio.h>
#include <stdlib.h>
#define MAX 10

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
  for (cont=0; cont<quantia; cont++){
    printf("\nNome: %s | ", pessoa[cont].nome);
    printf("Idade: %d | ", pessoa[cont].idade);
    printf("Cidade: %s", pessoa[cont].cidade);
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