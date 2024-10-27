#include <stdio.h>
#include <stdlib.h>

int main(){

    float idade = 0, idadetot = 0, maior = 0 ,qtdpessoas = 0 , totfilhos = 0 , qtdfilhos = 0;
    float mediaidade = 0, mediafilhos = 0, maior20 = 0, percent20;

    do{

        printf("Escreva a idade:");
        scanf("%f", &idade);

        printf("Escreva o numero de filhos:");
        scanf("%f", &qtdfilhos);

        if(idade != 0){

        if(idade>=20.0){
            maior20++;
        }
        if(idade>maior){
            maior = idade;
        }
        qtdpessoas++;
        idadetot += idade;
        totfilhos += qtdfilhos;
        }

    }while(idade > 0);
    printf("quantidade pessoas %f", qtdpessoas);


    mediaidade = idadetot/qtdpessoas;
    mediafilhos = totfilhos/qtdpessoas;
    percent20 = (maior20/qtdpessoas)*100.0;

    printf("\nMedia da idade: %f", mediaidade);

    printf("\nMedia do numero de filhos: %f", mediafilhos);

    printf("\nMaior idade: %f", maior);

    printf("\nPercentual das pessoas acima de 20: %f", percent20);

    return 0;

}






