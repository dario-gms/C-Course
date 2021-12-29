#include <stdio.h>

int main() {
  // Ler um valor e escrever se é positivo ou negativo (considere o valor zero como positivo).

  int n = 0;
  printf("Escreva um número negativo ou positivo:\n");
  scanf("%d", &n);
  if(n >= 0){
    printf("O número inserido é positivo.\n");
  } else {
    printf("O número inserido é negativo.\n");
  }

  //Resultado
  //Programa funcionou corretamente exibindo 'número positivo' para números iguais ou maiores que 0 e 'negativo' para números menores que 0
}