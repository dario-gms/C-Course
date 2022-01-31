#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, *ptrx, **pptrx;

  //Inicializando a variável com zero
  x = 0;
  printf("\nvalor de x = %d\n", x);
  printf("Endereço de x: %x\n\n", &x);

  //Atribuindo os ederenços
  ptrx = &x; //ptrx aponta para x
  pptrx = &ptrx; //pptrx aponta para ptrx;

  *ptrx = *ptrx + 10;
  printf("\nvalor de x = %d", x);
  printf("\nEndereço apontado para ptrx: %x\n", ptrx);
  printf("Valor da variável X que esta sendo apontada para ptrx: %d\n", *ptrx);
  printf("Endereço de memoria da variável ptrx %x\n", &ptrx);

  **pptrx = **pptrx + 10;
  printf("\n\nValorde x = %d", x);
  printf("\nEndereço apontado para **pptrx: %x", pptrx);
  printf("\nValor da variavel para a qual pptrx faz referencia: %d", **pptrx);
  printf("\nEndereço de memoria da variavel **pptrx: %x\n\n", &pptrx);

  return 0;

}