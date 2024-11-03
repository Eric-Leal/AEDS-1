#include <stdio.h>
#include <stdlib.h>

void imprime(int n){
    if(n<0){
        return;
    }
    else{
        if(n%2 ==0){
        printf("%d", n);
        imprime(n-2);
        }else{
        printf("%d", n-1);
        imprime(n-3);
        }
    }
}

int main(){
    int n;

    printf("Qual valor de n?");
    scanf("%d", &n);
    imprime(n);

    return 0;
}

