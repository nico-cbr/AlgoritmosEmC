#include <stdio.h>

int main() {
  // Declarando variaveis
  int numeros[5]; // declarando array de inteiros com 5 elementos
  int soma = 0;   // Variavel que recebe a soma dos inteiros, valor inicial 0
  int i;          // interador do for, declarando que ele é inteiro

  // entrada de dados: Preenchendo o array
  printf("Digite os 5 numeros do Array para somar: \n");
  for (i = 0; i < 5; i++) { // esse for percorre todos os 5 elementos da array
                            // para que o user coloque os numeros que ele quiser
    printf("Numero %d: ", i + 1);
    scanf("%d", &numeros[i]);
  }

  // processando dados
  for (i = 0; i < 5; i++) { // esse for percorre a array de numeros e soma elas.
    soma += numeros[i];
  }

  // Saida de dados
  printf("A soma dos números é igual a: %d \n", soma);
  return 0;
}