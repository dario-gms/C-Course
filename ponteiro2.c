#include <stdio.h>

int main() {

  //Valor é a variável que será apontada pelo ponteiro
  int valor = 27;

  //declalação da variável ponteiro
  int *ptr;

  //atribuindo o endereço da variável valor ao ponteiro
  ptr = &valor;

  printf("Utilizando ponteiros\n\n");
  printf("Conteúdo da variável valor: %d \n", valor);
  printf("Ederenço da variável valor: %x \n", &valor);
  printf("Conteudo da variável ponteiro ptr: %x\n", ptr);

  return 0;
}