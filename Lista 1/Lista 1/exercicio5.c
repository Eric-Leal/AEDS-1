#include <stdio.h>
#include <stdlib.h>

 int main()
{
    int hora, min, sec, total;

    printf("Escreva as horas: ");
    scanf("%d", &hora);

    printf("Escreva os minutos: ");
    scanf("%d", &min);

    printf("Escreva os segundos: ");
    scanf("%d", &sec);

    total = sec + min*60 + hora*3600;

    printf("Tempo em segundos: %d\n", total);

    return 0;
}
