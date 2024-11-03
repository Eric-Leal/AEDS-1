#include <stdio.h>
#include <stdlib.h>

void binario(int n){
    if(n==1){
        printf("1");

    }else{
        binario(n/2);
        printf("%d", n%2);

    }
}

int main(){
    int n;

    printf("Qual valor de n? ");
    scanf("%d", &n);
    binario(n);

    return 0;
}


