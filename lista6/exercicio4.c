#include <stdio.h>
#include <stdlib.h>

float serie(float n){
    if(n==1){
        return 2;
    }
    else{
        return ((1+n*n)/n) + serie(n-1);
    }

}

int main(){
    int n;

    printf("Qual valor de n?");
    scanf("%d", &n);
    printf("S= %f", serie(n));

    return 0;
}

