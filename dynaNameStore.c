//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Autor: Victor Brasil
//Nome do Arquivo: contarVogais.c
//Data de criação: 19/03/2021
//Descrição: guarda 10 nomes em um vetor de ponteiros
//           alocado dinamicamente
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define lisTam 10 // variavel global definindo o tamanho da lista
#define nomTam 20 // variavel global que define o tamanho dos nomes

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void armazenaNome(char **listaCopia, int listaTam){ // funcao para armazenar na lista cada um dos 10 nomes
    int cont, novoTamNome;
    char nome[nomTam];

    for(cont = 0; cont < listaTam; cont++){
        printf("Digite abaixo o %do nome :\n", cont + 1);
        gets(nome);
        novoTamNome = strlen(nome);

        listaCopia[cont] = malloc((novoTamNome + 1) * sizeof(char)); // alocando o tamanho exato para o nome, o +1 e para o "\0"
        strcpy(listaCopia[cont], nome); // fase final que armazena definitivamente(ou ate o free) os nomes na lista
    }    
}

void mostraNome(char **listaCopia, int listaTam){ // funcao que vai mostrar todos os nomes armazenados pela funcao anterior
    int cont;
    for(cont = 0; cont < listaTam ;cont++ ){
        printf("O %do nome da lista e: %s\n", cont + 1, listaCopia[cont]);
    }
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int main(){
    int cont = 0;
    char **lista;
    lista = (char **) malloc(lisTam * sizeof(char)); // alocando o vetor de ponteiros de tam. 10

    if(lista != NULL){
        armazenaNome(lista, lisTam);

        mostraNome(lista, lisTam);

        free(lista);
    }
return 0;
}
