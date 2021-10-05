/*3. Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25, imprime o nome da
pessoa e a palavra “ACEITA”, caso contrario imprimir “NÃO ACEITA”. */

#include <stdio.h>
#include <conio.h>

int main(){
	
	int idade;
	char nome[10], sexo[1];
	
	
	printf("Digite um nome: ");
	scanf("%s", nome);
	
	printf("\nInforme o sexo: M para masculino ou F para Feminino: ");
	scanf("%s", sexo);

//	ciclo while para garantir que é M ou F
	while ((sexo[0] != 'M' && sexo[0] != 'm') && (sexo[0] != 'f' && sexo[0] != 'F')){
		printf("\nInforme o sexo: M para masculino ou F para Feminino: ");
		scanf("%s", sexo);
	}
	
	printf("\nInforme a idade: ");
	scanf("%d", &idade);
	

	if ((sexo[0] == 'f' || sexo[0] == 'F') && (idade < 25)){
		printf("\nACEITA");
	} else {
		printf("\nNAO ACEITA");
	}
	return 0;
}
