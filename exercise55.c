#include <stdio.h>

int main() {
  //Escreva um algoritmo que calcule e imprima a tabuada do 8 (1 a 10).
  
  int resultado = 0;
  printf("A tabuada do 8 é:\n");
  for(int i = 1; i <= 10; i++) {
    resultado = i * 8;
    printf("8 x %d = %d\n", i, resultado);
    
  }

  //Resultado
  //Programa funcionou corretamente imprimindo a tabuada do 8.
}