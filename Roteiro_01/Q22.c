#include <stdio.h>
#include <math.h>

void multi(int n1, int n2, int *result);

int main(){
    
    int n1, n2, resultado = 0;

    printf("\n\nDigite o primeiro valor = ");
    scanf("%d", &n1);
    printf("\nDigite o segundo valor = ");
    scanf("%d", &n2);

    multi(n1, n2, &resultado);

    printf("\nr y = %d\n\n", resultado);

    return(0);
}

void multi(int n1, int n2, int *result){
    *result = (n1*n2);
}