#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float ang, rad, pi = 3.141592;

    printf("Escreva o angulo em graus:");
    scanf("%f", &ang);

    rad = ang*(pi/180.0);

    printf("O valor convertido em radianos e de: %f", rad);


    return 0;
}

