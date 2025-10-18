#include <stdio.h>

int main() {
  int opcao;
  float saldo = 1000,00;

  printf("Escolha uma opção:\n");
  printf("1. Verificar saldo\n");
  printf("2. Fazer depósito\n");
  printf("3. Fazer saque\n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      printf("O Seu saldo atual: R$ %f\n, saldo");
      break;
    case 2:
      printf("Digite o nome do banco\n");
      printf("Digite o número da agência\n");
      printf("Digite o número da conta\n");
      printf("Depósito realizado com sucesso\n");
      break;
    case 3:
      printf("Digite o valor do saque\n");
      printf("Saque realizado com sucesso\n");
      break;
    default:
      printf("Opção inválida!!\n");
  }

  return 0;
}