//atividade avaliativa
#include <stdio.h>
#include <stdlib.h>

void receberValores(float* altura, float* peso){
	
	printf("\nDigite a altura (metros): ");
	scanf("%f", altura);
	printf("Digite o peso (kg): ");
	scanf("%f", peso);
}

void calculaIMC(float* imc, float* altura, float* peso){
	
	float alt = *altura;
	*imc = (*peso/(alt * alt));
}

void imprimeIMC(float* imc){
	
	float aux;
	
	aux = *imc;
	
	printf("\nIMC: %.2f", aux);
	printf("\nClassificacao: ");
	if (aux < 18.5) {
		printf("Abaixo do peso.");
	} else if (aux < 25) {
		printf("Peso normal.");
	} else if (aux < 30) {
		printf("Sobrepeso.");
	} else if (aux < 35) {
		printf("Obesidade grau 1.");
	} else if (aux < 40) {
		printf("Obesidade grau 2.");
	} else {
		printf("Obesidade grau 3.");
	}
	
}

int main(){
	int loopWhile;
	float imc, altura, peso;
	
	do{
		printf("\nVamos calcular o seu IMC");
		
		receberValores(&altura, &peso);
		
		calculaIMC(&imc, &altura, &peso);
		
		imprimeIMC(&imc);

		printf("\n\nDeseja cadastrar mais pacotes?\n1 - Sim\nOu pressiona qualquer tecla para nao\nOpcao: ");
		scanf("%d", &loopWhile);
		
	} while ((loopWhile == 1));
	
}
