#include <stdio.h>
#include <math.h>


int main(){
    
    int i, j, aux, soma = 0, metade_num;

    // Faz a contagem de 1 a 1000.
    for(i = 1; i <= 34000; i++){
        
        aux = i; // A variável 'aux' vai ser um valor fixo.
        metade_num = i/2; // Pega a metade do número.
        soma = 0; // Reinicia a variável soma.
        
        if(i % 2 == 0){
            for(j = 1; j <= metade_num; j++){
                if(aux % j == 0){
                    soma += j;
                }         
            }
            if(soma == aux){
                printf("\n%d", aux);
            }
        }
    }
    printf("\n\n");
    return(0);
}