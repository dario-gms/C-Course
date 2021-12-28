#include <stdio.h>

int main() {
  //O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica de um carro, calcular e escrever o custo final ao consumidor.

  double distribuidor = 28;
  double imposto = 45;
  double valorcarro = 0;

  printf("Informe o valor de fábrica do carro:\n");
  scanf("%lf", &valorcarro);

  distribuidor = distribuidor / 100 * valorcarro;
  imposto = imposto / 100 * valorcarro; 
  valorcarro = valorcarro + distribuidor + imposto;

  printf("O valor final deste carro é de R$%.2f.\n", valorcarro);

  //Resultado
  //Com base no valor de fabricação de um carro custando 10000 o valor final seria de 17300.
}