
#include <stdio.h>

    void calcCircunferencia (float R, float *compr, float *area){
        float PI = 3.14159265;
        *compr = 2 * PI * R;
        *area = PI * R * R;

    }

    int main() {

    float raio, comprimento, area;

    printf("Digite ao raio da circunferencia: ");
    scanf("%f", &raio);

    calcCircunferencia(raio, &comprimento, &area);
    printf("Comprimento da circunferencia: %.2f\n", comprimento);
    printf("Area da circunferencia: %.2f\n", area);

    return 0;
}

