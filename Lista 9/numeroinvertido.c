#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int invertido(int n, int inverte){
    if( n == 0){
        return inverte;

    }else{
        inverte = inverte *10 + (n%10);
        invertido(n/10, inverte);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", invertido(n,0));
    return 0;
}
