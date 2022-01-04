#include <stdio.h>

int main() {
  //Para o enunciado a seguir foi elaborado um algoritmo em Português Estruturado que contém erros, identifique os erros no algoritmo apresentado abaixo:
  //Enunciado: Tendo como dados de entrada o nome, a altura e o sexo (M ou F) de uma pessoa, calcule e mostre seu peso ideal, utilizando as seguintes fórmulas: 
  //- para sexo masculino: peso ideal = (72.7 * altura) - 58 
  //- para sexo feminino: peso ideal = (62.1 * altura) - 44.7 
  //inicio 
  //  ler nome 
  //  ler sexo 
  //    se sexo = M então 
  //      peso_ideal  (72.7 * altura) - 58 
  //    senão 
  //      peso_ideal  (62.1 * altura) – 44.7 
  //    fim_se 
  //      escrever peso_ideal
  //fim
  
  char nome[20];
  char sexo[2];
  double altura = 0;
  double pesoideal = 0;

  printf("Informe seu nome: \n");
  scanf("%s", nome);
  printf("Informe seu sexo:\n\nF para feminino e M para masculino.\n");
  scanf("%s", sexo);
  printf("Informe a sua altura em metros:\n");
  scanf("%lf", &altura);
  if(sexo[0] == 'M' || sexo[0] == 'm') {
    pesoideal = 72.7 * altura - 58;
    printf("%s, seu peso ideal é de %.2f Kg.\n", nome, pesoideal);
  }else {
    pesoideal = 62.1 * altura - 44.7;
    printf("%s, seu peso ideal é de %.2f Kg.\n", nome, pesoideal);
  }

  //Resultado
  //O exercicio pede para ler o nome, mas não pede para imprimir o nome, esse é um dos erros encontrados.
  //No if e no else, ele dá a fórmula mas não faz a atribuição de variável.
  //ex: peso_ideal = **resto do codigo.
  //Ultimo erro encontrado é a falta de necessidade de parentese para calcular o peso ideal, pois a multiplicação sempre será priorizado, não necessitando so de parentese.
}