#include <stdio.h>
#include <stdlib.h>


int main(){
    int pos;
    int vetor[50];

    for(int i = 0; i<50; i++){
        vetor[i] = i;
        
        pos = (vetor[i]+(3*i)%(i+1));
        printf("%d ", pos);
    }

    return 0;
}




