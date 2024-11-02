#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void produtorio(int n){

    int prod = 1;

    for (int i = 1; i <= n; i++) {
    prod *= i;

    }
    printf("Produtorio de 1 ate n :%d", prod);

}

void tabuada() {
    printf("Tabuada de 3, 5, 7:\n");
    for (int i = 1; i <= 10; i++) {
        printf("3 x %d = %d\n", i, 3 * i);
        printf("5 x %d = %d\n", i, 5 * i);
        printf("7 x %d = %d\n", i, 7 * i);
    }
}

void serie(){

    int a = 1, b = 1, soma = a + b;

    for (int i = 3; i <= 8; i++) {
        int c = a + b;
        printf("\n%d", c);
        soma += c;
        a = b;
        b = c;
    }

    printf("\nValor final da serie: %d\n", soma);

}
void primo(){
    int count = 0;
    int num = 1001;
    int primo;
    while (count < 5) {
    primo = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            primo = 0;
        break;
        }
    }
    if (primo) {
        count++;
    }
    if (count < 5) {
        num++;
        }
    }
    printf("O quinto numero primo a partir de 1000 e: %d\n", num);
}

int main(){

    int esc;
    int n;

    printf("Escolha a opcao: \n1 Produtorio de 1 ate N \n2 Tabuada de 3, 5 e 7 \n3 Valor final da serie: S=1+1+2+3+5+8+13+21 \n4 Quinto numero primo a partir de 1000\n");
    scanf("%d", &esc);

    switch(esc){
        case 1:
        printf("Digite o valor de n:");
        scanf("%d", &n);
        produtorio(n);
        break;

        case 2:
        tabuada();
        break;

        case 3:
        serie();
        break;

        case 4:
        primo();
        break;
    }



    return 0;

}


