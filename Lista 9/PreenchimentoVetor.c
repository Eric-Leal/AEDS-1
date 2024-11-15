#include <stdio.h>

int main() {
    
    int N[10];
    int val;
    scanf("%d", &val);
    
    for(int i = 0; i<10; i++){
        N[i] = val;
        printf("N[%d] = %d\n", i, val);
        val = val*2;
    }

    return 0;
}