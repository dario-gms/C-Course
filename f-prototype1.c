#include <stdio.h>

int multiplica(int n1, int n2);
void cabecalho (void);

int main() {

  int num1 = 0;
  int num2 = 0;
  int resultado = 0;
  
  cabecalho();
  printf("Informe o primeiro numero: \n");
  scanf("%d", &num1);
  printf("Informe o segundo número: \n");
  scanf("%d", &num2);

  resultado = multiplica(num1, num2);

  printf("%d x %d = %d\n", num1, num2, resultado);
  

  //Resultado
  //Primeira função em C com o objetivo de multiplicar 2 números funcionando corretamente. 
}

int multiplica(int n1, int n2) {
  int res = 0;
  res = n1 * n2;
  return res;
}

void cabecalho (void) {
  printf("***********************\n");
  printf("*   Protótipo função  *\n");
  printf("*     Multiplicador   *\n");
  printf("***********************\n");
  return;
}