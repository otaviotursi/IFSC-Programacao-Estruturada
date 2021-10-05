/*14. Faça um programa que seja uma agenda de compromissos e:
• Crie um vetor de 5 estruturas de dados com: compromisso (maximo 60 letras) e data. A
data deve ser uma outra estrutura de dados contendo dia, mes e ano.
• Faça a leitura dos dados, em uma função separada, e vá carregando as estruturas no vetor.

• Leia dois inteiros M (mês) e A (ano).
• Em outra função, compare M e A, e mostre todos os compromissos do mês M do ano A.
Repita o procedimento ate ler M = 0.*/

#include <stdio.h>
#define NUM 2

struct calendario{
	
	int dia;
	int mes;
	int ano;
	
};

struct agenda{
	
	char compromisso[60];
	struct calendario data;
	
};

struct agenda recebeCompromissos(){
	
	struct agenda valor;
	
	printf("\nDigite aqui o seu compromisso: ");
	scanf("%s", valor.compromisso);
	printf("Digite o dia: ");
	scanf("%d", &valor.data.dia);
	printf("Digite o mes: ");
	scanf("%d", &valor.data.mes);
	printf("Digite o ano: ");
	scanf("%d", &valor.data.ano);
	return valor;
	
}

int verificaCompromissos(int checaMes, int checaAno, struct agenda valor){
	int valido = 0;
	
	if ((checaMes == valor.data.mes) && (checaAno == valor.data.ano)){
		
		printf("\nCompromisso: %s\nData: %d/%d/%d", valor.compromisso, valor.data.dia, valor.data.mes, valor.data.ano);
		valido = 1;
	}
	
	return valido;
}

int main(){
	struct agenda items[NUM];
	int i, checaMes, checaAno, contCompromissos = 0, valido;
	
	
	for (i=0;i<NUM;i++){
		items[i] = recebeCompromissos();	
	}
	
	printf("\nDigite o mes que voce quer checar as datas: ");
	scanf("%d", &checaMes);
	
	printf("Digite o ano que voce quer checar as datas: ");
	scanf("%d", &checaAno);
	
	for (i=0;i<NUM;i++){
		valido = verificaCompromissos(checaMes, checaAno, items[i]);
		
		if (valido == 0){
			contCompromissos += 1;
		}	
	}
	printf("%d %d", contCompromissos, NUM);
	if (contCompromissos == NUM){
		printf("\n\nSem compromissos para listar!");
	} else {
		printf("\n\nCompromissos listados!");
	}
	
	return 0;
}
