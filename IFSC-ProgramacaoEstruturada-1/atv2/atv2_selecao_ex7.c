/*7. Leia o salario de um trabalhador e o valor da presta��o de um empr�stimo. Se a presta�ao
for maior que 20% do sal�rio imprima: �empr�stimo n�o concedido�, caso contrario imprima:
�empr�stimo concedido�.*/

#include <stdio.h>

int main(){
	int salario, prestEmprestimo;
	printf("Vamos ver se voce pode fazer um emprestimo?");
	printf("\nDigite o valor do seu salario: ");
	scanf("%d", &salario);
	printf("\nDigite o valor da prestacao: ");
	scanf("%d", &prestEmprestimo);
	
	if (prestEmprestimo <= salario*0.2){
		printf("\nEmprestimo concedido");
	} else {
		printf("\nEmprestimo nao concedido");
	}
	return 0;
}
