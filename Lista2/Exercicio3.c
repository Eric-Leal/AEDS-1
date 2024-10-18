#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float fah,cel, v=5;
    printf("Escreva a temperatura em Fahrenheit:");
    scanf("%f", &fah);

    v = v/9;
    cel = v *(fah-32);

    printf("A temperatura em Graus Celsius e de: %f", cel);

    return 0;
}


