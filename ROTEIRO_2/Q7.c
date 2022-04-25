// QUESTÃO 07: Apagua todos os contatos.
#include <stdio.h>

void Apaga_Contatos();

int main(){
    Apaga_Contatos();
    return(0);
}

void Apaga_Contatos(){
    FILE *arquivo1 = fopen("agenda_aux.dat", "w");
    if(arquivo1 == NULL){
        printf("\n\nO arquivo1 nao pode ser aberto ou nao existe!\n\n");
    }
    
    FILE *arquivo2 = fopen("agenda.dat", "r");
    if(arquivo2 == NULL){
        printf("\n\nO arquivo2 nao pode ser aberto ou nao existe!\n\n");
    }
    
    fclose(arquivo1);
    fclose(arquivo2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}
