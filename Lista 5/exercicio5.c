#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float conta(float n){

    float s=0, num, den;

    for(float n1 = 1; n1<=n; n1++){

    num = pow(n1,2)+1;
    den = (n1+3);
    s += num/den;
    }
    return s;
}


int main(){

    float n;
    printf("escreva um numero");
    scanf("%f",&n);

    printf("s = %f", conta(n));

    return 0;

}




