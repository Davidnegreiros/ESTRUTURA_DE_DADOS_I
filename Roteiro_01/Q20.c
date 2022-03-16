#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int num, inverso = 0, aux;    
    
    // Ler um número
    printf("\n\nInforme um numero inteiro = ");    
    scanf("%d", &num);    
    
    // Faz a inverção do número.
    while(num != 0){    
        // aux recebe o resto da divisão do número por 10
        aux = num % 10;
        // Guardando no inverso    
        inverso = inverso * 10 + aux;    
        // Número recebe ele dividido por 10
        num /= 10;    
    }    
    
    // Resultado
    printf("\nO numero invertido e %d\n\n", inverso);     
    
    printf("\n\n");
  return(0);
}