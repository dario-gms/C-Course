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
  // Faça um algoritmo para ler 10 números e armazenar em um vetor. Após isto, o algoritmo deve ordenar os números no vetor em ordem crescente. Escrever o vetor ordenado. depois de ordenar os elementos do vetor em ordem crescente, deve ser lido mais um número qualquer e inserir esse novo número na posição correta, ou seja, mantendo a ordem crescente do vetor.


   int i;
   int val[11];

   for (i = 0; i < 10; i ++) {
     printf("\nInforme um número: ");
     scanf("%d", &val[i]);
   }

   qsort(val, 10, sizeof(int), comparador);

   printf("\nOs valores do vetor ordenado ficam: ");
   for(i = 0; i < 10; i++) {
      printf("%i ", val[i]);
   }

   printf("\ninforme mais um número: ");
   scanf("%d", &val[i]);

   qsort(val, 11, sizeof(int), comparador);
   printf("\nOs novos valores ficaram da seguinte forma: ");
   for(i = 0; i < 11; i++) {
     printf("%i ", val[i]);
   }

   return(0);

   //Resultado
   //Foi necessário utilizar a função 'qsort' para concluir a tarefa.
   //Programa funcionou corretamente ordendando na posição correta mesmo após inserir um novo valor.
}