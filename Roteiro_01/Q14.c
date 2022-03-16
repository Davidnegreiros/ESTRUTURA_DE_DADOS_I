#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float hipotenusa(float cateto1, float cateto2);

int main(){

    float cateto1, cateto2, hipo;

    printf("\n\nInforme o valor do primeiro cateto = ");
    scanf("%f", &cateto1);
    printf("\nInforme o valor do segundo cateto = ");
    scanf("%f", &cateto2);

    hipo = hipotenusa(cateto1, cateto2);
    
    printf("\n\nValor da hipotenusa = %f\n\n", hipo);
    return(0);
}

float hipotenusa(float cateto1, float cateto2){
    float soma, valor_hipo;

    soma = (pow(cateto1,2)) + (pow(cateto2,2));
    valor_hipo = sqrt(soma);

    return(valor_hipo);
}