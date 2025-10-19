#include <stdio.h>
//#include <locale.h>

int main() {
  //setlocale(LC_ALL, ""); // Ativa suporte a UTF-8
  int opcao;
  float nota1, nota2, media;
  char responderNovamente;
  int mediaCalculada = 0;

  do{

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas
      printf("Digite a primeira nota: ");
      scanf("%f", &nota1);
      printf("Digite a segunda nota: ");
      scanf("%f", &nota2);
      media = (nota1 + nota2) / 2;
      mediaCalculada = 1;


      //Testar a condição se a nota é >= 0 e <= 10
        if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            printf("Notas válidas.\n");
        } else {
            printf("Notas inválidas! As notas devem estar entre 0 e 10.\n");
            break;
        }
        
      // Cálculo da média
      media = (nota1 + nota2) / 2;
      printf("A média do estudante é: %.2f\n", media);
      break;
    case 2:
      // Determinação do status com base na média
      if (mediaCalculada) {
    // usa a média já calculada
    if (media >= 7.0) {
        printf("Status: Aprovado!\n");
        printf("╔═══╗\n║^ ^║\n║ - ║\n║___║ \n"); // ← rosto feliz        
    } else if (media >= 5.0) {
        printf("Status: Recuperação!\n");
        printf("╔═══╗\n║● ●║\n║ ^ ║\n║___║ \n"); // ← rosto triste
    } else {
        printf("Status: Reprovado!\n");
        printf("╔═══╗\n║x x║\n║ - ║\n║___║ \n"); // ← rosto muito triste
    }
} else {
    printf("Você precisa calcular a média primeiro (opção 1).\n");
}
    break;
      printf("Digite a média do estudante: ");
      scanf("%f", &media);
      // media >= 5 ? printf("Aprovado\n") : printf("Reprovado\n");

      if (media >= 7.0) {
        printf("Status: Aprovado!\n");
        printf("╔═══╗\n║^ ^║\n║ - ║\n║___║ \n"); // ← rosto feliz        
      } else if (media >= 5.0) {
        printf("Status: Recuperação!\n");
        printf("╔═══╗\n║● ●║\n║ ^ ║\n║___║ \n"); // ← rosto triste
      } else {
        printf("Status: Reprovado!\n");
        printf("╔═══╗\n║x x║\n║ - ║\n║___║ \n"); // ← rosto muito triste
      }
      break; 
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

    if(opcao != 3){
        printf("Deseja realizar outra operação? (s/n): ");
        scanf(" %c", &responderNovamente); // espaço antes do %c ignora o enter anterior
    } else {
        responderNovamente = 'n';
        printf("Obrigado por usar o sistema!\n");
    }
    
        } while (responderNovamente == 's' || responderNovamente == 'S');
  return 0;
}