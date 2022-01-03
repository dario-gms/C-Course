#include <stdio.h>

int main() {
  // Ler as notas da 1a. e 2a. avaliações de um aluno. Calcular a média aritmética simples e escrever uma mensagem que diga se o aluno foi ou não aprovado (considerar que nota igual ou maior que 6 o aluno é aprovado). Escrever também a média calculada.

  double avaliacao1 = 0;
  double avaliacao2 = 0;
  double media = 0;

  printf("Informe a nota da primeira avaliação.\n");
  scanf("%lf", &avaliacao1);

  printf("Informe a nota da segunda avaliação.\n");
  scanf("%lf", &avaliacao2);

  media = (avaliacao1 + avaliacao2) / 2;
  if(media >= 6){
    printf("Sua média foi %.1f. Parabéns, você foi aprovado!\n", media);
  } else {
    printf("Sua média foi %.1f e infelizmente você não foi aprovado.\n", media);
  }
  //Resultado
  //Programa teve comportamente esperado, exibindo como aprovado se o valor da média foi igual ou maior que 6 e exibindo como não aprovado se a média foi menor que 6.    
}