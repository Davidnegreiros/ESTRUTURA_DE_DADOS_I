// QUESTÃO 10:  Exporta um contato a partir de seu ID para um novo arquivo com o nome do contato.

#include <stdio.h>

void Exporta_Contato(int *identificador);

int main(){
    int identificador = 5;
    Exporta_Contato(identificador);
    return(0);
}

void Exporta_Contato(int *identificador){
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

    int cont = 0;

    // Percorre todo o arquivo.
    while(!feof(arquivo1)){
        fscanf(arquivo1, "%d %s %s %s", &id, &nome, &profissao, &telefone);

        // Verifica se os identificadores são iguais, se forem, faz a exportação do contato para um novo arquivo com o seu nome.
        if(id == identificador){
            fprintf(arquivo2, "%d %s %s %s\n", id, nome, profissao, telefone);
            
            // Verifca quantas letras tem o nome armazenado em "nome".
            for(int i = 0; nome[i] != '\0'; i++){
                cont++;
            }

            char extensao[] = ".txt";
            char nome_arquivo[20];

            for(int i = 0; nome[i] != '\0'; i++){
                nome_arquivo[i] = nome[i];
            }
            for(int j = 0; extensao[j] != '\0'; j++){
                nome_arquivo[cont+j] = extensao[j];
            }

            fclose(arquivo1);
            fclose(arquivo2);
            remove("agenda.dat");
            rename("agenda_aux.dat", nome_arquivo);
        }
    }
}