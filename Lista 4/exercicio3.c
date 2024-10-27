#include <stdio.h>
#include <stdlib.h>

int main(){

    int p, part = 0;

    do{
    printf("Informe o numero de pessoas:");
    scanf("%d", &p);

        if(p<=1000){
            printf("Publico baixo\n");
        }else if(p>1000 && p<= 10000){
            printf("Publico medio\n");
        }else if(p>10000){
            printf("Publico bom\n");
        }
    part++;
    }while(part<=10);

    return 0;

}
