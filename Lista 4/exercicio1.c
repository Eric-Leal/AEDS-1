#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m , s;

    for(m=1; m<=10; m++){
        for(n=1;n<=10;n++){
        s = n*m;
        printf("\n%d * %d = %d", n,m,s);
        }
    }



    return 0;
}

