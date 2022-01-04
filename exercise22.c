#include <stdio.h>

int main() {
  //A jornada de trabalho semanal de um funcionário é de 40 horas. O funcionário que trabalhar mais de 40 horas receberá hora extra, cujo cálculo é o valor da hora regular com um acréscimo de 50%. Escreva um algoritmo que leia o número de horas trabalhadas em um mês, o salário por hora e escreva o salário total do funcionário, que deverá ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mês possua 4 semanas exatas).

  int jornada = 160;
  double salario = 0;
  int horastrabalhadas = 0;
  double salariohora = 0;
  int totalhoras = 0;
  double valorhoraextra = 0;

  printf("Informe o valor do salário do funcionário:\n");
  scanf("%lf", &salario);
  printf("Informe a quantidade horas trabalhadas:\n");
  scanf("%d", &horastrabalhadas);
  
  salariohora = salario / jornada;
  totalhoras = horastrabalhadas - jornada;
  valorhoraextra = (salariohora * 1.5) * totalhoras;
  salario = salario + valorhoraextra;
  printf("O valor do salário somado com as horas extras é de R$%.2f.\n", salario);

  //Resultado
  //Utilizando uma calculadora de hora extra e realizando calculo de mesa foi possível confirmar que o programa funciona corretamente.

}