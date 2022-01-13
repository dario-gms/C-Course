#include <stdio.h>

int main() {
  //Faça um algoritmo para ler as 3 notas obtidas por um aluno nas 3 verificações e a média dos exercícios que fazem parte da avaliação. Calcular a média de aproveitamento, usando a fórmula abaixo e escrever o conceito do aluno de acordo com a tabela de conceitos mais abaixo: 
  //                               N1 + N2 * 2 + N3 * 3 + Média_dos_Exercícios
  //Média_de_Aproveitamento = ---------------------------------------------------------
  //                                                7

  //A atribuição de conceitos obedece a tabela abaixo: 
  //Média de Aproveitamento Conceito 
  //> = 9,0 A 
  //> = 7,5 e < 9,0 B 
  //> = 6,0 e < 7,5 C 
  //< 6,0 D

  double n1 = 0;
  double n2 = 0;
  double n3 = 0;
  double media_exercicio = 0;
  double media_aproveitamento = 0;

  printf("Informe a primeira nota do aluno:\n");
  scanf("%lf", &n1);
  printf("Informe a segunda nota do aluno:\n");
  scanf("%lf", &n2);
  printf("Informe a terceira nota do aluno:\n");
  scanf("%lf", &n3);
  printf("Informe a média dos exercícios do aluno: \n");
  scanf("%lf", &media_exercicio);
  
  //media_exercicio = (n1 + n2 + n3) / 3;
  media_aproveitamento = ((n1 + n2) * 2 + n3 * 3 + media_exercicio) / 7;

  if(media_aproveitamento >= 9){
    printf("Parabéns! Sua média de aproveitamento foi %.2f e você tirou um A.\n", media_aproveitamento);
  } else {
    if(media_aproveitamento >= 7.5 && media_aproveitamento < 9) {
      printf("Muito bem! Sua média de aproveitamento foi de %.2f e você tirou um B.\n", media_aproveitamento);
    }
    if(media_aproveitamento >= 6 && media_aproveitamento < 7.5) {
      printf("Bom! Sua média de aproveitamento foi de %.2f e você tirou um C.\n", media_aproveitamento);
    }
    if(media_aproveitamento < 6) {
      printf("Sua média de aproveitamento foi de %.2f e você tirou um D.\n", media_aproveitamento);
    }
  }
  //Resultado
  //Programa funcionou corretamente exibindo a média de aproveitamento de acordo com a fórmula passada e exibindo qual foi o resultado da avaliação.
}