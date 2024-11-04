#include <stdio.h>
#include <stdlib.h>

int main(){

    int idade[60];
    float media, soma, alunos;


    for(int i = 0; i<60; i++){

            printf("Escreva idade dos aluno:");
            scanf("%d", &idade[i]);
        if(idade[i] != 0){
        alunos++;
        soma += idade[i];
        media = soma/alunos;
        }
    }
    printf("Media: %f", media );
    printf("\nIdade de todos os alunos:" );
        for(int i = 0; i<60; i++){
            if(idade[i] != 0){
            printf("\n%d", idade[i]);
            }
        }
    printf("\nIdade dos alunos com idade superior a media: ");
        for(int i = 0; i<60; i++){
            if(idade[i]>media){
            printf("\n%d", idade[i]);
            }
        }
    return 0;
}






