#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float pri, seg, ter, imp = 780000;

    pri = imp*0.46;
    seg = imp*0.32;
    ter = imp*0.22;

    printf("O primeiro ganhador recebeu: %f\n",pri);
    printf("O segundo ganhador recebeu: %f\n",seg);
    printf("O terceiro ganhador recebeu: %f\n",ter);

    return 0;
}

