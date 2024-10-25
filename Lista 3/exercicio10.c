#include <stdio.h>
#include <stdlib.h>

int main() {
    char c;


    printf("Digite um simbolo: ");
    scanf("%c", &c);

    switch (c) {
        case '<':
            printf("Sinal de menor");
            break;
        case '>':
            printf("Sinal de maior");
            break;
        case '=':
            printf("Sinal de igual");
            break;
        default:
            printf("Outro sinal");
            break;
    }

    return 0;
}
