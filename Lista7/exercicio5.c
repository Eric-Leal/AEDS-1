#include <stdio.h>

void preencheValores(int vetor[], int length) {
    for (int i = 0; i < length; i++) {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
}

void copiaNegativos(int vetor[], int length, int vetorNeg[]) {
    int j = 0;

    for (int i = 0; i < length; i++) {
        if (vetor[i] < 0) {
            vetorNeg[j] = vetor[i];
            j++;
        }
    }

    for (; j < 10; j++) {
        vetorNeg[j] = 0;
    }
}


int main() {
    int X[10];
    int negativos[10];

    preencheValores(X, 10);

    copiaNegativos(X, 10, negativos);

    printf("Vetor com numeros negativos:\n");
    for (int i = 0; i < 10; i++) {
        if (negativos[i] != 0) {
            printf("%d ", negativos[i]);
        }
    }

    return 0;
}
