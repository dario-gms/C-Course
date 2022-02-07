#include <stdio.h>

int main() {
  // Ler um vetor Q de 20 posições (aceitar somente números positivos). Escrever a seguir o valor do maior elemento de Q e a respectiva posição que ele ocupa no vetor.

  int Q[20];
  int posicao = 0;
  int maior_valor = 0;

  for(int i = 0; i <=19; i++) {
    printf("Informe um número na posicao %d: ", i);
    scanf("%d", &Q[i]);

    if(maior_valor < Q[i]) {
      maior_valor = Q[i];
      posicao = i;
    }
  }

  printf("O maior valor inserido foi %d e ele está na posição %d.\n", maior_valor, posicao);

  //Resultado
  //Programa funcionou corretamente solicitando que o usuário informe 20 números e imprima o maior número inserido e sua respectiva posicao.

}