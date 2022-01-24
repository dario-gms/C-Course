#include <stdio.h>

int main() {
  //Escreva um algoritmo que imprima a tabuada (de 1 a 10) para os números de 1 a 10.

  int num1 = 1;
  int num2 = 1;
  int resultado = 0;

  for(num1 = 1; num1 <= 10; num1++) {
    for(num2 = 1; num2 <=10; num2++) {
      resultado = num1 * num2;
      printf("%d x %d = %d\n", num1, num2, resultado);
    }
  } 

  //Resultado
  //Programa funcionou corretamente imprimindo a tabuada de 1 a 10.
}