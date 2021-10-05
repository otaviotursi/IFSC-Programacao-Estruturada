// 4. Escreva um programa que leia valores entre 0 e 100 indefinidamente e calcule sempre a
// média atual. Deve ser impresso ``Média ok'', ``Média insatisfatória'' e ``Média insuficiente''
// respectivamente, para valores nos intervalos [80-100], [60-79] e [0-59]. Caso o valor lido
// não seja um número entre 0 e 100, abortar o programa com uma mensagem de erro.

#include <stdio.h>

void classificarMedia(int media){
  // classifica as medias
  printf("media: %d\n", media);
  if (media <= 59){
    printf("Média insuficiente\n");
  } else if (media <= 70){
    printf("Média insatisfatória\n");
  } else {
    printf("Média ok\n");
  }
}

int verificarNumero(int numero, int media, int contador, int somador){
    // verifica se o numero digitado é entre 0 e 100 
    if ( 0 <= numero && numero <= 100) {
      somador += numero;
      media = somador/contador;

      // faz a classicacao
      classificarMedia(media);

    // se for um numero digitado != 0 e 100, então lança a 'excessao' -99 que irá quebrar o código
    } else {
      somador = -99;
    }

  return somador;
}

int main() {
  int numero=0, contador=0, media=0, somador=0;

  while(1){
    contador += 1;
    printf("Digite um valor de 1 a 100: ");
    scanf("%d", &numero);
    printf("\n");

    somador = verificarNumero(numero, media, contador, somador);

    if (somador == -99){
      printf("Erro! Você digitou um numero invalido!\n");
      break;
    }
  }

  return 0;
}