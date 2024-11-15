#include <stdio.h>

float fatorial(int n){
    if(n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fatorial(n - 1));
    }
}

float funcSoma(int n){
    if(n == 0)
    {
        return 1.0;
    }
    else
    {
        return (1.0 / fatorial(n)) + funcSoma(n - 1);
    }
}

int main(){
    int n = 0;
    float soma = 0;

    scanf("%d", &n);
    soma = funcSoma(n);
    printf("%.2f\n", soma);
    return 0;
}