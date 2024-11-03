#include <stdio.h>
#include <stdlib.h>

int serie(int n,int p){

    if(p==0){
        return 1;
    }
    else{
        return n * serie(n, p-1);
    }

}

int main(){
    int n=0, p=0;

    printf("Qual valor de n?");
    scanf("%d", &n);
    printf("Qual valor da potencia?");
    scanf("%d", &p);
    printf("S= %d", serie(n,p));

    return 0;
}

