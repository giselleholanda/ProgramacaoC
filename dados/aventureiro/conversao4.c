#include <stdio.h>
 
int main() {

    //Conversão explícita (casting)
    //Utilize casting explícito para garantir que as operações sejam realizadas no tipo de dado correto.

    int a = 10;
    int b = 3;
    float quociente = (float) a / b; 
    
    // 'a' é explicitamente convertido para float.
    // (float) é o casting.
 
    printf("Quociente: %.2f\n", quociente);
 
    return 0;
}