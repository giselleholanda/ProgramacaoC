#include <stdio.h>

/*
Definição e aplicação do operador ternário:
O operador ternário é uma forma compacta de escrever uma instrução if-else. 
Ele é chamado de ternário porque envolve três partes. Vamos conhecê-las!

- Uma condição
- Um valor se a condição for verdadeira
- Um valor se a condição for falsa
 
A partir disso, vamos conhecer a sintaxe do operador ternário:
      condicao ? valor_se_verdadeiro : valor_se_falso;
*/

int main() {
  int idade;
  char* resultado;
  char responderNovamente;

  do{
    
    /*
        resultado = idade >=18 ? 1 : 0;
    
        if(resultado == 1){
          printf("Você é maior de idade\n");
        } else {
          printf("Você é menor de idade\n");        
        } 

        ou seja, o operador ternário acima substitui o código if-else abaixo:               
        if(idade >= 18){
          resultado = "Maior de idade";
        } else {
          resultado = "Menor de idade";
        }

        pode ser escrito de forma mais compacta usando o operador ternário:
        resultado = (idade >= 18) ? printf("Você é maior de idade\n") : printf("Você é menor de idade\n");
    */
   
  printf("Qual a sua idade?\n");
  scanf("%d", &idade);
  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";
  printf("Você é: %s\n", resultado);

  printf("Deseja responder novamente? (s/n): ");
  scanf(" %c", &responderNovamente); // espaço antes do %c ignora o enter anterior

    } while (responderNovamente == 's' || responderNovamente == 'S');
     
  printf("Obrigado por responder!\n");  
  return 0;
}