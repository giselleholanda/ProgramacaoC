#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    char jogarNovamente;
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    srand(time(0));

    do {
        printf("\n*** Jogo de Jokenpô ***\n");
        printf("Escolha uma opção:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Digite o número correspondente à sua escolha: ");
        scanf("%d", &escolhaJogador);

        // Validação da escolha
        if (escolhaJogador < 1 || escolhaJogador > 3) {
            printf("Escolha inválida! Por favor, digite 1, 2 ou 3.\n");
            continue; // volta ao início do loop
        }

        escolhaComputador = rand() % 3 + 1;

        /*
        Vetores de Strings: 
        opcoes[0] → "Pedra"
        opcoes[1] → "Papel"
        opcoes[2] → "Tesoura"
        E o que significa opcoes[escolhaJogador - 1]
        Suponha que o jogador digite 2 (que representa "Papel").
        Como os índices de vetores em C começam do zero, precisamos subtrair 1:
        opcoes[2 - 1] → opcoes[1] → "Papel"
        */
       
        printf("Você escolheu: %s\n", opcoes[escolhaJogador - 1]);
        printf("O computador escolheu: %s\n", opcoes[escolhaComputador - 1]);

        if (escolhaJogador == escolhaComputador) {
            printf("Empate!\n");
        } else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
                   (escolhaJogador == 2 && escolhaComputador == 1) ||
                   (escolhaJogador == 3 && escolhaComputador == 2)) {
            printf("Você venceu!\n");
        } else {
            printf("O computador venceu!\n");
        }

        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente); // espaço antes do %c ignora o enter anterior

    } while (jogarNovamente == 's' || jogarNovamente == 'S');

    printf("Obrigado por jogar!\n");
    return 0;
}
