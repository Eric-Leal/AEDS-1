#include <stdio.h>

int main() {
    int M[4][4];
    int soma = 0;

    printf("Digite os elementos da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%d", &M[i][j]);
        }
    }


    for (int i = 1; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            soma += M[i][j];
        }
    }

    printf("Elementos da diagonal principal:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d ", M[i][i]);
    }
    printf("\n");

    printf("Soma dos elementos abaixo da diagonal principal: %d\n", soma);

    return 0;
}
