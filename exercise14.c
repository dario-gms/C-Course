#include <stdio.h>

int main (){
  //Ler um valor e escrever a mensagem É MAIOR QUE 10! se o valor lido for maior que 10, caso contrário escrever NÃO É MAIOR QUE 10!

  int n = 0;
  printf("Por favor, insira um número:\n");
  scanf("%d", &n);
  if(n > 10){
    printf("O valor inserido É MAIOR QUE 10!\n");
  } else {
    printf("O valor inserido NÃO É MAIOR QUE 10!\n");
  }

  //Resultado
  //O programa funcionou corremente exibindo as respectivas mensagens
}