#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b, produto=0;
    int menor, maior;


    printf("\nEscreva dois numeros");
    scanf("%d %d", &a,&b);

    if(a<b){
        menor = a;
        maior = b;
    }else{
        maior = a;
        menor = b;
    }
    for(int i = 1; i<=maior; i++){
        produto += menor;
    printf("%d\n", menor);
    }
    printf("produto= %d\n", produto);
    return 0;
}

