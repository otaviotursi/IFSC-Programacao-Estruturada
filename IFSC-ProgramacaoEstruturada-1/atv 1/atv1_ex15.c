/* 15. Faça um programa que leia o valor de um produto e imprima o valor com desconto, tendo em vista
que o desconto foi de 12% */

#include <stdio.h>

int main(){
	
	float precoAntigo, precoDeAjuste, precoAjustado;
	
	printf("Vamos calcular o desconto de 12(porcento) do valor do produto! ");
	
	printf("\n\nDigite o valor do produto sem o desconto: ");
	scanf("%f", &precoAntigo);
	
	precoDeAjuste = precoAntigo * 0.12;
	precoAjustado = precoAntigo - precoDeAjuste;
	
	printf("\nValor com desconto %.2f, tivemos uma reducao de %.2f reais.", precoAjustado, precoDeAjuste);
	
}
