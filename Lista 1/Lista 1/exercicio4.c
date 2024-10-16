#include <stdio.h>
#include <stdlib.h>

int main()
{
   float faren, celsius;

   printf("Escreva a temperatura em Farenheit\n");
   scanf("%f", &faren);

   celsius = (faren - 32)/1.8;

   printf("A temperatura %.1f Farenheit, em grau Celsius e de: %.1f\n", faren, celsius);

    return 0;
}

