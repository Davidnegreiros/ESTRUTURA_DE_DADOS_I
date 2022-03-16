#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void inverte_num(int num, int *inverso);

int main(){
    int num, inverso = 0;    
    
    // Ler um número
    printf("\n\nInforme um numero inteiro = ");    
    scanf("%d", &num);    

    inverte_num(num, &inverso);

    // Resultado
    printf("\nO numero invertido e %d\n\n", inverso);     
    
    printf("\n\n");
  return(0);
}

void inverte_num(int num, int *inverso){
    
    int aux;
    // Faz a inverção do número.
    while(num != 0){    
        // aux recebe o resto da divisão do número por 10
        aux = num % 10;
        // Guardando no inverso    
        *inverso = *inverso * 10 + aux;    
        // Número recebe ele dividido por 10
        num /= 10;    
    }
}