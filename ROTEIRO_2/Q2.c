// QUESTÃO 02: listar todos os contatos por nome e telefone.
#include <stdio.h>

void Listar_Contatos();

int main(){
    Listar_Contatos();
    return(0);
}

void Listar_Contatos(){
    int id;
    char nome[80];
    char profissao[26];
    char telefone[13];

    FILE *arquivo = fopen("agenda.dat", "r");
    if(arquivo == NULL){
        printf("\n\nO arquivo nao pode ser aberto ou nao existe!\n\n");
    }

    while(!feof(arquivo)){
        fscanf(arquivo, "%d %s %s %s", &id, &nome, &profissao, &telefone);
        printf("%s -> (%s) \n\n", nome, telefone);
    }
}