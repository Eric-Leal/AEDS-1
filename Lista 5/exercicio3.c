#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void arit(int n1, int n2, int n3){
    int media=0;


    media = (n1+n2+n3)/3;
    printf("A media aritmetica e de:%d", media);

}
void pond(int n1, int n2, int n3){
    float media=0;
    float peso1, peso2,peso3;

    peso1 = n1*5;
    peso2 = n2*3;
    peso3 = n3*2;

    media = (peso1+peso2+peso3)/(5+3+2);
    printf("A media ponderada e de:%f", media);

}
int main(){

    int n1,n2,n3;
    char esc;

    printf("Digite 3 numeros:");
    scanf("%d %d %d", &n1,&n2,&n3);
    getchar();
    printf("Escolha a opcao: A-Media aritmetica P-Media ponderada");
    scanf("%c", &esc);

    switch(esc){
        case'a':
            arit(n1,n2,n3);

        break;

        case'p':
            pond(n1,n2,n3);
        break;
    }


    return 0;

}



