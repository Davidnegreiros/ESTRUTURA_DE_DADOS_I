// QUESTÃO 03: listar todos os contatos por uma letra específica apresentando o nome e telefone.
#include <stdio.h>

void Listar_Contatos_Por_Letra( char c);

int main(){
    Listar_Contatos_Por_Letra('M');
    return(0);
}

void Listar_Contatos_Por_Letra( char c){
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
        if(nome[0] == c){
            printf("%s -> %s \n\n", nome, telefone);
        }
    }
}