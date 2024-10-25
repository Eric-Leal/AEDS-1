#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Escreva o valor de A");
    scanf("%d",&a);
    printf("Escreva o valor de B");
    scanf("%d", &b);
    printf("Escreva o valor de C");
    scanf("%d", &c);

    if (a <= 0 || b <=0){
        printf("Valores invalidos");
    }
    else if (c %a ==0 && c %b ==0){
        printf("Divisivel por ambos");

    }
    else if(c %a ==0 || c %b ==0){
        printf("Divisivel por um");
    }
    else if(c %a !=0 || c %b !=0){
        printf("Nao divisivel");
    }

    return 0;
}


