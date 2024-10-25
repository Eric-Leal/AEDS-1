#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;

    printf("Escreva um numero:");
    scanf("%f", &x);

    if (x <=1){
        y == 1;
        printf("Valor de y: %f", y);

    }else if( x>1 && x <=2){
        y == 2;
        printf("Valor de y: %f", y);
    }else if(x>2 && x<=3){
        x = pow(x,2);
        y = x;
        printf("Valor de y %f", y);

    }else if(x>3){
        x = pow(x,3);
        y = x;
        printf("Valor de y %f", y);
    }

    return 0;
}




