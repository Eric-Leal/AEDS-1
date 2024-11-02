#include <stdio.h>

float media(float nota1, float nota2, float nota3) {
    float media;
    media = (nota1 + nota2 + nota3) / 3;
    return media;
}

int main() {
    float nota1, nota2, nota3;

    do{
        printf("\nDigite 3 notas ou 0 0 0 para sair: ");
        scanf("%f %f %f", &nota1, &nota2, &nota3);

        printf("A media das notas e de %.2f", media(nota1, nota2, nota3));

    } while (nota1 >0 && nota2>0 && nota3>0);
    return 0;
}
