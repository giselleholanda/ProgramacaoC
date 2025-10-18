#include <stdio.h>
/*
Estruturas de decisão aninhadas em C

Agora, vamos explorar as estruturas de decisão aninhadas, 
um conceito importante para criar programas que respondem 
de maneira adequada a múltiplas condições hierárquicas.
As estruturas de decisão aninhadas ocorrem quando 
uma instrução if está dentro de outra instrução if. 
Isso é útil quando você precisa verificar uma condição dentro de outra condição.
As estruturas de decisão aninhadas permitem verificar múltiplas condições em diferentes níveis. 
Se uma condição for verdadeira, outra condição pode ser verificada dentro dela. 

if (condicao1) {
  if (condicao2) {
    // Código a ser executado se condicao1 e condicao2 forem verdadeiras
  }
}
  */
int main() {
  int idade;
  float renda;

  printf("Digite a sua idade: ");
  scanf("%d", &idade);
  printf("Digite a sua renda mensal: \n");
  scanf("%f", &renda);

  if (idade < 18 || idade > 60) {
    if (renda < 2000.0) {
      printf("Você está qualificado para o desconto especial\n");
    } else {
      printf("Você não está qualificado para o desconto devido à renda\n");
    }
  } else {
    printf("Você não está qualificado para o desconto devido à idade\n");
  }

  return 0;
}