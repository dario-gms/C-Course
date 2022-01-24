#include <stdio.h>

int main() {
  //A prefeitura de uma cidade deseja fazer uma pesquisa entre seus habitantes. Faça um algoritmos para coletar dados sobre o salário e número de filhos de cada habitante e após as leituras, escrever: 
  //a) Média de salário da população 
  //b) Média do número de filhos 
  //c) Maior salário dos habitantes 
  //d) Percentual de pessoas com salário menor que R$ 150,00 
  //Obs.: O final da leituras dos dados se dará com a entrada de um “salário negativo”.

  int habitantes = 0;
  int filhos = 0;
  int total_filhos = 0;
  int hab_sal150 = 0;
  double total = 0;
  double salario = 0;
  double total_salario = 0;
  double media_salario = 0;
  double media_filhos = 0;
  double maior_salario = 0;

  do {
    printf("Informe o salário do entrevistado: \n");
    scanf("%lf", &salario);
    if (salario < 0) {
      printf("O salário informado é negativo! Pesquisa encerrada. \n\n");
    } else {
    printf("Informe a quantidade de filhos do entrevistado: \n");
    scanf("%d", &filhos);
    habitantes++;

    if (salario < 150) {
      hab_sal150++;
    }

    if (maior_salario < salario) {
      maior_salario = salario;
    }

    total_salario = total_salario + salario;
    total_filhos = total_filhos + filhos; 
    } 
    
  } while (salario >= 0);
  total = hab_sal150 * 100 / habitantes;
  media_filhos = total_filhos / habitantes;
  media_salario = total_salario / habitantes;
  printf("A média de salário da população é R$ %.2f.\n", media_salario);
  printf("A média do número de filhos é %.f filhos por habitante.\n", media_filhos);
  printf("O maior salário informado é de R$ %.2f.\n", maior_salario);
  printf("O percentual de pessoas com salário abaixo de R$ 150,00 é de %.f porcento.\n", total);

  //Resultado
  //Programa fucionando corretamente, solicitando o salário e só parando se o salário informado for negativo. Exibindo os resultados também da porcentagem de pessoas com salário abaixo de 150 reais, mostrando qual o maior salário inserido e exibindo a média de salarial e de filhos por pessoa. 
  
}