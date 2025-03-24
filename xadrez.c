#include <stdio.h>

int main() {
    int casas = 0;
    int movimentoL = 1;

    // 1. Torre se move 5 casas para a direita

    while (casas < 5) {
        printf("\nTORRE para a DIREITA"); // Direção do movimento da torre

        casas++;
    }

    printf("\n_____________________________________________\n");

    // 2. Bispo se move 5 casas na diagonal para cima e à direita

    casas = 0;

    do {
        printf("\nBISPO para CIMA DIREITA"); // Direção do movimento do bispo

        casas++;
    } while (casas < 5);

    printf("\n_____________________________________________\n");

    // 3. Rainha se move 8 casas para a esquerda

    casas = 0;

    for (casas = 0; casas < 8; casas++) {
        printf("\nRAINHA para a ESQUERDA"); // Direção do movimento da rainha
    }

    printf("\n_____________________________________________\n");

    // 4. Cavalo se move 2 casas para baixo e 1 casa para a esquerda (movimento em L)

    casas = 0;

    while (movimentoL--) {

        // Direção do movimento em L do cavalo para baixo (Duas casas para baixo)
        for (casas = 0; casas < 2; casas++) {
            printf("\nCAVALO para BAIXO");
        }

        // Direção do movimento em L do cavalo para a esquerda (Uma casa para a esquerda)
        printf("\nCAVALO para a ESQUERDA");
    }

    printf("\n_____________________________________________\n");

    return 0;
}