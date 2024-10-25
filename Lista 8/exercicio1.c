#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char nome[70];
    char nomeInvertido[70];

    printf("Escreva um nome:");
    fgets(nome, 70, stdin);
    int n = strlen(nome);

    for(int i=n-1,j=0; i>=0; i--,j++){
        nomeInvertido[j] = nome[i];
        printf("%c", nomeInvertido[j]);
    }

    return 0;

}




