// Exercicio um 
#include <stdio.h>

int main(){
  printf("Olá Linguagem C");
  return 0;
}

// Exercicio dois = produtos
#include <stdio.h>

int main() {
  int num1, num2, produto;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);

  printf("Digite o segundo numero: ");
  scanf("%d", &num2);

  produto = num1 * num2;

  printf("A multiplicação de %d e %d é igual a: %d \n", num1, num2, produto);
  return 0;
}

// exercicio 3 = laço de repetição
#include <stdio.h>

int main() {
  int i;
  for (i = 0; i <= 100; i++) {
    printf("%d \n", i);
  }
  return 0;
}

// exercicio 4 = laço com while
#include <stdio.h>

int main() {
  int i = 0;
  while (i <= 100) {
    printf("%d\n", i);
    i++;
  }
  return 0;
}

// exercicio 5 = soma de todos os numeros até 100
#include <stdio.h>

int main() {
  int i = 0, s = 0;
  while (i <= 100) {
    s = i + s;
    i++;
  }
  printf("A soma de todos os números até 100 é %d\n", s);
  return 0;
}