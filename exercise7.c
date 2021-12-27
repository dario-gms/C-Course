#include <stdio.h>

int main() {
  //Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

  int ano = 0;
  int mes = 0;
  int dia = 0;
  printf("Informe o ano de seu nascimento\n");
  scanf("%d", &ano);
  printf("informe o mês do seu nascimento\n");
  scanf("%d", &mes);
  printf("informe o dia do seu nascimento\n");
  scanf("%d", &dia);

  ano = (2021 - ano) * 365;
  mes = (12 - mes) * 30;
  dia = 30 - dia;
  int total = dia + mes + ano;
  printf("quantidade de dias vivido é de %d.\n", total);
  //Resultado final para a data de nascimento 15/05/1995 é 9715.
  //Em um site que faz o cálculo de forma mais exata, incluindo os meses que tem 31 dias e contando com os dias certos de fevereiro o resultado final foi de 9723.
  //Lembrando que o cálculo do algorítimo foi baseado sem contar os anos bisextos e considerando todos os meses com 30 dias. 
}