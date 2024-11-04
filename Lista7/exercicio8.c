#include <stdio.h>
#include <stdlib.h>

int main(){

    int vetorA[5];
    int vetorB[5];

    for(int i =0; i<5; i++){
        printf("Escreva os valores do vetor A:");
        scanf("%d", &vetorA[i]);
    }
    for(int i =0; i<5; i++){


        printf("Escreva os valores do vetor B:");
        scanf("%d", &vetorB[i]);

        while(vetorA[i] == vetorB[i]){
            printf("Valor invalido: escreva outro numero:");
            scanf("%d", &vetorB[i]);
        }
    }
    for(int i = 0; i<5; i++){
        printf("A: %d \n", vetorA[i]);
    }
    for(int i = 0; i<5; i++){
        printf("B: %d \n", vetorB[i]);
    }

    for(int i = 0; i<5; i++){
        printf("Subtracao: %d \n", vetorA[i] - vetorB[i]);
    }



    return 0;
}





