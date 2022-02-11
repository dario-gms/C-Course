#include <stdio.h>

int main() {
  //Faça um algoritmo para ler dois vetores V1 e V2 de 15 números cada. Calcular e escrever a quantidade de vezes que V1 e V2 possuem os mesmos números e nas mesmas posições.


  int vet1[15];
  int vet2[15];
  int resultado = 0;

  for(int i = 0; i < 15; i++) {
    printf("\nInforme um valor para o primeiro vetor: ");
    scanf("%d", &vet1[i]);
    printf("\nInforme um valor para o segundo vetor: ");
    scanf("%d", &vet2[i]);
  }

  for(int i = 0; i < 15; i++) {
    if(vet1[i] == vet2[i]) {
      resultado++;
    }
  }

  printf("\nNo total houve %d vezes em que os números foram iguais nas mesmas posições. \n", resultado);

  //Resultado
  //Programa funcionando corretamente solicitando que o usuário insira 15 números para vetor 1 e 15 para vetor 2, depois o programa compara se há algum número igual nas respectivas posições e imprime o resultado. 
}