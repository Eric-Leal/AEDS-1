#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, c;
    do{

    printf("Escreva um numero:");
    scanf("%d", &n);
    c = pow(n,3);
    printf("Cubo do numero: %d", c);

    }while(n %7!=0);

    return 0;

}
