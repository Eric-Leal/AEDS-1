#include <stdio.h>
#include <stdlib.h>

int main()
{

    int w;
    float geo,pon,har,ari,x,y,z;

    printf("Escreva o valor de x:");
    scanf("%f", &x);
    printf("Escreva o valor de y");
    scanf("%f", &y);
    printf("Escreva o valor de z");
    scanf("%f", &z);
    getchar();

    printf("Escolha o tipo de media que deseja fazer: \n1 - Geometrica \n2 - Ponderada \n3 - Harmonica \n4 - Aritmetica \n");
    scanf("%d", &w);

    switch(w){
        case 1:
         geo = sqrt(x*y*z);
         printf("Media geometrica: %f", geo);
    break;

        case 2:
        pon = (x + 2*y + 3*z) /6;
        printf("Media ponderada: %f", pon);
    break;
        case 3:
        har = 3/((1/x)+(1/y)+(1/z));
        printf("Media harmonica: %f", har);
    break;
        case 4:
        ari = (x+y+z)/3;
        printf("Media aritmetica: %f", ari);
    }
    return 0;
}



