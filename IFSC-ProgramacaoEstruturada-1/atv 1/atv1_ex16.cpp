/*16. Leia o salario de um funcionário. Calcule e imprima o valor do novo salário, sabendo que ele
recebeu um aumento de 25%.*/

#include <stdio.h>

int main(){
	
	float salarioAntigo, salarioAjuste, salarioAjustado;
	
	printf("Vamos calcular o aumento salarial do funcionario! ");
	
	printf("\n\nDigite o salario atual: ");
	scanf("%f", &salarioAntigo);
	
	salarioAjuste = salarioAntigo * 0.25;
	salarioAjustado = salarioAntigo + salarioAjuste;
	
	printf("\nSalario ajustado %.2f, tivemos um aumento de %.2f reais.", salarioAjustado, salarioAjuste);
	
}
