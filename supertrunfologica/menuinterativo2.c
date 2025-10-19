#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Quando o usuário escolhe a opção 1, a função srand(time(0)) é chamada para inicializar 
o gerador de números aleatórios com base no tempo atual. 
Isso garante que o gerador de números aleatórios produza sequências diferentes 
cada vez que o programa for executado.
A variável numeroSecreto é atribuída a um número aleatório entre 1 e 10, 
gerado pela expressão rand() % 10 + 1. A função rand() gera um número aleatório inteiro, 
e o operador % 10 limita esse número ao intervalo de 0 a 9. Adicionando 1, obtemos um número entre 1 e 10.
O programa então solicita ao usuário que adivinhe o número secreto com a 
mensagem "Adivinhe o número (entre 1 e 10): ".
Usamos scanf para ler o palpite do usuário e armazená-lo na variável palpite.
Uma estrutura if-else é usada para comparar o palpite do usuário com o número secreto. 
Se o palpite for igual ao número secreto, o programa imprime "Parabéns! Você acertou!". 
Caso contrário, imprime "Você errou. O número era X.", sendo X o número secreto.

*/

int main() {
  int opcao;
  int numeroSecreto, palpite;

  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      srand(time(0));
      numeroSecreto = rand() % 10 + 1; //rand gera um número aleatório.
      printf("Adivinhe o número (entre 1 e 10): \n");       
      scanf("%d", &palpite);

      if (palpite == numeroSecreto) {
        printf("Parabéns! Você acertou!\n");
        printf("Número secreto é: %d\n", numeroSecreto);
      } else {
        printf("Você errou. O número era %d.\n", numeroSecreto);
      }
      break;
    case 2:
      printf("Regras do Jogo:\n");
      printf("1. Escolha uma opção no menu.\n");
      printf("2. Se você escolher 'Iniciar Jogo', adivinhe o número secreto.\n");
      printf("3. O jogo termina quando você escolhe 'Sair'.\n");
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}