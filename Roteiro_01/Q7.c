#include <stdio.h>
#include <stdlib.h>

int main(){

    int num[5];
    int i, j;

    printf("\n\nInforme valores para o vetor\n");
    // Preenche o vetor com valores.
    for(i = 0; i < 5; i++){
        printf("\nValor %d = ", i+1);
        scanf("%d", &num[i]);
    }
    printf("\n"); // pula uma linha.
    // 'for' responsavel por percorrer o vetor.
    for(i = 0; i < 5; i++){
        // 'for' responsavel por imprimir o total de asteriscos referente ao valor contido em cada índici do vetor
        for(j = num[i]; j > 0; j--){
            printf("*");
        }
        printf("\n"); // pula uma linha.
    }
    printf("\n\n"); // pula duas linhas.
    return(0);
}