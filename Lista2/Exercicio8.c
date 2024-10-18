#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float sal = 1302.5, kil, val,desc;

    printf("Escreva a quantidade de kilowatt gasta:");
    scanf("%f", &kil);

    kil = kil*1.86;

    printf("kilowatts pagos %.2f\n", kil);

    desc = kil/10;
    val = kil-desc;

    printf("Valor a ser pago com desconto %.2f", val);

    return 0;
}

