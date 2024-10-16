#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2, num3, num4,res1, res2, res3, res4;
    float peso1 = 2, peso2 = 1, peso3 = 3, peso4 = 4, media;

    printf("Escreva o primeiro numero:");
    scanf("%f", &num1);

    printf("Escreva o segundo numero:");
    scanf("%f", &num2);

    printf("Escreva o terceiro numero:");
    scanf("%f", &num3);

    printf("Escreva o quarto numero:");
    scanf("%f", &num4);

    res1 = num1*peso1;
    res2 = num2*peso2;
    res3 = num3*peso3;
    res4 = num4*peso4;

    media = (res1+res2+res3+res4)/(peso1+peso2+peso3+peso4);

    printf("A media ponderada dos numeros e de: %f\n", media);

    return 0;
}
