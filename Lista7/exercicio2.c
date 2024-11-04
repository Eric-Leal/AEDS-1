#include <stdio.h>
#include <stdlib.h>

int main(){
    int numeros[100];
    int contador = 0, j=0;

    for(int i=0; contador < 100;i++){

        if(i %6 !=0 && i %10 !=6){
          numeros[j] = i;
          j++;
          contador++;
        }
    }

    for(int i=0; i< 100;i++){
          printf("%d ", numeros[i]);
    }
    return 0;
}


