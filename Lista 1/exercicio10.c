#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tinta = 3,area, latas, preco;
    int captinta = 18, litros;
    printf("Escreva o tamanho da area em metros quadrados");
    scanf("%f", &area);

    litros = area/tinta;

    latas = (litros/captinta);

    if (litros%captinta != 0){
        latas +=1;
    }

    preco = latas*80;

    printf("Quantidade de latas usadas %.2f\n", latas);
    printf("valor total%.2f\n", preco);

    return 0;
}
