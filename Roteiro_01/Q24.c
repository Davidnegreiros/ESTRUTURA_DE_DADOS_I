#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void somatorio(int num, int *resultado);

int main(){
    
    int num, resultado = 0;

    printf("\n\nDigite o total de repeticoes do somatorio = ");
    scanf("%d", &num);

    somatorio(num, &resultado);

    printf("\nResultado do somatorio = %d\n\n", resultado);
  return(0);
}

void somatorio(int num, int *resultado){
    for(int i = 1; i <= num; i++){
        *resultado += i;
    }
}