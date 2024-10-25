#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char frase[200];
    char frase_limpa[200];
    int j = 0;

    printf("Digite uma sequencia de caracteres: ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    for (int i = 0; frase[i] != '\0'; i++) {

        if ((frase[i] >= 'A' && frase[i] <= 'Z') ||(frase[i] >= 'a' && frase[i] <= 'z')){

            if (frase[i] >= 'A' && frase[i] <= 'Z') {
                frase_limpa[j++] = frase[i] + 32;
            } else {
                frase_limpa[j++] = frase[i];
            }
        }
    }
    frase_limpa[j] = '\0';

    printf("Frase original: %s\n", frase);

    int len = strlen(frase_limpa);
    for (int i = 0; i < len / 2; i++) {
        if (frase_limpa[i] != frase_limpa[len - 1 - i]) {
            printf("A frase nao e um palindromo.\n");
            return 0;
        }
    }

    printf("A frase e um palindromo.\n");
    return 0;
}
