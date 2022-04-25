// QUESTÃO 08: Edita o nome de um contato, passando como parâmetro o Id.
#include <stdio.h>

void Altera_Nome(int *identificador, char *novo_nome);

int main(){
    int identificador = 2;
    char novo_nome[] = "Davi";
    Altera_Nome(identificador, novo_nome);
    return(0);
}

void Altera_Nome(int *identificador, char *novo_nome){
    int id;
    char nome[80];
    char profissao[26];
    char telefone[14];

    FILE *arquivo1 = fopen("agenda.dat", "r");
    if(arquivo1 == NULL){
       printf("\n\nO arquivo1 nao pode ser aberto ou nao existe!\n\n");
    }

    FILE *arquivo2 = fopen("agenda_aux.dat", "w");
    if(arquivo2 == NULL){
       printf("\n\nO arquivo2 nao pode ser aberto ou nao existe!\n\n");
    }

    while(!feof(arquivo1)){
        fscanf(arquivo1, "%d %s %s %s", &id, &nome, &profissao, &telefone);

        // Verifica se os IDs são iguais, se forem, altera o nome do ID escolhido.
        if(id != identificador){
            fprintf(arquivo2, "%d %s %s %s\n", id, nome, profissao, telefone);
        }
        else{
            fprintf(arquivo2, "%d %s %s %s\n", id, novo_nome, profissao, telefone);
        }
    }
    fclose(arquivo1);
    fclose(arquivo2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");
}