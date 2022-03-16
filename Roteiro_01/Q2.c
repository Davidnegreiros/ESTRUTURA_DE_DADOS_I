#include <stdio.h>
#include <stdlib.h>

int main(){

    int i;
    float aux;

    printf("\n\n\t\tCelsius/Fahrenheit\n");

    for(i = 30; i <= 50; i++){
        aux = i;
        printf("\nTemperatura em Celsius: %d | Temperatura em Fahrenheit: %.2f", i, (aux*1.8)+32);
    }
    printf("\n\n");

    return(0);
}