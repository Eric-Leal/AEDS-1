#include <stdio.h>
#include <stdlib.h>

int main(){

    int valor,idade;

    do{
        printf("Escreva a idade da pessoa:\n");
        scanf("%d", &idade);

        if(idade<10){
            valor = 100+180;
            printf("conveniado deve pagar: %d\n", valor);
        }else if(idade >=10 && idade<=30){
            valor = 100+ 150;
            printf("conveniado deve pagar: %d\n", valor);
        }else if(idade >= 31 && idade <=60){
            valor = 100 + 195;
            printf("conveniado deve pagar: %d\n", valor);
        }else if(idade > 60){
            valor = 100 + 230;
            printf("conveniado deve pagar: %d\n", valor);
        }

    }while(idade!= -1);

    return 0;

}


