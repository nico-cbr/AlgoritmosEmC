#include <stdio.h>

int main() {

  //Variáveis 
  float peso,altura,imc;

  // Entrada de dados
  printf("Digite seu peso: ");
  scanf("%f", &peso);

  printf("Digite seu altura: ");
  scanf("%f", &altura);

  // processando dados
  imc= peso /(altura * altura);

  // Saida de daddos
  printf("Seu imc é: %.2f\n", imc);
  
  
  if(imc < 18.5){
    printf("Classificação: abaixo do peso\n");
  }else if(imc >= 18.5 && imc <24.9){
    printf("Classificação: Peso normal\n");
  }else if(imc >= 25 && imc <29.9){
    printf("Classificação: Sobrepeso\n");
  }else {
    printf("Classificação: Obesidade\n");
  }
  return 0;
}