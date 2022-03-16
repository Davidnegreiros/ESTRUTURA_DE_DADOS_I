#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c; // Coeficientes

    printf("\n\nEntre com os coeficientes (a b c)");
    printf("\n\nCoeficiente a = ");
    scanf("%f", &a);
    printf("\nCoeficiente b = ");
    scanf("%f", &b);
    printf("\nCoeficiente c = ");
    scanf("%f", &c);

    if(a == 0.0){
        double x = -c / b;
        printf("\nUma raiz real: %lf\n\n", x);
    }
    else{
        double delta = b*b - 4*a*c;
        if(delta < 0){
            printf("\nRaízes reais inexistentes!\n\n");
        }
        else if(delta == 0.0){
            double x = -b / (2*a);
            printf("\nUma raiz real: %f\n\n", x);
        }
        else{
            delta = sqrt(delta);
            double x1 = (-b + delta) / (2*a);
            double x2 = (-b - delta) / (2*a);
            printf("\nPrimeira raíz: %.2f\n", x1);
            printf("\nSegunda raíz: %.2f\n\n", x2);
        }
    }

    return(0);
}
