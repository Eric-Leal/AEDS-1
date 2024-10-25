#include <stdio.h>

int main() {

    int valInteiro;
    float valReal;
    char caractere;

    int *p_inteiro = &valInteiro;
    float *p_real = &valReal;
    char *p_char = &caractere;

    printf("Digite um valor inteiro:");
    scanf("%d", &valInteiro);

    printf("Digite um valor real:");
    scanf("%f", &valReal);
    getchar();
    printf("Digite um caractere:");
    scanf("%c", &caractere);

    printf("Valor inteiro: %d, Endereço: %p, Ponteiro: %p\n", valInteiro, &valInteiro, p_inteiro);
    printf("Valor real: %.2f, Endereço: %p, Ponteiro: %p\n", valReal, &valReal, p_real);
    printf("Caracter: %c, Endereço: %p, Ponteiro: %p\n", caractere, &caractere, p_char);


    printf("\nDigite um novo valor inteiro: ");
    scanf("%d", p_inteiro);
    printf("Digite um novo valor real: ");
    scanf("%f", p_real);
    printf("Digite um novo caracter: ");
    scanf(" %c", p_char);

    printf("Valor inteiro: %d, Endereço: %p, Ponteiro: %p\n", valInteiro, &valInteiro, p_inteiro);
    printf("Valor real: %.2f, Endereço: %p, Ponteiro: %p\n", valReal, &valReal, p_real);
    printf("Caracter: %c, Endereço: %p, Ponteiro: %p\n", caractere, &caractere, p_char);



    return 0;
}

