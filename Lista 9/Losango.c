#include <stdio.h>

int main() {
    int i, j, linhas;

    scanf("%d", &linhas);

    
    for (i = 1; i <= linhas; i++) {
        
        for (j = 1; j <= linhas - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

      
        printf("\n");  
    }

    for (i = linhas - 1; i >= 1; i--) {

        for (j = 1; j <= linhas - i; j++) {
            printf(" ");
        }

        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }

        printf("\n"); 
 
    }

    return 0;
}