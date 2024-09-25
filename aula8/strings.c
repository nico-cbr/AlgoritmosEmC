#include <stdio.h>
#include <string.h>

int main(void) {
  // declarando array de string
  char string[100] = "Olá TDS ";

  // usando o metodo strlen
  int tamanho = strlen(string);
  printf("O tamanho da array é: %d \n", tamanho);

  // utilizando o metdodo strcpy
  char strCopy[100] = "Programando em C";
  strcpy(strCopy, string);

  printf("A array original (string): %s \nE a outra array (strCopy): %s\n",
         string, strCopy);

  // utilizando Método strcat
  char str2[100] = "Progamando em C";
  strcat(string, str2);
  printf("String concatenada %s\n", string);

  // metodo strcmp comparando duas srtings
  int comparacao = strcmp(string, strCopy);
  printf("%d", comparacao);
  if (comparacao == 0) {
    printf("As strings são iguais\n");
  } else {
    printf("As strings são diferentes\n");
  }

  // exemplo de como manipular arryas de inteiros
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[2]);
  printf("O tamanho do array é %d", n);
  return 0;
}