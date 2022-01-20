#include <stdio.h>

int main() {
  // Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo os valores lidos na soma). considere que o segundo valor lido poderá ser maior ou menor que o primeiro valor lido, ou seja, deve-se testá-los.

  int num1 = 0;
  int num2 = 0;
  int contador = 0;
  int total = 0;

  printf("Informe o primeiro número: \n");
  scanf("%d", &num1);
  printf("Informe o segundo número: \n");
  scanf("%d", &num2);

  if(num1 < num2) {
    contador = num1;
    total = num1;
    while (contador < num2) {
      contador++;
      num1 = num1 + 1;
      if (num1 < num2) {
        total = total + num1;
      }
    }
    total = total + num2;
    printf("A soma dos números inteiros do menor para o maior é de %d.\n", total);
  } else {
    contador = num2;
    total = num2;
    while (contador < num1) {
      contador++;
      num2 = num2 + 1;
      if (num2 < num1) {
        total = total + num2;
      }
    }
    total = total + num1;
    printf("A soma dos números inteiros do menor para o maior é de %d.\n", total);
  }

  //Resultado
  //Programa funcionou corretamente exibindo a soma dos valores inteiros do menor número inserido para o maior.
}