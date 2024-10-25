#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char nome[200];
    char iniciais[200] = "";
    int i = 0, j = 0;

    char *conectores[] = {"e", "do", "da", "dos", "das", "de", "di", "du"};

    printf("Digite o nome: ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';

    for (i = 0; nome[i] != '\0'; i++) {

        if (i == 0 || nome[i - 1] == ' ') {

            char palavra[200] = "";
            int pos = 0;


            while (nome[i] != ' ' && nome[i] != '\0') {
                palavra[pos++] = nome[i++];
            }
            palavra[pos] = '\0';

            int k;
            for (k = 0; k < sizeof(conectores) / sizeof(conectores[0]); k++) {
                if (strcmp(palavra, conectores[k]) == 0) {
                    break;
                }
            }

            if (k == sizeof(conectores) / sizeof(conectores[0])) {
                iniciais[j++] = toupper(palavra[0]);
            }
            i--;
        }
    }
    iniciais[j] = '\0';

    printf("Iniciais: %s\n", iniciais);
    return 0;
}
