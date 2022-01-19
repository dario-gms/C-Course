#include <stdio.h>

int main() {
  //Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (inlcuindo os valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.
  
  int num = 0;
  int contador = 0;
  int dentro_intervalo = 0;
  int fora_intervalo = 0;


  do {
    printf("Informe um número: \n");
    scanf("%d", &num);
    contador++;

    if(num >= 10 && num <=20) {
      dentro_intervalo++;
    } else {
      fora_intervalo++;
    }

  } while(contador < 10);
  printf("Dos 10 números inseridos %d está dentro do intervalo de 10 a 20 e %d está fora do intervalo.\n", dentro_intervalo, fora_intervalo);

  //Resultado
  //Programa funcionou corretamente informando a quantidade de números que está dentro do intervalo de 10 a 20 e a quantidade que está fora.

}