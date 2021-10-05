/*12. Considere um cadastro de produtos de um estoque, com as seguintes informa��es
para cada produto:
� Codigo de identifica��o do produto: representado por um valor inteiro
� Nome do produto: com ate 50 caracteres
� Quantidade dispon�vel no estoque: representado por um n�mero inteiro
� Pre�o de venda: representado por um valor real
(a) Defina uma estrutura, denominada produto, que tenha os campos apropriados para
guardar as informa��es de um produto.
(b) Crie um conjunto de N produtos (N � um valor fornecido pelo usu�rio) alocando
mem�ria dinamicamente, e pe�a ao usu�rio para entrar com as informa��es de cada
produto.
(c) Encontre o produto com o maior pre�o de venda.
(d) Encontre o produto com a maior quantidade dispon�vel no estoque.*/


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


struct produto{
	
	int codigo;
	char nome[50];
	int qntDisponivel;
	float preco;
	
};

struct produto recebeProdutos(){
	struct produto valor;
	printf("\nDigite o nome do produto: ");
	scanf("%s", &valor.nome);
	printf("Digite o codigo do produto: ");
	scanf("%d", &valor.codigo);
	printf("Digite a quantidade de produtos disponiveis: ");
	scanf("%d", &valor.qntDisponivel);
	printf("Digite o preco do produto: ");
	scanf("%f", &valor.preco);
	
	return valor;
}

int main(){
	
	int quantia, i, maiorEstoque, maiorCodigoPreco, maiorCodigoEstoque;
	float maiorPreco;
	
	struct produto *qntProdutos;
	struct produto *qntProdutos1;
	
	
	printf("Digite quantos produtos voce quer cadastrar: ");
	scanf("%d", &quantia);
	
	qntProdutos = (struct produto*) malloc(1 * sizeof(struct produto));
	
	for (i=0; i<quantia;i++){
		qntProdutos[i] = recebeProdutos();
		
		qntProdutos1 = (struct produto*) realloc(qntProdutos, (1+i+1) * sizeof(struct produto));
		if (qntProdutos1 != NULL){
			qntProdutos = qntProdutos1;
		}
		
	}
	
	maiorPreco = qntProdutos[0].preco;
	maiorEstoque = qntProdutos[0].qntDisponivel;
	for (i=1; i<quantia+1;i++){
		
		if (qntProdutos[i].preco >= maiorPreco){
			maiorPreco = qntProdutos[i].preco;
			maiorCodigoPreco = qntProdutos[i].codigo;
		}
		if (qntProdutos[i].qntDisponivel >= maiorEstoque){
			maiorEstoque = qntProdutos[i].qntDisponivel;
			maiorCodigoEstoque = qntProdutos[i].codigo;
		}
	}
	
	
	printf("\nProduto com maior preco. Codigo: %d, Preco: %f", maiorCodigoPreco, maiorPreco);
	printf("\nProduto com maior estoque. Codigo: %d, Preco: %d", maiorCodigoEstoque, maiorEstoque);
	return 0;	
}
