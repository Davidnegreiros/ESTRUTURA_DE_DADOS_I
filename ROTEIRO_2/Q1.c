// QUESTÃO 01: listar todos os contatos por nome.
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
        fscanf(arquivo, "%d %s %s %d ", &id, &nome, &profissao, &telefone);
        printf("%s \n\n", nome);
    }
}