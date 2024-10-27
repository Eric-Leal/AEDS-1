#include <stdio.h>
#include <stdlib.h>

int main(){

    float peso, peso2, pessoa, pessoa2, media,pmais ;

    do{
        printf("Escreva o peso:");
        scanf("%f",&peso);
        pessoa++;

        if(peso>60){
            pessoa2++;
            peso2 = peso2+peso;
        }
        if(peso>pmais){
            pmais = peso;
        }
    }while(pessoa <5);
        media = peso2/pessoa2;
        printf("media %f", media);
    printf("Pessoa mais pesada pesa: %f\n",pmais);


    return 0;

}

