/*20. Faça um programa que possua uma função para ler 2 notas e retorná-las por parâmetro
(chamar uma função dedicada a ler 2 notas válidas e que devolve os 2 números lidos);
Calcular a média simples e a média ponderada e retorná-las por parâmetro, onde a segunda
nota tem peso 2; Media ponderada = (n1 + (n2 * 2)) / 3;*/


#include <stdio.h>
#include <stdlib.h>

void pegaNotas(float* nota1, float* nota2){
	
	printf("Digite a nota 1: ");
	scanf("%f", nota1);
	printf("Digite a nota 2: ");
	scanf("%f", nota2);
	
}

void calculaMedia(float* nota1, float* nota2, float* mediaSimples, float* mediaPonderada){
	
	*mediaSimples = (*nota1+*nota2)/2;
	*mediaPonderada = (*nota1 + (*nota2 * 2)) / 3;
	
}


int main(){
	
	float nota1, nota2;
	float mediaSimples, mediaPonderada;
	
	pegaNotas(&nota1, &nota2);
	
	calculaMedia(&nota1, &nota2, &mediaSimples, &mediaPonderada);
	
	printf("\nMedia Simples: %f", mediaSimples);
	printf("\nMedia Ponderada: %f", mediaPonderada);
	
	return 0;
}
