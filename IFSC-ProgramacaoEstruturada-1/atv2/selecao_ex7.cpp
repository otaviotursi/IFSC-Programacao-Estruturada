/*7. Leia o salario de um trabalhador e o valor da prestação de um empréstimo. Se a prestaçao
for maior que 20% do salário imprima: “empréstimo não concedido”, caso contrario imprima:
“empréstimo concedido”.*/

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
