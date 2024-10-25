#include <stdio.h>

void preencheMatriz(int M[5][5]) {
    printf("Digite os elementos da matriz 5x5:\n");
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            scanf("%d", &M[i][j]);
}

int somaLinha(int M[5][5], int linha) {
    int soma = 0;
    for (int j = 0; j < 5; j++)
        soma += M[linha][j];
    return soma;
}

int somaColuna(int M[5][5], int coluna) {
    int soma = 0;
    for (int i = 0; i < 5; i++)
        soma += M[i][coluna];
    return soma;
}

void somaDiagonais(int M[5][5]) {
    int somaP = 0, somaS = 0;
    for (int i = 0; i < 5; i++) {
        somaP += M[i][i];
        somaS += M[i][4 - i];
    }
    printf("Soma da diagonal principal: %d\n", somaP);
    printf("Soma da diagonal secundária: %d\n", somaS);
}

int somaTotal(int M[5][5]) {
    int soma = 0;
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            soma += M[i][j];
    return soma;
}

int main() {
    int M[5][5];

    preencheMatriz(M);
    printf("Soma da linha 4: %d\n", somaLinha(M, 3));
    printf("Soma da coluna 2: %d\n", somaColuna(M, 1));
    somaDiagonais(M);
    printf("Soma de todos os elementos: %d\n", somaTotal(M));

    return 0;
}

