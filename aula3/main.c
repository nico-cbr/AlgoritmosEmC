#include <stdio.h>

int main() {
  char nome[50]; // array para armazenar o nome(string)
  int idade;     // variavel inteira pra idade
  float altura;  // variavel float para altura

  // entrada de dados
  printf("Digite seu nome: ");
  fgets(nome, sizeof(nome), stdin); // Le a entrada do usuario

  printf("Digite sua idade: ");
  scanf("%d", &idade);

  printf("Digite sua altura: ");
  scanf("%f", &altura);

  // saida dos dados
  printf("\n----------Dados informados-----------\n \n");
  printf("Nome: %sIdade: %d anos\nAltura: %.2f metros", nome, idade, altura);
  return 0;
}