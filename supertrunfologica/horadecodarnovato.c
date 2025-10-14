#include <stdio.h>

int main(){
    float umidade, temperatura;
    unsigned int estoque, estoqueMinimo = 1000;
  
    printf("Registe a temperatura atual: \n");
    scanf("%f", &temperatura);

    printf("Resgite a umidade do ar atual: \n");
    scanf("%f", &umidade);

    printf("Registe o estoque atual: \n");
    scanf("%u", &estoque);

    if (temperatura > 30) {
        printf("A temperatura está alta!\n");
    } else {
        printf("A temperatura está dentro dos parâmetros.\n");
    }

    if (umidade > 50) {
        printf("A umidade está em estado crítico!\n");
    } else {
        printf("A umidade está dentro dos parâmetros.\n");
    }

    if (estoque > estoqueMinimo) {
        printf("O estoque está normal!\n");
    } else {
        printf("O estoque está abaixo do estabelecido.\n");
    }

    
    
    return 0;

}