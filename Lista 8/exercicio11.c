#include <stdio.h>
#include <stdlib.h>

int main() {
    int tamanho, k;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int *A = malloc(tamanho * sizeof(int));

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &A[i]);
    }

    do {
        printf("Digite um valor k (1 a %d): ", tamanho);
        scanf("%d", &k);
    } while (k < 1 || k > tamanho);

    // Ordena o vetor
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    printf("O %d-esimo menor elemento é: %d\n", k, A[k - 1]);

    free(A);
    return 0;
}
