#include <stdio.h>
#include <stdlib.h>

int main()
{
    float sal;
    char esc;
    printf("Escreva o salario:");
    scanf("%f", &sal);
    getchar();
    printf("Escolha a opcao de aumento \n1 - A \n2 - B \n3 - C\n");
    scanf("%c", &esc);

    switch(esc){
        case 'a':
        sal = sal + sal*0.08;
        printf("Novo salario: %f", sal);
    break;

        case 'b':
        sal = sal + sal*0.11;
        printf("Novo salario: %f", sal);
    break;

        case 'c':
        if(sal<=1000){
            sal = sal + 350.0;
            printf("Novo salario: %f", sal);

        }else if (sal>1000){
            sal = sal +200;
            printf("Novo salario: %f", sal);
        }
    break;
    }

    return 0;
}



