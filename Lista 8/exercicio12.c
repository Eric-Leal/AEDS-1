#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    float **M = malloc(n * sizeof(float *));
    for (int i = 0; i < n; i++) {
        M[i] = malloc(n * sizeof(float));
    }

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            M[i][j] = (float)(rand() % 100) / 10;
            printf("%.1f ", M[i][j]);
        }
        printf("\n");
    }

    return 0;
}
