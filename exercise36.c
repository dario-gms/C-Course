#include <stdio.h>

int main() {
  //Escreva um algoritmo que leia as idades de 2 homens e de 2 mulheres (considere que as idades dos homens serão sempre diferentes entre si, bem como as das mulheres). Calcule e escreva a soma das idades do homem mais velho com a mulher mais nova, e o produto das idades do homem mais novo com a mulher mais velha.

  int h1 = 0;
  int h2 = 0;
  int m1 = 0;
  int m2 = 0;
  int soma_idade = 0;
  int produto_idade = 0;

  printf("Informe a idade do primeiro homem: \n");
  scanf("%d", &h1);
  printf("Informe a idade do segundo homem: \n");
  scanf("%d", &h2);
  printf("Informe a idade da primeira mulher: \n");
  scanf("%d", &m1);
  printf("Informe a idade da segunda mulher: \n");
  scanf("%d", &m2);

  if(h1 > h2 && m1 < m2){
    soma_idade = h1 + m1;
    produto_idade = h2 * m2;
    printf("A soma da idade do homem mais velho com a mulher mais nova é de %d e o produto da idade do homem mais novo com a mulher mais velha é de %d.\n", soma_idade, produto_idade);    
  } else {
    if(h1 < h2 && m1 > m2){
      soma_idade = h2 + m2;
      produto_idade = h1 * m1;
      printf("A soma da idade do homem mais velho com a mulher mais nova é de %d e o produto da idade do homem mais novo com a mulher mais velha é de %d.\n", soma_idade, produto_idade);
    }
    if(h1 > h2 && m1 > m2){
      soma_idade = h1 + m2;
      produto_idade = h2 * m1;
      printf("A soma da idade do homem mais velho com a mulher mais nova é de %d e o produto da idade do homem mais novo com a mulher mais velha é de %d.\n", soma_idade, produto_idade);
    }
    if(h1 < h2 && m1 < m2){
      soma_idade = h2 + m1;
      produto_idade = h1 * m2;
      printf("A soma da idade do homem mais velho com a mulher mais nova é de %d e o produto da idade do homem mais novo com a mulher mais velha é de %d.\n", soma_idade, produto_idade);
    } 
  }
  //Resultado
  //Programa testado e funcionando corretamente exibindo a soma da idade do homem mais velho com a mulher mais nova e o produto do homem mais novo com a mulher mais velha.

}
