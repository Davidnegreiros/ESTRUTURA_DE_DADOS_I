#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void F(int m, int n, int *x, int *y);

int main(){
    
    int m, n, x, y;

    printf("\n\nInforme dois valores\n");
    printf("\nValor 1 = ");
    scanf("%d", &m);
    printf("\nValor 2 = ");
    scanf("%d", &n);

    F(m,n, &x, &y);

    printf("\nF (%d, %d)\n\n", x, y);

  return(0);
}

void F(int m, int n, int *x, int *y){
    int m_aux, n_aux;

    if(n == 1){
        *x = m + 1;
        *y = n;
    }
    else if(m == 1){
        *x = m;
        *y = n + 1;
    }
    else if(m > 1 && n > 1){
        m_aux = m - 1;
        n_aux = n - 1;

        *x = m + m_aux;
        *y = n + n_aux;
    }
}