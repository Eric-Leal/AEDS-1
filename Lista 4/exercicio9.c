#include <stdio.h>
#include <stdlib.h>

int main(){

    float num,pot,potden, den = 15, s=0;

    pot = pow(2,14);


    for(num = 1; num <= pot ; num+=num){

    printf("\nS = %.0f ", num);

    potden = pow(den,2);
    printf("%.0f", potden);
    den--;

    s += num/potden;

    }
    printf("\n S = %.2f", s);


    return 0;

}




