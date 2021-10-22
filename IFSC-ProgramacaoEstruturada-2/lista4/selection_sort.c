#include <stdio.h>

void selection_sort(int* A, int tam){
  int menor, temp;
  int i = 0, j = 0;

  printf("Array 1:");
  for (i=0; i<tam; i++){
    printf(" %d", A[i]);
  }

  for (i=0; i<tam; i++){
    menor = i;
    for (j=(i+1); j<tam; j++){
      if (A[j] < A[menor]){
        menor = j;
      }
    }
    if (menor != i){
      temp = A[i];
      A[i] = A[menor];
      A[menor] = temp;
    }
  }
  printf("\n\nArray 2:");
  for (i=0; i<tam; i++){
    printf(" %d", A[i]);
  }

}

int main(void) {
  int A[] = {7, 2, 9, 10, 3, 4, 6, 5};
  int tam=8;

  selection_sort(A, tam);
  return 0;
}