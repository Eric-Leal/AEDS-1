#include <stdio.h>
#include <stdlib.h>

int main(){

    float num,pot, den, s=0;


    for(num = 1; num <= 10 ; num++){

    printf("\nS = %.0f ", num);

    den = pow(num,2);
    printf("%.0f", den);

    s += num/den;

    }
    printf("\n S = %.2f", s);


    return 0;

}





