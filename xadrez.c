#include <stdio.h>

int main() {
    int casas = 0;

    // 1. Torre se move 5 casas para a direita

    while (casas < 5) {
        printf("\nTORRE para a DIREITA"); // Direção do movimento da torre

        casas++;
    }

    // 2. Bispo se move 5 casas na diagonal para cima e à direita

    casas = 0;

    do {
        printf("\nBISPO para CIMA DIREITA"); // Direção do movimento do bispo

        casas++;
    } while (casas < 5);

    // 3. Rainha se move 8 casas para a esquerda

    casas = 0;

    for (casas = 0; casas < 8; casas++) {
        printf("\nRAINHA para a ESQUERDA"); // Direção do movimento da rainha
    }

    return 0;
}