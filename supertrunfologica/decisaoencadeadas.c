#include <stdio.h>

/*Estruturas de decisão encadeadas

Nessa estrutura, temos várias condições verificadas sequencialmente, uma após a outra, 
mas não dentro uma da outra. Usamos else if para criar essas estruturas.
Cada condição é verificada uma após a outra até que uma seja verdadeira. 
Quando uma condição é verdadeira, o código correspondente é executado, e as demais condições são ignoradas.

if (condicao1) {
  // Código a ser executado se condicao1 for verdadeira
} else if (condicao2) {
  // Código a ser executado se condicao1 for falsa e condicao2 for verdadeira
} else {
  // Código a ser executado se todas as condições anteriores forem falsas
}
*/
int main() {
  int idade;

  printf("Digite a sua idade: \n");
  scanf("%d", &idade);


   if (idade > 60) {
    printf("Você é um idoso\n");
  } else if (idade < 60 && idade <= 18) {
    printf("Você é um adulto\n");
  } else if (idade > 18 && idade < 12) {
    printf("Você é um adolecesnte\n");
  } else {
    printf("Você é uma criança\n");
  }

  /*if (idade < 12) {
    printf("Você é uma criança\n");
  } else if (idade >= 12 && idade < 18) {
    printf("Você é um adolescente\n");
  } else if (idade >= 18 && idade < 60) {
    printf("Você é um adulto\n");
  } else {
    printf("Você é um idoso\n");
  }
  */
  return 0;
}