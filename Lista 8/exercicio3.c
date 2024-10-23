#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int key;
    char str[100];

    printf("Escreva a string criptografada: ");
    gets(str);

    printf("Digite a chave:");
    scanf("%d", &key);

    for(int i = 0; i<strlen(str); i++){
        str[i] = (str[i] - key) % 255;
    }

    printf("Palavra inicial: %s\n", str);

    return 0;

}




