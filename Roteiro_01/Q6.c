#include <stdio.h>
#include <stdlib.h>

int main(){

    int num, i, j, fat = 1;
    // Recebe o total de fatoriais a se fazer.
    printf("\n\nInforme um valor = ");
    scanf("%d", &num);

    // 'for' responsável por fazer a contagem.
    for(i = 1; i <= num; i++){
        fat = 1;
        // 'for' responsável por calcular o fatorial.
        for(j = i; j > 0; j--){
            fat *= j;
        }
        printf("\nFatorial de %d = %d\n", i, fat);
    }
    return(0);
}