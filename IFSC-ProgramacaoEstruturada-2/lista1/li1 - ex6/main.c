// 6. Implemente em C um procedimento que imprima uma string invertida na tela.

#include <stdio.h>
#include <string.h>

int main(void) {
  char texto[256];
  int cont = 0, valor;

  printf("Digite um texto: ");
  scanf("%[^\n]", texto);

  // ve qnts caracteres tem o texto
  valor = (strlen(texto));

  // inverte o texto
  for (cont=valor-1; cont >= 0; cont--){
    printf("%c", texto[cont]);
  }

  return 0;
}