#include <stdio.h>

int main() {
    int idade = 40;    
    float altura = 1.54;
    char opcao = 'G';
    char nome[20] = "giselle";

    //printf("A idade da %s é: %d\n" , nome, idade);
    printf("O nome é %s\n" , nome);
    printf("A idade é %d\n" , idade);
    printf("A altura é: %.2f\n" , altura);
    printf("A opção é: %c\n" , opcao);

}