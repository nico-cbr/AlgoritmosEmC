#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Versao 02 do game adivinhação
// criando uma mensagem inicial
// definir variaveis
//  criar laços de tentaticas com as
//  criar o laço de tentativas com as verificações

int main(void) {
  // mensagem de boas vindas
  printf("Seja bem vindo ao jogo de adivinhação\n");

  // Gerando um numero secreto aleatorio
  int segundos = time(0);
  srand(segundos);

  int numero = rand();
  int numeroSecreto = numero % 100;
  int chute;
  int ganhou = 0;
  int tentativas = 1;

  // Construindo o laço de repetição
  while (ganhou == 0) {
    printf("\n-----TENTATIVA %d----- \n", tentativas);
    printf("Digite seu chute: ");
    scanf("%d", &chute);
    printf("Seu chute foi %d \n", chute);

    int acertou = (chute == numeroSecreto);
    int maior = (chute > numeroSecreto);

    // Verificando o valor do chute e comparando com o numeroSecreto
    if (acertou) {
      printf("\nParabéns você acertou!!\n");
      printf("O número secreto era: %d\n", numeroSecreto);
      ganhou = 1;
    } else if (maior) {
      printf("\nSeu chute foi maior que o número secreto\n");
    } else {
      printf("\nSeu chute foi menor que o número secreto\n");
    }
    tentativas++;
  }
  return 0;
};