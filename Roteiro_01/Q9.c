#include <stdio.h>
#include <stdlib.h>

int main(){

    int i, cont = 0;

    printf("\n\n");

    // Apresenta os caracteres da tabela ASCII do 0 ao 127
    for(i = 0; i <= 127; i++){
        printf("%c ",i);

        cont++;
        // Pula duas linha a cada 10 caracteres impreso.
        if(cont == 10){
            printf("\n\n"); 
            cont = 0;
        }
    }
    printf("\n\n");
    
    return(0);
}