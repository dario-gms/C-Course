#include <stdio.h>

int main() {
  //Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere que o N será sempre maior que ZERO. 

  int n = 0;
  printf("Informe um número:\n");
  scanf("%d", &n);
  printf("Todos os números de 1 até o número digitado são:\n\n");

  for (int i = 1; i <= n; i++){
    printf("%d de %d.\n", i, n);
  }

  //Resultado
  //Programa funcionou corretamente imprimindo até o valor inserido pelo usuário.
}