#include <stdio.h>
#include <stdlib.h>

int main() {
  //Faça um algoritmo para ler e armazenar em um vetor a temperatura média de todos os dias do ano. Calcular e escrever:
  //a) Menor temperatura do ano
  //b) Maior temperatura do ano
  //c) Temperatura média anual
  //d) O número de dias no ano em que a temperatura foi inferior a média anual


  int dias = 7;
  int dias_baixa = 0;
  double menor_temp = rand();
  double maior_temp = 0;
  double media_temp = 0;
  double total_temp = 0;
  double temp[dias];

  printf("\nInforme quantos dias você deseja checar: ");
  scanf("%d", &dias);

  for(int i = 0; i < dias; i++) {
    printf("\nInforme a temperatura: ");
    scanf("%lf", &temp[i]);
    if(temp[i] > maior_temp) {
      maior_temp = temp[i];
    }
    if(temp[i] < menor_temp) {
      menor_temp = temp[i];
    }
    total_temp = total_temp + temp[i];
  }
  media_temp = total_temp / dias;

  for(int i = 0; i < dias; i++) {
    if(temp[i] < media_temp) {
      dias_baixa++;
    }
  }

  printf("\nA menor temperatura do ano foi de %.1f°. \n", menor_temp);
  printf("\nA maior temperatura do ano foi de %.1f°. \n", maior_temp);
  printf("\nA temperatura média anual foi de %.2f°. \n", media_temp);
  printf("\nFoi resgistrado %d dias em que a temperatura foi inferior a média anual. \n", dias_baixa);

}
