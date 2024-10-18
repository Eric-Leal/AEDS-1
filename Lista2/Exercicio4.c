#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float km, m;
    printf("Escreva a velocidade em km/h:");
    scanf("%f", &km);

    m = km/3.6;

    printf("A velocidade em m/s: %f",m);

    return 0;
}


