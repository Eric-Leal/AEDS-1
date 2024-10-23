#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char str[100];

    printf("Digite uma cadeia de caracteres: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0;  i< strlen(str); i++) {
        str[i] = toupper(str[i]);
    }

    printf("Cadeia em maiusculo: %s", str);

    return 0;
}

