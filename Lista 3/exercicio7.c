#include <stdio.h>
#include <stdlib.h>

int main()
{
    float cent, fol,total;

    printf("Escreva a quantidade de folhas que deseja:");
    scanf("%f", &fol);

    if(fol>0 && fol<=100){

        cent = 0.25;
        total = fol*cent;
        printf("Valor a ser pago: %.2f", total);

    }else if(fol>100){

        cent = 0.2;
        total = fol*cent;
        printf("Valor a ser pago: %.2f", total);

    }else if(fol<=0){
        printf("Opcao invalida");

    }
    return 0;
}




