// Questão 6:. Dado um número n na base decimal,
// escreva uma função recursiva em C que converte
// (basta imprimir) este número para binário.
 
#include <stdio.h>

void conversor(int valor, int cont){
  int conta=valor, i, arrai[8], divisao=0, resta=0;
  printf("%d", valor);

  if (cont > 0){

    // printf("\n%d %d", arrai[conta], valor);

    cont -= 1;
    conta += 1;

    resta = valor%2;
    arrai[i] = resta;
    valor = valor/2;
    printf("\n%d %d %d", valor,resta, arrai[i]);
    conversor(valor, cont);
  }
  
  // printf("\naux: \n");
  // for(i=0;i<conta;i++){
  //   resta = valor%2;
  //   arrai[i] = resta;
  //   valor = valor/2;
  //   // if (valor == 0){
  //   //   break;
  //   // }
  //   // printf("%d", arrai[i]);
  //   printf("\n%d %d %d", valor,resta, arrai[i]);
  // }
}

int main(void) {
  int aux[8], valor, i;

  printf("Digite um numero: ");
  scanf("%d", &valor);

  conversor(valor, valor);
  // for(i=0;i<8;i++){
  //   printf("\naux: %d", aux[i]);
  // }
  // return 0;
}