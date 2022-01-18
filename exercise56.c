#include <stdio.h>

int main() {
  //Ler um valor inteiro (aceitar somente valores entre 1 e 10) e escrever a tabuada de 1 a 10 do valor lido.

  int N = 0;
  int resultado = 0;
  
  printf("Informe um número: \n");
  scanf("%d", &N);

  printf("A tabuada do número %d é: \n", N);

  for (int i = 1; i <= 10; i++) {
    resultado = i * N;
    printf("%d x %d = %d\n", N, i, resultado);
  }

  //resultado
  //Programa funcionou corretamente calculnado a tabuada do número inserido.
}