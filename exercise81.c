#include <stdio.h>
#include <stdlib.h>

int main() {
  //Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do menor elemento de Q e a respectiva posição que ele ocupa no vetor.

  int Q[21];
  int menor_valor = rand();
  int posicao = 0;


  for(int i = 0; i < 20; i++) {
    printf("Informe o número na posição %d: ", i);
    scanf("%d", &Q[i]);

    if (menor_valor > Q[i]) {
      menor_valor = Q[i];
      posicao = i;
    }
  }
  
  printf("O menor valor inserido foi %d e ele está na posição %d. \n", menor_valor, posicao);

  //Resultado
  //Programa funcionando normalmente solicitando que o usuário informe 20 números e imprimindo o menor deles em sua determinada posição.
}