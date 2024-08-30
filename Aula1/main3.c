#include <stdio.h>

int main(void) {
  // declarando as variaveis
  int num1, num2, soma;

  // entrada de dados
  printf("Digite o primeiro numero: \n");
  scanf("%d", &num1);

  printf("Digite o segundo numero: \n");
  scanf("%d", &num2);

  // calculo soma
  soma = num1 + num2;

  // Saida de dados
  printf("A soma de %d e %d é %d\n", num1, num2, soma);
  return 0;
}