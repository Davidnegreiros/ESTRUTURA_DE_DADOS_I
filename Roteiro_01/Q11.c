#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int i, n;
    float cateto1, cateto2, hipotenusa, C, soma;

    printf("\n\nQuantidade de repetições: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        printf("\n\nInforme o valor do primeiro cateto: ");
        scanf("%f", &cateto1);
        printf("\nInforme o valor do segundo cateto: ");
        scanf("%f", &cateto2);
        printf("\nInforme o valor da hipotenusatenusa: ");
        scanf("%f", &hipotenusa);

        soma = ((pow(cateto1,2)) + (pow(cateto2,2)));
        C = pow(hipotenusa,2);

        if(soma == C){
            printf("\n\nO triangulo e pitagorico\n\n");
        }
        else{
            printf("\n\nO triangulo nao e pitagorico\n\n");
        }
    }
    return(0);
}
// Para a saida ser um triângulo pitagórico use (7.07106781187) para os dois catetos e (10) para a hipotenusa.