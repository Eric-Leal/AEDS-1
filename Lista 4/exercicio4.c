#include <stdio.h>
#include <stdlib.h>

int main(){

    int saldo, valor;

    printf("Escreva o saldo");
    scanf("%d", &saldo);

    printf("Escreva o valor");
    scanf("%d", &valor);

    if(saldo>valor){
        saldo = saldo-valor;
        printf("Valor retirado %d", saldo);

    }else{
        saldo = valor+saldo;
        printf("Valor com deposito %d", saldo);
    }

    return 0;

}
