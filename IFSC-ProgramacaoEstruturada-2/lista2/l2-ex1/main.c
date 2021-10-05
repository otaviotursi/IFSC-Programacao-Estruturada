// Questão 1:. Implemente em C um procedimento que
// imprima uma string invertida na tela, sem usar laço de
// repetição

#include <stdio.h>
#include <string.h>

void imprime(char *frase){

  if (strlen(frase) > 0){
    imprime(frase+1);

    printf("%c", frase[0]);
  }

}

int main() {
  char frase[64];

  printf("Digite algo para inverter: ");
  scanf("%s", frase);

  imprime(frase);

  return 0;
}