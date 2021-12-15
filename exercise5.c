#include <stdio.h>

int main() {

  // Escreva um algorítimo para ler um valor (do teclado) e escrever(na tela) o seu antecessor.

  int n = 0;
  printf("Por favor digite um número:\n");
  scanf("%d", &n);
  printf("O número antecessecessor ao número %d é número %d.\n", n, n-1);
}