#include <stdio.h>

int main(){
  //Ler dois valores (considere que não serão lidos valores iguais) e escrever o maior deles.

  int num1 = 0;
  int num2 = 0;

  printf("Informe o primeiro número:\n");
  scanf("%d", &num1);
  printf("Informe o segundo númerio:\n");
  scanf("%d", &num2);

  if(num1 > num2){
    printf("O valor do primeiro número é %d e é maior que o valor do segundo número %d.\n", num1, num2);
  } else {
    printf("O valor do segundo número é %d é maior que o valor do primeiro número %d.\n", num2, num1);
  }

  //Resultado
  //O programa funcionou corretamente e exibe a informação correta se um número for maior que o outro.
}