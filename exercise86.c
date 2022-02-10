#include <stdio.h>
#include <stdlib.h>

int comparador(const void *a, const void *b) {
   return ( *(int*)a - *(int*)b );
}

int comparador2(const void *a, const void *b) {
   if (*(int*)a > *(int*)b) {
      return 1;
   } else if (*(int*)a < *(int*)b) {
      return -1;
   } else {
      return 0;
   }
}

int main () {
  // Faça um algoritmo para ler 10 números e armazenar em um vetor. Após isto, o algoritmo deve ordenar os números no vetor em ordem crescente. Escrever o vetor ordenado. 


   int i;
   int val[10];

   for (i = 0; i < 10; i ++) {
     printf("\nInforme um número: ");
     scanf("%d", &val[i]);
   }

   qsort(val, 10, sizeof(int), comparador);

   printf("\nOs valores do vetor ordenado ficam: ");
   for( i = 0 ; i < 10; i++ ) {
      printf("%i ", val[i]);
   }

   return(0);

   //Resultado
   //Foi necessário utilizar a função 'qsort' para concluir a tarefa.
}