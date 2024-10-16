#include <stdio.h>
#include <stdlib.h>

int main()
{
    float peso, exc, multa;

    printf("Quantos quilos pegou:");
    scanf("%f", &peso);

    exc = peso - 50;
    multa = exc*4;

    printf("Quilos excedentes: %.2f\n", exc);
    printf("O valor da multa e de:%.2f\n", multa);

    return 0;
}
