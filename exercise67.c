#include <stdio.h>

int main() {
  // Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive)
  
  double num1 = 15;
  double num2 = 100;
  double total = 0;
  double media = 0;
  int contador = 0;

  contador = num1;
  total = num1;
  while (contador <= num2) {
    contador++;
    num1 = num1 + 1;

    if(num1 < num2) {
      total = total + num1;
    }    
  }
  total = total + num2;
  media = total / 85;
  printf("A média da soma dos números de 15 a 100 é de %.1f.\n", media); 

  //Resultado
  //Programa funcionou corretamente somando todos os números inteiros de 15 a 100 e calculando a média.
   
}