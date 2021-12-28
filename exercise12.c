#include <stdio.h>

int main (){
  //Escreva um algoritmo para ler uma temperatura em graus Fahrenheit, calcular e escrever o valor correspondente em graus Celsius (baseado na fórmula abaixo):     C        F - 32 
 //---------- = -----------
 //     5          9
 //Para testar se a sua resposta está correta saiba que 100oC = 212F

 double celsius = 0;
 double farenheit = 0;

 printf("Informe a temperatura atual em farenheit:\n");
 scanf("%lf", &farenheit);

 celsius = (farenheit - 32) / 1.8;

 printf("A conversão da temperatura %2.f°F em graus celsius é de %2.f°C.\n", farenheit, celsius);

 //Com base em um cálculo que eu fiz 9 / 5 é igual a 1.8 no qual utilizei para simplificar a fómula de cálculo. 
 //Resultado
 //A conversão da temperatura 77F em graus celsius é de 25C. O resultado 

}