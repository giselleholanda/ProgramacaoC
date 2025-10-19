#include <stdio.h>

int main(){

/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

    int numero1 =1, resultado;

    printf("Antes incrememto: %d\n", numero1);
    //numero1 = numero1 +1;
    //numero1 += 1;
    numero1++; 
    printf("Após incrememto: %d\n", numero1);

    //printf("Antes decrememto %d\n", numero1);
    //numero1 = numero1 -1;
    //numero1 -=v1;
    numero1--; 
    printf("Após decrememto: %d\n", numero1);

    printf("\n");

    //Pós-incremento
    //resultado = numero1;
    //numero1++;

    printf("Antes incrememto: %d\n", numero1);
    resultado = numero1++;
    printf("Após Pós-incrememto - Número 1: %d - Resultado: %d\n", numero1, resultado);

    printf("Antes incrememto: %d\n", numero1);
    resultado = ++numero1;
    printf("Após Pré-incrememto - Número 1: %d - Resultado: %d\n", numero1, resultado);

    printf("\n");

    printf("Antes decrememto: %d\n", numero1);
    resultado = numero1--;
    printf("Após Pós-decremento - Número1: %d - Resultado: %d\n", numero1, resultado);

    printf("Antes decrememto: %d\n", numero1);
    resultado = --numero1;
    printf("Após Pré-decremento - Número1: %d - Resultado: %d\n", numero1, resultado);






    















}