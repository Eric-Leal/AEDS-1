#include <stdio.h>

int main() {
    float matriz[5][4];
    float soma_notas = 0;
    int i, indice_maior = 0;


    for (i = 0; i < 5; i++) {
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%f", &matriz[i][0]);

        printf("Digite a média das provas do aluno %d: ", i + 1);
        scanf("%f", &matriz[i][1]);

        printf("Digite a média dos trabalhos do aluno %d: ", i + 1);
        scanf("%f", &matriz[i][2]);


        matriz[i][3] = matriz[i][1] + matriz[i][2];
        soma_notas += matriz[i][3];
    }


    for (i = 1; i < 5; i++) {
        if (matriz[i][3] > matriz[indice_maior][3]) {
            indice_maior = i;
        }
    }

    float media_final = soma_notas / 5;

    printf("Matricula do aluno com a maior nota final: %.0f\n", matriz[indice_maior][0]);
    printf("Media aritmetica das notas finais: %.2f\n", media_final);

    return 0;
}
