#include <stdio.h>
#include <stdlib.h>

int main()
{
    char est;
    float val;

    printf("Escreva o valor:");
    scanf("%f", &val);
    getchar();
    printf("Escreva a primeira letra do estado de destino:");
    scanf("%c", &est);


    switch(est){
    case 'm':
    printf("MG\n");
    val = val + (val*0.07);
    printf("VALOR: %.2f", val);
    break;

    case 's':
    printf("SP\n");
    val = val + (val*0.12);
    printf("VALOR: %.2f", val);
    break;

    case 'r':
    printf("RJ\n");
    val = val + (val*0.15);
    printf("VALOR: %.2f", val);
    break;

    case 'e':
    printf("ES\n");
    val = val + (val*0.08);
    printf("VALOR: %.2f", val);
    break;
    default:
        printf("opcao invalida");
    }

    return 0;
}


