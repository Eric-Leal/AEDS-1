#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char str[100];
    int key ;

    printf("Escreva uma palavra: ");
    gets(str);

    printf("Digite uma chave:");
    scanf("%d", &key);

    for(int i = 0; i<strlen(str); i++){
        str[i] = (str[i] + key) % 255;
    }

    printf("String criptografada: %s\n", str);



    return 0;

}




