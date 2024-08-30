#include <stdio.h>

int main() {
  // Declarando variaveis
  float num1, num2, res;

  // entrada de dados
  printf("Digite o dividendo: ");
  scanf("%f", &num1);

  printf("Digite o divisor: ");
  scanf("%f", &num2);

  // processando dados
  res = num1 / num2;

  // saida de dados
  printf("O resultado da operação '%.2f / %.2f' é igual a: %.2f", num1, num2, res);
  return 0;
}