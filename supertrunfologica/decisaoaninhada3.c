#include <stdio.h>

int main() {
  int idade, dependentes;
  float renda;
  char continuar;

  do {
    printf("Digite a sua idade: \n");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: \n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes);

    if (idade >= 18 && idade <= 65) {
      if (renda < 3000.0) {
        if (dependentes > 2) {
          printf("Você está qualificado para os benefícios sociais\n");
        } else {
          printf("Você não está qualificado para os benefícios devido ao número de dependentes\n");
        }
      } else {
        printf("Você não está qualificado para os benefícios devido à renda\n");
      }
    } else {
      printf("Você não está qualificado para os benefícios devido à idade\n");
    }

    printf("\nDeseja verificar outra pessoa? (s para sim / n para não): ");
    scanf(" %c", &continuar); // espaço antes de %c ignora o enter anterior

  } while (continuar == 's' || continuar == 'S');

  printf("Encerrando o programa...\n");
  return 0;
}
