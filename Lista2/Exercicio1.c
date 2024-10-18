#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, d;
    printf("Escreva o primeiro numero: ");
    scanf("%f",&a );
    printf("Escreva o segundo numero: ");
    scanf("%f", &b);

    c = a;
    d = b;
    b = c;
    a = d;

    printf("Numero A invertida: %.1f\n",a);
    printf("Numero B invertida: %.1f\n",b);
    return 0;
}
