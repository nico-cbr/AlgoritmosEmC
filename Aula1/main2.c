#include <stdio.h>

int main(void) {
  // Declarando variaveis
  float num1, num2, num3, num4, media;

  // entrada de dados
  printf("Digite o primeiro numero: ");
  scanf("%f", &num1);

  printf("Digite o segundo numero: ");
  scanf("%f", &num2);

  printf("Digite o terceiro numero: ");
  scanf("%f", &num3);

  printf("Digite o quarto numero: ");
  scanf("%f", &num4);

  // processando dados
  media = (num1 + num2 + num3 + num4) / 4;

  // saida de dados
  printf("A sua média dos numeros é: %.2f ", media);
  return 0;
}