#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[5] ;
    int menor;
    int indicemaior=0;
    int temp;

    for(int i = 0; i < 5; i++ ){
        printf("Digite um numero:");
        scanf("%d", &numeros[i]);
    }
    for(int i=0; i<5; i++){
        printf("%d ", numeros[i]);
    }


    menor = numeros[0];


    for(int i=1; i <5; i++){
        if (numeros[i]< menor){
            menor = numeros[i];
            indicemaior = i;
        }
    }

    printf("A posiçao do menor e: %d \n", indicemaior);

    temp = numeros[0];
    numeros[0] = numeros[indicemaior];
    numeros[indicemaior] = temp;

    for(int i=0; i<5; i++){
        printf("%d ", numeros[i]);
    }
    return 0;
}



