#include <stdio.h>
#include <stdlib.h>

float serie(float n){
    if(n==2){
        return 0.5;
    }
    else{
        return (n-1)/n + serie(n-2);
    }

}

int main(){
    int n;

    do{
    printf("Qual valor de n?");
    scanf("%d", &n);

    }while(n%2 !=0);
    printf("S= %f", serie(n));

    return 0;
}
