#include <stdio.h>
#include <stdlib.h>

 int main()
{
    float nota1, nota2, nota3, nota4, soma, media;

    printf("Digite as 4 notas do aluno\n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);

    soma = nota1 + nota2 + nota3 + nota4;
    media = soma/4;

    printf("A soma das notas do aluno: %.2f\n", soma);
    printf("A media do aluno e de %.2f\n", media);

    return 0;
}

