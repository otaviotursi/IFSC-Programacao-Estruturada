/*20. Faça um programa para ler as dimensões de um terreno (comprimento C e largura L ), bem como o
preço do metro de tela ( P ). Imprima o custo para cercar este mesmo terreno com tela.*/

#include <stdio.h>

int main(){
	
	float comprimentoTerreno, larguraTerreno, precoCerca, somaPerimetro, custoTotal;
	
	printf("Vamos calcular o o custo para cercar o terreno de acordo com o perimetro dele! ");
	
	printf("\n\nDigite o comprimento do terreno: ");
	scanf("%f", &comprimentoTerreno);
	printf("\nDigite a largura do terreno: ");
	scanf("%f", &larguraTerreno);
	printf("\nDigite o preco do metro da cerca: ");
	scanf("%f", &precoCerca);
	
	somaPerimetro = (comprimentoTerreno * 2 + larguraTerreno * 2);
	custoTotal = somaPerimetro * precoCerca;
	
	printf("\nO tamanho do perimetro do eh de %.2f metros. E o custo total para cercar o terreno eh de %.2f reais", somaPerimetro, custoTotal);
	
}
