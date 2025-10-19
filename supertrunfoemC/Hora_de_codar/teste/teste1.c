#include <stdio.h>

int main(){

    char estado[50];
    char codigocarta[50];

    printf("Digite o nome do Estado: \n ");
    scanf("%s", estado);

    printf("Digite o código da carta: \n");
    scanf("%s", &codigocarta);    

    printf("Estado: %s"\n, estado);
    printf("Código da carta: %s"\n, codigocarta);
    

    return 0;


    }