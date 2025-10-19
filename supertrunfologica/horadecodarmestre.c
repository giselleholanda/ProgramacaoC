#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;
    char jogarNovamente;

    do{
        // Geração do número aleatório para o computador
        srand(time(0)); // ou srand(time(NULL));
        numeroComputador = rand() % 100 + 1; // Número entre 1 e 100

        // Inicialização do jogo
        printf("### :) Bem-vindo ao Jogo do Maior, Menor ou Igual!###\n");
        printf("Vamos jogar!! :D\n");
        printf("Você deve escolher um número e o tipo de comparaçao.\n");
        printf("Tipos de comparação:\n");
        printf("M. para Maior\n");
        printf("N. para Menor\n");
        printf("I. para Igual\n");

        printf("Escolha o tipo de comparação (M/N/I): \n");
        scanf(" %c", &tipoComparacao);

        printf("Escolha seu número (entre 1 e 100):\n");
        scanf("%d", &numeroJogador);

        // Exibir número do computador
        printf("O número do Computador é: %d\n", numeroComputador);

        // Verificar o resultado com base no tipo de comparação
        switch (tipoComparacao)
        {
        case 'M':
        case 'm':
            printf("Você escolheu comparar se seu número é Maior.\n");
            resultado = (numeroJogador > numeroComputador) ? 1 : 0;           
            break;
        case 'N':
        case 'n':
            printf("Você escolheu comparar se seu número é Menor.\n");
            resultado = (numeroJogador < numeroComputador) ? 1 : 0;         
            break;
        case 'I':
        case 'i':
            printf("Você escolheu comparar se seu número é Igual.\n");
            resultado = (numeroJogador == numeroComputador) ? 1 : 0;                    
            break;        
        default:
            printf("Opção de jogo inválida! Tente novamente. o.O\n");
            break;
        }
        // Exibir o resultado final
        if (resultado == 1) {
            printf("Parabéns! Você venceu! :D\n");
        } else {
            printf("Que pena! Você perdeu! :(\n");


        printf("Deseja jogar novamente? (s/n): ");
        scanf(" %c", &jogarNovamente);
    
    }  while (jogarNovamente == 's' || jogarNovamente == 'S');

    return 0;
}