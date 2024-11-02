#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int hipotenusa(int a, int b){

    int hip;
    hip = sqrt(pow(a,2)+pow(b,2));

    return hip;

}

int main(){

    int a,b;
    int hip;
    printf("Escreva o valor de A e B");
    scanf("%d %d", &a, &b);

    hip = hipotenusa(a,b);

    printf("Resultado: %d", hip);

    return 0;

}

