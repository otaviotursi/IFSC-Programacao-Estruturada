
/*15. Faça um programa que controla o consumo de energia dos eletrodomesticos de uma
casa e:
• Crie e leia 5 um vetor de 5 estruturas de dados de eletrodomésticos que contém: nome
(máximo 15 letras), potência (real, em kW) e tempo ativo por dia (real, em horas).
• Leia um tempo t (em dias), e 

em uma função separada, calcule e mostre o consumo total na casa e o consumo relativo de cada eletrodomestico (consumo/consumo total) nesse período de tempo.
Apresente este ultimo dado em porcentagem.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5

struct eletros{
	
	char nome[15];
	float potencia;
	int tempoAtivo;
	float consumo;
};

struct tupla{
	
	struct eletros i1;
	int consumoTotal;
	
};

struct eletros recebeValor(){
	struct eletros item;
	printf("\nDigite o nome do eletrodomestico: ");
	scanf("%s", &item.nome);
	printf("Digite a potencia desse eletrodomestico em watts: ");
	scanf("%f", &item.potencia);
	printf("Digite o tempo ligado por dia (horas): ");
	scanf("%d", &item.tempoAtivo);
	
	return item;
}

struct tupla ConsumoEletro(struct eletros item, int diasItens, int somaTotalConsumo){
	int consumo, aux;
	struct eletros vConsumo;
	struct tupla valores;
	
	vConsumo.consumo = (item.potencia*item.tempoAtivo*diasItens)/1000;

	item.consumo= vConsumo.consumo;
	
	somaTotalConsumo += item.consumo;
	valores.consumoTotal = somaTotalConsumo;
	
	valores.i1 = item;
	
	return valores;
}

void imprimeTotal(struct eletros item, int somaTotalConsumo){
	float porcentagem;
	printf("\nConsumo dos itens");
	
	printf("\nITEM: %s\nConsumo Kwh: %.2f\nConsumo total da casa kwh:%d", item.nome, item.consumo, somaTotalConsumo);
	
	
	porcentagem = ((100*item.consumo)/somaTotalConsumo);
	printf("\nConsumo relativo do TOTAL: %.3f%%", porcentagem);
}

int main(){
	
	struct tupla valores[NUM];
	struct eletros itemVetor[NUM];
	int i, diasItens, somaTotalConsumo=0, total[NUM];
	
	for (i=0; i<NUM; i++){
		itemVetor[i] = recebeValor();	
	}
	
	printf("\nDigite a quantidade de dias que os itens ficaram ligados:");
	scanf("%d", &diasItens);
	
	for (i=0; i<NUM; i++){
		valores[i] = ConsumoEletro(itemVetor[i], diasItens, somaTotalConsumo);
		somaTotalConsumo = valores[i].consumoTotal;
	}
	
	for (i=0; i<NUM; i++){
		printf("\n\n");
		imprimeTotal(valores[i].i1, valores[NUM-1].consumoTotal);
	}
	
	return 0;
}
