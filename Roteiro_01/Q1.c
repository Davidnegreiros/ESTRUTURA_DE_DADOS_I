#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, num;
    float valor, soma = 0;
    
    printf("\n\nInforme o numero de valores a serem lidos: ");
    scanf("%f", &num);

    for(i = 0; i < num; i++){
        printf("\nValor %d = ", i+1);
        scanf("%f", &valor);
        soma += valor;
    }
    printf("\nSoma dos valores: %.2f\n", soma);
    printf("\nMedia dos valores: %.2f\n\n", soma/num);

    return(0);
}