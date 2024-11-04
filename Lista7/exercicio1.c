#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeros[20];
    int procurar;
    srand(time(0));

    for(int i=0; i<20; i++){
        numeros[i] = rand()  %100;
        printf("%d ", numeros[i]);
    }

    printf("Digite um numero:");
    scanf("%d", &procurar);

    for(int i=0; i<20; i++){
        if(numeros[i] == procurar){
            printf("Numero no indice %d", i);
        }
    }
    return 0;
}

