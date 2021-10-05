//
//2. Crie uma função em C chamada Media(), que recebe 3 notas de um aluno e retorne a média simples dessas 3 notas. 
//
//Crie uma outra função chamada Conceito(), que vai receber a média do aluno e converte-la  para um conceito conforme a tabela abaixo, e RETORNAR esse conceito:
//
//Nota	Conceito
// 0,0 a 4,9  	D
// 5,0 a 6,9	C
// 7,0 a 8,9	B
// 9,0 a 10		A
//
//Escreva um programa que solicite na tela o nome e as 3 notas do aluno.
//
//Calcule a média - chamando a função Media() - e cacule o conceito - chamando a função Conceito() -  depois imprima a média e o conceito do aluno.
//
//Continue solicitando os dados de  alunos, até que seja informada a opção "Sair" para encerrar o programa.


#include <stdio.h>
#define numNotas 3

int Media(float nota1, float nota2, float nota3){
	float media;
	
	media = (nota1+nota2+nota3)/3;
	
	return media;
}


int Conceito(float media3){
	
	char conceito;
	
	if ( media3 <= 4.9 ){
		conceito = 'D';
	} else if (media3 <= 6.9 ) {
		conceito = 'C';
	} else if (media3 <= 8.9 ) {
		conceito = 'B';
	} else {
		conceito = 'A';
	}
	
	return conceito;
}



int main(){
	float media3,nota[numNotas];
	int i;
	char nome[20],conceito, sair;
	
	do{
		
		printf("\nDigite o nome do aluno: ");
		scanf("%s", nome);
		
		for (i=0; i<numNotas; i++){
			printf("Digite a nota %d: ", i);
			scanf("%f", &nota[i]);
		}
		fflush(stdin);
		media3 = Media(nota[0],nota[1],nota[2]);
		
		conceito = Conceito(media3);
		
		printf("\nNome: %s, Nota: %.2f, Conceito: %c", nome, media3, conceito);
		
		printf("\n\nVoce deseja sair? S para sim. Ou qualquer tecla para continuar: ");
		
		fflush(stdin);
		sair = getch();
		printf("\n");
		
	} while((sair != 'N') && (sair != 'n'));
	
	return 0;
}
