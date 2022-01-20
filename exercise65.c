#include <stdio.h>

int main () {
  //Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor lido.

  int contador = 0;
  int num1 = 0;
  int num2 = 0;
  int total = 0;

  printf("Informe o primeiro valor:\n");
  scanf("%d", &num1);
  printf("Informe o segundo valor: \n");
  scanf("%d", &num2);
  contador = num1;
  total = num1;
  
  while (contador <= num2) {
    contador++;
    num1 = num1 + 1;

    if(num1 < num2){
      total = total + num1;
    }  
  }
  total = total + num2;
  printf("A soma total dos números inteiros do primeiro número a o segundo número é %d.\n", total);

  //Resultado
  //Programa funcionou corretamente, calculando a soma dos números inteiros do primeiro número inserido ao segundo número inserido.
}