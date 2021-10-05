/*7. Faça um programa que armazene em um registro de dados (estrutura composta) os dados
de um funcionario de uma empresa, compostos de:
• Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, Codigo do Setor onde trabalha
(0-99), Cargo que ocupa (string de ate 30 caracteres) e Salário.
Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela*/

#include <stdio.h>
#include <stdlib.h>

struct funcionario{
	char nome[50];
	int idade;
	char sexo;
	char cpf[15];
	char dataNasc[10];
	int codigoSetor;
	char cargo[30];
	int salario;
};

//struct funcionario recebeInfos();
//void imprimeInfos(struct funcionario p1);

struct funcionario recebeInfos(){
	
	struct funcionario p1;
	
	printf("\n\nInforme o seu nome: ");
	scanf("%s", p1.nome);
	printf("\nInforme a sua idade (somente numeros): ");
	scanf("%d", &p1.idade);
	printf("\nInforme o seu genero. M para Masculino e F para Feminino: ");
	scanf(" %c", &p1.sexo);
	while (p1.sexo != 'm' && p1.sexo != 'M' && p1.sexo != 'f' && p1.sexo != 'F'){
		printf("\nInforme o seu genero. M para Masculino e F para Feminino: ");
		scanf(" %c", &p1.sexo);
	}
	printf("\nInforme o seu CPF: ");
	scanf("%s", &p1.cpf);
	printf("\nInforme a sua data de nascimento: ");
	scanf("%s", &p1.dataNasc);
	printf("\nInforme o codigo do seu setor (somente numeros): ");
	scanf("%d", &p1.codigoSetor);
	printf("\nInforme o seu cargo: ");
	scanf("%s", p1.cargo);
	printf("\nInforme o seu salario: ");
	scanf("%d", &p1.salario);
	return p1;
}

void imprimeInfos(struct funcionario p1){
	printf("\nNome: %s | Idade: %d | Sexo: %c | CPF: %s | Data de Nascimento: %s | Codigo de setor: %d | Cargo %s | Salario %d.", p1.nome, p1.idade, p1.sexo, p1.cpf, p1.dataNasc, p1.codigoSetor, p1.cargo, p1.salario);
	
}

int main(){
	
	struct funcionario p1;
	
	printf("Programa para saber os dados dos funcionarios!");
	
	p1 = recebeInfos();
	
	imprimeInfos(p1);
	
	return 0;
}
