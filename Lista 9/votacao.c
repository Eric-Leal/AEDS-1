#include <stdio.h>

int main() {
    float votos_candidatos[4] = {0, 0, 0, 0};
    float votos_nulos = 0, votos_brancos = 0;
    float total_votos = 0;
    int voto;

    do {
        scanf("%d", &voto);

        if (voto == 0) {
            break;
        }

        if (voto == 1) {
            votos_candidatos[0]++;
        } else if (voto == 2) {
            votos_candidatos[1]++;
        } else if (voto == 3) {
            votos_candidatos[2]++;
        } else if (voto == 4) {
            votos_candidatos[3]++;
        } else if (voto == 5) {
            votos_nulos++;
        } else if (voto == 6) {
            votos_brancos++;
        } else {
            printf("Voto invalido\n");
            continue;
        }

        total_votos++;
    } while (voto != 0);

    for (int i = 0; i < 4; i++) {
        printf("Candidato %d: %.0f voto(s)\n", i + 1, votos_candidatos[i]);
    }

    printf("Votos nulos: %.0f\n", votos_nulos);

    if (total_votos > 0) {
        float porcentagem_brancos = (votos_brancos / total_votos) * 100;
        printf("Porcentagem de votos em branco: %.2f%%\n", porcentagem_brancos);
    } else {
        printf("Porcentagem de votos em branco: 0.00%%\n");
    }

    return 0;
}
