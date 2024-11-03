#include <stdio.h>
#include <stdlib.h>

int frec(int n){
    if(n==0){
        return 0;
    }
    else{
        return n%10 + frec(n/10);
    }

}

int main(){
    int n;

    printf("Qual valor de n?");
    scanf("%d", &n);
    printf("S= %d", frec(n));

    return 0;
}

