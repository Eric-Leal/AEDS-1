#include <stdio.h>
#include <stdlib.h>

float serie(float n, int impar){
    if(n<=0){
        return 0;
    }
    else{
        return 1+serie(n-impar, impar + 2) ;
    }

}

int main(){
    float n;

    printf("Qual valor de n?");
    scanf("%f", &n);
    printf("S= %f", serie(n, 1));

    return 0;
}


