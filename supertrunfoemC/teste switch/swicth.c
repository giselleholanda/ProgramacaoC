#include <stdio.h>

int main() {
    int opcao;

    printf("Menu:\n");
    printf("1. Ver horário\n");
    printf("2. Ver clima\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Horário atual: 19:15\n");
            break;
        case 2:
            printf("Clima: Ensolarado\n");
            break;
        case 3:
            printf("Saindo...\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
