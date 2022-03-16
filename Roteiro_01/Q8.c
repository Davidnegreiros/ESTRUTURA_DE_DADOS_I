#include <stdio.h>
#include <stdlib.h>

int main(){

    int num_p, quant_p;
    float total;

    printf("\n\nInforme o numero do produto e a quantidade.\n");
    printf("\nNumero do produto: ");
    scanf("%d", &num_p);
    printf("\nQuantidade do produto vendida por um dia: ");
    scanf("%d", &quant_p);

    switch (num_p)
    {
    case 1:
        total = (3.00 * num_p);
        printf("\nTotal = %.2f\n", total);
        break;
    case 2:
        total = (4.00 * num_p);
        printf("\nTotal = %.2f\n", total);
        break;
    case 3:
        total = (2.80 * num_p);
        printf("\nTotal = %.2f\n", total);
        break;
    case 4:
        total = (1.95 * num_p);
        printf("\nTotal = %.2f\n", total);
        break;
    case 5:
        total = (5.00 * num_p);
        printf("\nTotal = %.2f\n", total);
        break;
    default:
        printf("\nNumero invalido!");
        break;
    }
    return(0);
}