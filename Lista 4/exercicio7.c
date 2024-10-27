#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, fat, fatorial;

    printf("Quantos valores voce deseja ler:");
    scanf("%d", &n);

    for(int i=1;i<=n; i++){
        printf("\nDigite um numero");
        scanf("%d", &fatorial);
        fat = 1;

    for(int j = 1; j <=fatorial; j++){
        fat*=j;
    }

    printf("Numero lido %d \nFatorial: %d", fatorial, fat);
    }
    return 0;
}
