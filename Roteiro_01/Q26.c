#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void A(int m, int n, int *x, int *y);

int main(){
    
    int m, n, x, y;

    printf("\n\nInforme dois valores\n");
    printf("\nValor 1 = ");
    scanf("%d", &m);
    printf("\nValor 2 = ");
    scanf("%d", &n);

    A(m,n, &x, &y);

    printf("\nA (%d, %d)\n\n", x, y);

  return(0);
}

void A(int m, int n, int *x, int *y){
    int m_aux, n_aux;

    if(m == 0){
        *x = m;
        *y = n + 1;
    }
    else if(m > 0 && n == 0){
        *x = m - 1;
        *y = n;
    }
    else if(m > 0 && n > 0){
        m_aux = m - 1;
        n_aux = n - 1;

        *x = m_aux * m;
        *y = m_aux * n_aux;
    }
}