#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float x1,y1,x2,y2,d;
    printf("Escreva o valor de X:");
    scanf("%f", &x1);
    printf("Escreva o valor de Y:");
    scanf("%f", &y1);
    printf("Escreva o valor de X2:");
    scanf("%f", &x2);
    printf("Escreva o valor de Y2:");
    scanf("%f", &y2);

    d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

    printf("Distancia euclidiana: %f", d);


    return 0;
}

