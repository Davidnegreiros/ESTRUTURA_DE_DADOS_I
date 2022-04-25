// QUESTÃO 09: Edita o número de um telefone, passando como parâmetro o Id.
#include <stdio.h>

void Altera_Telefone(int *identificador, char *novo_telefone);

int main(){
    int identificador = 2;
    char novo_telefone[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 2, 2, 2, 2};
    Altera_Telefone(identificador, novo_telefone);
    return(0);
}

void Altera_Telefone(int *identificador, char *novo_telefone){
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

        // Verifica se os IDs são iguais, se forem, altera o telefone do ID escolhido.
        if(id != identificador){
            fprintf(arquivo2, "%d %s %s %s\n", id, nome, profissao, telefone);
        }
        else{
            fprintf(arquivo2, "%d %s %s %s\n", id, nome, profissao, novo_telefone);
        }
    }
    //fclose(arquivo1);
    //fclose(arquivo2);
    //remove("agenda.dat");
    //rename("agenda_aux.dat", "agenda.dat");
}