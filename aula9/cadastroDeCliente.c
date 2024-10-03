#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// definindo uma estrutura pra armazenar os dados do cliente

struct Cliente {
  char nome[100];
  int idade;
  char endereco[150];
  char cidade[50];
  char estado[50];
  char fone[50];
};

int main(void) {
  struct Cliente cliente;
  FILE *arquivo;

  printf("------Cadastro de Clientes Inteligente------\n\n");

  // solicitando o nome do cliente
  printf("Digite o nome do cliente: ");
  fgets(cliente.nome, 100, stdin);
  cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

  // Solicitando a idade do cliente
  printf("Digite a idade do cliente: ");
  scanf("%d", &cliente.idade);
  getchar(); // Limpando o valor de memoria do scanf

  // Solicitando o endereço do cliente
  printf("Digite o endereço do cliente: ");
  fgets(cliente.endereco, 150, stdin);
  cliente.endereco[strcspn(cliente.endereco, "\n")] = '\0';

  // solicitando a cidade do cliente
  printf("Digite a cidade do cliente: ");
  fgets(cliente.cidade, 50, stdin);
  cliente.cidade[strcspn(cliente.cidade, "\n")] = '\0';

  // soliciantando o estado do cliente
  printf("Digite o Estado do cliente: ");
  fgets(cliente.estado, 50, stdin);
  cliente.estado[strcspn(cliente.estado, "\n")] = '\0';

  // solicitando o telefone do cliente
  printf("Digite o telefone do cliente: ");
  fgets(cliente.fone, 50, stdin);
  cliente.fone[strcspn(cliente.fone, "\n")] = '\0';

  // criando arquivo para salvar e mensagem de erro
  arquivo = fopen("cliente.txt", "a");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo\n");
    return 1;
  }

  // salvando os dados no arquivo
  fprintf(arquivo,
          "Nome: %s;\nIdade: %d;\nEndereço: %s;\nCidade: %s;\nEstado: "
          "%s;\nTelefone: %s;\n",
          cliente.nome, cliente.idade, cliente.endereco, cliente.cidade,
          cliente.estado, cliente.fone);
  fclose(arquivo);
  printf("\n\n------Dados do cleinte salvo------\n\n");

  // exibindo os dados digitados
  printf("\n\n------Exibindo os dados digitados------\n\n");
  printf("Nome: %s;\nIdade: %d;\nEndereço: %s;\nCidade: %s;\nEstado: "
         "%s;\nTelefone: %s;\n",
         cliente.nome, cliente.idade, cliente.endereco, cliente.cidade,
         cliente.estado, cliente.fone);
  return 0;
}