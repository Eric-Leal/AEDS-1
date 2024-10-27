#include <stdio.h>
#include <stdlib.h>

int main(){

    float soma=0;
    float n,j;

    printf("Vezes que o programa ira rodar:");
    scanf("%f", &n);
    j=1;

    for(int i=1; i<=n; i++, j+=2){
        if(i % 2==0){
            soma -= 4/j;
        }else{
            soma += 4/j;
        }

    }
 printf("%.4f", soma);

    return 0;

}





