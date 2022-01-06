#include <stdio.h>

int main(){
  // Ler 3 valores (considere que não serão informados valores iguais) e escrevê-los em ordem crescente.

  int num1 = 0;
  int num2 = 0;
  int num3 = 0;

  printf("Informe o primeiro número:\n");
  scanf("%d", &num1);
  printf("Informe o segundo número:\n");
  scanf("%d", &num2);
  printf("Informe o terceiro número:\n");
  scanf("%d", &num3);

  if(num1 < num2 && num2 < num3){
    printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num1, num2, num3);
  } else {
    if(num1 < num3 && num3 < num2){
      printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num1, num3, num2);
    }
    if(num2 < num1 && num1 < num3){
      printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num2, num1, num3);
    }
    if(num2 < num3 && num3 < num1){
      printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num2, num3, num1);
    }
    if(num3 < num2 && num2 < num1){
      printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num3, num2, num1);
    }
    if(num3 < num1 && num1 < num2){
      printf("A ordem crescente dos números inseridos é %d, %d, %d.\n", num3, num1, num2);
    }
  }

  //Resultado
  //Programa funcionou corretamente exibindo os números na ordem crescente, independente da ordem inserida.
}