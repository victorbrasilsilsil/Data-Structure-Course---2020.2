//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
//Autor: Victor Brasil
//Nome do Arquivo: contarVogais.c
//Data de criação: 17/03/2021
//Descrição: utiliza de uma função para calcular o nº de
//vogais dentro de um vetor de caracteres local a main
//vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contador(char *vetorCopia){
    int nv = 0; //número de vogais
    int inc = 0; //incrementador
    while(vetorCopia[inc] != '\0'){
        if(vetorCopia[inc] == 'a' || vetorCopia[inc] == 'e' ||
           vetorCopia[inc] == 'i' || vetorCopia[inc] == 'o' ||
           vetorCopia[inc] == 'u'){
            nv++;
        }
        inc++;
    }

return nv;
}
///////////////////////////////////////////////
int main(){
    char vetor[100] = "paralelepipedo nao euclidiano";

    printf("O vetor de caracteres '%s' ", &vetor);
    printf("tem %d vogais", contador(vetor));

return 0;
}