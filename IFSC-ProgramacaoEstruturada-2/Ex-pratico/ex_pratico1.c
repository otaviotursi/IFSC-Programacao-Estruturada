#include <stdio.h>
int vetor[] = {300, 2270, 9350, 5860, 3220, 650, 6720,
8620, 990, 4520, 8780, 420, 1000, 2400, 9930, 540,
5160, 6300, 140, 6890, 8240, 2050, 70, 9900, 9630,
2280, 6000, 8840, 4130, 1350, 7440, 150, 3340, 3670,
4550, 70, 7730, 9820, 4110, 5590, 4030, 5420, 4960,
7130, 2620, 5950, 5020, 4680, 7460, 3290, 1010, 9560,
2670, 4460, 1210, 8140, 2790, 1030, 650, 1330, 5890,
8120, 3380, 5080, 2750, 50, 3440, 9750, 6510, 280,
4980, 3180, 9050, 800, 2450, 9720, 4780, 2510, 8320,
6800, 2040, 1800, 7330, 8300, 6790, 1190, 3520, 780,
3560, 5710, 3150, 3950, 9600, 910, 6460, 1030, 8200,
9000, 660, 7820};

int contExec = 0;
int sinalValida = 0;

void quick_sort(int* vetor, int inicio, int fim){
    int i = inicio+1;
    int j = fim;
    int pivo=vetor[inicio];
    int temp=0;
    
	if (inicio < fim){


    while (i <= j){
      while (vetor[i] < pivo){
        i = i+1;
      }
      while (vetor[j] > pivo){
        j = j-1;
      }
      if (i<=j){
        temp = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = temp;
        i = i+1;
        j = j-1;
      }
    }
    if(pivo > vetor[j]){
      vetor[inicio] = vetor[j];
      vetor[j] =pivo;
    }
    quick_sort(vetor, inicio, j-1);
    quick_sort(vetor, j+1, fim);

  }
  
}

int buscaBinRec(int* A, int inicio, int fim, int buscado){
  int c = (inicio+fim)/2;
  contExec += 1;
  if (buscado == vetor[c]){
    sinalValida = 1;
    return c;
  }
  if (inicio>=fim){
    return -1;
  } else {
    if (buscado < vetor[c]){
      // printf("\nNumero menor que o meio");
      return buscaBinRec(vetor, inicio, c-1, buscado);
    } else if ( buscado > vetor[c]){
      // printf("\nNumero maior que o meio");
      return buscaBinRec(vetor, c+1, fim,  buscado);

    }
  }
  return 0;
}

void imprime(int* A, int tam){
  int i = 0;
  for (i=0; i<tam; i++){
    printf("%d ", A[i]);
  }
}

int main(void) {
  
  int  inicio=0, fim;
  int tam = sizeof(vetor)/sizeof(vetor[0]);
  int buscado = 0;
  printf("Digite um numero para procurar: ");
  scanf("%d", &buscado);

  printf("\nTamanho vetor: %d posicoes\n", tam);
  // printf("\n\nVetor desordenado:\n");
  // imprime(vetor, tam);

  fim = tam-1;
  quick_sort(vetor, inicio, fim);
  // printf("\n\nVetor ordenado:\n");
  // imprime(vetor, tam);

  printf("\n\nBuscando binario:");
  buscaBinRec(vetor, inicio, fim, buscado);

  printf("\n\nQuantidade de comparacoes: %d\n\n", contExec);
  if (sinalValida == 1){
    printf("\nO numero foi encontrado\n\n");
  } else {
    printf("\nO numero nao foi encontrado\n\n");
  }
  

  return 0;
}
