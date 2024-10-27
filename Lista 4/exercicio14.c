#include <stdio.h>
#include <stdlib.h>

int main(){

    float x,y;

    do{
    printf("Escreva as coordenadas desejadas:");
    scanf("%f %f", &x,&y);

    if(x>0 && y >0){
        printf("\nPrimeiro quadrante");

    }
    else if(x<0 && y >0){
        printf("\nSegundo quadrante");

    }
    else if(x<0 && y <0){
        printf("\nTerceiro quadrante");

    }
    else if(x>0 && y <0){
        printf("\nQuarto quadrante");

    }

    }while(x != 0 && y !=0);
    return 0;

}







