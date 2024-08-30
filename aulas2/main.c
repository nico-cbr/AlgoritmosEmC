#include <stdio.h>
// Fazendo produto de dois numeros
int main() {
  // declarando as variaveis
  int num1, num2, produto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  // processando dados
  produto = num1 * num2;

  // exbindo os dados obtidos
  printf("A multiplicação de %d e %d é igual a: %d \n", num1, num2, produto);
  return 0;
}