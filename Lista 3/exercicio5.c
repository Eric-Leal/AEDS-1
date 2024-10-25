#include <stdio.h>
#include <stdlib.h>

int main()
{

    float a, b,raiz, c,x1,x2,del;

    printf("Escreva o valor de A");
    scanf("%f",&a);
    printf("Escreva o valor de B");
    scanf("%f", &b);
    printf("Escreva o valor de C");
    scanf("%f", &c);

    //b2-4.a.c//

    del = pow(b, 2)-4*a*c;

    raiz = sqrt(del);

    if(del>0){
    printf("%f\n",del);

    x1 = (-b + raiz)/(2*a);
    x2 = (-b - raiz)/(2*a);
    printf("%f\n",x1);
    printf("%f\n",x2);

    }else if(del==0){
    x1 = (-b + raiz)/(2*a);
    x2 = (-b - raiz)/(2*a);
    printf("%f\n",x1);
    printf("%f\n",x2);
    }else if(del<0){
        printf("Raizes nao reais");
    }


    return 0;
}


