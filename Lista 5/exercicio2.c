#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int a, int b) {
    int c;
    while (b != 0) {
        c = b;
        b = a % b;
        a = c;
    }
    return a;
}
int mmc(int a, int b) {
    return (a * b) / mdc(a, b);
}
int mdctres(int a, int b, int c) {
    return mdc(mdc(a, b), c);
}

int main(){
    int esc;
    int n1, n2, n3;

    do {
        printf("Escolha uma opcao: \n1-calcular o MMC\n2-calcular o MDC\n3-Sair");
        scanf("%d", &esc);

        switch (esc) {
            case 1:
                printf("Digite 2 numeros: ");
                scanf("%d %d", &n1, &n2);
                printf("O MMC de %d e %d eh: %d\n", n1, n2, mmc(n1, n2));

                break;
            case 2:
                printf("Digite 3 numeros inteiros: ");
                scanf("%d %d %d", &n1, &n2, &n3);
                printf("O MDC de %d, %d e %d eh: %d\n", n1, n2, n3, mdctres(n1, n2, n3));
                break;
            case 3:

                break;
            default:
                printf("Opção invalida\n");
        }
    } while (esc != 3);

    return 0;
}


