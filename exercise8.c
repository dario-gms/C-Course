#include <stdio.h>

int main() {
  // Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao total de eleitores.

  double eleitores = 0;
  double brancos = 0;
  double nulos = 0;
  double validos = 0;
  printf("Por favor informe a quantidade de eleitores do município:\n");
  scanf("%lf", &eleitores);
  printf("Informe a quantidade de votos brancos:\n");
  scanf("%lf", &brancos);
  printf("Informe a quantidade de votos nulos:\n");
  scanf("%lf", &nulos);

  validos = eleitores - brancos - nulos;
  brancos = brancos * 100 / eleitores;
  nulos = nulos * 100 / eleitores;
  validos = validos * 100 / eleitores;

  printf("O total de eleitores é de %.f, a quantidade de votos brancos é de %.1f por cento, a quantidade de votos nulos é de %.1f por cento e a quantidade de votos válidos é de %.1f por cento.\n", eleitores, brancos, nulos, validos);

}