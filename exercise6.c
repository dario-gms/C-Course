#include <stdio.h>

int main() {
  // Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a área do retângulo.


  int b = 0;
  int h = 0;
  printf("Iremos agora calcular a área de um retângulo.\n");
  printf("Por favor informe a largura(b):\n");
  scanf("%d", &b);
  
  printf("Agora informe a altura(h):\n");
  scanf("%d", &h);

  int a = b * h;
  printf("A área(A) deste retângulo é de %d metros².\n", a);

}