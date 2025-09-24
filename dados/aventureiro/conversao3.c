#include <stdio.h>
 
int main() {

    //Conversão Implícita
    /*Riscos da conversão implícita: a conversão implícita pode ser útil, mas também apresenta riscos. 
    Pode ocorrer perda de dados ou precisão quando tipos de dados de precisões diferentes são convertidos. 
    Por exemplo, ao converter float para int, a parte decimal será perdida. 
    Além disso, se você não estiver ciente de quando a conversão implícita acontece, 
    isso pode levar a comportamentos inesperados em seu programa.*/

    int a = 10;
    float b = 3.5;
    float resultado = a + b; // 'a' é convertido implicitamente para float
 
    printf("Resultado: %.2f\n", resultado);
 
    return 0;
}