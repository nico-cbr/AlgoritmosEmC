#include <math.h>
#include <stdio.h>

int main(void) {
  // criando variaveis
  float a, b, c;

  // entrada de dados
  printf("Digite o valor do primeiro lado(b): ");
  scanf("%f", &b);

  printf("Digite o valor do segundo lado(c): ");
  scanf("%f", &c);

  // processando dados (achando valor de a)
  a = sqrt((b * b) + (c * c));

  // saida de dados
  printf("O valor da equação a²= %.0f²+ %.0f² é %.1f", b, c, a);
  return 0;
}