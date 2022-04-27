// QUESTÃO 05: Lista os contatos em função de sua profissão.
#include <stdio.h>

void Listar_Contatos_Por_Profissao(char *P);

int main(){
    char Profissao[] = "Cientista_da_computacao";
    Listar_Contatos_Por_Profissao(Profissao);
    return(0);
}

void Listar_Contatos_Por_Profissao(char *P){
    int id;
    char nome[80];
    char profissao[26];
    char telefone[14];

    FILE *arquivo = fopen("agenda.dat", "r");
    if(arquivo == NULL){
        printf("\n\nO arquivo nao pode ser aberto ou nao existe!\n\n");
    }

    // Verifica quantas letras tem a profissão.
    int cont1 = 0;
    for(int i = 0; P[i] != '\0'; i++){
        cont1++;
    }

    while(!feof(arquivo)){
        fscanf(arquivo, "%d %s %s %s", &id, &nome, &profissao, &telefone);
       
        int cont2 = 0;
        
        // Verifica se as profissões armazenadas nos vetores "profissao" e "P" são iguais.
        for(int i = 0; profissao[i] != '\0', P[i] != '\0'; i++){
            if(profissao [i] == P[i]){
                cont2++;
            }
        }
        // Se cont2 for igual a cont1 imprime a profissão escolhida.
        if(cont2 == cont1){
            printf("\n(%d) -> %s -> %s -> (%s)\n", id, nome, profissao, telefone);
        }
    }
}