#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    char jogarNovamente;
    char *opcoes[] = {"Pedra", "Papel", "Tesoura"};

    srand(time(0));

    //do {
        printf("\n*** Jogo de Jokenpô ***\n");
        printf("Escolha uma opção:\n");
        printf("1. Pedra\n");
        printf("2. Papel\n");
        printf("3. Tesoura\n");
        printf("Digite o número correspondente à sua escolha: ");
        scanf("%d", &escolhaJogador);

        // Validação da escolha
       // if (escolhaJogador < 1 || escolhaJogador > 3) {
       //     printf("Escolha inválida! Por favor, digite 1, 2 ou 3.\n");
       //     continue; // volta ao início do loop
       // }

        escolhaComputador = rand() % 3 + 1;

        // printf("Você escolheu: %s\n", opcoes[escolhaJogador - 1]);
        // printf("O computador escolheu: %s\n", opcoes[escolhaComputador - 1]);
        
        switch (escolhaJogador)
        {
        case 1:
            printf("Jogador: Pedra\n");
            break;
        case 2:
            printf("Jogador: Papel\n");
            break;
        case 3:
            printf("Jogador: Tesoura\n");
            break;
        default:
            printf("Escolha inválida!\n");
            break;
        }

        switch (escolhaComputador)
        {
        case 1:
            printf("Computador: Pedra\n");
            break;
        case 2:
            printf("Computador: Papel\n");
            break;
        case 3:
            printf("Computador: Tesoura\n");
            break;
        }

        if (escolhaJogador == escolhaComputador)
        {
            printf("### Jogo empatou! ###\n");
        } else if ((escolhaJogador == 1) && (escolhaComputador == 3) ||
                   (escolhaJogador == 2) && (escolhaComputador == 1) ||
                   (escolhaJogador == 3) && (escolhaComputador == 2))
        {
            printf("### Você venceu! ###\n");
        }   else {
            printf("### Você perdeu! ###\n");
        }

       // printf("Deseja jogar novamente? (s/n): ");
       // scanf(" %c", &jogarNovamente); // espaço antes do %c ignora o enter anterior

   // } while (jogarNovamente == 's' || jogarNovamente == 'S');

    //printf("Obrigado por jogar!\n");
    return 0;
}
