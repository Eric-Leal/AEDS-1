#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int verif(int n1){

    if(n1>0){
        return 1;
    }else{
        return 0;
    }

}
int main(){

    int num=0,n1;

    int cont=0;
    printf("Escreva quantos numeros deseja ler:");
    scanf("%d", &num);
    do{
        printf("escreva um numero");
        scanf("%d", &n1);

        if (verif(n1)){
            printf("numero positivo");

        }else{
            printf("numero negativo");
        }

        cont++;
    }while(cont < num);

    return 0;

}



