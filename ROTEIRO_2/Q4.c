// QUESTÃO 04: Acessar um contato através de um índice.
#include <stdio.h>

void Listar_Contatos_Por_Indici( int indice);

int main(){
    Listar_Contatos_Por_Indici(20);
    return(0);
}

void Listar_Contatos_Por_Indici( int indice){
    int id;
    char nome[80];
    char profissao[26];
    char telefone[14];

    FILE *arquivo = fopen("agenda.dat", "r");
    if(arquivo == NULL){
        printf("\n\nO arquivo nao pode ser aberto ou nao existe!\n\n");
    }

    while(!feof(arquivo)){
        fscanf(arquivo, "%d %s %s %s", &id, &nome, &profissao, &telefone);
        if(id == indice){
            printf("\n\n(%d) -> %s -> %s -> (%s)\n\n", id, nome, profissao, telefone);
        }
    }
}