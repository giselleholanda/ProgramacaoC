#include <stdio.h>

int main(){

        float nota1, nota2, nota3;
        //int nota1, nota2, nota3;
        float media;
        // int media;
       
        printf("***App de cálculo de média***\n");

        //int -- %d
        //float -- %f no scanf, para ler. -- %.2f no printf, por exemplo, para exibir.

        printf("Digite a nota da AP1: \n");
        scanf("%f", &nota1);

        printf("Digite a nota da AP2: \n");
        scanf("%f", &nota2);

        printf("Digite a nota da AG: \n");
        scanf("%f", &nota3);

        //media = (nota1 + nota2 + nota3) / 3;
        media = (float) (nota1 + nota2 + nota3) / 3;
        printf("Média é: %.2f\n", media);


    return 0;
}