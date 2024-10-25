#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2,num3;

    printf("Escreva um numero:");
    scanf("%f",&num1);
    printf("Escreva o segundo numero:");
    scanf("%f",&num2);
    printf("Escreva o terceiro numero:");
    scanf("%f",&num3);

    if(num1>num2 && num1>num2){
    printf("O numero %f e o maior\n", num1);
    }
    else if(num2>num1 && num2>num3){
    printf("O numero %f e maior\n", num2);
    }
    else if(num3>num1 && num3>num2){
    printf("O numero %f e maior\n", num3);
    }

    if(num1<num2 && num1<num3){
    printf("O numero %f e o menor\n", num1);
    }
    else if(num3<num1 && num3<num2){
    printf("O numero %f e o menor\n", num3);
    }
    else if(num2<num1 && num2<num3){
    printf("O numero %f e o menor\n", num2);
    }

    if(num1>num2 && num1<num3 || num1>num3 && num1<num2){
        printf("O numero do meio e %f\n", num1);
    }else if(num2>num1 && num2<num3 || num2>num3 && num2<num1){
        printf("O numero do meio e %f\n", num2);
    }else if(num3>num1 && num3<num1 || num3>num2 && num3<num1){
        printf("O numero do meio e %f\n", num3);
    }
    if(num1 == num2 && num1 == num3){
    printf("Os numeros sao iguais\n");
    }
    return 0;
}

