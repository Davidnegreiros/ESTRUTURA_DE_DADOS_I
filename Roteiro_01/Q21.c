#include <stdio.h>
#include <math.h>

int MDC(int n1, int n2);
void fat(int n1, int *fatorial);
void fibonacci(int n1);
void isPrime(int n1, int *cont);

int main(){
    
    int op, n1, n2;

    do{
        printf("\n\nEscolha uma das opcoes\n");
        printf("\n[1] Maximo Divisor Comum entre dois numero inteiros.");
        printf("\n[2] Fatorial de um numero natural.");
        printf("\n[3] A serie de fibonacci.");
        printf("\n[4] Verificar se n e' um numero natural primo.");
        printf("\n\nEscolha = ");
        scanf("%d", &op);
    }while(op != 1 && op != 2 && op != 3 && op != 4);

    switch (op)
    {
    case 1:
        printf("\n\nDigite o primeiro valor = ");
        scanf("%d", &n1);
        printf("\nDigite o segundo valor = ");
        scanf("%d", &n2);
        
        int result;

        result = MDC(n1, n2);
        printf("\n\nMDC = %d",result);
        break;
    
    case 2:
        printf("\n\nDigite um valor valor para o fatorial = ");
        scanf("%d", &n1);
        
        int fatorial = 1;
        
        fat(n1, &fatorial);
        
        printf("\nFatorial de %d = %d\n\n", n1, fatorial);
        break;
    
    case 3:
        printf("\n\nDigite a quantidade de termos para a sequencia de fibonacci = ");
        scanf("%d", &n1);

        fibonacci(n1);
        break;
    
    case 4:
        printf("\n\nDigite um valor valor para verificar se e' primo = ");
        scanf("%d", &n1);
        
        int cont = 0;

        isPrime(n1, &cont);

        if(cont == 2){
            printf("\nO numero %d e' primo\n\n", n1);
        }
        else{
            printf("\nO numero %d nao e' primo\n\n", n1);
        }
        break;
    }
    return(0);
}

int MDC(int n1, int n2){

    if(n1 % n2 == 0){
        return(n2);
    }
    else if(n1 % n2 != 0){
        return(MDC(n2, (n1 % n2)));
    }
}

void fat(int n1, int *fatorial){
    int i;

    for(i = n1; i >=1; i--){
        *fatorial *= i;
    }
}

void fibonacci(int n1){
    int a, b, i, aux;
    a = 0;
    b = 1;
  
    for(i = 0; i < n1; i++){

        aux = a + b;
        a = b;
        b = aux;

        printf("%d ", aux);
    }
}

void isPrime(int n1, int *cont){
    
    int i, aux;

    aux = n1;
    for(i = n1; i >=1; i--){
        if(aux % i == 0){
            *cont = *cont + 1;
        }
    }
}