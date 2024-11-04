#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int vetorA[10] ;
    int vetorB[10] ;
    int vetorC[10] ;
    srand(time(0));

    for(int i=0; i<10; i++){
    vetorA[i] = rand()  %10;
    printf("A: %d \n", vetorA[i]);
    }
    for(int i=0; i<10; i++){
    vetorB[i] = rand()  %10;
    printf("B: %d \n", vetorB[i]);
    }


    for(int i=0; i<10; i++){
        vetorC[i] = vetorA[i] - vetorB[i];
        printf("C: %d \n", vetorC[i]);
    }
    return 0;
}




