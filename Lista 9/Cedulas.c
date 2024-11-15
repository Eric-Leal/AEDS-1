#include <stdio.h>

int main() {
    int n;

    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int quant;

    scanf("%d", &n);  

    printf("%d\n", n);

    for (int i = 0; i < 7; i++) {
        quant = n / notas[i]; 
        n = n % notas[i];          

        printf("%d nota(s) de R$ %d,00\n", quant, notas[i]);
    }

    return 0;
}
