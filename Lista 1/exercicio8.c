#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ganho, horas, total;

    printf("Escreva quanto voce ganha por hora: ");
    scanf("%f", &ganho);

    printf("Escreva quantas horas voce trabalha por mes: ");
    scanf("%f", &horas);

    total = ganho*horas;

    printf("O total do salario e de: %.2f\n", total);

    return 0;
}


