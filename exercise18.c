#include <stdio.h>

int main(){
  //Ler o ano atual e o ano de nascimento de uma pessoa. Escrever uma mensagem que diga se ela poderá ou não votar este ano (não é necessário considerar o mês em que a pessoa nasceu).

  int anoatual = 2022;
  int anonasc = 0;
  int resultado = 0;
  printf("Informe o seu ano de nascimento:\n");
  scanf("%d", &anonasc);

  resultado = anoatual - anonasc;
  if(resultado >= 16 && resultado <= 70) {
    printf("Você tem %d anos e está apto para votar.\n", resultado);
  } else {
    printf("Você tem %d anos e não é obrigado a votar.\n", resultado);
  }

  //Resultado
  //Programa funcionou corretamente exibindo que está apto se o resultado for entre 16 e 70 e informa que não é obrigatório se o resultado for menor que 16 e maior que 70.
}
