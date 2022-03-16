#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, j, aux, divisores = 0;

    // Faz a contagem de 1 a 100.
    for(i = 1; i <= 100; i++){
        aux = i; // Variável auxiliar para receber o valor de 'i'.
        divisores = 0; // Zera o valor acumulado da variavel divisores antes de entrar novamente no segundo for.

        // Verifica se o valor de 'i' é um número primo.
        for(j = i; j > 0; j--){
            if(aux % j == 0){
                divisores++;
            }
        }
        // Inprime os números que são primos.
        if(divisores == 2){
            printf("\n%d",aux);
        }
    }
    return(0);
}