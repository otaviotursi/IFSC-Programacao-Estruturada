/*13. Crie uma estrutura para armazenar livros: título (maximo 30 letras), autor (maximo 15 letras) e ano.
Faça um programa que leia um vetor desta esrutura com dados de 5 livros.
Em uma função separada, que verifica os dados no vetor, procure um livro por título, perguntando ao usuario qual título deseja buscar. 
Mostre os dados de todos os livros encontrados.*/

#include <stdio.h>
#include <string.h>

struct livros{
	
	char titulo[30];
	char autor[15];
	int ano;

};

struct livros recebeLivros(){
	
	struct livros l1;
	
	printf("\n\nInforme o titulo do livro: ");
	scanf("%s", l1.titulo);

	printf("\nInforme o autor do livro: ");
	scanf("%s", l1.autor);
	
	printf("\nInforme o ano do livro: ");	
	scanf("%d", &l1.ano);
	
	return l1;
}

void imprimeResult(char titu[30], struct livros livro){
	
	if (strcmp(titu, livro.titulo) == 0){
		printf("\n\nLivro encontrado!\nInformacoes sobre o livro: ");
		printf("\n	Titulo: %s\n	Autor: %s\n	Ano: %d", livro.titulo, livro.autor, livro.ano);
	}
	
}

int main(){
	struct livros l1;
	struct livros lVetor[5];
	int i;
	char titulo[30];
	
	for (i=0; i<5; i++){
		l1 = recebeLivros();
		lVetor[i] = l1;
	}
	
	printf("\nInforme o titulo que voce deseja procurar: ");
	scanf("%s", &titulo);
	
	for (i=0; i<5; i++){
		imprimeResult(titulo, lVetor[i]);
	}
	
	return 0;
}
