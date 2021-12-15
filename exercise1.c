#include <stdio.h>

int main() {

// Escreva um algoritmo que armazene o valor 10 em uma variável A e o valor 20 em uma variável B. 
// A seguir (utilizando apenas atribuições entre variáveis) troque os seus conteúdos fazendo com que o 
// valor que está em A passe para B e vice-versa. Ao final, escrever os valores que ficaram armazenados 
// nas variáveis.

  int a = 10;
  int b = 20;
  int temp;

  temp = a;
  a = b;
  b = temp;
  
  printf("valor de a é: %d. Valor de b é: %d.", a, b);

  //resultado após compilar: "valor de a é: 20. Valor de b é: 10."
}