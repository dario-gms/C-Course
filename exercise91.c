#include <stdio.h>

int main() {
  // Faça um algoritmo para ler 50 números e armazenar em um vetor VET, verificar e escrever se existem números repetidos no vetor VET e em que posições se encontram.

  int VET[50];
  int posicao = 0;
  int tamanho = 50;

  for(int i = 0; i < tamanho; i++) {
    printf("\nInforme um número que deseja armazenar na posicao %d: ", i);
    scanf("%d", &VET[i]);
  }

  for(int i = 0; i < tamanho; i++) {
    for(int j = i + 1; j < tamanho; j++) {
      if(VET[j] == VET[i]) {
        printf("O número %d se repete na posição %d\n", VET[i], j);
      }
    }
  }

  //Resultado
  //Programa funcionando exibindo quais números foram repetidos e em quais posições ele reaparece.
  
}