#include <stdio.h>
#include <stdlib.h>

int main() {

    float velmax, velmot, exc;


    printf("Escreva a velocidade maxima permitida");
    scanf("%f", &velmax);

    printf("Escreva a velocidade com que o motorista estava dirigindo: ");
    scanf("%f", &velmot);


    exc = velmot - velmax;


    if (exc <= 0) {
        printf("Motorista respeitou a lei");

    } else if (exc <= 10) {
        printf("Multa de 50 reais");

    } else if (exc <= 30) {
        printf("Multa de 100 reais");

    } else {
        printf("Multa de 200 reais");
    }

    return 0;
}
