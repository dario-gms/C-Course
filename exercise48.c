#include <stdio.h>

int main() {
  //Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota.


  double num1 = 0;
  double num2 = 0;
  double media = 0;
  

  printf("Informe a primeira nota: \n");
  scanf("%lf", &num1);
  printf("Informe a segunda nota: \n");
  scanf("%lf", &num2);

  while (num1 < 0 || num1 > 10) {
    printf("Nota 1 inválida!\n");
    printf("Informe novamente a primeira nota: \n");
    scanf("%lf", &num1);
  }

  while (num2 < 0 || num2 > 10) {
    printf("Nota 2 inválida!\n");
    printf("Informe novamente a segunda nota: \n");
    scanf("%lf", &num2);
  }

  media = (num1 + num2) / 2;

  printf("A média da avaliação deste aluno é de %.2f.\n", media);
  

  // Resultado
  // Programa funcionou corretamente repetindo a solicitação de notas se alguma das duas for inválida.
}