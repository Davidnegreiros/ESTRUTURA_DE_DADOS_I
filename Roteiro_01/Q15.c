#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int L1, L2, i, j;

    printf("\n\nInforme os lados do retangulo\n");
    printf("\nLado 1 = ");
    scanf("%d", &L1);
    printf("\nLado 2 = ");
    scanf("%d", &L2);

    for(i = 0; i < L1; i++){
        for(j = 0; j < L2; j++){
            printf("* ");
        }
        printf("\n");
    }

    return(0);
}
