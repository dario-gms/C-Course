#include <stdio.h>

int main() {
  //Faça um algoritmo para ler 20 números e armazenar em um vetor. Após a leitura total dos 20 números, o algoritmo deve escrever esses 20 números lidos na ordem inversa. 

  int vetor[20];

  for (int i = 0; i <= 19; i++) {
    printf("Digite um número: ");
    scanf("%d", &vetor[i]);
  }
  
  printf("\nA ordem inversa fica: \n\n");
  for(int i = 19; i >= 0; i--) {
    printf("%d\n", vetor[i]);
  }
}