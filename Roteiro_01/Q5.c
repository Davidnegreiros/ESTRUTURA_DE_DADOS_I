#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, i, soma1 = 0, soma2 = 0, quadrados, cubos;

    printf("\n\nInforme um valor = ");
    scanf("%d", &num);

    for(i = 1; i <= num; i++){

        quadrados = i*i; // Eleva os números ao quadrado.
        soma1 += quadrados; // Faz a soma dos números elevado ao quadrado.
        cubos = i*i*i; // Eleva os números ao cubo.
        soma2 += cubos; // Faz a soma dos números elevado ao cubo.
    }
    // Apresenta os valores.
    printf("\nSoma dos quadrados = %d\n", soma1);
    printf("\nSoma dos cubosos = %d\n", soma2);

    return(0);
}