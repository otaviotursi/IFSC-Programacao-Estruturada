/*c. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na
tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a contagem.
*/
#include <stdio.h>

int main(){
	
	int contador= 10;
	
	printf("Contagem regressiva!");
	
	while (contador >= 0){
		printf("\nContagem %d", contador);
		contador --;
	}
	
	printf("\nFIM!");
	return 0;
}
