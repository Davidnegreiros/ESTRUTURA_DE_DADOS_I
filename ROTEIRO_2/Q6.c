// QUESTÃO 06: Remove um contato a partir do número ID
#include <stdio.h>

void Remove_Contato(int identificador);

int main(){
    Remove_Contato(49);
    return(0);
}

void Remove_Contato(int identificador){
    int id;
    char nome[80];
    char profissao[26];
    char telefone[14];
    
    FILE *arquivo1 = fopen("agenda_aux.dat", "w");
    if(arquivo1 == NULL){
        printf("\n\nO arquivo1 nao pode ser aberto ou nao existe!\n\n");
    }

    FILE *arquivo2 = fopen("agenda.dat", "r");
    if(arquivo2 == NULL){
        printf("\n\nO arquivo2 nao pode ser aberto ou nao existe!\n\n");
    }

    while(!feof(arquivo2)){
        fscanf(arquivo2, "%d %s %s %s", &id, &nome, &profissao, &telefone);
        //printf("(%d) -> %s -> %s -> (%s)\n", id, nome, profissao, telefone);

        if(id != identificador){
            fprintf(arquivo1, "%d %s %s %s\n", id, nome, profissao, telefone);
        }
    }
    fclose(arquivo1);
    fclose(arquivo2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}