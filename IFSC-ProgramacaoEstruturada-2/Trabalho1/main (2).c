#include <stdio.h>

unsigned long long rdtscl(void)
{
    unsigned int lo, hi;
    __asm__ __volatile__ ("rdtsc" : "=a"(lo), "=d"(hi));
    return ( (unsigned long long)lo)|( ((unsigned long long)hi)<<32 );
}

void intercala(int* A, int* AUX, int inicio, int meio, int fim){
  int esquerda = inicio;
  int direita = meio + 1;
  int p_fim = inicio;

  while (esquerda <= meio && direita <= fim){
    if (A[esquerda] <= A[direita]){
      AUX[p_fim] = A[esquerda];
      esquerda = esquerda + 1;
    } else {
      AUX[p_fim] = A[direita];
      direita = direita +1;
    }
    p_fim = p_fim+1;
  }
  while (esquerda <= meio){
    AUX[p_fim] = A[esquerda];
    p_fim = p_fim+1;
    esquerda = esquerda+1;
  }
  while (direita <= fim){
    AUX[p_fim] = A[direita];
    p_fim = p_fim+1;
    direita = direita + 1;
  }
  while (inicio <= fim){
    A[inicio] = AUX[inicio];
    inicio = inicio+1;
  }

}

void merge_sort(int* A, int* AUX, int inicio, int fim){
  int meio = 0;
  int p=0;
  if (inicio < fim){
    meio = (inicio+fim)/2;
    merge_sort(A, AUX, inicio, meio);
    merge_sort(A, AUX, meio+1, fim);
    intercala(A, AUX, inicio, meio, fim);
  }
}

void quick_sort(int* A, int inicio, int fim){
    int i = inicio+1;
    int j = fim;
    int pivo=A[inicio];
    int temp=0;
    
	if (inicio < fim){


    while (i <= j){
      while (A[i] < pivo){
        i = i+1;
      }
      while (A[j] > pivo){
        j = j-1;
      }
      if (i<=j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        i = i+1;
        j = j-1;
      }
    }
    if(pivo > A[j]){
      A[inicio] = A[j];
      A[j] =pivo;
    }
    quick_sort(A, inicio, j-1);
    quick_sort(A, j+1, fim);

  }
  
}

void insertion_sort(int* A, int tam){
  int eleito;
  int contA=0, contB=0;
  int i = 0, j = 0;

  // printf("Array 1:");
  // for (i=0; i<tam; i++){
  //   printf(" %d", A[i]);
  // }

  for (i=0; i<tam; i++){
    eleito = A[i];
    j = i-1;
    while (j >= 0 && eleito < A[j]){
      A[j+1] = A[j];
      j = j-1;
      contA++;
    }
    A[j+1] = eleito;

    contB++;
  }
  // printf("\nComparacoes 1: %d", contA);
  // printf("\nTrocas 2: %d", contB);
  // printf("\n\nArray 2:");
  // for (i=0; i<tam; i++){
  //   printf(" %d", A[i]);
  // }

}

void selection_sort(int* A, int tam){
  int menor, temp;
  int contA=0, contB=0;
  int i = 0, j = 0;

  // printf("Array 1:");
  // for (i=0; i<tam; i++){
  //   printf(" %d", A[i]);
  // }

  for (i=0; i<tam-1; i++){
    for (j=0; j<tam-i-1; j++){
      if (A[j] > A[j + 1]){
        temp = A[j];
        A[j] = A[j+1];
        A[j+1] = temp;
        contA++;

      }
      contB++;
    }
  }
  // printf("\nComparacoes 1: %d", contA);
  // printf("\nTrocas 2: %d", contB);
  // printf("\n\nArray 2:");
  // for (i=0; i<tam; i++){
  //   printf(" %d", A[i]);
  // }

}

 void imprime(int* A, int tam){
   int i = 0;
   for (i=0; i<tam; i++){
     printf(" %d", A[i]);
   }
 }

 void copiaVetor(int* A, int B[10][10], int tam){
	int i, j;
   for (i=0; i<5; i++){
     for (j=0; j<tam; j++){
       B[i][j] = (A[j]+1);
     }
   }
   for (i=0; i<4; i++){
     printf("\n");
     for (j=0; j<tam; j++){
       printf(" %d", B[i][j]);
     }
   }
 } 

 void verificaVetor(int* A, int tam){
 	int i =0;
   int sinalValido =0;
   for (i=0; i<tam; i++){
     if (A[i] <= A[i+1]){
       sinalValido = 1;
     }
   }
   if (sinalValido == 1){
     printf("\nOrdenacao CORRETA");
   } else {
     printf("\nOrdenacao INCORRETA");
   }
 }

int main(void) {
	
	unsigned long long start;
	unsigned long long stop;
	unsigned long long diff;
	
  int INT[] = {660,32,6,45,5,6,200}, AUX[7];
  int A[] = {660,32,6,45,5,6,200};
  int B[] = {661,32,6,45,5,6,200};
  int C[] = {660,33,6,45,5,6,200};
  int D[] = {660,32,6,46,5,6,200};
  int tam=7, inicio=0, fim=6;
//   int B[10][10];

//   copiaVetor(A, B, tam);

  printf("\n\nINIT:");
  
   imprime(A, tam);

	start = rdtscl();
   selection_sort(A, tam);
	stop = rdtscl();
	diff = stop - start;
    printf("\n\n%llu ciclos de processador para imprimir o selection sort", diff);
   verificaVetor(A, tam);
   printf("\nRESP:");
   imprime(A, tam);

	start = rdtscl();
   insertion_sort(B, tam);
	stop = rdtscl();
	diff = stop - start;
    printf("\n\n%llu ciclos de processador para imprimir o insertion sort", diff);
   verificaVetor(B, tam);
   printf("\nRESP:");
   imprime(B, tam);
  
	start = rdtscl();
   quick_sort(C, inicio, fim);
	stop = rdtscl();
	diff = stop - start;
    printf("\n\n%llu ciclos de processador para imprimir o quick sort", diff);
   verificaVetor(C, tam);
   printf("\nRESP:");
   imprime(C, tam);
  
	start = rdtscl();
   merge_sort(D, AUX, inicio, fim);
	stop = rdtscl();
	diff = stop - start;
    printf("\n\n%llu ciclos de processador para imprimir o merge sort", diff);
   verificaVetor(D, tam);
   printf("\nRESP:");
   imprime(D, tam);
  
  return 0;
}
