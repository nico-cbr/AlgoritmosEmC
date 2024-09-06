#include <stdio.h>

int main(void) {
  printf("BEM VINDO AO JOGO DO CURIOSO\n");
  printf("ACERTE O NUMERO DE 1 a 10 EM 3 TENTATIVAS\n\n");

  // declarando variaveis
  int numeroSecreto = 3, chute;

  for (int i = 1; i <= 3; i++) {
    printf("Digite um número: ");
    scanf("%d", &chute);

    // declarando condicionais
    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto), menor = (chute < numeroSecreto);

    // condicionais
    if (acertou) {
      printf("Parabéns você acertou\n");
      break;
    } else if (maior) {
      printf("Seu chute é maior do que o número secreto\n");
    } else if (menor) {
      printf("Seu chute é menor do que o número secreto\n");
    }
  }
  printf("Fim.");
  return 0;
}