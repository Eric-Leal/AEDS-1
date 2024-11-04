#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetor[5];
    int vetordobro[5];
    int valor;

    for(int i =0; i<5; i++){
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
        vetordobro[i] = vetor[i]*2;

    }
    for(int i =0; i<5; i++){
        printf("\nDobro: %d", vetordobro[i]);

    }
    return 0;
}




